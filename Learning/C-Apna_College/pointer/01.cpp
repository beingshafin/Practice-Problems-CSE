// https://chatgpt.com/share/69042b98-30bc-8013-9b55-809a92f1225b

#include <stdio.h>

int main(void){
    int x=15;

    // must inintialize the address to the pointer first =======

    int *ptr = &x; //ptr should be declared with special sign but after declareation dont use * (as it will store the value on og variable not address on current pointer)


    // than may assign a value using that adress inside pointer =======


    //ptr = &x; // assignment of address of x to ptr
    *ptr = 10; //assignment of the value of (address of ptr or x)

    int **pptr = &ptr; // address of ptr


    // printing value of x
    printf("%d\n", x); 
    printf("%d\n", *ptr);
    printf("%d\n", **pptr);

    // printing address of x
    printf("%d\n", &x);
    printf("%x\n", ptr);
    printf("%p\n", (void*)&x); // void isn't necessrary, but a good practice as %p expects a void type data.

    //printing address of pointer 1
    printf("%p\n", &ptr);
    printf("%p\n", pptr);

    return 0;
}

