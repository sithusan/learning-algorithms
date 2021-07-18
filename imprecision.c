//
//  imprecision.c
//  
//
//  Created by Si Thu San on 18/07/2021.
//

#include <cs50.h>
#include <stdio.h>

int main(void){
    float x = get_float("x: ");
    float y = get_float("y: ");
    
    printf("%.50f\n", x / y);
}
