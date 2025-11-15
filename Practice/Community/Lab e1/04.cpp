// Code Snippet 
#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;

int main() {
    char str[1000];
    int q;
    scanf("%s %d", str, &q);

    for (int n = 0; n < q; n++) {
        char cmd[10]; // print/reverse/replace
        int a, b; 
        char p[1000]; // Extra string input or "replace" cmd
        scanf("%s", cmd);

        if (strcmp(cmd, "print") == 0) {
            scanf("%d %d", &a, &b);
            for (int i = a; i <= b; i++) {
                putchar(str[i]);
            }
            putchar('\n');

        } else if (strcmp(cmd, "reverse") == 0) {
            scanf("%d %d", &a, &b);
            while (a < b) {
                str[a] ^= str[b];
                str[b] ^= str[a];
                str[a] ^= str[b];
                a++;
                b--;
            }

        } else if (strcmp(cmd, "replace") == 0) {
            scanf("%d %d %s", &a, &b, p);
            for (int i = a; i <= b; i++) {
                str[i] = p[i - a];
            }
        }
    }

    return 0;
}

