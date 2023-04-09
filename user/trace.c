/*
    file: trace.c
    authors: Nikita Volkov (21393323) Thomas Mercurio (22209849)
*/

#include "kernel/param.h"
#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[])
{
    int i;
    char *nargv[MAXARG];
    
    if(argc < 3 || (argv[1][0] < '0' || argv[1][0] > '9'))
    {
        printf("error\n");
        exit(1);
    }
    
    if(trace(atoi(argv[1])) < 0) 
    {
        printf("error\n");
        exit(1);
    }
  
    for(i = 2; i < argc && i < MAXARG; i++)
    {
        nargv[i-2] = argv[i];
    }
  
    exec(nargv[0], nargv);
  
  exit(0);
}