#include <stdio.h>

double abc(int x, int y);  //함수 선언  

int main() {
    int x, y;
    double z;

    printf("정수 x의 값 입력: ");
    scanf("%d", &x); // 사용자로부터 입력을 받는 함수
 
    printf("정수 y의 값 입력: ");
    scanf("%d", &y);
    // 2번을 해보세요!
    z = abc(x, y);
    printf("z의 값은: %f\n", z);
    
   
}
// 1번을 해보세요!
    double abc(int x,int y)
{
 return x+y+3.14;
}
