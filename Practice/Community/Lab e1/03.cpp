#include <stdio.h>

int main() {
    char s[100], p[100];
    int len_s = 0, len_p=0, match;
    scanf("%s %s", s, p);

    while (s[len_s] != '\0') len_s++;
    while (p[len_p] != '\0') len_p++;

    for (int i = 0; i < len_s; i++) {
        match = 1;
        for (int j = 0; j < len_p; j++) {
            if (s[ (i+j)% len_s] != p[j]) {
                match = 0;
                break; // break even if one doesnt match
            }
        }
        if (match) break; // break if everything matched
    }

    if (match) printf("Yes\n");
    else printf("No\n");

    return 0;
}
