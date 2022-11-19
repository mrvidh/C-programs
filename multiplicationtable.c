#include<stdio.h>

int main() {
    int number;
    printf("Enter the number whose table you want\n");
    scanf("%d",&number);
    for (int i = 1; i <= 10; i++)
    {
        printf("%dx%d=%d \n",number,i,number*i);
    }
    // Subscribe to our channel
    
     return 0;
}
