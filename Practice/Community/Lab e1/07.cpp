// Code Snippet 
#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;

    int x[n], y[n];
    for (int i = 0; i < n; i++) cin >> x[i];
    for (int i = 0; i < n; i++) cin >> y[i];

    double d1 = 0, d2 = 0, d3 = 0;
    double d_inf = 0;

    for (int i = 0; i < n; i++) {
        double diff = fabs(x[i]-y[i]);
        d1 += diff;
        d2 += diff*diff;
        d3 += pow(diff, 3);
        if (diff > d_inf) d_inf = diff;
    }

    d2 = sqrt(d2);
    d3 = pow(d3, 1.0/3.0);

    cout << fixed << setprecision(6) << d1 << " " << d2 << " " << d3 << " " << d_inf << endl;

    return 0;
}

