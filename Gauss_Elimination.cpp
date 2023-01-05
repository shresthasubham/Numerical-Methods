#include<iostream>
#include <cmath>

using namespace std;

int main(){
    int n ;
    cout << "Enter the variables: ";
    cin >> n ;

    float arr[n][n+1] ;
    cout << "Start entering the element" << endl;
    for ( int i = 1 ; i <= n ; i++){
        for ( int j = 1 ; j <= n+1 ; j++){
            cin >> arr[i][j] ;
        }
    }

    for ( int j = 1 ; j <= n; j++){
        if (  abs(arr[j][j]) < 0.0005 ){
            cout<< "cannot calculate roots";
            return 0;
        }
        for ( int i = 1 ; i <= n; i++){
            if ( i >j ){
                float temp = arr[i][j]/arr[j][j] ;
                for ( int k = 1 ; k <=n+1 ; k++ ){
                    arr[i][k] = arr[i][k] - temp * arr[j][k] ;
                }

            }
        }
    }

    

    float x[n] ;
    x[n]=arr[n][n+1]/arr[n][n];
    for ( int i =  n-1 ; i >=1 ; i-- ){
        float sum = 0.0;
        for  ( int j = i + 1 ; j <=n;j++){
        
            sum = sum + x[j]*arr[i][j];
     

        }
        x[i] =( arr[i][n+1] - sum)/arr[i][i] ;
    }

  cout<<"the solution are"<<endl;
    for ( int i = 1 ; i <= n ; i++ ){
        cout <<"x"<< i << " = " << x[i]<<endl;
    }

    return 0;
}
