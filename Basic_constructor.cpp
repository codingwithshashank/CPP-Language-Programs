#include <iostream>
#include <cstdio>

using namespace std;

class student {
    int a;
    int b;

public:
    // Parameterized constructor
    student(int x, int y) {
        a = x;
        b = y;
    }

    // Default constructor
    student() {
        a = 0;
        b = 0;
    }

    // Constructor with one parameter
    student(int x) {
        a = x;
        b = x;
    }

    void f1() {
        cout << a << " " << b << endl;
    }
};

int main() {
    student s1(5, 6), s2, s3(96);

    s1.f1();
    s2.f1();
    s3.f1();

    getchar();
    return 0;
}