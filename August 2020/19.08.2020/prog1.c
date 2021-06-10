#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int spc(char you, char comp){
    if(you == comp){
        return 0;
    }
    if(you=='s' && comp=='c'){
        return 1;
    }
    else if(you=='c' && comp=='s'){
        return -1;
    }

    if(you=='s' && comp=='p'){
        return 1;
    }
    else if(you=='p' && comp=='s'){
        return -1;
    }

    if(you=='c' && comp=='p'){
        return 1;
    }
    else if(you=='p' && comp=='s'){
        return -1;
    }

}
int main(){
    char you, comp;
    srand(time(0));
    int number = rand()%100 + 1;

    if(number<33){
        comp = 's';
    }
    else if(number>33 && number<66){
        comp='p';
    }
    else{
        comp='c';
    }
    
    printf("Enter 's' for stone, 'p' for paper and 'c' for scissor\n");
    scanf("%c", &you);
    int result = spc(you, comp);
    if(result ==0){
        printf("Game draw!\n");
    }
    else if(result==1){
        printf("You win!\n");
    }
    else{
        printf("You Lose!\n");
    }
    printf("You chose %c and computer chose %c. ", you, comp);
    return 0;
}
