//
//  cash.c
//  
//
//  Created by Si Thu San on 28/07/2021.
//

#include <stdio.h>
#include <cs50.h>
#include <math.h>

//prototype
float get_positive_float();

int main(void){
    float n = get_positive_float();
    float dollarToFloat = round(n * 100);
    
    int counter = 0;
    
    while (dollarToFloat > 0) {
        printf("%f\n",dollarToFloat);
        if(dollarToFloat >= 25){
            dollarToFloat -= 25;
            counter++;
        }else if(dollarToFloat >= 10){
            dollarToFloat -= 10;
            counter++;
        }else if(dollarToFloat >= 5){
            dollarToFloat -= 5;
            counter++;
        }else{
            dollarToFloat -= 1;
            counter++;
        }
    }
    
    printf("The total counter is %i \n",counter);
}

float get_positive_float(){
    float n;
    do{
        n = get_float("Enter Dollers :");
    }while(n < 0);
    return n;
}
