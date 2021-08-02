//
//  credit.c
//  
//
//  Created by Si Thu San on 01/08/2021.
//

#include <stdio.h>
#include <cs50.h>

//prototype
long get_positive_long();
bool checkCardLength(int counter);
int getCheckSum(long card_number);
int getStartingDigit(long card_number);
void showCardType(int startNumber);

int main(void){
    long card_number = get_positive_long();
    
    int counter = 0;
    long cc = card_number;
    while (cc > 0) {
        cc = cc / 10;
        counter++;
    }
    bool validOrNot = checkCardLength(counter);
    
    if(!validOrNot){
        return printf("Invalid\n");
    }
    
    if(getCheckSum(card_number) % 10 != 0){
        return printf("Invalid\n");
    }
    
    int startNumber = getStartingDigit(card_number);
    
    showCardType(startNumber);
    
}

void showCardType(int start){
    
    if ((start / 10 == 5) && (0 < start % 10 && start % 10 < 6)){
        printf("MASTERCARD\n");
    }else if((start / 10 == 3) && (start % 10 == 4 || start % 10 == 7)) {
        printf("AMEX\n");
    }else if (start / 10 == 4){
        printf("VISA\n");
    }else{
        printf("INVALID\n");
    }
        
}
int getStartingDigit(long card_number){
    long start = card_number;
    do{
        start = start / 10;
    }while (start > 100);
    return start;
}

int getCheckSum(long card_number){
    int sum1 = 0;
        int sum2 = 0;
        long x = card_number;
        int total = 0;
        int mod1;
        int mod2;
        int d1;
        int d2;
        do
        {
            // Remove last digit and add to sum1
            mod1 = x % 10;
            x = x / 10;
            sum1 = sum1 + mod1;
            // Remove second last digit
            mod2 = x % 10;
            x = x / 10;
            // Double second last digit and add digits to sum2
            mod2 = mod2 * 2;
            d1 = mod2 % 10;
            d2 = mod2 / 10;
            sum2 = sum2 + d1 + d2;
        }
        while (x > 0);
        total = sum1 + sum2;
    return total;
}

bool checkCardLength(int counter){
    if(counter == 13 || counter == 15 || counter == 16){
        return true;
    }
    return false;
}

long get_positive_long(){
    long n;
    do{
        n = get_long("Enter Card Number :");
    }while(n <= 0);
    return n;
}
