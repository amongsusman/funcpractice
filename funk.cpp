/*
Name: Tyler Zhang
Program Name: Functions Lab
Date: 11/21/24
Extra: None
*/
#include <iostream>
using namespace std;
// intializes the countdown, customGreet, getFavoriteNumber, and calculateAverage functions
void countdown();
void customGreet(string name, int times);
int getFavoriteNumber();
float calculateAverage(int a, int b, int c);

int main() {
    // Exercise 1:
    countdown();
    // Exercise 2:
    string nameInput;
    int cnt;
    cout << "Enter your name, followed by a space, followed by a number." << endl;
    cin >> nameInput >> cnt;
    // calls the customGreet function with parameters of the name and the number the user enters
    customGreet(nameInput, cnt);
    // Exercise 3:
    int favNum = getFavoriteNumber();
    cout << "Your favorite number is: " << favNum << endl;
    // Exercise 4:
    int a, b, c;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;
    cout << "The average is: " << calculateAverage(a, b, c) << endl;
    return 0;
}

void countdown() {
    // loops from 10 to 1 (inclusive of 1)
    for (int i = 10; i > 0; i--) {
        cout << i << endl;
    }
    cout << "Lift off!" << endl;
}
void customGreet(string name, int times) {
    // iterates based on the number of times used as the argument in the function
    for (int i = 0; i < times; i++) {
        cout << "Hello, " << name << "!" << endl;
    }
}
int getFavoriteNumber() {
    return 7;
}
float calculateAverage(int a, int b, int c) {
    // calculates the average of the three numbers
    float average = (float) (a + b + c) / 3;
    return average;
}