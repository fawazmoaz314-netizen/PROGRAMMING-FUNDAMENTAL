#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

// Global constants
const int Total_Items = 20;
const int History_Size = 20;

// Function Prototypes
void updateItem(int Item_IdArray[], string Item_NameArray[], int Item_PriceArray[], int Item_StockArray[], int Item_CategoryArray[]);
void displayFullMenu(int Item_IdArray[], string Item_NameArray[], int Item_PriceArray[], int Item_StockArray[], int Item_CategoryArray[]);
void searchItems(int Item_IdArray[], string Item_NameArray[], int Item_StockArray[]);
void viewBillHistory(int Bill_NumArray[], int Bill_FinalTotalArray[], int Bill_TotalItemsArray[], int total_bills_generated);
void checkValidation(int Item_IdArray[], int Item_StockArray[]);
void generateReport(int Bill_FinalTotalArray[], int total_bills_generated, int Item_PriceArray[], int Item_StockArray[]);
void customerPortal(int Item_IdArray[], string Item_NameArray[], int Item_PriceArray[], int Item_StockArray[], int Item_CategoryArray[], 
                    int Bill_NumArray[], int Bill_FinalTotalArray[], int Bill_TotalItemsArray[], int &total_bills_generated, 
                    float discount_threshold, float discount_rate);

int main()
{
    // Inventory Arrays
    int Item_IdArray[Total_Items] = {101, 102, 103, 104, 105, 0};
    string Item_NameArray[Total_Items] = {"Chaye", "Samosa", "Coffee", "Burger", "Juice", ""};
    int Item_PriceArray[Total_Items] = {40, 30, 80, 150, 60, 0};
    int Item_StockArray[Total_Items] = {50, 100, 30, 20, 40, 0};
    int Item_CategoryArray[Total_Items] = {1, 2, 1, 3, 1, 0}; 

    // Bill History Storage
    int Bill_NumArray[History_Size] = {0};
    int Bill_FinalTotalArray[History_Size] = {0};
    int Bill_TotalItemsArray[History_Size] = {0};
    int total_bills_generated = 0;

    // Billing Constants
    float discount_threshold = 1000.0;
    float discount_rate = 0.10;

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
            // Manager Authentication
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
                    cout << "0) Logout\n";
                    cout << "Choice: ";
                    string mOpt;
                    cin >> mOpt;

                    if (mOpt == "1")
                    {
                        updateItem(Item_IdArray, Item_NameArray, Item_PriceArray, Item_StockArray, Item_CategoryArray);
                    }
                    else if (mOpt == "2")
                    {
                        displayFullMenu(Item_IdArray, Item_NameArray, Item_PriceArray, Item_StockArray, Item_CategoryArray);
                    }
                    else if (mOpt == "3")
                    {
                        searchItems(Item_IdArray, Item_NameArray, Item_StockArray);
                    }
                    else if (mOpt == "4")
                    {
                        viewBillHistory(Bill_NumArray, Bill_FinalTotalArray, Bill_TotalItemsArray, total_bills_generated);
                    }
                    else if (mOpt == "5")
                    {
                        checkValidation(Item_IdArray, Item_StockArray);
                    }
                    else if (mOpt == "6")
                    {
                        generateReport(Bill_FinalTotalArray, total_bills_generated, Item_PriceArray, Item_StockArray);
                    }
                    else if (mOpt == "0")
                    {
                        break;
                    }
                }
            }
            else
            {
                cout << "Wrong Manager Password!";
                cout << "\nPress any key...";
                getch();
            }
        }
        else if (mainOption == "2")
        {
            customerPortal(Item_IdArray, Item_NameArray, Item_PriceArray, Item_StockArray, Item_CategoryArray, 
                           Bill_NumArray, Bill_FinalTotalArray, Bill_TotalItemsArray, total_bills_generated, 
                           discount_threshold, discount_rate);
        }
        else if (mainOption == "3")
        { 
            cout << "\nExiting System... Goodbye!";
            break;
        }
    }
    return 0;
}

