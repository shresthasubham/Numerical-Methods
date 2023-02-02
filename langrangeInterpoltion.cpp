#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    int n,xp;
    cout<<"\nEnter number of data ";
    cin>>n;
    float x[n],y[n];
    float pro,sum=0;
    cout<<"\nEnter the value of x and y "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>x[i]>>y[i];
    }
    cout<<"\n Enter the interpolation value ";
    cin >>xp;
    for(int i=0; i<n; i++)
    {
        pro=1;
        for(int j=0; j<n; j++)
        {
            if(i!=j)
            {
                pro=pro*((xp-x[j])/(x[i]-x[j]));
            }
        }
        sum+=(pro*y[i]);
    }
    cout<<"\nThe value of y at "<<xp<< " is "<<sum;
    return 0;
}
