#include<stdio.h>
int main()
{
    int no;
    printf("Enter your number");
    scanf("%d",&no);

    switch(no%2)
    {
        case 1:printf("%d is an odd number",no);break;
        case 0:printf("%d is an even number",no);break;
    }
}
