/*
    file: gettime.c
    authors: Thomas Mercurio (22209849) 
    modified by: Nikita Volkov (21393323)
*/

#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

uint64 nanotime(void);

int main() {
    uint64 time = (nanotime() / 1000000);
    printf("%d\n", time);
    return 0;
}
