#include <iostream>
using namespace std;

// Function to calculate the third angle of a triangle
int ThirdAngle(int angle1, int angle2) {
    return 180 - (angle1 + angle2);
}

int main() {
    int angle1, angle2;

    // Input the two angles
    cout << "Enter the first angle of the triangle: ";
    cin >> angle1;
    cout << "Enter the second angle of the triangle: ";
    cin >> angle2;

    // Calculate and output the third angle
    int thirdAngle = ThirdAngle(angle1, angle2);
    cout << "The third angle of the triangle is: " << thirdAngle << " degrees" << endl;

    return 0;
}