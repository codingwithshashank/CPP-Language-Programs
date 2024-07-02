#include <iostream>
#include <stdio.h>
using namespace std;

class Demo1 {
public:
    int x;
    friend void fun(int p, int q);
};

class Demo2 {
public:
    int y;
    friend void fun(int p, int q);
};

void fun(int p, int q) {
    Demo1 d1;
    Demo2 d2;
    d1.x = p;
    d2.y = q;
    cout << d1.x + d2.y;
}

int main() {
    fun(5, 5);
    getchar();
}