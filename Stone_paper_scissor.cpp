#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>


int StonePaperScissor(char you, char comp){
	if(you==comp){
			
		
		return 0;
	}
	if(you=='s' && comp=='c'){
		return -1;
	}
	else if(you=='c' && comp=='s'){
		return 1;
	}
	if(you=='s' && comp=='p'){
		return -1;
	}
	else if(you=='p' && comp=='s'){
		return 1;
	}
	if(you=='c' && comp=='p'){
		return 1;
		}
	if(you=='p' && comp=='c'){
		return -1;
		}
	}
	int main(){
		printf("\033[1;35m");
		char you;
		char comp;
		srand(time(0));
		int number = rand()%100+1;
		if(number<33){
			comp='s';
		}
		else if(number>33 && number<66){
		comp='p';
	}
	else{
	
	comp='c';
    }
    printf(" 's' for 'STONE' , 'p' for 'PAPER' , 'c' for 'SCISSOR' !!! \n");
    scanf("%c",&you);
    int result = StonePaperScissor(you, comp);
    if(result == 0){
    	printf(" GAME DRAW !! \n");
    	printf(" 's' for 'STONE' , 'p' for 'PAPER' , 'c' for 'SCISSOR' !!! \n");
    scanf("%c",&you);
    int result = StonePaperScissor(you, comp);
		
	}
	else if(result == 1){
		printf(" YOU WIN !! \n");
	}
	else{
		printf(" YOU LOOSE !! \n");
	}
	printf(" You chooses %c and Computer chooses %c ",you, comp);
	return 0;
		}
	
