// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>
void main (){
    int a,b,c;
    printf("Enter three sides of traingle : ");
    scanf("%d %d %d" , &a ,&b, &c);
    if(a == b && b ==c){
        printf("Equilateral Traqingle\n");   
    }
    else if(a == b || b ==c || c == a)
    {
        printf("Isosceles Traingle\n");
    }
    else
    {
        printf("Scalene Traingle\n");
    }
}