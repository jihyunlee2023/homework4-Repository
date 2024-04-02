#include<stdio.h> 
#include<stdlib.h> 
int main() {
    printf("[----- [이지현]  [2023078007] -----]\n");

    int **x; //int형 이중 포인터 변수 x를 선언

    //x의 크기를 출력
    printf("sizeof(x) = %lu\n", sizeof(x)); 
    //*x의 크기를 출력
    printf("sizeof(*x) = %lu\n", sizeof(*x));
    //**x의 크기를 출력
    printf("sizeof(**x) = %lu\n", sizeof(**x));
}
