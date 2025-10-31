// https://judge.beecrowd.com/en/problems/view/1042

#include <iostream>
using namespace std;

int main(){ 
    int x, y, z, a, b, c,swap;
    cin >> x >> y >> z;
    
    a = x, b = y, c = z;

    if (x > y)  {swap = x; x = y; y = swap;}
    if (x > z)  {swap = x; x = z; z = swap;}
    if (y > z)  {swap = y; y = z; z = swap;}

    cout << x << endl << y << endl << z << "\n\n";
    cout << a << endl << b << endl << c << endl;
    //cout << x << " " << y << z << endl;
    return 0;
}
