//
// Created by 杨充 on 2024/9/19.
//


#include <printf.h>
#include "time.h"
#include "stdlib.h"


int main() {
    srand(time(NULL));
    int r = rand() % 2;
    int a = 10;
    if (r == 0) {
        a = 1;
    } else {
        a = 2;
    }
    printf("a %d", a);
    return 0;
}