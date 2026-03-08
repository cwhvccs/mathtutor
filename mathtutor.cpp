/* Program file name: mathtutor.cpp
Programmer: CWH
Date: March 8 2026
Write a program that displays 2 random numbers to be added and a key press to display the correct solution.

Psuedocode:

Set MIN to 0
Set MAX to 999

Create random number engine

Create integer distribution from MIN to MAX

Generate num1
Generate num2

Display num1
Display "+" and num2

Wait for user to press enter

Caculate num1 + num2

Display sum

End
*/

#include <iostream>
#include <random>
using namespace std;

int main()
{
    const int MIN = 0;
    const int MAX = 999;

    random_device engine;

    uniform_int_distribution<int> randomNum(MIN, MAX);

    int num1 = randomNum(engine);
    int num2 = randomNum(engine);

    cout << "  " << num1 << endl;
    cout << "+ " << num2 << endl;

    cout << "Press Enter to see the answer.";
    cin.get();

    cout << " " << num1 + num2 << endl;
}