// https://judge.beecrowd.com/en/problems/view/1040

#include <iostream>
#include <iomanip>
using namespace std;

int main(){ 
    double n1, n2, n3, n4, x, avg;

    cin >> n1 >> n2 >> n3 >> n4;
    avg = (n1*2 + n2*3 + n3*4 + n4)/10;

    cout << "Media: " << fixed << setprecision(1) << avg << "\n";

    if (avg >= 7) cout << "Aluno aprovado.\n";
    else if (avg>=5 && avg<7){
        cout << "Aluno em exame.\n";
        
        cin >> x;
        cout << "Nota do exame: " << fixed << setprecision(1) << x << "\n";
        
        avg = (avg+x)/2;
        if (avg >= 5) cout << "Aluno aprovado.\n";
        else cout << "Aluno reprovado.\n";       
        cout << "Media final: " << fixed << setprecision(1) << avg << "\n";
    }
    else cout << "Aluno reprovado.\n";

    return 0;
}
