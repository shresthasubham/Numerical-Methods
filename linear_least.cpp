#include<iostream>
#include<cmath>

using namespace std;
float det(float c,float d ,float e, float f){
    if (((c*f)-(d*e))==0)
     {
         cout<< "det is zero";
         return 0;
     }
   return (c*f)-(d*e);
}

int main()
{    int n=0;
   
    float sx=0,sy=0,sxy=0,sx2=0;
    cout<<"enter data number = ";
    cin>>n;
     float x[n],y[n];
    cout<< "Enter the values of x : ";
    for( int i = 0; i< n ; i++){
        cin>> x[i];
    }

    cout<< "Enter the values of y : ";
    for( int i = 0; i< n ; i++){
        cin>> y[i];
    }

    for ( int i=0 ; i< n ; i++){
        sx += x[i];
        sy += y[i];
        sxy += x[i] * y[i] ;
        sx2 += x[i] * x[i];
    }
    float a,b;
    a=det(sy,sx,sxy,sx2)/det(n,sx,sx,sx2);
    b=det(n,sy,sx,sxy)/det(n,sx,sx,sx2);
    cout<<"the best fit for y=a+bX"<<" are a = "<<a<<" and b = "<<b;
    return 0;
}

