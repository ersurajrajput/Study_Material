#include <stdio.h>
#include <stdlib.h>
char matrix[3][3];



void initialize(){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            matrix[i][j] = ' ';
        }
    }
}
void disp_matrix(){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
          printf("|%c|\t",matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void get_player_move(){
    int x,y;
    printf("\nenter x y cordinate\n");
    scanf("%d",&x,&y);
    if(matrix[x][y]!= ' '){
        printf("\nSpace already occupied\n");
        get_player_move();
    }
    else{
        matrix[x][y] = 'X';
    }
}
void get_computer_move(){
    int i,j; 
    for( i=0; i<3; i++){
        for( j; j<3; j++){
           if(matrix[i][j] = ' '){
            matrix[i][j] = 'O';
           }
        }
    }
 if(i*j==9) {
 printf("draw\n");
 exit(0);
 }

}

char check(){
    ////Row
    char temp = ' ';
    for(int i=0; i<3; i++){
        if(matrix[0][i] == matrix[1][i]==matrix[2][i]){
            temp = matrix[0][i]; 
            return temp;
            break;
        }
        else if(matrix[i][0] == matrix[i][1]==matrix[i][2]){
            temp = matrix[i][0];
            return temp;
            break;
        }
        else if(matrix[0][0] == matrix[1][1] == matrix[2][2]){
            temp = matrix [0][0];
            return temp;
            break;
        }
        else if(matrix[0][2] == matrix[1][1] == matrix[2][0]){
            temp = matrix[0][2];
            return temp;
            break;
        }
        
    }
    return temp;



}


int main(){
    char done = ' ';
    initialize();
    do{
        disp_matrix();
        get_player_move();
        get_computer_move();
        done = check();

    }while(done ==' ');
    if(done == 'X'){
        printf("\n you WON!\n");
    }
    else if(done == 'O'){
        printf("\nI WON!\n");
    }
    
}