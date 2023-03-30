#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

uint64 nanotime(void);

int main() {
    printf("%d\n", nanotime());
    return 0;
}
