#include <iostream>
using namespace std;

// التكليف 07

// int num = 100;
int num = 50;

int read()
{
    int num = 100;
    // int num = 50;
    cout << num;
    return 0;
}

int play()
{
    int num = 200;
    read();
    return 0;
}

int main()
{
    // التكليف 01
    // Write Your Code Here
    int age = 40;
    int period = 10;

    // Do Not Edit The Next 2 Lines
    cout << "My Age Is: " << age << "\n";
    cout << period << " Years Ago My Age Was: " << age - period << "\n";

    // Add The Third Line Below
    cout << "After " << period << " Years My Age Will Be: " << age + period << "\n";

    // Output

    // "My Age Is: 40"
    // "10 Years Ago My Age Was: 30"
    // "After 10 Years My Age Will Be: 50"

    cout << "===============\n";

    // التكليف 02
    // Write Your One Line Code Here
    int a, b, c;
    // Do Not Edit Below
    a = 10, b = 20, c = 70;
    cout << "Sum Of All Number Is: " << a + b + c;

    // Output

    // "Sum Of All Number Is: 100"

    // التكليف 03
    /*
    name        [ Valid | Good Practice ]
    NAME        [ Valid | Bad Practice ]
    1name       [ Not Valid | starts with a number ]
    __name      [ Valid ]
    name@name   [ NOt Valid | Has Special Character ]
    name10name  [ Valid | Bad Practice ]
    name!name   [ Not Valid | Has Special Character ]
    first_NAME  [ Valid | Bad Practice ]
    first_name  [ Valid | Good Practice ]
    firstName   [ Valid | Good Practice ]
    first name  [ Not Valid | Has White Space ]
    fn          [ Valid ]
    public      [ Not Valid | Reserved Keyword ]
    Public      [ Valid ]
  */

    cout << "\n===============\n";

    // التكليف 04

    // Write my_text Variable Content Here
    string my_text = "============\n== Elzero ==\n============";

    // Do Not Edit Below
    cout << my_text;

    // Needed Output

    // ============
    // == Elzero ==
    // ============

    cout << "\n===============\n";

    // التكليف 05

    // Do Not Edit Below
    int x, y, z = 100;

    // Add Your Code Here
    x = y = z;

    // Do Not Edit Below
    cout << x + y + z; // 300

    cout << "\n===============\n";

    // التكليف 06

    // Do Not Edit Below
    int d = 210, e = -50, f = -40;

    // Write Your cout Code Here
    cout << d - e - f;

    cout << "\n===============\n";

    // التكليف 07

    play();

    cout << "\n===============\n";

    // التكليف 08

    // Edit Here To Fix The Error
    int current_year;
    int birth_year;

    // Do Not Edit Here
    current_year = 2022;
    birth_year = 1982;
    int age_in_years = current_year - birth_year;
    cout << age_in_years;

    cout << "\n===============\n";

    // التكليف 09

    // Write Your Code Here
    int Num;
    cin >> Num;
    cout << Num * Num;

    // Num 10
    // Needed Output 100 [10 * 10]

    cout << "\n===============\n";

    // التكليف 10

    // Write Your Code Here
    int num1, num2;
    cin >> num1 >> num2;
    cout << num1 * num2;

    // Number One => 10
    // Number Two => 100
    // Needed Output 1000 [10 * 100]

    cout << "\n===============\n";

    // التكليف 11

    cout << "Bello\rHello Elzeroo\b";
    cout << " Web Schoolll\b\b";
    cout << " I Love Programming";
    cout << " Too Much";
    cout << " Specially C++\n";

    // Needed Output
    // "Hello Elzero Web School I Love Programming Too Much Specially C++"
    return 0;
}
