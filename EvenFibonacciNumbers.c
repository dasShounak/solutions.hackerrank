#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        long n; 
        scanf("%ld",&n);
        
        if (n < 2) printf("%d", 0);
        
        long a=0, b=1, sum=0;
        while(b<=n) {
            long c = a + b;
            if (c > n) break;
            
            a = b;
            b = c;
            if(c%2==0) sum+=c;
        }
        printf("%ld\n", sum);
    }
    return 0;
}