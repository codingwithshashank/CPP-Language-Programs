#include <iostream>
#include <cstdio>
using namespace std;

int r;
string n;
string b;
void student()
{
    
    cout<<"Enter roll no.: ";
    cin>>r;
    cout<<"Enter Name: ";
    cin.ignore();
    getline(cin,n);
    cout<<"Enter Branch: ";
    getline(cin,b);
    
}

void detail()
{
   cout<<endl;
   cout<<"Student detail is"<<endl;
   cout<<"Roll no.: "<<r<<endl;
   cout<<"Name: "<<n<<endl;
   cout<<"Branch: "<<b<<endl;
}
int main()
{
    student();
    detail();
    getchar();
}