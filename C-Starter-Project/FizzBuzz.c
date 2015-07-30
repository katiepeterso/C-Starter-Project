#include <stdio.h>

int main(int argc, const char * argv[]) {
    int number = 1;
    while (number < 101)
    {
        if (number % 3 == 0)
        {
            if (number % 5 == 0)
            {
                printf("FizzBuzz\n");
            }
            else
            {
                printf("Fizz\n");
            }
        }
        else if (number % 5 == 0)
        {
            printf("Buzz\n");
        }
        else
        {
            printf("%d\n", number);
        }
        number++;
    }
    printf("Hello, World!\n");
    return 0;
}
