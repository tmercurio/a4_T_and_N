#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

uint64 nanotime(void);

int main() {
    printf("%x\n", nanotime() / 1000000);
    return 0;
}
