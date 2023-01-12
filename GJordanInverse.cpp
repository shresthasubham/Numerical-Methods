
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
   int n;

   cout << "Enter the order of square matrix ";
   cin >> n;
   float mat1[n][2 * n], temp;
   cout << "Enter the values of matrix " << endl;
   // input
   for (int i = 1; i <= n; i++)
   {
      for (int j = 1; j <= n; j++)
      {
         cin >> mat1[i][j];
      }
   }
   // augmented
   for (int i = 1; i <= n; i++)
   {
      for (int j = n + 1; j <= 2 * n; j++)
      {
         if (j == i + n)
            mat1[i][j] = 1;
         else
            mat1[i][j] = 0;
      }
   }
   cout << "the matrix is " << endl;
   for (int i = 1; i <= n; i++)
   {
      for (int j = 1; j <= 2 * n; j++)
      {
         cout << mat1[i][j] << " ";
      }
      cout << endl;
   }

   // diagonaliz

   for (int j = 1; j <= n; j++)
   {
      if (abs(mat1[j][j]) < 0.0005)
      {
         cout << "error";
         return 0;
      }
      else
      {
         for (int i = 1; i <= n; i++)
         {
            if (i != j)
            {
               temp = mat1[i][j] / mat1[j][j];
               for (int k = 1; k <= 2 * n; k++)
                  mat1[i][k] = mat1[i][k] - temp * mat1[j][k];
            }
         }
      }
   }
   // identity
   for (int i = 1; i <= n; i++)
   {
      float d = mat1[i][i];
      for (int j = 1; j <= 2 * n; j++)
      {
         mat1[i][j] = mat1[i][j] / d;
      }
   }
   cout << "the inverse is " << endl;

   for (int i = 1; i <= n; i++)
   {

      for (int j = n + 1; j <= 2 * n; j++)
      {
         cout << mat1[i][j] << " ";
      }
      cout << endl;
   }

   return 0;
}
