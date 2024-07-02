#include <iostream>
#include <stdio.h>
using namespace std;

class Demo1 {
public:
    void fun1() {
        cout << "fun1 running" << endl;
    }
    void fun2() {
        cout << "fun2 running" << endl;
    }
};

class Demo2 {
public:
    friend class Demo1;
};

int main() {
    Demo1 d1;
    d1.fun1();
    d1.fun2();
    getchar();
}