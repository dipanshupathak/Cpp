#include<iostream>
using namespace std;
int main()
{
  int a,b,c;
  cout<<"Enter 1st Side : ";
  cin>>a;
  cout<<"Enter 2nd Side : ";
  cin>>b;
  cout<<"Enter 3rd Side : ";
  cin>>c;
  if((a+b)>c and (b+c)>a and (c+a)>b){
    cout<<"Valid Triangle";
  }
  else{
    cout<<"Invalid Triangle";
  }
}