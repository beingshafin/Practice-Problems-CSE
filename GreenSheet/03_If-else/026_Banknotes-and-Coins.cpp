// https://judge.beecrowd.com/en/problems/view/1021

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){ 
    long double money;
    int n[12] = {0};
    long double d[12]={100, 50, 20, 10, 5, 2, 1, 0.5, 0.25, 0.1, 0.05, 0.01};
    
    cin >> money ;
    
    cout << "NOTAS:\n";
    for(int i=0; i<12; i++){
        n[i]= money/d[i];
        money = fmod(money, d[i]);

        if(i<6) cout <<n[i]<<" nota(s) de R$ " <<fixed << setprecision(2)<<d[i]<<"\n";

        else cout <<n[i]<<" moeda(s) de R$ " <<fixed << setprecision(2)<<d[i]<<"\n";

        if(i+1==6) cout << "MOEDAS:\n";
    }
    

    return 0;
}

