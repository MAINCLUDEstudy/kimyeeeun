#include <stdio.h>
// 1번을 해보세요!
    int function1(){
        return 1;
    }

// 2번을 해보세요!
    char function2(){
        return 'A';
    }

// 3번을 해보세요!
        int function3(){
            int x = 1;
            return x;
        }

// 4번을 해보세요!
    double function4(){
    double x = 1.2;
    double y = 3.5;
    return x + y;

    }

int main() {
    printf("%d\n", function1());
    printf("%c\n", function2());
    printf("%d\n", function3());
    printf("%f\n", function4());
    
    return 0;
}
