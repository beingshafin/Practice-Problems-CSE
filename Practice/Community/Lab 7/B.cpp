
#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
       
    int card[4][14]={0};
    char suit;
    int rank;
    char suits[4]= { 'S', 'H', 'C', 'D' };

    for (int i = 0; i < n; i++) {
        cin >> suit >> rank;
        for( int s=0; s<4; s++) {
            if (suits[s] == suit) {
                card[s][rank] = 1; // found
                break;
            }
        }      
    }


    for (int s = 0; s<4; s++) {
        for (int r = 1; r<=13; r++) {
            if (card[s][r] == 0) {
                cout << suits[s] << " " << r << endl;
            }
        }
    }

    return 0;
}


