// Code Snippet 
#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;


int main(){

    long long esum, sum=0, n, x;

    cin >> n;

    esum = n*(n+1)/2;

    for (int i=0; i<n-1; i++) {
        cin >> x;
        sum += x;
    }


    cout << esum - sum << endl;


    return 0;
}


