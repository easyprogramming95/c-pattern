/**
 * @file        program5.c
 * @author      Dhruv Ghadiali (easy.programming95@gmail.com)
 * 
 * @brief 
 * @version     0.1
 * @date        10 January 2023
 * 
 * @copyright   Copyright (c) 2023
 * @details     Program for print following pattern
 * 
 *          +
 *         + +
 *        + + +
 *       + + + +
 *      + + + + +
 */

#include <stdio.h>

int main()
{  
    printf("\n \n \n");
    printf("Program 5 \n \n \n");

    int endIndex = 10;

    for(int index1 = 0; index1 < endIndex; index1++){
        for(int index2 = 0; index2 < endIndex - index1 ; index2++){
            printf(" ");
        }

        for(int index3 = 0; index3 < index1; index3++){
            printf("+ ");
        }

        printf("\n");
    }

    printf("\n \n \n");
    return 0;
}