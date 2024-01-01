#include <iostream>
using namespace std;

class MyClass {
private:
    int var1;
    int var2;

public:
    MyClass(int a, int b) {
        var1 = a;
        var2 = b;
    }

    void display() {
        cout << "Variable 1: " << var1 << endl;
        cout << "Variable 2: " << var2 << endl;
    }

    void change(int a, int b) {
        var1 = a;
        var2 = b;
    }

    int sum() {
        return var1 + var2;
    }

    int max() {
        return (var1 > var2) ? var1 : var2;
    }
};

int main() {
    MyClass obj(3, 5);

    obj.display();
    cout << "Sum: " << obj.sum() << endl;
    cout << "Max value: " << obj.max() << endl;

    cout << "____________________" << "\n\n";

    obj.change(7, 10);
    obj.display();

    cout << "Sum: " << obj.sum() << endl;
    cout << "Max value: " << obj.max() << endl;

    return 0;
}
