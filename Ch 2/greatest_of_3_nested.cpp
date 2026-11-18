#include<iostream>
using namespace std;
int main()
{
  int a,b,c;
  cout<<"Enter 1st Number : ";
  cin>>a;
  cout<<"Enter 2nd Number : ";
  cin>>b;
  cout<<"Enter 3rd Number : ";
  cin>>c;
  if(a>b){
    if(a>c){
      cout<<a<<" Is Greatest";
    }
    else{
      cout<<c<<" Is Greatest";
    }
  }
  else{
    if(b>c){
      cout<<b<<" Is Greatest";
    }
    else{
      cout<<c<<" Is Greatest";
    }
  }
}