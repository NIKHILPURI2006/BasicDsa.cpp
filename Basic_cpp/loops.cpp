#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number you want to print table: ";
    cin >> n;

    for (int i = 1; i <= 10; i++) {
        // Multiply n by i to get the table value
        cout << n << " * " << i << " = " << n * i << endl;
    }
    
    return 0;
}
