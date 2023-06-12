#include <stdio.h>
#include <stdlib.h>

int main(void)



{
    int number;

    printf("Enter your number: ");
    scanf("%d", &number);

    int count = 10;

    while(count >= 1){

        int product = number * count;
        printf("%d*%d = %d\n", number, count, product);
        count--;
    }
return 0;
}


