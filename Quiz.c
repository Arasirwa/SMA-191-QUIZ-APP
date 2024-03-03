#include <stdio.h>
#include <conio.h>   // Library for console input/output
#include <windows.h> // Library for Windows API functions
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <direct.h> // Library for directory manipulation

// Function to display game instructions
void help()
{
       system("cls"); // Clear the screen
       printf("\n\n\n\tThis game is very easy to play. You'll be asked some general");
       printf("\n\n\tquestions and the right answer is to be chosen among");
       printf("\n\n\tthe four choices provided. Your score will be calculated at the");
       printf("\n\n\tend. Remember that the more quicker you give answer the more");
       printf("\n\n\tscore you will secure. Your score will be calculated and displayed");
       printf("\n\n\tat the end.");
       printf("\n\n\t Good Luck!!!");
}

int main()
{
       int countq, countr;    // Variables for counting questions and correct answers
       int r, i;              // Random number and loop counter
       int pa;                // Placeholder variable
       int nq[6];             // Array to store question numbers
       int w;                 // Loop counter
       float score;           // Variable to store player's score
       char choice;           // Variable to store user's choice
       char playername[25];   // Variable to store player's name
       time_t initial, final; // Variables to store initial and final time

       system("cls"); // Clear the screen

mainhome:
       system("cls"); // Clear the screen
       puts("\n\t\t WELCOME TO QUIZ APP.ORG");
       puts("\n\t\t___________________________");
       puts("\n\t\t ENTER 'S' TO START THE GAME");
       puts("\n\t\t ENTER 'H' FOR HELP");
       puts("\n\t\t ENTER 'E' TO EXIT THE GAME");
       puts("\n\t\t___________________________\n\n\t\t");

       choice = toupper(getch()); // Get user's choice and convert it to uppercase

       if (choice == 'H') // If user chooses help
       {
              help();        // Display game instructions
              getch();       // Wait for user input
              goto mainhome; // Go back to the main menu
       }
       else if (choice == 'E') // If user chooses to exit
       {
              printf("\n\n\t\tThank you for playing! Goodbye!\n\n"); // Display exit message
              return 0;                                              // Exit the program
       }
       else if (choice == 'S') // If user chooses to start the game
       {
              system("cls"); // Clear the screen
              printf("\n\n\n\t\t\tEnter your name...");
              printf("\n\t\t\t(only one word)\n\n\t\t\t");
              gets(playername); // Get player's name

       home:
              system("cls");        // Clear the screen
              initial = time(NULL); // Get current time
              countq = countr = 0;  // Initialize question and correct answer counters
              i = 1;                // Initialize loop counter

       start:
              srand(time(NULL));      // Seed the random number generator
              r = rand() % 23 + 1;    // Generate a random number between 1 and 23
              nq[i] = r;              // Store the question number
              for (w = 0; w < i; w++) // Check if the question has already been asked
                     if (nq[w] == r)
                            goto start; // If it has been asked, generate another random number

              // Display question based on random number
              switch (r)
              // Each case represents a different question
              // The player's answer is checked and the result is displayed
              {
                     
              case 1:
                  printf("\n\n\nWhat is the capital of Australia?");
                  printf("\n\nA.Sydney\tB.Canberra\n\nC.Melbourne\tD.Brisbane\n\n");
                  countq++;
                  if (toupper(getch()) == 'B')
                  {
                         printf("\n\nCorrect!!!");
                         countr++;
                         break;
                  }
                  else
                  {
                         printf("\n\nWrong!!! The correct answer is B.Canberra");
                         break;
                  }

            case 2:
                  printf("\n\n\nWho wrote the novel '1984'?");
                  printf("\n\nA. George Orwell\tB. Aldous Huxley\n\nC. F. Scott Fitzgerald\tD. Ernest Hemingway\n\n");
                  countq++;
                  if (toupper(getch()) == 'A')
                  {
                        printf("\n\nCorrect!!!");
                        countr++;
                        break;
                  }
                  else
                  {
                         printf("\n\nWrong!!! The correct answer is A. George Orwell");
                         break;
                  }

              case 3:
                  printf("\n\n\nWhat is the chemical symbol for sodium?");
                  printf("\n\nA. Na\tB. So\n\nC. Sn\tD. Si\n\n");
                  countq++;
                  if (toupper(getch()) == 'A')
                  {
                         printf("\n\nCorrect!!!");
                         countr++;
                         break;
                  }
                  else
                  {
                         printf("\n\nWrong!!! The correct answer is A. Na");
                         break;
                  }

              case 4:
                  printf("\n\n\nWho painted the Mona Lisa?");
                  printf("\n\nA. Leonardo da Vinci\tB. Vincent van Gogh\n\nC. Pablo Picasso\tD. Michelangelo\n\n");
                  countq++;
                  if (toupper(getch()) == 'A')
                  {
                         printf("\n\nCorrect!!!");
                         countr++;
                         break;
                  }
                  else
                  {
                         printf("\n\nWrong!!! The correct answer is A. Leonardo da Vinci");
                         break;
                  }
              
              case 5:
                  printf("\n\n\nWhat is the largest planet in our solar system?");
                  printf("\n\nA. Earth\tB. Jupiter\n\nC. Saturn\tD. Mars\n\n");
                  countq++;
                  if (toupper(getch()) == 'B')
                  {
                      printf("\n\nCorrect!!!");
                      countr++;
                      break;
                  }
                  else
                  {
                      printf("\n\nWrong!!! The correct answer is B. Jupiter");
                      break;
                  }
              
              case 6:
                  printf("\n\n\nIn what year did the French Revolution begin?");
                  printf("\n\nA. 1789\tB. 1815\n\nC. 1776\tD. 1799\n\n");
                  countq++;
                  if (toupper(getch()) == 'A')
                  {
                      printf("\n\nCorrect!!!");
                      countr++;
                      break;
                  }
                  else
                  {
                      printf("\n\nWrong!!! The correct answer is A. 1789");
                      break;
                  }

              case 7:
                     printf("\n\n\nWhich country was the winner of Cricket World Cup 1987?");
                     printf("\n\nA.West Indies\tB.India\n\nC.Australia\tD.England\n\n");
                     countq++;
                     if (toupper(getch()) == 'C')
                     {
                            printf("\n\nCorrect!!!");
                            countr++;
                            break;
                     }
                     else
                     {
                            printf("\n\nWrong!!! The correct answer is C.Australia");
                            break;
                     }

              case 8:
                     printf("\n\n\nWhat is the height of Mount everest in feet?");
                     printf("\n\nA.8648\tB.6648\n\nC.8884\tD.8848\n\n");
                     countq++;
                     if (toupper(getch()) == 'D')
                     {
                            printf("\n\nCorrect!!!");
                            countr++;
                            break;
                     }
                     else
                     {
                            printf("\n\nWrong!!! The correct answer is D.8848");
                            break;
                     }

              case 9:
                     printf("\n\n\nWhat is the capital city of Denmark?");
                     printf("\n\nA.Copenhagen\tB.Helsinki\n\nC.Rome\t\tD.Madrid\n\n");
                     countq++;
                     if (toupper(getch()) == 'A')
                     {
                            printf("\n\nCorrect!!!");
                            countr++;
                            break;
                     }
                     else
                     {
                            printf("\n\nWrong!!! The correct answer is A.Copenhagen");
                            break;
                     }

              case 10:
                     printf("\n\n\nWhat is the largest ocean on Earth?");
                     printf("\n\nA. Atlantic Ocean\tB. Indian Ocean\n\nC. Arctic Ocean\tD. Pacific Ocean\n\n");
                     countq++;
                     if (toupper(getch()) == 'D')
                     {
                            printf("\n\nCorrect!!!");
                            countr++;
                            break;
                     }
                     else
                     {
                            printf("\n\nWrong!!! The correct answer is D. Pacific Ocean");
                            break;
                     }

              case 11:
                     printf("\n\n\nWhat is the chemical symbol for oxygen?");
                     printf("\n\nA. O2\tB. H2O\n\nC. CO2\tD. O\n\n");
                     countq++;
                     if (toupper(getch()) == 'D')
                     {
                            printf("\n\nCorrect!!!");
                            countr++;
                            break;
                     }
                     else
                     {
                            printf("\n\nWrong!!! The correct answer is D. O");
                            break;
                     }
                     
             case 12:
                     printf("\n\n\nWhat is the currency of Japan?");
                     printf("\n\nA. Yen\tB. Euro\n\nC. Dollar\tD. Yuan\n\n");
                     countq++;
                     if (toupper(getch()) == 'A')
                     {
                            printf("\n\nCorrect!!!");
                            countr++;
                            break;
                     }
                     else
                     {
                            printf("\n\nWrong!!! The correct answer is A. Yen");
                            break;
                     }

              case 13:
                      printf("\n\n\nWhat is the chemical symbol for iron?");
                      printf("\n\nA. Fe\tB. Ir\n\nC. In\tD. Au\n\n");
                      countq++;
                      if (toupper(getch()) == 'A')
                      {
                            printf("\n\nCorrect!!!");
                            countr++;
                            break;
                      }
                      else
                      {
                            printf("\n\nWrong!!! The correct answer is A. Fe");
                            break;
                      }
                     
              case 14:
                     printf("\n\n\nWhat is the largest mammal in the world?");
                     printf("\n\nA. African Elephant\tB. Blue Whale\n\nC. Giraffe\tD. Hippopotamus\n\n");
                     countq++;
                     if (toupper(getch()) == 'B')
                     {
                            printf("\n\nCorrect!!!");
                            countr++;
                            break;
                     }
                     else
                     {
                            printf("\n\nWrong!!! The correct answer is B. Blue Whale");
                            break;
                     }

             case 15:
                     printf("\n\n\nWho invented the telephone?");
                     printf("\n\nA. Alexander Graham Bell\tB. Thomas Edison\n\nC. Nikola Tesla\tD. Guglielmo Marconi\n\n");
                     countq++;
                     if (toupper(getch()) == 'A')
                     {
                            printf("\n\nCorrect!!!");
                            countr++;
                            break;
                     }
                     else
                     {
                            printf("\n\nWrong!!! The correct answer is A. Alexander Graham Bell");
                            break;
                     }

              case 16:
                     printf("\n\n\nWho was awarded the youngest player award in Fifa World Cup 2006?");
                     printf("\n\nA.Wayne Rooney\tB.Lucas Podolski\n\nC.Lionel Messi\tD.Christiano Ronaldo\n\n");
                     countq++;
                     if (toupper(getch()) == 'B')
                     {
                            printf("\n\nCorrect!!!");
                            countr++;
                            break;
                     }
                     else
                     {
                            printf("\n\nWrong!!! The correct answer is B.Lucas Podolski");
                            break;
                     }

              case 17:
                     printf("\n\n\nWhich planet is known as the 'Red Planet'?");
                     printf("\n\nA. Venus\tB. Mars\n\nC. Jupiter\tD. Mercury\n\n");
                     countq++;
                     if (toupper(getch()) == 'B')
                     {
                            printf("\n\nCorrect!!!");
                            countr++;
                            break;
                     }
                     else
                     {
                            printf("\n\nWrong!!! The correct answer is B. Mars");
                            break;
                     }

              case 18:
                     printf("\n\n\nWhat is the chemical symbol for nitrogen?");
                     printf("\n\nA. N\tB. Ni\n\nC. Na\tD. Ne\n\n");
                     countq++;
                     if (toupper(getch()) == 'A')
                     {
                            printf("\n\nCorrect!!!");
                            countr++;
                            break;
                     }
                     else
                     {
                            printf("\n\nWrong!!! The correct answer is A. N");
                            break;
                     }
                     
             case 19:
                     printf("\n\n\nWho discovered the law of gravity?");
                     printf("\n\nA.Isaac Newton\tB.Albert Einstein\n\nC.Galileo Galilei\tD.Johannes Kepler\n\n");
                     countq++;
                     if (toupper(getch()) == 'A')
                     {
                            printf("\n\nCorrect!!!");
                            countr++;
                            break;
                     }
                     else
                     {
                            printf("\n\nWrong!!! The correct answer is A.Isaac Newton");
                            break;
                     }

              case 20:
                     printf("\n\n\nWhich city is known at 'The City of Seven Hills'?");
                     printf("\n\nA.Rome\tB.Vactican City\n\nC.Madrid\tD.Berlin\n\n");
                     countq++;
                     if (toupper(getch()) == 'A')
                     {
                            printf("\n\nCorrect!!!");
                            countr++;
                            break;
                     }
                     else
                     {
                            printf("\n\nWrong!!! The correct answer is A.Rome");
                            break;
                     }

              case 21:
                     printf("\n\n\nWhat is the capital of Italy?");
                     printf("\n\nA. Rome\tB. Paris\n\nC. Madrid\tD. Berlin\n\n");
                     countq++;
                     if (toupper(getch()) == 'A')
                     {
                            printf("\n\nCorrect!!!");
                            countr++;
                            break;
                     }
                     else
                     {
                            printf("\n\nWrong!!! The correct answer is A. Rome");
                            break;
                     }

              case 22:
                     printf("\n\n\nWho was the first woman to win a Nobel Prize?");
                     printf("\n\nA. Marie Curie\tB. Mother Teresa\n\nC. Malala Yousafzai\tD. Rosa Parks\n\n");
                     countq++;
                     if (toupper(getch()) == 'A')
                     {
                            printf("\n\nCorrect!!!");
                            countr++;
                            break;
                     }
                     else
                     {
                            printf("\n\nWrong!!! The correct answer is A. Marie Curie");
                            break;
                     }

              case 23:
                     printf("\n\n\nName the country where no mosquito is found?");
                     printf("\n\nA.Germany\tB.Spain\n\nC.Japan\tD.France\n\n");
                     countq++;
                     if (toupper(getch()) == 'D')
                     {
                            printf("\n\nCorrect!!!");
                            countr++;
                            break;
                     }
                     else
                     {
                            printf("\n\nWrong!!! The correct answer is D.France");
                            break;
                     }
              }
              i++;        // Increment loop counter
              if (i <= 5) // If 5 questions have not been asked yet, go to the next question
                     goto start;
              final = time(NULL); // Get final time
              // Calculate player's score based on number of correct answers and time taken
              score = (float)countr / countq * 100 - difftime(final, initial) / 3;
              if (score < 0)
                     score = 0; // If score is negative, set it to 0
                                // Display player's score and feedback based on their performance
              printf("\n\n\nYour Score: %.2f", score);
              if (score == 100)
                     printf("\n\nGREAT WORK, KEEP IT UP!!");
              else if (score >= 80 && score < 100)
                     printf("\n\nVERY GOOD!!");
              else if (score >= 60 && score < 80)
                     printf("\n\nGOOD!");
              else if (score >= 40 && score < 60)
                     printf("\n\nSATISFACTORY, TRY AGAIN");
              else
                     printf("\n\nPRACTICE MORE AND COME BACK!");
              puts("\n\n NEW GAME?(Y/N)");
              if (toupper(getch()) == 'Y')
                     goto home;
       }
       else
       {
              printf("\n\n\t\t  Enter the right key\n\n\t\t  ");
              Sleep(700);    // Pause for 700 milliseconds
              goto mainhome; // Go back to the main menu
       }
       return 0; // Exit the program
}
