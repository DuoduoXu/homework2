#include <iostream>
using namespace std;
int count(int n){
int t=1,s;
if(n==1)
s=1;
else
s=n*count(n-1);
return s;}
void main(){
int m,n,i,p=1,g;
cin>>m>>n;
for(i=1;i<=n;i++){
p=m*p;
--m;
}
g=p/count(n);
cout<<g<<endl;
}