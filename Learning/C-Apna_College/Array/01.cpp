#include <stdio.h>

int main() {
    int age = 22;
    int age2 = 23;
    int *ptr = &age;
    int *ptr2 = &age2;

    printf("Difference %d\n", ptr-ptr2);
    printf("Compare %d\n", ptr==ptr2);
    return 0;
}
