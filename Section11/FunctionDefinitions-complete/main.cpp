// Section 11
// Function Definitions
// Area of Circle and Volume of a Cylinder
#include <iostream>
#include <cmath>


using namespace std;

const double pi {3.14159};

double calc_area_circle(double radius) {
    return pi * radius * radius;
}

double calc_volume_cylinder(double radius, double height) {
//    return pi * radius * radius * height;
    return calc_area_circle(radius) * height;
}

double calc_volume_sphere(double radius){
    return 4.0 / 3.0 * pi * pow(radius,3) ;
}

void area_circle() {
    double radius{};
    cout << "\nEnter the radius of the circle: ";
    cin >> radius;
    cout << "The area of a circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
    cout << "The volume of a sphere with radius " << radius << " is " << calc_volume_sphere(radius) << endl; 

}

void volume_cylinder() {
    double radius {};
    double height {};
    cout << "\nEnter the radius of the cylinder: ";
    cin >> radius;
    cout << "\nEnter the height of the cylinder: ";
    cin >> height;
    
    cout << "The volume of a cylinder with radius " << radius << " and height " << height << " is " << calc_volume_cylinder(radius, height) << endl;
}

int main() {
    
    area_circle();
    area_circle();
    volume_cylinder();
    
    
    return 0;
}

