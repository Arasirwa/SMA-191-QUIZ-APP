#include <stdio.h>

struct Question {
    const char *question;
    const char *answer;
};

int main() {
    char name[50];
    int choice;
    int points = 0;
    struct Question questions[100];
    int numQuestions = 0;

    printf("Welcome to the Quiz App!\n");

    printf("Please enter your name: ");
    scanf("%10[^\n]%*c", name);

    printf("\nChoose a category:\n");
    printf("1. Countries\n");
    printf("2. Capital Cities\n");
    printf("3. General Kenyan History\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice);


    if (choice == 1) {
        // Questions about countries
        questions[0] = (struct Question){"What is the capital of France?", "Paris"};
        questions[1] = (struct Question){"What is the capital of Japan?", "Tokyo"};
        numQuestions = 2;
    } else if (choice == 2) {
        // Questions about capital cities
        questions[0] = (struct Question){"Which country does Canberra belong to?", "Australia"};
        questions[1] = (struct Question){"What is the capital of Brazil?", "Brasilia"};
        numQuestions = 2;
    } else if (choice == 3) {
        // Questions about Kenyan history
        questions[0] = (struct Question){"Who was the first president of Kenya?", "Jomo Kenyatta"};
        questions[1] = (struct Question){"When did Kenya gain independence?", "1963"};
        numQuestions = 2;
    }

    
    printf("\nLet's start the quiz!\n");
    for (int i = 0; i < numQuestions; i++) {
        
        printf("\nQuestion %d: %s\n", i + 1, questions[i].question);

        
        char userAnswer[50];
        printf("Your answer: ");
        scanf("%49[^\n]%*c", userAnswer); 

        if (strcmp(userAnswer, questions[i].answer) == 0) {
            printf("Correct!\n");
            points++;
        } else {
            printf("Incorrect.\n");
        }
    }

    
    printf("\nThank you for playing, %s!\n", name);
    printf("Total points: %d\n", points);

    return 0;
}
