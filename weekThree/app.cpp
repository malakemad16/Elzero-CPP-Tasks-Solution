#include <iostream>
#include <limits.h>
using namespace std;

int main()
{

    // التكليف 01

    // Example
    // false // bool => Boolean

    // 'a' // char => character
    // '9' // char => character
    // 9 // int => inteager
    // true // bool => Boolean
    // 100 // int => inteager
    // -10 // int => inteager
    // 0 // int => inteager
    // false // bool => Boolean
    // 10.9 // float => floating point number

    // التكليف 02

    double salary = 5000.98;
    cout << sizeof(salary) << " Bytes\n";
    cout << sizeof(salary) * sizeof(salary) << " Bytes\n";
    // 8 Bytes
    // 64 Bits

    cout << "===============\n";
    // التكليف 03

    cout << "Maximum Integer Number Is => " << INT_MAX << "\n";
    cout << "Minimum Integer Number Is => " << INT_MIN << "\n";
    cout << "Maximum Short Integer Number Is => " << SHRT_MAX << "\n";
    cout << "Minimum Short Integer Number Is => " << SHRT_MIN << "\n";

    // Output Needed
    // "Maximum Integer Number Is => 2147483647"
    // "Minimum Integer Number Is => -2147483648"
    // "Maximum Short Integer Number Is => 32767"
    // "Minimum Short Integer Number Is => -32768"

    cout << "===============\n";

    // التكليف 04

    // Edit Line To Make 8 Become 4
    cout << sizeof((float)(10.5 + 5 + 20.5 + 10)) << "\n"; // 8

    cout << "===============\n";

    // التكليف 05

    char a = '~';
    char b = '&';
    char c = '%';
    char d = 'A';

    cout << "ASCII Value of " << a << " Is " << (int)a << "\n";
    cout << "ASCII Value of " << b << " Is " << (int)b << "\n";
    cout << "ASCII Value of " << c << " Is " << (int)c << "\n";
    cout << "ASCII Value of " << d << " Is " << (int)d << "\n";

    // Output Needed
    // "ASCII Value of ~ Is 126"
    // "ASCII Value of & Is 38"
    // "ASCII Value of % Is 37"
    // "ASCII Value of A Is 65"

    cout << "===============\n";

    // التكليف 06
    int a2 = 69;
    int b2 = 108;
    int c2 = 122;
    int d2 = 101;
    int e = 114;
    int f = 111;

    cout << "Character Of This ASCII Value " << a2 << " Is " << (char)a2 << "\n";
    cout << "Character Of This ASCII Value " << b2 << " Is " << (char)b2 << "\n";
    cout << "Character Of This ASCII Value " << c2 << " Is " << (char)c2 << "\n";
    cout << "Character Of This ASCII Value " << d2 << " Is " << (char)d2 << "\n";
    cout << "Character Of This ASCII Value " << e << " Is " << (char)e << "\n";
    cout << "Character Of This ASCII Value " << f << " Is " << (char)f << "\n";

    cout << (char)a2 << (char)b2 << (char)c2 << (char)d2 << (char)e << (char)f << "\n";

    // Output Needed
    // "Character Of This ASCII Value 69 Is E"
    // "Character Of This ASCII Value 108 Is l"
    // "Character Of This ASCII Value 122 Is z"
    // "Character Of This ASCII Value 101 Is e"
    // "Character Of This ASCII Value 114 Is r"
    // "Character Of This ASCII Value 111 Is o"

    // Output Needed In Last Line
    // "Elzero"

    cout << "===============\n";

    // التكليف 07

    int a3 = 1;
    int b3 = 13;
    int c3 = 17;
    int d3 = 70;

    cout << (char)(d3 - a3) << (char)(c3 + d3) << (char)(b3 + d3);

    // Output Needed
    // "EWS"

    cout << "\n===============\n";

    // التكليف 08

    // Edit Anything Except Values
    short int a4 = 100;
    long long int b4 = 15001500;
    long double c4 = 100.54565746;

    // Do Not Edit
    cout << sizeof(a4) << " Bytes\n"; // 2 Bytes
    cout << sizeof(b4) << " Bytes\n"; // 8 Bytes
    cout << sizeof(c4) << " Bytes\n"; // 16 Bytes

    cout << "===============\n";

    // التكليف 09

    // Edit Anything Except Values
    unsigned int a5 = 100;
    signed int b5 = -100;
    short c5 = 100;
    float d5 = 500.55;

    // Do Not Edit
    cout << a5 << "\n"; // 100
    cout << b5 << "\n"; // -100
    cout << c5 << "\n"; // 100
    cout << d5 << "\n"; // 500.55

    cout << "===============\n";

    // التكليف 10

    // Add Type Alias Here

    // #define lli long long int // first method
    // using lli = long long int; // second method
    typedef long long int lli; // third method

    // Do Not Edit
    lli num = 150050005; // This Is Long Long Int
    cout << num << "\n"; // 150050005

    cout << "===============\n";

    // التكليف 11

    // Do Not Edit Here
    short int a6 = 100;
    float b6 = 98.5f;
    double c6 = 1.7;

    // Edit This Line And Use Type Casting To Get The Output
    cout << (int)(a6 + b6 + c6) << "\n"; // 200

    cout << "===============\n";

    // التكليف 12

    // Do Not Edit Here
    short a7 = 1000;
    int b7 = 10000;
    long double c7 = 5.560000505012;

    // Change ??? To Something Else To Get The Output
    cout << sizeof(c7) - sizeof(b7) << "\n";    // 12
    cout << sizeof(c7) + sizeof(b7) << "\n";    // 20
    cout << sizeof(c7) * sizeof(a7) << "\n";    // 32
    cout << a7 * (int)c7 << "\n";               // 5000
    cout << char(sizeof(c7) * (int)c7) << "\n"; // P
}
