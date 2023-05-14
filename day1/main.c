#include "static.h"

void func2()
{
    static int i = 0;// 修饰局部变量，改变生命周期
    i++;
    printf("i = %d\n", i);
}

int main()
{
    int a = 0xAABBCCDD;
    printf("%d\n", a);

//    for(int i = 0; i < 10; i++) {
//        func2();
//    }

//    printf("g_val = %d\n", g_val);
//    func();

    return 0;
}
