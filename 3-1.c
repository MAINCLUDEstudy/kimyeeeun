#include <stdio.h>
// 1번을 해보세요!
func10(int x);

main()
{
    int a = 1, b = 3, c = 5;
    
    // 3번을 해보세요!
    func10(a);
    func10(b);
    func10(c);
    
    return 0;
}

func10(int x)  //함수 몸체 
{
    // 2번을 해보세요!
    x = 10*x;
    printf("10배가 된 값은 %d입니다.\n",x);
    
}
