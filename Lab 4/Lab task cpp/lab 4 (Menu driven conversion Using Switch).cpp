#include <iostream>
using namespace std;

int main()
{
    int choice;
    double value, result;

    cout << "===== Unit Conversion Menu =====" << endl;
    cout << "1 -> Convert Kilometers to Meters" << endl;
    cout << "2 -> Convert Meters to Centimeters" << endl;
    cout << "3 -> Convert Kilograms to Grams" << endl;
    cout << "4 -> Convert Celsius to Fahrenheit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Enter value in Kilometers: ";
            cin >> value;
            result = value * 1000;
            cout << "Meters = " << result;
            break;

        case 2:
            cout << "Enter value in Meters: ";
            cin >> value;
            result = value * 100;
            cout << "Centimeters = " << result;
            break;

        case 3:
            cout << "Enter value in Kilograms: ";
            cin >> value;
            result = value * 1000;
            cout << "Grams = " << result;
            break;

        case 4:
            cout << "Enter value in Celsius: ";
            cin >> value;
            result = (value * 9/5) + 32;
            cout << "Fahrenheit = " << result;
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}
