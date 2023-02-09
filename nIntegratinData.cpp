#include <iostream>
using namespace std;
int main()
{
    int n, i;
    float xn, x0, h, y[20];
    float s1 = 0, s2 = 0, res;
    cout << "\n ENTER THE VALUE OF Xo ,Xn AND N::";
    cin >> x0 >> xn;
    cin >> n;
    h = (xn - x0) / n;
    cout << "\n ENTER THE VALUE OF Y::";
    for (int i = 0; i < n; i++)
    {
        cin >> y[i];
    }
    s1 = y[0] + y[n];
    for (int i = 1; i < n - 1; i++)
    {
        s2 += y[i];
      
    }
    res = (h / 2) * (s1 + 2 * s2);

    cout << "\n using trapezoid:" << res;
    
    
}