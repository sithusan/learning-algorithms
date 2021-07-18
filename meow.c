//
//  meow.c
//  
//
//  Created by Si Thu San on 18/07/2021.
//

#include <stdio.h>

//Prototype
void meow(int n);

int main(void){
    meow(5);
}
void meow(int n){
    for(int i; i < n ;i++){
        printf("meow\n");
    }
        
}
