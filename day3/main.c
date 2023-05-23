#include <stdio.h>
#include <string.h>

//struct stu {
//    int id;
//    char name[25];
//    char password[18];
//};

union un {
    int a;
    char b;
};
int main() {

    union un x;
    x.a = 1;
    if(x.b == 1) {
        printf("小端\n");
    }
    else {
        printf("大端\n");
    }
//    struct stu zhangsan;
//    zhangsan.id = 110;
//    strcpy(zhangsan.name, "zhangsan");
//    strcpy(zhangsan.password, "123456");
//
//    struct stu* p = &zhangsan;
//    printf("学号：%d\n", p->id);
//    printf("姓名：%s\n", p->name);
//    printf("密码：%s\n", p->password);
//    printf("%d\n", sizeof(struct stu));
    return 0;
}
