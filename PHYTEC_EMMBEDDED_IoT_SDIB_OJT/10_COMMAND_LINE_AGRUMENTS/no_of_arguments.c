#include<stdio.h>
int main(int argc, char* argv[])
{
    int i;
    printf("\nargv file name:%s\n",argv[0]);
    printf("\nargc=%d\n",argc);
    for(i=0;i<argc;i++)
        printf("\nargv=%s\n",argv[i]);
}