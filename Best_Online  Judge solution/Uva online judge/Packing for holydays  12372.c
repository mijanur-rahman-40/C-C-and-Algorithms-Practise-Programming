#include<stdio.h>
int main()
{
    int a,b,c;
    int tst,i=1;
    scanf("%d",&tst);
    while(tst--){
        scanf("%d%d%d",&a,&b,&c);
        if(a<=20 && b<=20 && c<=20){
            printf("Case %d: good\n",i++);
        }
        else{
            printf("Case %d: bad\n",i++);
    }
    }
    return 0;
}
