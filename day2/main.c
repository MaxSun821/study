#include <stdio.h>
#include <string.h>

int main() {

    int k = 10;
    unsigned int j = -20;
    printf("%u\n", k + j);

    char a[1000];
    int i;
    for(i = 0; i < 1000; i++) {
        a[i] = -1 - i;
    }
    printf("%d\n", strlen(a));
    return 0;
}
