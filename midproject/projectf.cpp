#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

// ============================================================
//  CONCEPTS USED:
//  1. POINTERS       - Function parameters passed as pointers
//                      instead of arrays; pointer arithmetic
//                      used to traverse arrays
//  2. 2D ARRAYS      - Item data stored in a single 2D array
//                      (rows = items, cols = id/price/stock/category)
//                      instead of four separate 1D arrays
//  3. FILE HANDLING  - Inventory & bill history saved to/loaded
//                      from .txt files using fstream
// ============================================================

// Global constants
const int Total_Items  = 20;
const int History_Size = 20;

// Column indices for the 2D inventory array
const int COL_ID       = 0;
const int COL_PRICE    = 1;
const int COL_STOCK    = 2;
const int COL_CATEGORY = 3;
const int TOTAL_COLS   = 4;

// ─── FILE HANDLING HELPERS ───────────────────────────────────

// Save inventory to file
void saveInventory(int inventory[][TOTAL_COLS], string *names)
{
    ofstream fout("inventory.txt");
    if (!fout)
    {
        cout << "[Error] Could not open inventory.txt for writing!\n";
        return;
    }
    for (int i = 0; i < Total_Items; i++)
    {
        // Each line: ID|Price|Stock|Category|Name
        fout << inventory[i][COL_ID]       << "|"
             << inventory[i][COL_PRICE]    << "|"
             << inventory[i][COL_STOCK]    << "|"
             << inventory[i][COL_CATEGORY] << "|"
             << *(names + i) << "\n";       // pointer arithmetic
    }
    fout.close();
    cout << "[Saved] Inventory written to inventory.txt\n";
}

// Load inventory from file
void loadInventory(int inventory[][TOTAL_COLS], string *names)
{
    ifstream fin("inventory.txt");
    if (!fin)
    {
        // File doesn't exist yet — use default data
        return;
    }
    string line;
    int i = 0;
    while (getline(fin, line) && i < Total_Items)
    {
        stringstream ss(line);
        string token;
        getline(ss, token, '|'); inventory[i][COL_ID]       = stoi(token);
        getline(ss, token, '|'); inventory[i][COL_PRICE]    = stoi(token);
        getline(ss, token, '|'); inventory[i][COL_STOCK]    = stoi(token);
        getline(ss, token, '|'); inventory[i][COL_CATEGORY] = stoi(token);
        getline(ss, token, '|'); *(names + i) = token;      // pointer arithmetic
        i++;
    }
    fin.close();
}

// Save bill history to file
void saveBillHistory(int *billNums, int *billTotals, int *billItems, int *totalBills)
{
    ofstream fout("bills.txt");
    if (!fout)
    {
        cout << "[Error] Could not open bills.txt for writing!\n";
        return;
    }
    fout << *totalBills << "\n";                            // pointer dereference
    for (int i = 0; i < *totalBills; i++)
    {
        // BillNum|FinalTotal|ItemCount
        fout << *(billNums   + i) << "|"
             << *(billTotals + i) << "|"
             << *(billItems  + i) << "\n";
    }
    fout.close();
}

// Load bill history from file
void loadBillHistory(int *billNums, int *billTotals, int *billItems, int *totalBills)
{
    ifstream fin("bills.txt");
    if (!fin) return;

    fin >> *totalBills;                                     // pointer dereference
    fin.ignore();

    string line;
    int i = 0;
    while (getline(fin, line) && i < *totalBills)
    {
        stringstream ss(line);
        string token;
        getline(ss, token, '|'); *(billNums   + i) = stoi(token);
        getline(ss, token, '|'); *(billTotals + i) = stoi(token);
        getline(ss, token, '|'); *(billItems  + i) = stoi(token);
        i++;
    }
    fin.close();
}

// ─── FUNCTION PROTOTYPES ─────────────────────────────────────

void updateItem      (int inventory[][TOTAL_COLS], string *names);
void displayFullMenu (int inventory[][TOTAL_COLS], string *names);
void searchItems     (int inventory[][TOTAL_COLS], string *names);
void viewBillHistory (int *billNums, int *billTotals, int *billItems, int *totalBills);
void checkValidation (int inventory[][TOTAL_COLS]);
void generateReport  (int *billTotals, int *totalBills, int inventory[][TOTAL_COLS]);
void customerPortal  (int inventory[][TOTAL_COLS], string *names,
                      int *billNums, int *billTotals, int *billItems, int *totalBills,
                      float discountThreshold, float discountRate);

