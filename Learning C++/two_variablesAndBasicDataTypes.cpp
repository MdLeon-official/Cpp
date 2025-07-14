#include <iostream>

int main() {
    //int x; //declaration
    //x = 43; //assignment

    // int
    int age = 19;
    int x = 5;
    int y = 6;
    int sum = x + y;
    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';

    //Double
    double price = 10.99;
    double gpa = 2.5;
    double temp = 25.1;
    std::cout << price << '\n';

    // Single character
    char grade = 'A';
    char currency = '$';
    std::cout << grade << '\n';
    std::cout << currency << '\n';

    //Boolean (true or false)
    bool isStudent = true;
    bool isForSale = false;

    // String (objects that represents a sequence of text)
    std::string name = "Me";
    std::string day = "Friday";
    std::cout << name << '\n';
    std::cout << day << '\n';

    std::cout << "Hello " << name << ". You are " << age << " years old." << '\n';


    return 0;
}
