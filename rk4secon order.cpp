#include<iostream>
#include<cmath>
using namespace std;

float f(float x,float y,float z){
 return z;
}

float g(float x,float y, float z)
{
    return (x+2*y+z);
}

int main(){
float xo,yo,zo,xn,h,k,m;
float k1,k2,k3,k4,m1,m2,m3,m4;
cout<<"\n Enter x0,y0,z0,xN,h "<<endl;
cin>>xo>>yo>>zo>>xn>>h;
while(xo<xn){
    k1=h*f(xo,yo,zo);
    m1=h*g(xo,yo,zo);
    k2=h*f(xo+h/2,yo+k1/2,zo+m1/2);
    m2=h*g(xo+h/2,yo+k1/2,zo+m1/2);
    k3=h*f(xo+h/2,yo+k2/2,zo+m2/2);
    m3=h*g(xo+h/2,yo+k2/2,zo+m2/2);
    k4=h*f(xo+h,yo+k3,zo+m3);
    m4=h*g(xo+h,yo+k3,zo+m3);
    k=(k1+2*k2+2*k3+k4)/6;
    m=(m1+2*m2+2*m3+m4)/6;
    yo=yo+k;
    zo=zo+m;
    xo=xo+h;

};
cout<<"\nx \t y \t \tz"<<endl;
cout<<xo<<"\t"<<yo<<"\t"<<zo<<endl;

return 0;

}