// ─── MAIN ────────────────────────────────────────────────────

int main()
{
    // ── 2D ARRAY: rows = items, cols = [ID, Price, Stock, Category]
    int inventory[Total_Items][TOTAL_COLS] = {
        {101, 40,  50, 1},
        {102, 30, 100, 2},
        {103, 80,  30, 1},
        {104,150,  20, 3},
        {105, 60,  40, 1},
        {0,   0,   0,  0}   // remaining rows are zero-initialised
    };

    // ── POINTER to name array
    string nameStorage[Total_Items] = {"Chaye", "Samosa", "Coffee", "Burger", "Juice"};
    string *names = nameStorage;                            // pointer to first element

    // ── Bill history
    int billNums  [History_Size] = {0};
    int billTotals[History_Size] = {0};
    int billItems [History_Size] = {0};
    int totalBills = 0;

    // ── POINTERS to bill history arrays
    int *pBillNums   = billNums;
    int *pBillTotals = billTotals;
    int *pBillItems  = billItems;
    int *pTotalBills = &totalBills;

    // Load persisted data
    loadInventory   (inventory, names);
    loadBillHistory (pBillNums, pBillTotals, pBillItems, pTotalBills);

    float discountThreshold = 1000.0f;
    float discountRate      = 0.10f;

    while (true)
    {
        system("cls");
        cout << "====================================================\n";
        cout << "     CAMPUS CANTEEN BILLING & STOCK SYSTEM          \n";
        cout << "====================================================\n\n";
        cout << "1. Manager Login (Admin)\n";
        cout << "2. Customer Portal (Order/Bill)\n";
        cout << "3. Exit\n";
        cout << "----------------------------------------------------\n";
        cout << "Choose Option: ";
        string mainOption;
        cin >> mainOption;

        if (mainOption == "1")
        {
            cout << "\nManager Username: ";
            string uname;
            cin >> uname;
            cout << "Manager Password: ";
            string pass;
            cin >> pass;

            if (uname == "admin" && pass == "123")
            {
                while (true)
                {
                    system("cls");
                    cout << "--- MANAGER CONTROL PANEL ---\n";
                    cout << "1) Add / Update Item Record\n";
                    cout << "2) Display Full Menu & Stock\n";
                    cout << "3) Search / Listings\n";
                    cout << "4) View Bill History Summary\n";
                    cout << "5) Validation & Conflict Detection\n";
                    cout << "6) Generate Summary Reports\n";
                    cout << "7) Save Inventory to File\n";
                    cout << "0) Logout\n";
                    cout << "Choice: ";
                    string mOpt;
                    cin >> mOpt;

                    if      (mOpt == "1") updateItem     (inventory, names);
                    else if (mOpt == "2") displayFullMenu(inventory, names);
                    else if (mOpt == "3") searchItems    (inventory, names);
                    else if (mOpt == "4") viewBillHistory(pBillNums, pBillTotals, pBillItems, pTotalBills);
                    else if (mOpt == "5") checkValidation(inventory);
                    else if (mOpt == "6") generateReport (pBillTotals, pTotalBills, inventory);
                    else if (mOpt == "7")
                    {
                        saveInventory(inventory, names);
                        cout << "\nPress any key to continue...";
                        getch();
                    }
                    else if (mOpt == "0") break;
                }
            }
            else
            {
                cout << "Wrong Manager Password!\nPress any key...";
                getch();
            }
        }
        else if (mainOption == "2")
        {
            customerPortal(inventory, names,
                           pBillNums, pBillTotals, pBillItems, pTotalBills,
                           discountThreshold, discountRate);
        }
        else if (mainOption == "3")
        {
            // Auto-save on exit
            saveInventory   (inventory, names);
            saveBillHistory (pBillNums, pBillTotals, pBillItems, pTotalBills);
            cout << "\nExiting System... Goodbye!\n";
            break;
        }
    }
    return 0;
}

// ─── FUNCTION DEFINITIONS ────────────────────────────────────

