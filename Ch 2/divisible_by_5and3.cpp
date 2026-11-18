#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter Number : ";
  cin>>n;
  if(n%5==0 && n%3==0){
    cout<<"Divisible By 5 And 3";
  }
  else{
    cout<<"Not Divisible By 5 And 3";
  }
}