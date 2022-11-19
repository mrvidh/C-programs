#include<stdio.h>

int main() {
    int number;
    printf("_____Enter the number whose table you want_____\n");
    scanf("%d",&number);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d \n",number,i,number*i);
    }
    // Subscribe to our channel
    
     return 0;
}