// POINTER: inventory[][TOTAL_COLS] passed as pointer to 2D array rows
//          names passed as pointer (string*)
void updateItem(int inventory[][TOTAL_COLS], string *names)
{
    system("cls");
    cout << "Index\tID\tName\n------------------------------\n";

    // POINTER ARITHMETIC: use (names + k) instead of names[k]
    for (int k = 0; k < Total_Items; k++)
    {
        cout << "[" << k << "]\t";
        if (inventory[k][COL_ID] == 0)
            cout << "EMPTY\n";
        else
            cout << inventory[k][COL_ID] << "\t" << *(names + k) << "\n";
    }

    int idx;
    cout << "\nChoose Index to Update (0-19): ";
    cin >> idx;

    if (idx >= 0 && idx < Total_Items)
    {
        // 2D ARRAY: direct cell access via [row][col]
        cout << "Enter Item ID: ";       cin >> inventory[idx][COL_ID];
        cout << "Enter Name: ";          cin.ignore();
                                         getline(cin, *(names + idx));
        cout << "Enter Price: ";         cin >> inventory[idx][COL_PRICE];
        cout << "Enter Stock: ";         cin >> inventory[idx][COL_STOCK];
        cout << "Enter Category (1=Drink, 2=Snack, 3=Meal): ";
                                         cin >> inventory[idx][COL_CATEGORY];
        cout << "\n[Success] Record updated!";
    }
    else
    {
        cout << "[Error] Invalid Index!";
    }
    cout << "\n\nPress any key to continue...";
    getch();
}

void displayFullMenu(int inventory[][TOTAL_COLS], string *names)
{
    system("cls");
    cout << "ID\tCategory\tPrice\tStock\tItem Name\n";
    cout << "----------------------------------------------------\n";

    // POINTER ARITHMETIC: (names + i) traverses name array
    for (int i = 0; i < Total_Items; i++)
    {
        if (inventory[i][COL_ID] != 0)
        {
            cout << inventory[i][COL_ID] << "\t";
            switch (inventory[i][COL_CATEGORY])
            {
                case 1:  cout << "Drink\t\t";  break;
                case 2:  cout << "Snack\t\t";  break;
                case 3:  cout << "Meal\t\t";   break;
                default: cout << "Other\t\t";  break;
            }
            cout << inventory[i][COL_PRICE] << "\t"
                 << inventory[i][COL_STOCK] << "\t"
                 << *(names + i) << "\n";
        }
    }
    cout << "\n\nPress any key to continue...";
    getch();
}

void searchItems(int inventory[][TOTAL_COLS], string *names)
{
    system("cls");
    cout << "1. Search by Item ID\n2. List Out of Stock Items\nChoice: ";
    string sOpt;
    cin >> sOpt;

    if (sOpt == "1")
    {
        int sid;
        cout << "Enter ID: ";
        cin >> sid;
        bool found = false;
        for (int i = 0; i < Total_Items; i++)
        {
            if (inventory[i][COL_ID] == sid)
            {
                cout << "Found: " << *(names + i)
                     << " | Price: " << inventory[i][COL_PRICE]
                     << " | Stock: " << inventory[i][COL_STOCK] << "\n";
                found = true;
                break;
            }
        }
        if (!found) cout << "Item ID not found.\n";
    }
    else if (sOpt == "2")
    {
        cout << "--- Out of Stock ---\n";
        for (int i = 0; i < Total_Items; i++)
        {
            if (inventory[i][COL_ID] != 0 && inventory[i][COL_STOCK] <= 0)
                cout << "ID: " << inventory[i][COL_ID] << " | " << *(names + i) << "\n";
        }
    }
    cout << "\n\nPress any key to continue...";
    getch();
}

// POINTERS: all arrays passed as int* (pointer to first element)
void viewBillHistory(int *billNums, int *billTotals, int *billItems, int *totalBills)
{
    system("cls");
    cout << "Bill #\tItems Count\tTotal Amount\n------------------------------------\n";

    // POINTER ARITHMETIC: *(billNums + i) instead of billNums[i]
    for (int i = 0; i < *totalBills; i++)
    {
        cout << *(billNums   + i) << "\t"
             << *(billItems  + i) << "\t\t"
             << *(billTotals + i) << " PKR\n";
    }
    cout << "\n\nPress any key to continue...";
    getch();
}

void checkValidation(int inventory[][TOTAL_COLS])
{
    system("cls");
    cout << "--- Validation Report ---\n";
    int conflicts = 0;

    for (int i = 0; i < Total_Items; i++)
    {
        // POINTER: use pointer to row for negative stock check
        int *rowPtr = inventory[i];                        // pointer to row i
        if (rowPtr[COL_ID] != 0)
        {
            if (rowPtr[COL_STOCK] < 0)
            {
                cout << "[!] Negative Stock: ID " << rowPtr[COL_ID] << "\n";
                conflicts++;
            }
            // Duplicate ID check
            for (int j = i + 1; j < Total_Items; j++)
            {
                if (rowPtr[COL_ID] == inventory[j][COL_ID])
                {
                    cout << "[!] Duplicate ID Found: " << rowPtr[COL_ID] << "\n";
                    conflicts++;
                }
            }
        }
    }
    if (conflicts == 0) cout << "System Check: No data conflicts found.\n";
    cout << "\n\nPress any key to continue...";
    getch();
}

