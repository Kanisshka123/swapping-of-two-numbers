#include<iostream.h>
#include<stdio.h>

int main()
{
 int a,b;
        printf("Enter the value of a: ");
        scanf("%d" , &a);
        print("Enter the vaue of b: ");
        scanf("%d" , &b);
        printf("Before swapping... a: %d, b: %d\n" , a,b);
        a = a+b;
        b = a-b;
        a = a-b;
        printf("After swapping... a: %d, b: %d\n" ,a,b);
        return 0;
}
 
