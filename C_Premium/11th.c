//
// Created by ASUS on 2022/3/23.
//

#include "stdio.h"


/*
 * 回文素数
 * 时间：2022/3/23
 */
a(n);
int main()
{
    int i,j,t,k,s;
    printf("Following are palindrome primes not greater than 1000: \n");
    for ( i = 0; i <=9 ; i++) {
        for ( j = 0; j <=9 ; j++) {
            for ( k = 0; k <=9 ; k++) {
                s=i*100+j*10+k;
                t=k*100+j*10+i;
                if(i==0&&j==0)
                {
                    t/=100;
                }else if(i==0)
                {
                    t/=10;
                }
                if(s>10 && s==t && a(s))
                    printf("%d\t",s);
            }
        }
    }
    return 0;
}
a(n)
int n;
{
    int i;
    for(i=2;i<=(n-1)/2;i++)
    {
        if(n%i==0)
        {
            return (0);
        }else{
            return (1);
        }
    }
}
