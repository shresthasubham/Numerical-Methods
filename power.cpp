#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "\nEnter the order of the symmetric matrix:";
    cin >> n;
    float a[n][n], x[n], y[n], max, z[n], d[20], dmax;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "\nEnter the initial guess:";
    for (int i = 1; i <= n; i++)
        cin >> x[i];
    do
    {
        for (int i = 1; i <= n; i++)
        {
            y[i] = 0;
            for (int j = 1; j <= n; j++)
            {
                y[i] += a[i][j] * x[j];
            }
        }
        max = fabs(y[1]);
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (fabs(y[j]) > max)
                    max = y[j];
            }
            z[i] = y[i] / max;
        }
        for (int i = 1; i <= n; i++)
        {
            d[i] = fabs(z[i] - x[i]);
            x[i] = z[i];
        }
        dmax = d[1];
        for (int i = 1; i <= n; i++)
        {
            if (dmax < d[i])
            {
                dmax = d[i];
            }
        }
    } while (dmax > 0.0001);
    cout << "\nEigen value:" << max;
    cout << "\nEigen vector: "<<endl;
    for (int i = 1; i <= n; i++)
        cout << z[i]<<endl;
}