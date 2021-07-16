#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
void easy();
void hard();
void easy_score();
void hard_score();
void delay();
void help();
int main(){
    char option;
    char option_play;
    char score_option;
    SYSTEMTIME str_t;
    GetSystemTime(&str_t);
    system("cls");
    printf("\n\t\t\t\t\t Welcome To Quiz Game Show\t\n  ");
    printf("\n\t\t\t\t\t    Md.Mahmudul Haque\t\t  ");
    printf("\n\t\t\t\t\t     ID:16173103001 \t\n  ");
   printf("\n\t\t\t\t\t      \t\n  ");
    printf("\n\t\t\t\t\t     Date:%d-%d-%d ",str_t.wDay,str_t.wMonth,str_t.wYear);
    printf("\n\t\t\t\t\t Press Any Key To Continue.....\t  ");
    getch();
menu:
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tPress 'P' to Play The Game\n\n");
    printf("\t\t\t\t\tPress 'S' to See Previous Scores\n\n");
    printf("\t\t\t\t\tPress 'H' For Help\n\n");
    printf("\t\t\t\t\tPress 'E' to Exit\n\n");
    option = getch();
    if(toupper(option) == 'P'){
        option_select:
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tFor Easy Difficulty Press 'E'\n\n");

        printf("\t\t\t\t\tTo Go Back To Menu Press 'B'\n\n");
        option_play = getch();
        if(toupper(option_play) == 'E'){
            easy();
            goto menu;
        }

        else if(toupper(option_play) == 'B'){
            goto menu;
        }
        else
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tError input, Please Enter The Right Command!!\n");
            delay(1000);
            goto option_select;
    }
    else if ((toupper(option) == 'S')){
        score:
        system("cls");
         printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tPlease Select Difficulty Level:\n");

         printf("\t\t\t\t\t________________________________\n\n");
        printf("\t\t\t\t\tFor Easy Press 'E'\n\n");
         printf("\t\t\t\t\tFor Hard Press 'H'\n\n");

        printf("\t\t\t\t\tTo Go Back To Menu Press 'B'\n\n");
        score_option = getch();
        if(toupper(score_option) == 'E'){
            easy_score();
            goto score;
        }
        else if(toupper(score_option) == 'H'){
            hard_score();
            goto score;
        }
        else if(toupper(score_option) == 'B'){
            goto menu;
        }
        else
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tError input, Please Enter The Right Command !!\n");
            delay(1000);
            goto score;
        }
    else if ((toupper(option) == 'E')){
        exit(0);
    }
    else if(toupper(option) == 'H'){
        system("cls");
        help();
        printf("\n\n\n\n\n\t\t\t\t\tPress Any Key To Go Back To Menu......");
        getch();
        goto menu;
    }
    else{
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tError input, Please Enter The Right Command !!\n");
        delay(1000);
        goto menu;
    }
return 0;
}
void easy(){
    system("cls");
    char name[100];
    int i  , r1;
    float score = 0;
    printf("Please,Enter Your Name : ");
    gets(name);
   // score=0;
  for(i=1;i<=6;i++){
        r1=rand() % 6;
         system("cls");
     r1=i;
        switch(r1){
            case 1:
                system("cls");
                printf("\n\n 1.Which shape does not have four sides?");
                printf("\n\nA.Rectangle\t\tB.Parallelogram\n\nC.Rhombus\t\tD.Triangle");
                if (toupper(getch())=='D'){
                    printf("\n\nCorrect!!!");
                     score++;
                    //score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is : D.Triangle");
                  score--;
          score= score+0.5;
                    getch();
                    break;
                }
            case 2:
                system("cls");
                printf("\n\n 2.Who was the first person to step on the moon?");
                printf("\n\nA.Alan Shepard\t\tB.Neil Armstrong\n\nC.Buzz Aldrin\t\tD.John Glenn");
                if (toupper(getch())=='B'){
                    printf("\n\nCorrect!!!");
                    score++;
                    //score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is : B.Neil Armstrong");
                 score--;
                   score= score+0.5;
                    getch();
                    break;
                }
            case 3:
                system("cls");
                printf("\n\n 3.Which force keeps you down to earth?");
                printf("\n\nA.Friction\t\tB.Magnetic\n\nC.Gravity\t\tD.Electric");
                if (toupper(getch())=='C'){
                    printf("\n\nCorrect!!!");
                      score++;
                    //score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is : C.Gravity");
                 score--;
                score= score+0.5;
                    getch();
                    break;
                }
            case 4:
                system("cls");
                printf("\n\n 4.How many years is a century?");
                printf("\n\nA.100\t\tB.50\n\nC.10\t\tD.1000");
                if (toupper(getch())=='A'){
                    printf("\n\nCorrect!!!");
                    score++;
                    //score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is : A.100");
                score--;
                 score= score+0.5;
                    getch();
                    break;
                }
            case 5:
                system("cls");
                printf("\n\n 5.What planet is the closest to the sun?");
                printf("\n\nA.Venus\t\tB.Mars\n\nC.Earth\t\tD.Mercury");
                if (toupper(getch())=='D'){
                    printf("\n\nCorrect!!!");
                    score++;
                    //score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is : D.Mercury");
                  score--;
                   score= score+0.5;
                    getch();
                    break;
                }
                case 6:
                system("cls");
                printf("\n\n 6.What kind of animal is a dolphin?");
                printf("\n\nA.Mammal\t\tB.Fish\n\nC.Reptile\t\tD.Amphibian");
                if (toupper(getch())=='A'){
                    printf("\n\nCorrect!!!");
                    //score++;
                  score++;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is : A.Mammal");
             score--;
                score= score+0.5;
                   getch();
                    break;
                }
        }
    }

    system("cls");
    printf("score is : %0.1f" , score);
    printf("\t\t\t\t\t \n\n");
    getch();
    FILE *fp;
    fp = fopen("easyscore.txt", "a");
    if(fp == NULL){
        printf("There is no score.");
        return;
    }
    fprintf(fp, "%s\t%f\n", name , score);

    fclose(fp);
    if(score>=2.5){
             hard();

    }
    else{
      main();
    }



}
void easy_score(){
    typedef struct{
    char name[100];
   float sco;
    }hscore;
   int count=0 , j;
   int status;
    hscore hs[1000];
    system("cls");
    FILE *fp;
    fp=fopen("easyscore.txt","r");
    while(1){
        status = fscanf(fp,"%s%f",&hs[count].name,&hs[count].sco);
        if (status ==-1 ){
            break;
        }
        count++;
    }
    fclose(fp);
    printf("\n\n\t\t\t\tName\t\t\t\t\tScore\n");
    printf("\t\t\t\t_____________________________________________\n");
    for(j=0;j<count;j++){
        printf("\n\t\t\t\t%s\t\t\t\t\t %f\n",hs[j].name,hs[j].sco);;
    }
    getch();
}
void hard(){
    system("cls");
    char name[100];
    int i , r;
    float score=0;
     printf(" you are in hard level Please,Enter Your Name : ");

    gets(name);
   // score=0;
    for(i=1;i<=6;i++){
        r=rand() % 6;
         system("cls");
     r=i;
        switch(r){
                 case 1:
                system("cls");
                printf("\n\n 1.What is Shakespeare's shortest play?");
                printf("\n\nA.Macbeth\t\t\tB.Othello\n\nC.The Comedy of Errors\t\tD.Hamlet");
                if (toupper(getch())=='C'){
                    printf("\n\nCorrect!!!");
                   score=score+1;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is : C.The Comedy of Errors");
                      score--;
                score= score+0.5;
                    getch();
                    break;
                }
                 case 2:
                system("cls");
                printf("\n\n 2.Who designed the Eiffel Tower?");
                printf("\n\nA.Marc Eiffel\t\tB.Maurice Eiffel\n\nC.Eugène Eiffel\t\tD.Gustave Eiffel");
                if (toupper(getch())=='D'){
                    printf("\n\nCorrect!!!");
                  score=score+1;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is : D.Gustave Eiffel");
                      score--;
                score= score+0.5;
                    getch();
                    break;
                }
                 case 3:
                system("cls");
                printf("\n\n 3.Who has won the most Academy Awards?");
                printf("\n\nA.Katharine Hepburn\t\tB.Audrey Hepburn\n\nC.Howard Hughes\t\t\tD.Henry Fonda");
                if (toupper(getch())=='A'){
                    printf("\n\nCorrect!!!");
                   score=score+1;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is : A.Katharine Hepburn");
                      score--;
                score= score+0.5;
                    getch();
                    break;
                }
                 case 4:
                system("cls");
                printf("\n\n 4.Who is the author of the novel War and Peace?");
                printf("\n\nA.Fyodor Dostoevsky\t\tB.Leo Tolstoy\n\nC.Alexander Pushkin\t\tD.Anton Chekhov");
                if (toupper(getch())=='B'){
                    printf("\n\nCorrect!!!");
                   score=score+1;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is : B.Leo Tolstoy");
                      score--;
                score= score+0.5;
                    getch();
                    break;
                }
                 case 5:
                system("cls");
                printf("\n\n 5.What is the largest moon of Saturn called?");
                printf("\n\nA.Titan\t\t\tB.Enceladus\n\nC.Europa\t\tD.Six");
                if (toupper(getch())=='A'){
                    printf("\n\nCorrect!!!");
                 score=score+1;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is : A.Titan");
                      score--;
                score= score+0.5;
                    getch();
                    break;
                }
                case 6:
                system("cls");
                printf("\n\n 6.How many countries make up Africa?");
                printf("\n\nA.41\t\tB.54\n\nC.65\t\tD.47");
                if (toupper(getch())=='B'){
                    printf("\n\nCorrect!!!");
                    score=score+1;
                    getch();
                    break;
                }
                else{
                    printf("\n\nWrong!!! The correct answer is : B.54");
                      score--;
                score= score+0.5;
                    getch();
                    break;
                }
        }
    }
    system("cls");
    printf("score is : %.1f" , score);
    getch();
    FILE *fp;
    fp = fopen("hardscore.txt", "a");
    if(fp == NULL){
        printf("There is no score.");
        return;
    }
    fprintf(fp, "%s\t %.1f\n", name , score);
    fclose(fp);
}
void hard_score(){
    typedef struct{
    char name[100];
  float sco;
    }hscore;
    int count=0 , j;
    int status;
    hscore hs[1000];
    system("cls");
    FILE *fp;
    fp=fopen("hardscore.txt","r");
    while(1){
        status = fscanf(fp,"%s %f",&hs[count].name,&hs[count].sco);
        if (status ==-1 ){
            break;
        }
        count++;
    }
    fclose(fp);
    printf("\n\n\t\t\t\tName\t\t\t\t\tScore\n");
    printf("\t\t\t\t_____________________________________________\n");
    for(j=0;j<count;j++){
        printf("\n\t\t\t\t%s\t\t\t\t\t %.1f\n",hs[j].name,hs[j].sco);
    }
    getch();
}
void help(){
    printf("\n\n\t\t\t\t\t\tHELP");
    printf("\n \t\t\t\t\____________________________________\n\n");
    printf("\n\n >> There Are Two Difficulty Levels!");
    printf("\n\n >> Questions Are Based On General Knowledge!");
    printf("\n\n >> You Will Be Asked Total 6 Questions!" );
    printf("\n\n >> For Each Right Answer Will Be Awarded 1 Point!");
    printf("\n\n >> You Will Be Given 4 Options And You Have To Press 'A','B' ,'C' or 'D' For The Right Option!");
    printf("\n\n >> You Will Be Asked Questions Continuously If You Keep Giving The Right Answers!");
    printf("\n\n >> There Is 0.5 Point Will Be Reduced For Each Wrong Answer!");

}
void delay(unsigned int mseconds){
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
