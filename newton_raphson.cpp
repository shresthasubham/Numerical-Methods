#include<iostream>
#include<cmath>
using namespace std;

float fx( float x){
 return x*sin(x)+cos(x);
}
float dfx( float dx){
 return dx*cos(dx);
 }
int main(){
float x;
cout<<"enter the initial value : ";
cin>>x;
float b,root,a;
int iterate=0;
a=x;
b=a -(fx(a)/dfx(a));
do{

    if(abs(dfx(b))<=0.0005){
     cout<<"error";
     return 0;
     }
     iterate++;
     b=a -(fx(a)/dfx(a));
     a=b;
     if(iterate >100){
        cout<<"Oscillation occured";
        return 0;
     }

}while(abs(fx(b))>0.0005);
root=b;
cout<<"root is  "<<root;
return 0;
}
