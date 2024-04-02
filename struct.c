#include <stdio.h>
struct student1 {
       char lastName;
       int studentId; 
       char grade;
};
typedef struct {
       char lastName;
       int studentId;
       char grade;
} student2;

int main() {
    printf("[----- [이지현]  [2023078007] -----]\n");

    struct student1 st1 = {'A', 100, 'A'};
    printf("st1.lastName = %c\n", st1.lastName); 
    printf("st1.studentId = %d\n", st1.studentId); 
    printf("st1.grade = %c\n", st1.grade);

    student2 st2 = {'B', 200, 'B'};
    
    printf("\nst2.lastName = %c\n", st2.lastName);
    printf("st2.studentId = %d\n", st2.studentId); 
    printf("st2.grade = %c\n", st2.grade);
    student2 st3;
    st3 = st2;
    printf("\nst3.lastName = %c\n", st3.lastName); 
    printf("st3.studentId = %d\n", st3.studentId); 
    printf("st3.grade = %c\n", st3.grade);
    /* equality test */
    if(st3.studentId == st2.studentId && st3.lastName == st2.lastName && st3.grade == st2.grade) /* fixed */
    printf("equal\n"); 
    else
    printf("not equal\n");
    return 0; 
    }

    //구조체를 직접 비교하거나 연산할 수 없으므로 구조체의 각 필드를 개별적으로 비교하거나 연산해야 한다.