#include <iostream>
#include <cstdlib>
using namespace std;

// Callback functions for different operations
double add(double a, double b)
{
    cout<< a <<" + " <<b <<" = ";
    return a + b;
}

double multiply(double a, double b)
{
    cout<< a <<" * " <<b <<" = ";
    return a * b;
}

double subtract(double a, double b)
{
    cout<< a <<" - " <<b <<" = ";
    return a - b;
}
double division(double a, double b){
    if (b == 0) {
        cout << "Error: División por cero no permitida." << endl;
        return 0; // Retorna un valor por defecto
    }
    cout<< a <<" / " <<b <<" = ";
    return a/b;
}

// Function that performs an operation using a callback
void performOperation(double (*callback)(double, double), double x, double y)
{
    cout << callback(x, y) << endl;
}

int main(int argc, char* argv[]){
    if (argc != 4) {
        cout << "Uso: " << argv[0] << " <num1> <operador> <num2>" << endl;
        return 1;
    }
    double num1 = atoi(argv[1]);
    char operador = argv[2][0];
    double num2 = atoi(argv[3]);

    // Passing different functions as callbacks
    if (operador == '+') {
        cout << "Addition: \n";
        performOperation(add, num1, num2);
    } else if (operador == '*' || operador == 'x') {
        cout << "Multiplication: \n";
        performOperation(multiply, num1, num2);
    } else if (operador == '-') {
        cout << "Subtraction: \n";
        performOperation(subtract, num1, num2);
    } else if(operador == '/') {
        cout<<"Division: \n";
        performOperation(division, num1, num2);
    } else {
        cout << "Operador no soportado. Use +, *, x ,/ o -." << endl;
        return 1;
    }

    return 0;
}