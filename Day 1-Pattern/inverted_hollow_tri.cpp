#include <iostream>
using namespace std;

int main() {
    int n = 5;

  
    for (int i = n; i >= 1; i--) {
        
       
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }

        
        for (int k = 1; k <= (2 * i - 1); k++) {
            
            if (i == n || k == 1 || k == (2 * i - 1)) {
                cout << "*";
            } else {
                cout << " "; // Hollow inner area
            }
        }

        cout << endl;
    }

    return 0;
}
