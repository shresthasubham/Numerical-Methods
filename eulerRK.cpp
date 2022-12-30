#include<iostream>
#include<cmath>

using namespace std;

float slope(float x,float y ){
  return pow(x,2)+2*x-y;
  }

//Euler method
void euler(float x,float y,float xn,float h){
float yn=0;
cout <<"\nEULER METHOD"<<endl;
for (float i =x;i<xn;i+=h)
 {
     //cout<<i<<"\t"<<y<<endl;

     y=y+h*slope(x,y);
     x=x+h;
 }
 yn=y;
 cout<<"\nEuler method -the value of yn is "<<yn<<endl;
}

//Rk2 method
void rk2(float x,float y,float xn,float h){
float yn=0,k1=0,k2=0,k=0;
cout <<"\nRK 2 METHOD"<<endl;
for (float i =x;i<xn;i+=h)
 {
     //cout<<i<<"\t"<<y<<endl;
     k1=h*slope(x,y);
     k2=h*slope(x+h,y+k1);
     k=(k1+k2)/2;
     y=y+k;
     x=x+h;
 }
 yn=y;
 cout<<"\nRK 2 method -the value of yn is "<<yn<<endl;
}


//Rk4 method
void rk4(float x,float y,float xn,float h){
float yn=0,k1=0,k2=0,k3=0,k4=0,k=0;
cout <<"\nRK 4 METHOD"<<endl;
for (float i =x;i<xn;i+=h)
 {
     //cout<<i<<"\t"<<y<<endl;
     k1=h*slope(x,y);
     k2=h*slope(x+h/2,y+k1/2);
     k3=h*slope(x+h/2,y+k2/2);
     k4=h*slope(x+h,y+k3);
     k=(k1+2*k2+2*k3+k4)/6;
     y=y+k;
     x=x+h;
 }
 yn=y;
 cout<<"\nRK 4 method -the value of yn is "<<yn;
}

int main(){
 float h=0,xo=0,yo=0,xn=0;
 cout<<"\nEnter the value of x0 ,yo,xn and h ";
 cin>>xo>>yo>>xn>>h;
euler(xo,yo,xn,h);
rk2(xo,yo,xn,h);
rk4(xo,yo,xn,h);
return 0;
}
