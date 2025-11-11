// Code Snippet 
#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;


int main(){

    string x;
    int count=1, maxcount=1;
    cin >> x[0];
    for(unsigned int i=1; i<x.size(); i++){
        cin >> x[i];
        if(i>0 && x[i]==x[i-1]) count++;
        else if(count>maxcount) {maxcount=count, count=1;}
        else count=1;   
    }

    cout << maxcount << endl;



    return 0;
}



