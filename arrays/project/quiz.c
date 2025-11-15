#include <stdio.h>
#include <ctype.h>

int main(){

    // QUIZ GAME

    printf("==== QUIZ! ====\n\n");

    // array of questions
    char questions[][100] = {"What is the capital of France?\n",
                            "Which data type is used to store whole numbers in C?\n", 
                            "What is 7 x 8?\n",
                            "Which planet is known as the red planet?\n"};
    
    // calculate number of questions
    int questionRows = sizeof(questions) / sizeof(questions[0]);
    
    // array of options for each question
    char options[][100] = {"A. Rome\nB. Paris\nC. Madrid\nD. Berlin",
                          "A. Int\nB. Double\nC. Float\nD. Char",
                          "A. 58\nB. 64\nC. 56\nD. 54",
                          "A. Mercury\nB. Venus\nC. Jupiter\nD. Mars"};
    
    // correct answers
    char answerKey[] = {'B', 'A', 'C', 'D'};
    
    char guess[4] = {0};
    
    int score = 0;
    
    // loop through each question
    for(int i = 0; i < questionRows; i++){
        // display question
        printf("%s", questions[i]);
        
        // options
        printf("%s", options[i]);
        
        // get user's answer
        printf("\nEnter: ");
        scanf(" %c", &guess[i]);
        
        // convert to uppercase
        guess[i] = toupper(guess[i]);
        
        // check if answer is correct
        if(guess[i] == answerKey[i]){
            printf("\nCORRECT!\n\n");
            score++;
        }
        else{
            printf("\nWRONG!\n\n");
        }
    }
    
    // final score
    printf("\nYou answered %d out of 4 questions right!\n", score);
    
    return 0;
}