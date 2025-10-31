/*
Draw a rectangle which has a height of H cm and a width of W cm. Draw a 1-cm square by single '#'.

Input
The input consists of multiple datasets. Each dataset consists of two integers H and W separated by a single space.

The input ends with two 0 (when both H and W are zero).

Output
For each dataset, print the rectangle made of H × W '#'.

Print a blank line after each dataset.

Constraints
1 ≤ H ≤ 300
1 ≤ W ≤ 300

*/

//#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;

int main(){
    int W,H;
    cin >> H >> W;
    while (H != 0 && W != 0){
        for (int i=0; i < H; i++){
            for (int j =0; j<W; j++){
                cout << "#";
            }
            cout << endl;
        }
        cout << endl;
        cin >> H >> W;
    }
    
}
