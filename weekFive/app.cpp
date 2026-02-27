#include <iostream>
using namespace std;

int main()
{
    // التكليف 01

    int age = 40;
    int points = 800;
    float rate = 8.5f;

    // Your Condition Here
    if (age > 18 && points > 500 && rate > 5)
        cout << "Yes Age > 18 & Points > 500 & Rate > 5\n";

    // Output Needed If All Conditions Is True
    // "Yes Age > 18 & Points > 500 & Rate > 5"

    cout << "===============\n";

    // التكليف 02

    // Test Case 1
    // int age2 = 18;
    // int points2 = 450;
    // Output
    // "No Age Is Not Ok"
    // "No Points Is Not Ok"

    // Test Case 2
    // int age2 = 20;
    // int points2 = 450;
    // Output
    // "Yes Age Is Ok"
    // "No Points Is Not Ok"

    // Test Case 3
    int age2 = 20;
    int points2 = 650;
    // Output
    // "Yes Age Is Ok"
    // "Yes Points Is Ok"

    if (age2 > 18)
        cout << "Yes Age Is Ok\n";
    else
        cout << "No Age Is Not Ok\n";
    if (points2 > 500)
        cout << "Yes Points Is Ok\n";
    else
        cout << "No Points Is Not Ok\n";

    cout << "===============\n";

    // التكليف 03

    int num;
    cout << "Please Type A Number Between 0 And 150\n";
    cin >> num;

    if (num < 10)
        cout << "00" << num << "\n";
    else if (num > 10 && num < 100)
        cout << "0" << num << "\n";
    else
        cout << num << "\n";

    // If Number Smaller Than 10 "Example 5" Output Will Be => 005
    // If Number Larger Than 10 And Smaller Than 100 "Example 59" Output Will Be => 059
    // If Number Larger Than 100 "Example 115" Output Will Be => 115

    cout << "===============\n";

    // التكليف 04

    int num1 = 50;
    int num2 = 10;
    int num3 = 50;
    int num4 = 111;

    // Do Not Edit Any Condition

    // Condition 1
    if (num1 > num2)
        cout << "Condition 1 Is True\n";
    else
        cout << "Condition 1 Is False\n";

    // Condition 2
    if (num1 > num2 && num1 < num4)
        cout << "Condition 2 Is True\n";
    else
        cout << "Condition 2 Is False\n";

    // Condition 3
    if (num1 > num2 && num1 == num3)
        cout << "Condition 3 Is True\n";
    else
        cout << "Condition 3 Is False\n";

    // Condition 4
    if (num1 + num2 < num4)
        cout << "Condition 4 Is True\n";
    else
        cout << "Condition 4 Is False\n";

    // Condition 5
    if (num1 + num3 < num4)
        cout << "Condition 5 Is True\n";
    else
        cout << "Condition 5 Is False\n";

    // Condition 6
    if (num1 + num2 + num3 < num4)
        cout << "Condition 6 Is True\n";
    else
        cout << "Condition 6 Is False\n";

    // Condition 7
    if (num4 - (num1 + num3) + num2 == 21)
        cout << "Condition 7 Is True\n";
    else
        cout << "Condition 7 Is False\n";

    // // Output Needed
    // "Condition 1 Is True"
    // "Condition 2 Is True"
    // "Condition 3 Is True"
    // "Condition 4 Is True"
    // "Condition 5 Is True"
    // "Condition 6 Is True"
    // "Condition 7 Is True"

    cout << "===============\n";

    // التكليف 05

    int by = 82; // by => Birth Year
    int s = 500; // s => Salary
    if (by > 80)
    {
        if (s < 600)
            cout << "Ok\n";
        else
            cout << "High\n";
    }
    else
    {
        cout << "Not Ok\n";
    }

    (by > 80) ? (s < 600 ? cout << "Ok\n" : cout << "High\n") : cout << "Not Ok\n";

    cout << "===============\n";

    // التكليف 06

    int age3 = 40;
    int points3 = 100;

    if ((age > 18) && (points > 50) && (sizeof(age) == 4))
    {
        cout << "Age Is Ok\n";
        cout << "Points Is Ok\n";
        cout << "Age Data Is 4 Bytes\n";
    }

    // Output Needed
    // "Age Data Is 4 Bytes"
    // "Age Is Ok"
    // "Points Is Ok"

    cout << "===============\n";

    // التكليف 07

    int result = 0;
    int num5, num6, num7, num8;
    cout << "Please Type 4 Numbers In A Row\n";
    cout << "Only Even Numbers Smaller Than 20 Will Be Counted\n";
    cin >> num5 >> num6 >> num7 >> num8;

    if (num5 < 20 && num5 % 2 == 0)
        result += num5;
    if (num6 < 20 && num6 % 2 == 0)
        result += num6;
    if (num7 < 20 && num7 % 2 == 0)
        result += num7;
    if (num8 < 20 && num8 % 2 == 0)
        result += num8;

    cout << result << "\n";
    /*
      Test Case 1
      Numbers => 15, 16, 22, 8
      Result => 24

      "Explain"
      Starting Result Is 0
      [Number 1] 15 => Not Even Number
      [Number 2] 16 => Smaller Than 20 And Even Number
      0 + 16 = 16
      [Number 3] 22 => Not Smaller Than 20
      [Number 4] 8  => Smaller Than 20 And Even Number
      16 + 8 = 24

      =================================

      Test Case 2
      Numbers => 100, 11, 12, 18
      Result => 30

      "Explain"
      Starting Result Is 0
      [Number 1] 100 => Not Smaller Than 20
      [Number 2] 11  => Not Even Number
      [Number 3] 12  => Smaller Than 20 And Even Number
      0 + 12 = 12
      [Number 4] 18  => Smaller Than 20 And Even Number
      12 + 18 = 30
    */
}