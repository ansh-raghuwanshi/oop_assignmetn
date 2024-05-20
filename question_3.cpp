//Question - Write a program using reference variable as argument to swap the value of pair of integers.


#include <iostream>
using namespace std;
// Function to swap values using reference variables
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 72;
    int y = 70;

    cout << "Before swap: x = " << x << ", y = " << y << std::endl;

    // Call the swap function
    swap(x, y);

    cout << "After swap: x = " << x << ", y = " << y << std::endl;

    return 0;
}