#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter Marks : ";
cin>>n;
if(n>=90 and n<=100){
  cout<<"Excellent";
}
else if(n>=80 and n<=90){
  cout<<"Very Good";
}
else if(n>=65 and n<=80){
  cout<<"Good";
}
else if(n>=45 and n<=65){
  cout<<"Abarage";
}
else{
  cout<<"Fail";
}
}