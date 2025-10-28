#include <stdio.h>
int i,n;
void mult(n)
{
    for(i=1 ; i<=10; i++)
    {
        printf("%d X %d = %d\n",n,i,n*i);
    }
}
int main(){
    mult(5);
    return 0;
}