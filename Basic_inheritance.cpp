#include<iostream>
#include<stdio.h>
using namespace std;

class s1
{
  public:
    int sim;
    int camera;
};

class s2:public s1
{
public:
    int screensize;
};

int main()
{
s2 s;
s.screensize=5;
s.sim=2;
s.camera=4;

cout<<s.sim<<" "<<s.camera<<" "<<s.screensize<<endl;

getchar();
}