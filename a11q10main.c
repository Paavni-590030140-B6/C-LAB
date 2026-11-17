
#include <stdio.h>
extern void deposit(int);
extern void withdraw(int);
extern void display();
int main()
{
    int d,w;
    display();
    printf("Enter deposit amount: ");
    scanf("%d",&d);
    if(d>0)
        deposit(d);
    else
        printf("Invalid deposit amount\n");
    printf("Enter withdrawal amount: ");
    scanf("%d",&w);
    withdraw(w);
    display();
    return 0;
}
