//
//  main.c
//  C-Starter-Project
//
//  Created by Daniel Mathews on 2015-02-02.
//  Copyright (c) 2015 com.lighthouse-labs. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int number = 1;
    int nezz,fuzz,bizz;
    printf("Input three integers for Nezz, Fuzz and Bizz");
    if (scanf("%d%d%d", &nezz, &fuzz, &bizz) == 3)
    {
    while (number <= nezz)
    {
        if (number % fuzz == 0)
        {
            if (number % bizz == 0)
            {
                printf("FuzzBizz\n");
            }
            else
            {
                printf("Fuzz\n");
            }
        }
        else if (number % bizz == 0)
        {
            printf("Bizz\n");
        }
        else
        {
            printf("%d\n", number);
        }
        number++;
    }
    }
    else
        printf("You didn't enter 3 numbers\n");
    printf("Hello, World!\n");
    return 0;
}
