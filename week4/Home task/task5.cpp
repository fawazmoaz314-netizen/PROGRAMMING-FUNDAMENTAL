#include <iostream>
using namespace std;
int main() {
    int norm = 30000;
    int total_days = 365;
    int work_day_play = 63;
    int holiday_play = 127;

    int holidays;
    
    cout << "Enter number of holidays: ";
    cin >> holidays;
    int working_days = total_days - holidays;
    int total_play_minutes = (working_days * work_day_play) + (holidays * holiday_play);

    if (total_play_minutes <= norm) {
        int diff = norm - total_play_minutes;
        int hours = diff / 60;
        int minutes = diff % 60;

        cout << "Tom sleeps well" << endl;
        cout << hours << " hours and " << minutes << " minutes less for play" << endl;
    } 
    else if (total_play_minutes > norm) {
        int diff = total_play_minutes - norm;
        int hours = diff / 60;
        int minutes = diff % 60;

        cout << "Tom will run away" << endl;
        cout << hours << " hours and " << minutes << " minutes for play" << endl;
    }

    return 0;
}