#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int np, d;
    cout << "Enter the degree : ";
    cin >> d;
    cout << "\nEnter number of data pair : ";
    cin >> np;
    if (np <= d)
    {
        cout << "error: Not enough data";
        return 0;
    }
    float x[np], y[np];
    cout << "\nEnter X and Y data" << endl;
    for (int k = 0; k < np; k++)
    {
        cin >> x[k] >> y[k];
    }

    // normal matrix
    float n[d + 1][d + 3];
    for (int i = 0; i <= d; i++)
    {
        for (int j = 0; j <= d + 1; j++)
        {
            n[i][j] = 0;
            if (j == (d + 1))
            {
                for (int k = 0; k < np; k++)
                {

                    n[i][j] += y[k] * (pow(x[k], i));
                }
            }
            else
            {
                for (int k = 0; k < np; k++)
                {
                    n[i][j] += pow(x[k], i + j);
                }
            }
        }
    }
    // NORMAL MATRIX display
    cout << endl;
    for (int i = 0; i <= d; i++)
    {
        for (int j = 0; j <= d + 1; j++)
        {
            cout << n[i][j] << " ";
        }
        cout << endl;
    }
    // gauss
    float temp = 0;
    for (int j = 0; j <= d; j++)
    {
        if (abs(n[j][j]) <= 0.0005)
        {
            cout << "Pivot element is zero";
            return 0;
        }
        for (int i = 0; i <= d; i++)
        {
            if (i != j)
            {
                temp = n[i][j] / n[j][j];
                for (int k = 0; k <= d + 1; k++)
                    n[i][k] = n[i][k] - temp * n[j][k];
            }
        }
    }
    cout << "Solution from higher to lower order " << endl;
    for (int i = 0; i <= d; i++)
    {
        cout << "x " << i + 1 << " : " << n[i][d + 1] / n[i][i] << endl;
    }
    return 0;
}
