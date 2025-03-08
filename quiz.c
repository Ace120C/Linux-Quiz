#include <stdio.h>
#include <unistd.h>

main()
{
int answerA = 1;
int answerB = 2;
int answerC = 3;
int PlayerAnswer;
int score = 0;
printf("welcome to linux quiz!\n");
sleep(2);
printf("you'll be given 3 options and one of those is correct\n");
sleep(1);
printf("good luck!\n");
sleep(1);
printf("Q1: What does the name [Linux] mean?\n");
sleep(2);
printf("1) Linus + Unix \n");
printf("2) Linus + Minux \n");
printf("3) Lion + Nix \n");
sleep(3);
printf("Your Answer: ");
scanf("%d", &PlayerAnswer);
if (PlayerAnswer == 1) {
 printf("correct!\n");
 score += 1;
} else {
    printf("wrong!\n");
}
sleep(1);

printf("Q2: Which one of these is an init system?\n");
sleep(2);
printf("1) KDE \n");
printf("2) Hyprland \n");
printf("3) OpenRC \n");
sleep(3);
printf("Your Answer: ");
scanf("%d", &PlayerAnswer);
if (PlayerAnswer == 3) {
 printf("correct!\n");
 score += 1;
} else {
    printf("wrong!\n");
}
sleep(1);

printf("Q3: What Exactly is Linux?\n");
sleep(2);
printf("1) an OS \n");
printf("2) a Kernel \n");
printf("3) a Desktop Envirment \n");
sleep(3);
printf("Your Answer: ");
scanf("%d", &PlayerAnswer);
if (PlayerAnswer == 2) {
 printf("correct!\n");
 score += 1;
} else {
    printf("wrong!\n");
}
sleep(1);

printf("Q4: What is Swap?\n");
sleep(2);
printf("1) a Linux Update \n");
printf("2) extra RAM made from the harddrive \n");
printf("3) an error \n");
sleep(3);
printf("Your Answer: ");
scanf("%d", &PlayerAnswer);
if (PlayerAnswer == 2) {
 printf("correct!\n");
 score += 1;
} else {
    printf("wrong!\n");
}
sleep(1);

printf("Q5: What is Steam OS based on?\n");
sleep(2);
printf("1) Arch Linux\n");
printf("2) Debian\n");
printf("3) Fedora\n");
sleep(3);
printf("Your Answer: ");
scanf("%d", &PlayerAnswer);
if (PlayerAnswer == 1) {
 printf("correct!\n");
 score += 1;
} else {
    printf("wrong!\n");
}
sleep(1);

printf("Q6: what does BASH stands for?\n");
sleep(2);
printf("1) Bob Anti Shell\n");
printf("2) Best Arch Shell\n");
printf("3) Bourne Again Shell\n");
sleep(3);
printf("Your Answer: ");
scanf("%d", &PlayerAnswer);
if (PlayerAnswer == 3) {
 printf("correct!\n");
 score += 1;
} else {
    printf("wrong!\n");
}
sleep(1);

printf("Quiz Finished!\n");
sleep(1);
printf("Score: %d\n", score);
sleep(2);
if (score == 1) {
  printf("Rank: Normie\n");
} else if (score == 2) {
printf("Rank: Mid\n");
}else if (score == 3) {
printf("Rank: Above-Average\n");
}else if (score == 4) {
printf("Rank: Based");
}else if (score == 5) {
printf("Rank: Luke Smith\n");
}else if (score == 6) {
printf("Rank: Gigachad\n");
}else {
printf("GET OUT!\n");
}

}
