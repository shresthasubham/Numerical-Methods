#include <iostream>
using namespace std;
float fy(float z)
{
    return z * 2;
}
int main()
{
    int n, i;
    float xn, x0, h, y[20];
    float s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, res;
    cout << "\n ENTER THE VALUE OF Xo ,Xn AND N::";
    cin >> x0 >> xn;
    cin >> n;
    h = (xn - x0) / n;
    for (int i = 0; i < n; i++)
    {
        y[i] = fy(x0 + i * h);
    }
    s1 = y[0] + y[n];
    for (int i = 1; i < n - 1; i++)
    {
        s2 += y[i];
        if (i % 2 == 0)
            s4 += y[i];
        else
            s3 += y[i];
        if (i % 3 == 0)
            s6 += y[i];
        else
            s5 += y[i];
    }
    res = (h / 2) * (s1 + 2 * s2);
    cout << "\n using trapezoid:" << res;
    res = (h / 3) * (s1 + 4 * s3 + 2 * s4);
    cout << "\n using Simpson 1/3:" << res;
    res = ((3 * h) * (s1 + 3 * s5 + 2 * s6)) / 8;
    cout << "\n using Simpson 3/8:" << res;
}