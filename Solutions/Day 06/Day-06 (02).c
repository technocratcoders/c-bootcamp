#include <stdio.h>
#include <math.h>

int main() {
    int num;
    scanf("%d", &num);
    
    int rem, ans=0, i=0;
    while(n) {
        rem = n%2;
        n/=2;
        ans = (pow(10,i) * rem) + ans;          // reversing the bits
        i++;
    }
    
    printf("%d", ans);
    
    return 0;
}
