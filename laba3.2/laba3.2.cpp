
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main() {
    double xn = 0, xk = 0, dx = 0, eps = 0;
    int maxIter = 500;
    cout << "Enter xn ";
    cin >> xn;
    cout << "Enter xk ";
    cin >> xk;
    cout << "Enter dx ";
    cin >> dx;
    cout << "Enter eps ";
    cin >> eps;


    printf("|    x    |     F     |  n  |   math F   |\n");
    printf("|---------|-----------|-----|------------|\n");
    for (double x = xn; x <= xk; x += dx) {
        double Cn = x; // 1 term
        double F = Cn; // sum
        int n = 0; // iterations 

        while (fabs(Cn) > eps && n < maxIter) {
            ++n;
            double T = -x * x * (2 * n - 1) / (2 * n + 1); 
            Cn *= T; // next term
            F += Cn; 
        }

        double math_F = atan(x);

        printf("| %5.2f | %9.5f | %4.i | %8.5f |\n", x, F, n, math_F);
    }

    return 0;
}

