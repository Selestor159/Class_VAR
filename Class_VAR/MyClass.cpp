#include "MyClass.h"
#include <iostream>
using namespace std;

MyClass::MyClass(int a, int b) {
    var1 = a;
    var2 = b;
}

void MyClass::display() {
    cout << "Variable 1: " << var1 <<endl;
    cout << "Variable 2: " << var2 <<endl;
}

void MyClass::change(int a, int b) {
    var1 = a;
    var2 = b;
}

int MyClass::sum() {
    return var1 + var2;
}

int MyClass::max() {
    return (var1 > var2) ? var1 : var2;
}