#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    /*int age;
    string name;
    std::cout << "Please enter your name ";
    std::cin >> name;
    std::cout << "Please enter your age ";
    std::cin >> age;
    std::cout << "Your name is " << name << " . And your age is " << age << std::endl;*/
    /*std::cout << "1" << std::setw(5)<< "2" << std::setw(5) << "3" << std::setw(5) << "4" << std::setw(5) << "5" << endl;*/
    /*int n1;
    int n2;
    int n3;
    std::cout << "Please enter the number ";
    cin >> n1;
    std::cout << "Please enter your number ";
    cin >> n2;
    n3 = n1;
    n1 = n2;
    n2 = n3;
    std::cout << "swapped number one " << n1 << " swapped number two " << n2 << std::endl;*/
    /*int n;
    std::cout << "Please enter the number ";
    cin >> n;
    cout  << setw(10) << "Number" << setw(10) << "Square" << endl;
    for (int i = 1; i <= n; ++i) {
        cout << setw(10) << i << setw(10) << i * i << endl;
    }*/
    string word;
    cout << "Please enter a word: ";
    getline(cin, word);
    int padding = ( 50-word.length())/2;
    cout  <<"|" << setw(padding) << word << setw(padding) << "|"<< endl;
    cout << word.length();
    return 0;
}
