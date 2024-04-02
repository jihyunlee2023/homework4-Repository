#include <stdio.h> 

//student라는 이름의 구조체를 정의
struct student { 
    char lastName[13]; //last name을 저장하는 문자 배열, 12자 + 널 종료 문자(\0)를 위한 공간을 할당
    int studentId; //student ID를 저장하는 정수형 변수
    short grade; //학생의 성적을 저장하는 변수
};

int main() {
    printf("[----- [이지현]  [2023078007] -----]\n");

    struct student pst; //'student' 구조체의 인스턴스를 선언
    
    //'student'의 크기를 바이트 단위로 출력, sizeof 연산자를 사용하여 메모리 크기를 계산
    printf("size of student = %ld\n", sizeof(struct student)); 
    //int의 크기를 바이트 단위로 출력
    printf("size of int = %ld\n", sizeof(int)); 
    //short의 크기를 바이트 단위로 출력
    printf("size of short = %ld\n", sizeof(short));
    return 0; 
}
