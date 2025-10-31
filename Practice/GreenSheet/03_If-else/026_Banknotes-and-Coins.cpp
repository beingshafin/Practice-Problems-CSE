// https://judge.beecrowd.com/en/problems/view/1021

#include <iostream>
#include <iomanip>
using namespace std;

int main(){ 
    double money;
    int cents;
    int n[12] = {0};
    int d[12]={10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1};
    
    cin >> money ;
    cents = money*100;
    
    cout << "NOTAS:\n";
    for(int i=0; i<12; i++){
        n[i]= cents/d[i];
        cents = cents- n[i]*d[i];

        if(i<6) cout <<n[i]<<" nota(s) de R$ " <<fixed << setprecision(2)<<d[i]/100.00<<"\n";

        else cout <<n[i]<<" moeda(s) de R$ " <<fixed << setprecision(2)<< d[i]/100.00<<"\n";

        if(i+1==6) cout << "MOEDAS:\n";
    }
    

    return 0;
}

