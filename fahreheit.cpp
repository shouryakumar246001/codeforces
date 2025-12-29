#include <iostream>
using namespace std;

// Function declaration before main()
float conversion(float n);

int main() {
    float n = 40;
    cout << "Converted value: " << conversion(n) << endl;

    return 0;
}

float conversion(float n) {
    return (n - 32.0) * (5.0 / 9.0); // Corrected formula
}