 /*#include <iostream>
/*int main() {
    /*int n, m, i;
    std::cout << "Enter three numbers: ";
    std::cin >> n;
    std::cin >> m;
    std::cin >> i;*/
    /*if (n >= 1) {
        std::cout << " it is positive number";
    }
    elseif (n == 0){
    std::cout << n << " is zero";
    }
    else {
        std::cout << " it is negative number";
    }*/
    /*if (n % 2 == 0) {
        std::cout << n << " is even";
    }
    else {
        std::cout << n << " is odd";
    }*/
    /*if (n > m) {
        std::cout << n << " is the largest number " << std::endl;
    }
    else if (m > n) {
        std::cout << m << " is the largest number " << std::endl;
    }*/
    /*if (n > m > i){
        std::cout << n << " is the largest number " << std::endl;
    }
    else if (m > i > n) {
        std::cout << m << " is the largest number " << std::endl;
    }
    else {
        std::cout << i << " is the largest number " << std::endl;
    }*/
    /*int year;

    // Ask the user for the year.
    std::cout << "Enter a year: ";
    std::cin >> year;

    // Check if the year is a leap year directly in the main function.
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        std::cout << year << " is a leap year." << std::endl;
    } else {
        std::cout << year << " is not a leap year." << std::endl;
    }*/
    /*int speed;
    std::cout << "Enter the speed of the vehicle: ";
    std::cin >> speed;

    // Check if the speed is too slow, too fast, or just right.
    if (speed < 20) {
        std::cout << "Too slow." << std::endl;
    } else if (speed > 80) {
        std:: cout << "Too fast." << std::endl;
    } else {
        std::cout << "Just right." << std::endl;*/
    /*int n;
    std::cin >> n;
    std::cout << "Enter the mark: " << std::endl;
    if (n>=50) {
        std::cout << "Passed!" << std::endl;
    }
    else {
        std::cout << "Failed!" << std::endl;
    }*/
    /*int n;
    std::cout<< "Enter a number: ";
    std::cin>> n ;
    if (n < 0) {
        std::cout<<" This is negative" << std:: endl;
    }
    else if (n == 0) {
        std::cout<<"This is zero" << std::endl;
    }
    else {
        std::cout<<"This is a positive number" << std::endl;
    }*/
    /*char light;
    std::cout<< "Enter a letter(g,y,r): ";
    std::cin>>light;
    if (light == 'y') {
        std::cout<<"Get ready!" << std::endl;
    }
    else if (light == 'g') {
        std::cout<<"Go!" << std::endl;
    }
    else {
        std::cout<<"Stop!" << std::endl;
    }*/
    /*int n;
    std::cout<< "Enter a grade: ";
    std::cin>>n;
    if (n >= 90 && n <=100) {
        std::cout<<"Grade A";
    }
    else if (n>= 80 && n<=89) {
        std::cout<<"Grade B";
    }
    else if (n>=70 && n<=79) {
        std::cout<<"Grade C";
    }
    else if (n>=60 && n<=69) {
        std::cout<<"Grade D";
    }
    else if (n<60)
    {
        std::cout<<"You are a failure" << std::endl;
    }*/
    /*int a, b;
    std:: cout<< "Enter two numbers: ";
    std::cin>> a >> b;
    if (a % b == 0) {
        std::cout << a << " is divisible by "<< b <<std::endl;
    }
    else {
        std::cout << a << " is not divisible by "<< b <<std::endl;
    }*/
    /*int a,b,c,d;
    std::cout << "Enter angles of triangle: " << std::endl;
    std::cin >> a >> b>>c;
    d == a+b+c;
    if(d<=180) {
        std::cout << "The triangle is valid" << std::endl;
    }
    else {
        std::cout << "The triangle is invalid" << std::endl;
    }*/
        /*return 0;
        }*/
/*#include <iostream>
using namespace std;
void checkCharacter(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        cout << "Lowercase alphabet" << endl;
    }
    else if (ch >= 'A' && ch <= 'Z') {
        cout << "Uppercase alphabet" << endl;
    }
    else {
        cout << "It is not an alphabet" << endl;
    }
}

int main() {
    char character;

    cout << "Enter a character: ";
    cin >> character;
    checkCharacter(character);

    return 0;
}*/
/*#include <iostream>
using namespace std;

int main() {
    double weight1, price1, weight2, price2;


    cout << "Enter weight and price for package 1: ";
    cin >> weight1 >> price1;


    cout << "Enter weight and price for package 2: ";
    cin >> weight2 >> price2;


    double pricePerUnit1 = price1 / weight1;
    double pricePerUnit2 = price2 / weight2;


    if (pricePerUnit1 < pricePerUnit2) {
        cout << "Package 1 has a better price" << endl;
    }
    else if (pricePerUnit1 > pricePerUnit2) {
        cout << "Package 2 has a better price" << endl;
    }
    else {
        cout << "Two packages have the same price." << endl;
    }

    return 0;
}*/
/*#include <iostream>
using namespace std;

int main() {
    int number, originalNumber, reversedNumber = 0, remainder;


    cout << "Enter a three-digit integer: ";
    cin >> number;

    originalNumber = number;


    while (number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    if (originalNumber == reversedNumber) {
        cout << originalNumber << " is a palindrome" << endl;
    } else {
        cout << originalNumber << " is not a palindrome" << endl;
    }

    return 0;
}*/
/*#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y, distance;


    cout << "Enter the coordinates of the point (x, y): ";
    cin >> x >> y;


    distance = sqrt(x * x + y * y);


    if (distance <= 10) {
        cout << "The point (" << x << ", " << y << ") is inside the circle." << endl;
    } else {
        cout << "The point (" << x << ", " << y << ") is outside the circle." << endl;
    }

    return 0;
}*/
/*include <iostream>
using namespace std;

int main() {
    float gpa;


    cout << "Enter the student's GPA (0 - 4.5): ";
    cin >> gpa;


    switch (static_cast<int>(gpa * 10)) {
        case 40:
            cout << "Scholarship: 80%" << endl;
        break;
        case 35:
        case 36:
        case 37:
        case 38:
        case 39:
            cout << "Scholarship: 60%" << endl;
        break;
        case 30:
        case 31:
        case 32:
        case 33:
        case 34:
            cout << "Scholarship: 50%" << endl;
        break;
        default:
            if (gpa < 3.0) {
                cout << "No scholarship" << endl;
            }
        break;
    }

    return 0;
}*/






