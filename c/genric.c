#include<stdio.h>
int main()
{
    
    char ch='a';
    int i=11;
    float f=90.282;
    double d=22.0282;

    char *cp=&ch;
    int *ip=&i;
    float *fp=&f;
    double *dp=&d;

    void *vp=NULL;

    printf("%c\n",*cp);
    printf("%d\n",*ip);
    printf("%f\n",*fp);
    printf("%f\n",*dp);
    
    vp=&ch;
    printf("%c\n",*(char *)vp);
    
    vp=&i;
    printf("%d\n",*(int *)vp);
    
    return 0;
}