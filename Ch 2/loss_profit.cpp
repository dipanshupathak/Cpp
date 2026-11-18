#include<iostream>
using namespace std;
int main()
{
  int cp;
  cout<<"Enter Cose Price : ";
  cin>>cp;
  int sp;
  cout<<"Enter Selling Price : ";
  cin>>sp;
  if(sp>cp){
    cout<<"Profit";
  } 
  if(sp<cp){
  cout<<"loss";
  }
  if(sp==cp){
    cout<<"No Profit No Loss";
  }
}