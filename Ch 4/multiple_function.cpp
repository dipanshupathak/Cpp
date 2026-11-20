#include<iostream>
using namespace std;
void usa(){
  cout<<"You Are In USA"<<endl;
  return;
}
void india(){
  cout<<"You Are In India"<<endl;
  usa();
}
int main(){
  cout<<"You Are In Main"<<endl;
  india();
  return 0;
}