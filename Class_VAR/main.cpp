#include <iostream>
#include "MyClass.h"
using namespace std;

int main() {
    MyClass obj(3, 5);
    obj.display();
    cout << "Sum: " << obj.sum() <<endl;
    cout << "Max value: " << obj.max() <<endl;
    cout << "____________________" << "\n\n";
    obj.change(7, 10);
    obj.display();
    cout << "Sum: " << obj.sum() <<endl;
    cout << "Max value: " << obj.max() <<endl;
    return 0;
}