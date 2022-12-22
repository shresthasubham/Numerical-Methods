#include<iostream>
#include<cmath>
 using namespace std;
  
float fun(float x)
{
    return(pow(x,3)+3*pow(x,2)-5);
}
int main(){
    float a,b;
    cout<<"Enter intervals : \n";
    cin>>a>>b;
    float c,root;
         do{
            if((fun(b)-fun(a))==0){
                cout<<"Error";
                return 0;
            }
                
            
            else{
                float X,Y;
                X=fun(a);
                Y=fun(b);
                c=(a*Y-b*X)/(Y-X);
                a=b;
                b=c;
            }
                
         }while(abs(fun(c))>0.0005);
        root=c;
        cout<<"root is : "<<root;
        return 0;
    }
