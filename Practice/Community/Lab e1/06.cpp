// Code Snippet 
#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;


int main() {
    int n;
    
    while (1) {
        double scr[1000], sum = 0, sqdiff = 0;

        scanf("%d", &n);
        if (n == 0) break;

        for (int i = 0; i < n; i++) {
            scanf("%lf", &scr[i]);
            sum += scr[i];
        }

        double m = sum/n;

        for (int i = 0; i < n; i++) {
            double diff = scr[i] - m;
            sqdiff += diff*diff;
        }

        double var = sqdiff / n;
        double dev = sqrt(var);

        printf("%.8lf\n", dev);
    }

    return 0;
}


