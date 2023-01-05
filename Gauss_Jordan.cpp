#include<iostream>
#include <cmath>

using namespace std;

int main(){
    int n ;
    cout << "Enter the variables: ";
    cin >> n ;

    float arr[n][n+1] ;
    cout << "Start entering the element" << endl;
    for ( int i = 0 ; i < n ; i++){
        for ( int j = 0 ; j < n+1 ; j++){
            cin >> arr[i][j] ;
        }
    }

    for ( int j = 0 ; j < n  ; j++){
        if (  abs(arr[j][j]) <= 0.0005 ){
            cout<< "cannot calculate roots";
            return 0;
        }
        for ( int i = 0; i < n; i++){
            if ( i != j ){
                float temp = arr[i][j]/arr[j][j] ;
                for ( int k = 0 ; k < n+1 ; k++ ){
                    arr[i][k] = arr[i][k] - temp * arr[j][k] ;
                }

            }
        }
    }

    for ( int i =  0 ; i < n ; i++){
        cout<< "x"<< i << " = " << arr[i][n]/arr[i][i] << endl;
    }

    return 0;

}
