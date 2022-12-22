#include<iostream>
#include<cmath>
 using namespace std;
  
float fun(float x)
{
    return(1/pow(x,2)+3*x);
}
int main(){
    float a,b;
    cout<<"Enter intervals : \n";
    cin>>a>>b;
    float c,root;
    if(fun(a)*fun(b)>0)

    {
        cout<<"interval out of scope\n";
        return 0;
    }
    else{
    
        do{
            c=(a+b)/2;
            if(fun(a)*fun(c)<0)
            b=c;
            else
            a=c;
        } while(abs(fun(c))>0.0005);
        root=c;
        cout<<"root is : "<<root;
        }
        return 0;
    }
