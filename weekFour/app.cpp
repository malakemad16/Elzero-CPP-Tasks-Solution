#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // التكليف 01

    int num = 3;
    cout << num + num << "\n";                 // 6
    cout << num * num - num << "\n";           // 6
    cout << (num * num) - num << "\n";         // 6
    cout << (num * num / num) + num << "\n";   // 6
    cout << (num + num) - (num % num) << "\n"; // 6
    cout << (num % num) + (num + num) << "\n"; // 6
    cout << (num + num) - (num - num) << "\n"; // 6

    cout << "===============\n";

    // التكليف 02

    cout << (10 * 20 * 15 * 3 + 190 + 10) % 400 << "\n"; // 0

    cout << "===============\n";

    // التكليف 03

    // Do Not Edit
    int num2 = 3;

    /*
      Write Code Here
      Do Not Use num = 6 :)
      */
    num2 += 3;

    // Do Not Edit
    cout << num << "\n"; // 6

    cout << "===============\n";

    // التكليف 04

    cout << ((int)10.5 * 5) + floor(40.5 + 10.1) << "\n"; // 100

    cout << "===============\n";

    // التكليف 05

    // Assign The Values
    char a = '\0';
    char b = 'd';
    char c = '\n';

    // Do Not Edit
    cout << b * c + a << "\n"; // 1000

    cout << "===============\n";

    // التكليف 06

    /*
  We Need To Use This Operators In Solutions
  - &&
  - >=
  - <=
  - >
  - <
  - ==
  - !
  - ||
*/

    int a2 = 10;
    int b2 = 25;
    int c2 = 15;

    cout << (a2 < b2) << "\n";            // True
    cout << (c2 > a2) << "\n";            // True
    cout << (a2 || c2 != b2) << "\n";     // True
    cout << (c2 >= a2) << "\n";           // True
    cout << (c2 <= b2) << "\n";           // True
    cout << (b2 > a2 && b2 > c2) << "\n"; // True
    cout << !(a2 > b2) << "\n";           // True
    cout << (a2 < b2 || b2 > a2) << "\n"; // True

    cout << "===============\n";

    // التكليف 07

    int a3 = 10;
    int b3 = 20;

    cout << ((a3 + b3) * (a3 + b3) + (a3 * a3)) * a3 << "\n"; // 10000

    // Hint For Help
    cout << 10 + 5 * 20 << "\n";   // 5 * 20 = 100 + 10 = 110
    cout << (10 + 5) * 20 << "\n"; // 10 + 5 = 15 * 20 = 300

    cout << "===============\n";

    // التكليف 08

    int num3 = 10;
    cout << --num3 << " | " << num3++ << " | " << ++num3 << "\n"; // 9 | 9 | 11
    cout << num3++ << " | " << num3 << " | " << num3-- << "\n";   // 11 | 12 | 12
    cout << num3-- << " | " << num3-- << " | " << num3-- << "\n"; // 11 | 10 | 9
}
