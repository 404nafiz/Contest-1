#include <iostream>
using namespace std;

int main()
{
    float a;
    cin >> a;
    
    if (0 <= a && a <= 25.0)
        cout << "Interval [0,25]";
    else if (25.0 < a && a <= 50.0)
        cout << "Interval (25,50]";
    else if (50.0 < a && a <= 75.0)
        cout << "Interval (50,75]";
    else if (75.0 < a && a <= 100.0)
        cout << "Interval (75,100]";
    else
        cout << "Out of Intervals";
        
    
}