// Functions Definition
void updateItem(int Item_IdArray[], string Item_NameArray[], int Item_PriceArray[], int Item_StockArray[], int Item_CategoryArray[])
{
    system("cls");
    cout << "Index\tID\tName\n------------------------------\n";
    for (int k = 0; k < Total_Items; k++)
    {
        cout << "[" << k << "]\t";
        if (Item_IdArray[k] == 0)
        {
            cout << "EMPTY\n";
        }
        else
        {
            cout << Item_IdArray[k] << "\t" << Item_NameArray[k] << endl;
        }
    }
    int idx;
    cout << "\nChoose Index to Update (0-19): ";
    cin >> idx;
    if (idx >= 0 && idx < Total_Items)
    {
        cout << "Enter Item ID: ";
        cin >> Item_IdArray[idx];
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, Item_NameArray[idx]);
        cout << "Enter Price: ";
        cin >> Item_PriceArray[idx];
        cout << "Enter Stock: ";
        cin >> Item_StockArray[idx];
        cout << "Enter Category (1=Drink, 2=Snack, 3=Meal): ";
        cin >> Item_CategoryArray[idx];
        cout << "\n[Success] Record updated!";
    }
    else
    {
        cout << "[Error] Invalid Index!";
    }
    cout << "\n\nPress any key to continue...";
    getch();
}

void displayFullMenu(int Item_IdArray[], string Item_NameArray[], int Item_PriceArray[], int Item_StockArray[], int Item_CategoryArray[])
{
    system("cls");
    cout << "ID\tCategory\tPrice\tStock\tItem Name\n";
    cout << "----------------------------------------------------\n";
    for (int i = 0; i < Total_Items; i++)
    {
        if (Item_IdArray[i] != 0)
        {
            cout << Item_IdArray[i] << "\t";
            if (Item_CategoryArray[i] == 1)
            {
                cout << "Drink\t\t";
            }
            else if (Item_CategoryArray[i] == 2)
            {
                cout << "Snack\t\t";
            }
            else if (Item_CategoryArray[i] == 3)
            {
                cout << "Meal\t\t";
            }
            else
            {
                cout << "Other\t\t";
            }
            cout << Item_PriceArray[i] << "\t" << Item_StockArray[i] << "\t" << Item_NameArray[i] << endl;
        }
    }
    cout << "\n\nPress any key to continue...";
    getch();
}

void searchItems(int Item_IdArray[], string Item_NameArray[], int Item_StockArray[])
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
            if (Item_IdArray[i] == sid)
            {
                cout << "Found: " << Item_NameArray[i] << " | Stock: " << Item_StockArray[i] << endl;
                found = true;
                break;
            }
        }
        if (found == false)
        {
            cout << "Item ID not found.";
        }
    }
    else if (sOpt == "2")
    {
        cout << "--- Out of Stock ---\n";
        for (int i = 0; i < Total_Items; i++)
        {
            if (Item_IdArray[i] != 0 && Item_StockArray[i] <= 0)
            {
                cout << "ID: " << Item_IdArray[i] << " | " << Item_NameArray[i] << endl;
            }
        }
    }
    cout << "\n\nPress any key to continue...";
    getch();
}

void viewBillHistory(int Bill_NumArray[], int Bill_FinalTotalArray[], int Bill_TotalItemsArray[], int total_bills_generated)
{
    system("cls");
    cout << "Bill #\tItems Count\tTotal Amount\n------------------------------------\n";
    for (int i = 0; i < total_bills_generated; i++)
    {
        cout << Bill_NumArray[i] << "\t" << Bill_TotalItemsArray[i] << "\t\t" << Bill_FinalTotalArray[i] << " PKR" << endl;
    }
    cout << "\n\nPress any key to continue...";
    getch();
}

