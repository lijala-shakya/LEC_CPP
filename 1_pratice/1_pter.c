#include<stdio.h>
int main()
{
    int *pc ,c;

    c=22;
    printf("address of c:%p\n",&c);
    printf("value of c: %d\n\n", c);

    pc=&c;
    printf("address of c:&p\n",pc);
    printf("value of c: &d\n\n", *pc);

    c=11;
    printf("value of c:&p\n",pc);
    printf("value of c: %D\n\n",*pc);

    *pc=2;
    printf("Address of pointer pc:%p\n",pc );
    printf("Content of pointer pc: %d\n\n", c);
    return 0;
}
