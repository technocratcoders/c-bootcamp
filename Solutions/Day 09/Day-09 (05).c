/*
---------- TECHNOCRAT CODERS ----------
C-Language Training Bootcamp --> Day-09

Q.5) Write a program to check whether a triangle is possible or not by entering their sides.
*/

#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter the three sides of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if((a+b > c) && (b+c > a) && (c+a > b))
        printf("Triangle is possible");
    else
        printf("Triangle is not possible");
    
    return 0;
}
