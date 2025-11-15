#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;


int main(){
    long long n, u=0, a[100000], b[100000]={0};
    cin >> n;

    for(int i=0; i<n; i++) {
        cin >> a[i];
        b[a[i]]++;
    }

    for(int i=0; i<100000; i++) {
        if(b[i] != 0) u++;
    }


    printf("%lld\n", u);
    return 0;
}