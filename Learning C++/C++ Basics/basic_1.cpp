#include<iostream>
using namespace std;

int main()
{
    // cout object, << operator
    // print text
    cout << "Hello World!" << endl;

    //print numbers
    cout << 3+3 << endl;

    // new line
    cout << "new line" << '\n';

    //\t \\ \"
    cout << "hello\t";
    cout << "ME" << endl;
    cout << "Hello \\";
    cout << "C++" << endl;
    cout << "Hello \"Jony\"" << endl;
    /*
    multiline
    comment
    */

    // Data Types
    int myNum = 5;
    float myFloat = 6.8; // 4 byte
    double myDouble = 5.99; // 8 byte
    char myLetter = 'D';
    bool myBoolean = true;

    string greeting = "Hello"; // This is not a built-in type, but it behaves like one in its most basic usage
    cout << greeting;

    //Constant
    const int const_val = 10;
    return 0;

    // The auto Keyword
    auto at = 34.34; // The auto keyword automatically detects the type of a variable based on the value you assign to it.
    /*
    auto x = 5; // x is now an int
    x = 10;     // OK - still an int
    x = 9.99;   // Error - can't assign a double to an int
    */


}
