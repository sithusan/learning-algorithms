//
//  mario.c
//  
//
//  Created by Si Thu San on 18/07/2021.
//
#include <cs50.h>
#include <stdio.h>

int main(void){
    int n;
    do{
        n = get_int("Width: ");
    }
    while(n < 1);
   
    for(int i = 0; i < n ; i++){
        for(int j =0; j < n; j++){
            printf("#");
        }
        printf("\n");
    }
}
