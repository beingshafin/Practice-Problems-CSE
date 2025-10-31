// https://judge.beecrowd.com/en/problems/view/2787

#include <iostream>
using namespace std;

int main(){ 
    int x, y;
    cin >> x >> y;
    
    if ((x+y)%2==0) cout << "1\n";
    else cout << "0\n";
    return 0;
}
