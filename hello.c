#include <stdio.h>

extern int funPrintMessage(void);
int main(void)
{
    printf("\n============================\n");
    printf("*    Hello World!          *");
    funPrintMessage();
    printf("\n============================\n");
    return 0;
}
