#include <stdio.h>
// 1번을 해보세요!
 void abc(int a, int b){
  a = a*10;
  b = b*10;
 }

int main() {
    int a;
    int b;

    a = 1;
    b = 2;

    abc(a, b);

    printf("a의 값은 %d이고 b의 값은 %d입니다.\n", a, b);
    
    return 0;
}