void generateReport(int *billTotals, int *totalBills, int inventory[][TOTAL_COLS])
{
    system("cls");
    int rev = 0, inv = 0;

    // POINTER ARITHMETIC through bill totals
    for (int i = 0; i < *totalBills; i++)
        rev += *(billTotals + i);

    // 2D ARRAY: access price * stock per row
    for (int i = 0; i < Total_Items; i++)
        inv += inventory[i][COL_PRICE] * inventory[i][COL_STOCK];

    cout << "--- Sales Summary ---\n";
    cout << "Total Revenue         : " << rev  << " PKR\n";
    cout << "Total Bills Generated : " << *totalBills << "\n";
    cout << "Current Inventory Val.: " << inv  << " PKR\n";
    cout << "\n\nPress any key to continue...";
    getch();
}

void customerPortal(int inventory[][TOTAL_COLS], string *names,
                    int *billNums, int *billTotals, int *billItems, int *totalBills,
                    float discountThreshold, float discountRate)
{
    system("cls");
    int subtotal = 0, currentItems = 0;

    while (true)
    {
        system("cls");
        cout << "--- AVAILABLE MENU ---\n";
        cout << "ID\tName\t\tPrice\tStock\n------------------------------------\n";

        for (int i = 0; i < Total_Items; i++)
        {
            if (inventory[i][COL_ID] != 0 && inventory[i][COL_STOCK] > 0)
            {
                cout << inventory[i][COL_ID] << "\t"
                     << *(names + i);                       // pointer arithmetic
                cout << ((*(names + i)).length() < 8 ? "\t\t" : "\t");
                cout << inventory[i][COL_PRICE] << "\t"
                     << inventory[i][COL_STOCK] << "\n";
            }
        }

        int sellId, qty;
        cout << "\nEnter Item ID to buy (0 to Finalize Bill): ";
        cin >> sellId;
        if (sellId == 0) break;

        // Find item using pointer to row
        int fIdx = -1;
        for (int i = 0; i < Total_Items; i++)
        {
            int *rowPtr = inventory[i];                     // pointer to row
            if (rowPtr[COL_ID] == sellId) { fIdx = i; break; }
        }

        if (fIdx != -1)
        {
            int *rowPtr = inventory[fIdx];                  // pointer to found row
            cout << "Buying " << *(names + fIdx) << ". Enter Quantity: ";
            cin >> qty;
            if (qty > 0 && qty <= rowPtr[COL_STOCK])
            {
                subtotal     += rowPtr[COL_PRICE] * qty;
                rowPtr[COL_STOCK] -= qty;                   // update via pointer
                currentItems++;
                cout << "Added! Current Total: " << subtotal << " PKR. Press key...";
                getch();
            }
            else
            {
                cout << "Error: Invalid quantity or low stock! Press key...";
                getch();
            }
        }
        else
        {
            cout << "Error: Invalid Item ID! Press key...";
            getch();
        }
    }

    if (subtotal > 0)
    {
        int discount = (subtotal > (int)discountThreshold)
                       ? (int)(subtotal * discountRate) : 0;
        int finalAmount = subtotal - discount;

        cout << "\n--- FINAL CUSTOMER BILL ---\n";
        cout << "Subtotal     : " << subtotal    << " PKR\n";
        cout << "Discount     : " << discount    << " PKR\n";
        cout << "Final Payable: " << finalAmount << " PKR\n";

        if (*totalBills < History_Size)
        {
            // POINTER ARITHMETIC to store into bill history arrays
            *(billNums   + *totalBills) = 5000 + *totalBills;
            *(billTotals + *totalBills) = finalAmount;
            *(billItems  + *totalBills) = currentItems;
            (*totalBills)++;                                // dereference & increment
        }

        // FILE HANDLING: auto-save bills after every purchase
        saveBillHistory(billNums, billTotals, billItems, totalBills);

        cout << "\nPress any key to continue...";
        getch();
    }
}