#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;  

        string numStr = to_string(x);

        int left = 0, right = numStr.size() - 1;
        while (left < right) {
            if (numStr[left] != numStr[right]) {
                return false; 
            }
            left++;
            right--;
        }
        return true; 
    }
};

int main() {
    Solution solucion;
    int x;
    cout << "Ingrese un número para verificar si es palíndromo: ";
    cin >> x;
    if (solucion.isPalindrome(x)) {
        cout << "El número " << x << " es un palíndromo." << endl;
    } else {
        cout << "El número " << x << " no es un palíndromo." << endl;
    }

    return 0;
}