void checkValidation(int Item_IdArray[], int Item_StockArray[])
{
    system("cls");
    cout << "--- Validation Report ---\n";
    int conflicts = 0;
    for (int i = 0; i < Total_Items; i++)
    {
        if (Item_IdArray[i] != 0)
        {
            if (Item_StockArray[i] < 0)
            { 
                cout << "[!] Negative Stock: ID " << Item_IdArray[i] << endl;
                conflicts = conflicts + 1;
            }
            for (int j = i + 1; j < Total_Items; j++)
            { 
                if (Item_IdArray[i] == Item_IdArray[j])
                {
                    cout << "[!] Duplicate ID Found: " << Item_IdArray[i] << endl;
                    conflicts = conflicts + 1;
                }
            }
        }
    }
    if (conflicts == 0)
    {
        cout << "System Check: No data conflicts found.";
    }
    cout << "\n\nPress any key to continue...";
    getch();
}

void generateReport(int Bill_FinalTotalArray[], int total_bills_generated, int Item_PriceArray[], int Item_StockArray[])
{
    system("cls");
    int rev = 0, inv = 0;
    for (int i = 0; i < total_bills_generated; i++)
    {
        rev = rev + Bill_FinalTotalArray[i];
    }
    for (int i = 0; i < Total_Items; i++)
    {
        inv = inv + (Item_PriceArray[i] * Item_StockArray[i]);
    }
    cout << "--- Sales Summary ---\n";
    cout << "Total Revenue: " << rev << " PKR\n";
    cout << "Total Bills Generated: " << total_bills_generated << endl;
    cout << "Current Inventory Value: " << inv << " PKR" << endl;
    cout << "\n\nPress any key to continue...";
    getch();
}

void customerPortal(int Item_IdArray[], string Item_NameArray[], int Item_PriceArray[], int Item_StockArray[], int Item_CategoryArray[], 
                    int Bill_NumArray[], int Bill_FinalTotalArray[], int Bill_TotalItemsArray[], int &total_bills_generated, 
                    float discount_threshold, float discount_rate)
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
            if (Item_IdArray[i] != 0 && Item_StockArray[i] > 0)
            {
                cout << Item_IdArray[i] << "\t" << Item_NameArray[i];
                if (Item_NameArray[i].length() < 8)
                {
                    cout << "\t\t";
                }
                else
                {
                    cout << "\t";
                }
                cout << Item_PriceArray[i] << "\t" << Item_StockArray[i] << endl;
            }
        }
        int sellId, qty;
        cout << "\nEnter Item ID to buy (0 to Finalize Bill): ";
        cin >> sellId;
        if (sellId == 0)
            break;

        int fIdx = -1;
        for (int i = 0; i < Total_Items; i++)
        {
            if (Item_IdArray[i] == sellId)
            {
                fIdx = i;
            }
        }

        if (fIdx != -1)
        {
            cout << "Buying " << Item_NameArray[fIdx] << ". Enter Quantity: ";
            cin >> qty;
            if (qty > 0 && qty <= Item_StockArray[fIdx])
            {
                subtotal = subtotal + (Item_PriceArray[fIdx] * qty); // Calculate line total
                Item_StockArray[fIdx] = Item_StockArray[fIdx] - qty; // Update stock
                currentItems = currentItems + 1;
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

    // Finalize Bill and Calculate Discount
    if (subtotal > 0)
    {
        int discount = 0;
        if (subtotal > (int)discount_threshold)
        {
            discount = subtotal * discount_rate;
        }
        int finalAmount = subtotal - discount;

        cout << "\n--- FINAL CUSTOMER BILL ---\n";
        cout << "Subtotal: " << subtotal << " PKR\n";
        cout << "Discount: " << discount << " PKR\n";
        cout << "Final Payable: " << finalAmount << " PKR\n";

        // Save to Bill History
        if (total_bills_generated < History_Size)
        {
            Bill_NumArray[total_bills_generated] = 5000 + total_bills_generated;
            Bill_FinalTotalArray[total_bills_generated] = finalAmount;
            Bill_TotalItemsArray[total_bills_generated] = currentItems;
            total_bills_generated = total_bills_generated + 1;
        }
        cout << "\nPress any key to continue...";
        getch();
    }
}