//length of a string
#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;

int main() {

    char name[100];
    int l=0;
    fgets(name, 100, stdin);
    // for(int i=0; name[i] != '\0'; i++){
    //     if(name[i]!=' ' && name[i]!='\n') l++;
    // }

    cout << strlen(name)-1 << endl;

    return 0;
}
