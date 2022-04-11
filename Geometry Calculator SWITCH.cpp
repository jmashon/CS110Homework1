//Geometry Calculator SWITCH
//Juliana Mashon

// This program calculates area
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    // Define variables
    double areaCircle, areaRectangle, areaTriangle;
    double radiusCircle, lengthRectangle, widthRectangle, baseTriangle, heightTriangle;
    const double _PI = 3.14159;
    int answerNum;

    // Output user instructions
    cout << "Geometry Calculator" << endl;
    cout << "1. Calculate the area of a circle" << endl;
    cout << "2. Calculate the area of a rectangle" << endl;
    cout << "3. Calculate the area of a triangle" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your choice (1-4):" << endl;
    
    // Get user input
    cin >> answerNum;

    // Calculate user input
    switch (answerNum) {
        case 1:
            // Inputs and calculations for choice 1--area of a circle
            cout << "Please enter the radius of the cirlce:" << endl;
            cin >> radiusCircle;
            if (radiusCircle >= 0)
            {
                areaCircle = (_PI * radiusCircle);
                cout << setprecision(2) << fixed;
                cout << "The area of the circle is: " << areaCircle;
            }
            else
            {
                cout << "Please restart the program and enter a positive number";
            }
            break;
        case 2:
            // Inputs and calculations for choice 2--area of a rectangle
            cout << "Please enter the length and width of the rectangle:" << endl;
            cin >> lengthRectangle >> widthRectangle;
            if (lengthRectangle >= 0 && widthRectangle >= 0)
            {
                areaRectangle = (lengthRectangle * widthRectangle);
                cout << setprecision(2) << fixed;
                cout << "The area of the rectangle is: " << areaRectangle;
            }
            else
            {
                cout << "Please restart the program and enter a positive number";
            }
            break;
        case 3:
            // Inputs and calculations for choice 3--area of a triangle
            cout << "Please enter the base and height of the triangle:" << endl;
            cin >> baseTriangle >> heightTriangle;
            if (baseTriangle >= 0 && heightTriangle >= 0)
            {
                areaTriangle = (baseTriangle * heightTriangle * .5);
                cout << setprecision(2) << fixed;
                cout << "The area of the triangle is: " << areaTriangle;
            }
            else
            {
                cout << "Please restart the program and enter a positive number";
            }
            break;
        case 4:
            // Inputs and calculations for choice 4--quitting the program
            cout << "Good-bye!" << endl;
            return 0;
            break;
        default:
            // Invalid user input
            cout << "Beep boop beep boop... ERROR! ERROR!" << endl;
            cout << "You've entered an invalid number" << endl;
            cout << "Please restart the program and enter a number between 1-4" << endl;
            break;
    }

    return 0;
}