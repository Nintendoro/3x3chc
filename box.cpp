#include <iostream>
using namespace std;

int main() {
    int rows{};
    int cols{};

    
    cin >> cols >> rows;

    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "*";
        }
        cout << endl;  
    }

    return 0;
}
