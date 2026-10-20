
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string shape;
    float length, width, radius, height;
    float area, perimeter, circumference, surfaceArea, volume;
    const float PI = 3.14159;

    cout << "Enter a shape (rectangle, circle, or cylinder): ";
    cin >> shape;

    if (shape == "rectangle")
    {
        cout << "Enter the length: ";
        cin >> length;

        cout << "Enter the width: ";
        cin >> width;

        area = length * width;
        perimeter = 2 * (length + width);

        cout << "Area: " << area << endl;
        cout << "Perimeter: " << perimeter << endl;
    }
    else if (shape == "circle")
    {
        cout << "Enter the radius: ";
        cin >> radius;

        area = PI * radius * radius;
        circumference = 2 * PI * radius;

        cout << "Area: " << area << endl;
        cout << "Circumference: " << circumference << endl;
    }
    else if (shape == "cylinder")
    {
        cout << "Enter the height: ";
        cin >> height;

        cout << "Enter the radius: ";
        cin >> radius;

        surfaceArea = 2 * PI * radius * (radius + height);
        volume = PI * radius * radius * height;

        cout << "Surface Area: " << surfaceArea << endl;
        cout << "Volume: " << volume << endl;
    }
    else
    {
        cout << "Sorry, this program does not handle "
            << shape << "." << endl;
    }

    return 0;
}
