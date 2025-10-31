// https://judge.beecrowd.com/en/problems/view/1061

#include <iostream>

using namespace std;

int main(){ 
    int d1, d2, d3, h1, h2, h3, m1, m2, m3, s1, s2, s3, S1, S2, S;

    string tmp;
    
    cin >> tmp >> d1;
    cin >> h1 >> tmp >> m1 >> tmp >> s1;
    
    cin >> tmp >> d2;
    cin >> h2 >> tmp >> m2 >> tmp >> s2;
    
    //char tmp[50];
    // scanf("%s %d", &tmp, &d1);
    // scanf("%d %s %d %s %d", &h1, &tmp, &m1, &tmp, &s1);
    // scanf("%s %d", &tmp, &d2);
    // scanf("%d %s %d %s %d", &h2, &tmp, &m2, &tmp, &s2);


    S1= d1*24*60*60 + h1*60*60 + m1*60 + s1;
    S2= d2*24*60*60 + h2*60*60 + m2*60 + s2;
    S = S2 - S1;
    d3 = S/(24*60*60);
    h3 = (S -d3*24*60*60)/(60*60);
    m3 = (S -d3*24*60*60 -h3*60*60)/(60);
    s3 = S -d3*24*60*60 -h3*60*60 -m3*60;

    cout << d3 << " dia(s)\n" ;
    cout << h3 << " hora(s)\n" ;
    cout << m3 << " minuto(s)\n" ;
    cout << s3 << " segundo(s)\n" ;
   
    return 0;
}
