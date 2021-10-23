//
//  scrabble.c
//  
//
//  Created by Si Thu San on 23/10/2021.
//

#include <stdio.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
int UPPER_CASE_ASCII[] = {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 89, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90};

int compute_score(string word);
int find_index(int value);
void show_result(int score1,int score2);

int main(void){
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");
    
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);
    
    show_result(score1,score2);
}

int compute_score(string words){
    int total = 0;
    for (int i = 0 ; i < strlen(words); i++) {
        int word = toupper(words[i]);
        int arrayIndex = find_index(word);
       
        if(arrayIndex != -1){
            total += POINTS[arrayIndex];
        }
    }
    return total;
}

int find_index(int value)
{
    int n = sizeof(UPPER_CASE_ASCII) / sizeof(UPPER_CASE_ASCII[0]);
    for (int i = 0; i < n; i++) {
        if(UPPER_CASE_ASCII[i] == value){
            return i;
        }
    }
    return -1;
}

void show_result(int score1,int score2){
    
    if(score1 > score2){
        printf("Player One Win!\n");
    }else if(score2 > score1){
        printf("Player Two Win!\n");
    }else{
        printf("Tie!\n");
    }
}
