#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t;
    scanf("%d", &t);
    
    while(t>0) {
        long n,a=0,b=0,c=0;
        unsigned long long sum=0,sum3=0,sum5=0,sum15=0;
        scanf("%ld", &n);
        
        a = (n-1)/3;
        b = (n-1)/5;
        c = (n-1)/15;
        
        sum3 = 3*a*(a+1)/2;
        sum5 = 5*b*(b+1)/2;
        sum15 = 15*c*(c+1)/2;
        sum = sum3 + sum5 - sum15;
        printf("%lld\n", sum);
        t--;
    }
    return 0;
}