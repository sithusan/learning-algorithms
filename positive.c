//
//  positive.c
//  
//
//  Created by Si Thu San on 18/07/2021.
//

#include <cs50.h>
#include <stdio.h>

//prototype

int get_positive_int(void);

int main(void){
    int i = get_positive_int();
    printf("%i\n",i);
}

int get_positive_int(void){
    int n;
    do{
        n = get_int("Positive Integer: ");
    }
    while(n<1);
    return n;
}
