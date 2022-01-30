/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-09

Q.4) Write a program to check whether there is loss or profit by using cost price and selling price and also calculate its percentage.
*/

#include <stdio.h>

int main() {
    int cp, sp;
    printf("Enter the cost price: ");
    scanf("%d", &cp);
    
    printf("Enter the selling price: ");
    scanf("%d", &sp);
    
    if(sp > cp) {
        
        int profit = sp - cp;
        printf("There is a profit of %d percentage", (profit * 100) / cp);
            
    } else if(cp > sp) {
        
        int loss = cp - sp;
        printf("There is a loss of %d percentage", (loss * 100) / cp);
        
    } else
        printf("There is 0 loss or profit");
    
    return 0;
}
