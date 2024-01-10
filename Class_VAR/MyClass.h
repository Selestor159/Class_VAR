#ifndef MYCLASS_H
#define MYCLASS_H

class MyClass {
private:
    int var1;
    int var2;

public:
    MyClass(int a, int b);
    void display();
    void change(int a, int b);
    int sum();
    int max();
};

#endif