#include <stdio.h>

int main(){
    int num, *pnum;
    printf("Hola mundo");
    num=1;
    pnum=&num;
    printf("\n%d",*pnum);
    printf("\n%p",pnum);
    printf("\n%p",&num);
    printf("\n%p",&pnum);
    printf("\n%d",sizeof(num));
    return 0;
}