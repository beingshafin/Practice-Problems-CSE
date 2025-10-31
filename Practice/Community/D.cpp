/*
Consider an algorithm that takes as input a positive integer 
n
n. If 
n
n is even, the algorithm divides it by two, and if 
n
n is odd, the algorithm multiplies it by three and adds one. The algorithm repeats this, until 
n
n is one. For example, the sequence for 
n
=
3
n=3 is as follows:
3
→
10
→
5
→
16
→
8
→
4
→
2
→
1
3→10→5→16→8→4→2→1
Your task is to simulate the execution of the algorithm for a given value of 
n
n.

Input
The only input line contains an integer 
n
n.

Output
Print a line that contains all values of 
n
n during the algorithm.

Constraints
1
≤
n
≤
10
6
1≤n≤10 
6
*/

#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    while (n != 1){
        cout << n << " ";
        if (n%2 == 0) n = n/2;
        else n = (n*3)+1;
    }
    cout << n << endl;
    return 0;
}

