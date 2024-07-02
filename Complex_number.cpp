
#include<iostream>
#include<stdio.h>
using namespace std;
class Complex
{
    int x;
    int y;
public:
    void setData(int p, int q) 
    {
        x=p; y=q;
    }
    Complex add(Complex g1)
    {
        Complex p1;
        p1.x=x+g1.x;
        p1.y=y+g1.y;
        return p1;
    }
    
    void display()
    {
        cout<<x<<"+"<<y<<"i"<<endl;
    }
};
int main()
{
    Complex c1,c2,c3;
    c1.setData(2,4);
    c2.setData(5,6);
    c3=c1.add(c2); //c1 object call add() function and give c2 and get return for c3
    c3.display();
    getchar();
}