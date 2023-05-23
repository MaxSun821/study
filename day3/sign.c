//
// Created by Max on 2023/5/23.
//


#include <stdio.h>
#include <unistd.h>

int main() {
    int index = 0;
    const char* lable = "|/-\\";
    while(1) {
        index %= 4;
        printf("[%c]\r", lable[index]);
        index++;
        sleep(0.5);
    }


    return 0;
}
