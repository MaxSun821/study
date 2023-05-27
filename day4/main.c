#include <stdio.h>

#define INIT_NUM(a,b) do{ \
    a = 0; \
    b = 0; \
}while(0)


int main() {
    int x = 10;
    int y = 20;
    int flag = 0;
    scanf("%d", &flag);
    printf("before: %d, %d\n", x, y);
    if(flag)
        INIT_NUM(x, y);
    else {
        x = 100;
        y = 200;
    }

    printf("after: %d, %d\n", x, y);
    return 0;
}
