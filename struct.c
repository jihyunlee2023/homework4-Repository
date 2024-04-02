#include <stdio.h> 

struct student1 {
       char lastName; //학생의 성을 저장
       int studentId; //학생 ID를 저장
       char grade; //학생의 성적을 저장
};


typedef struct {
       char lastName; //학생의 성을 저장
       int studentId; //학생 ID를 저장
       char grade; //학생의 성적을 저장
} student2; //구조체 타입에 대한 'student2'를 생성합니다.

int main() {
    printf("[----- [이지현]  [2023078007] -----]\n");

    //student1 구조체의 인스턴스 st1을 선언하고 초기화
    struct student1 st1 = {'A', 100, 'A'};
    printf("st1.lastName = %c\n", st1.lastName); //st1의 lastName 출력
    printf("st1.studentId = %d\n", st1.studentId); //st1의 studentId 출력
    printf("st1.grade = %c\n", st1.grade); //st1의 grade 출력

    //student2 구조체의 인스턴스 st2를 선언하고 초기화
    student2 st2 = {'B', 200, 'B'};
    
    printf("\nst2.lastName = %c\n", st2.lastName); //st2의 lastName 출력
    printf("st2.studentId = %d\n", st2.studentId); //st2의 studentId 출력
    printf("st2.grade = %c\n", st2.grade); //st2의 grade 출력

    // student2 구조체의 또 다른 인스턴스 st3을 선언합니다. st2의 값으로 st3을 초기화합니다.
    student2 st3;
    st3 = st2;
    printf("\nst3.lastName = %c\n", st3.lastName);  //st3의 lastName 출력
    printf("st3.studentId = %d\n", st3.studentId); //st3의 studentId 출력
    printf("st3.grade = %c\n", st3.grade); //st3의 grade 출력

    //st3와 st2의 필드 값을 비교, 구조체 자체를 직접 비교하는 것은 불가능하므로 각 필드를 개별적으로 비교한다.
    if(st3.studentId == st2.studentId && st3.lastName == st2.lastName && st3.grade == st2.grade)
    printf("equal\n"); //모든 필드가 같으면 "equal"을 출력
    else
    printf("not equal\n"); //하나라도 다르면 "not equal"을 출력
    return 0; 
}
