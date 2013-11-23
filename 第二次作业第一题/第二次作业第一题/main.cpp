#include <iostream>
using namespace std;
float transform(float x){
float m,n;
m=x-32;
n=m*5/9;
return n;}
void main(){
float f;
cin>>f;
cout<<transform(f)<<endl;
}