#include <iostream>
using namespace std;

int main()
{

    // التكليف 01

    int year;
    cin >> year;
    switch (year)
    {
    case 1982:
        cout << "My Birth Day\n";
        break;
    case 1989:
        cout << "My First Work\n";
        break;
    case 1995:
        cout << "Windows 95\n";
        break;
    case 2000:
        cout << "Windows Millennium\n";
        break;
    case 2002:
        cout << "Created My vBulletin Forum\n";
        break;
    default:
        cout << "No Events in This Year\n";
    }
    /*
  1982 => "My Birth Day"
  1989 => "My First Work"
  1995 => "Windows 95"
  2000 => "Windows Millennium"
  2002 => "Created My vBulletin Forum"
  Any Other Year => "No Events in This Year"
*/

    cout << "===============\n";

    // التكليف 02

    int day;
    cin >> day;

    switch (day)
    {
    case 1:
    case 2:
    case 3:
        cout << "1 2 3 Shop Is Open";
        break;
    case 4:
    case 5:
        cout << "4 5 Shop Is Closed";
        break;
    default:
        cout << "Day Is Not Valid";
    }

    cout << "===============\n";

    // التكليف 03
    int num;
    cin >> num;
    switch (num)
    {
    case 10:
        cout << "Case 1";
        break;
    case 20:
        cout << "Case 2";
        break;
    case 30:
    case 31:
        cout << "Case 3";
        break;
    default:
        cout << "Invalid Number";
    }
    return 0;

    // if (num == 10)
    // {
    //     cout << "Case 1";
    // }
    // else if (num > 19 && num < 21)
    // {
    //     cout << "Case 2";
    // }
    // else if (num > 29 && num < 33)
    // {
    //     cout << "Case 3";
    // }
    // else
    // {
    //     cout << "Invalid Number";
    // }
}