//
//  week1-problem-set-mario.c
//  
//
//  Created by Si Thu San on 18/07/2021.
//

#include <cs50.h>
#include <stdio.h>

//prototype
int get_positive_int(void);

int main(void){
    int n = get_positive_int();
    int space = n;
    for(int i = 0; i < n; i++){
        for(int x = 1; x < space; x++){
            printf(" ");
        }
        space--;
        for(int j = 0; j <= i; j++){
            printf("#");
        }
        
        printf("\n");
    }
    
}

int get_positive_int(void){
    int n;
    do{
        n = get_int("Positive Integer: ");
    }while(n < 1 || n > 8);
    
    return n;
}
