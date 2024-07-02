#include <iostream>

using namespace std;

class Demo {
public:
    int x;
    int y;
    static int z;

    static void f1() {
        z = 44;
        cout << z << endl;
    }
};

int Demo::z;

int main() {
    Demo::f1();
    return 0;
}