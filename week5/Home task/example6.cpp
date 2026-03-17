#include <iostream>
using namespace std;
main()
{
    int sum = 0;
    
    for(int num = 1; num <= 100; num = num + 1)
    {
        sum = sum + num;
    }
    cout << "Sum: " << sum;
}