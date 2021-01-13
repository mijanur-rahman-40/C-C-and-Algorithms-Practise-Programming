                                            #include<stdio.h>
#include<string.h>
int f_calls=0;
int fibo(int n)
{
    f_calls=f_calls+1;
    if(n==1 || n==2){
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}
int main()
{
    int n;
    char s[3];
    scanf("%d",&n);
    if(n==1){
        strcpy(s,"st");
    }
    else if(n==2){
        strcpy(s,"nd");
    }
    else if(n==3){
        strcpy(s,"rd");
    }
    else {
        strcpy(s,"th");
    }
    printf("%d %s fibonacci number is %d\n",n,s,fibo(n));
    printf("Number of function calls : %d\n",f_calls);
    return 0;
}
