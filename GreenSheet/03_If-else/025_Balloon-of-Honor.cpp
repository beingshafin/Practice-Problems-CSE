//https://judge.beecrowd.com/en/problems/view/2987

#include <iostream>
using namespace std;

int main(){ 
    char a;
    int x;
    cin >> a;

    x = (int)a;

    if (a>='A' && a<='Z') cout << x-64 << "\n";
    
    return 0;
}
