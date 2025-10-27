#include <iostream>
#include <cmath>

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    double x1, y1, x2, y2;
    
    std::cout << "Enter x1 coordinate: ";
    std::cin >> x1;
    std::cout << "Enter y1 coordinate: ";
    std::cin >> y1;
    std::cout << "Enter x2 coordinate: ";
    std::cin >> x2;
    std::cout << "Enter y2 coordinate: ";
    std::cin >> y2;

    double dist = distance(x1, y1, x2, y2);
    std::cout << "The distance between the points (" << x1 << ", " << y1 << ") and ("
              << x2 << ", " << y2 << ") is: " << dist << std::endl;

    return 0;
}
