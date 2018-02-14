 #include<stdio.h>
#include<stdlib.h>
#include<string.h>
//trying rebasea
//trying mergea
//trying interactive rebase
//trying interactive rebase1
typedef struct{
int x;
int y;
char z;
}ex;


//COMMENT
int main(void)
{
ex tushar={0};
printf("before change %d\n",tushar.z);
memset((ex*)&tushar,-1,sizeof(ex));
printf("after change %x \n",tushar.z);
}

