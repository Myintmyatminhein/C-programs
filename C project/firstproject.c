#include <stdio.h>
void intro();
void inputuserage();
void gamebegin();
void gameend();
int age = 0;
int main(){

    intro();
    inputuserage();




return 0;
}

void intro(){
    printf("===============Welcome to the adventure game!===============\n");
    printf ("                                                            \n");
    printf( "You are in a way to Russia with plane.\nAnd the plane got engine error and that plane is crashed into the very strange unknown island \nGuess and Choose the right options to survive!!\n");
    printf ("===============================================================\n");
}

void gamebegin(){
    int option=0;
    printf("You are on the unknown island! Go to jungle or stay on beach\n (Press 1 to go jungle or Press 2 to stay on beach)::");
    scanf("%d",&option);

    switch (option){
    case 1:
        jungle();
        break;

    case 2:
            beach();
        break;
    }

}
void beach(){
int op3=0;
 printf ("You are on beach and Catch fish and make tent to survive or swim in the ocean\n (Press 1 to survive or Press 2 to swim)::");
 printf ("Enter option 1 or 2 :");
 scanf ("%d",&op3);

    if(op3==1){
        printf(" you survive for 2 days and the one ship see and save you/n Now you survive and won the game!");
        gameend();
    }
    else if (op3==2){
        printf("ran out food in ocean and die!");
        gameend();
    }
}

void jungle(){
    int op1=0;
    printf ("You are in jungle now and you will see two ways. which way do you wanna go?\n(Press 1 to go left and press 2 to go right)::\n");
    printf ( "Enter option 1 or 2 :");
    scanf ("%d",&op1);

    if(op1==1){
        printf (" meet with dinosaur and got eaten by dinosaur\n " );
        printf  ("Game is over\n");
        gameend();


    }
    else if(op1==2){
        printf (" meet with barbarians and got killed by them\n " );
        printf  ("Game is over\n");
        gameend();
    }
    else {
        printf ("Put number 1 or 2 only my friends");
    }


}
void gameend(){
    int op2=0;
    printf( " Do you want to continue Yes/NO ?\n");
    printf (" ================================\n");
    printf ("(Press 1 for yes or Press 2 for no)::");
    scanf("%d",&op2);

    if (op2==1){
        gamebegin();

    }
    else if (op2==2){
        printf ("Thank for playing my game:)");
        age=0;
    }

}

void inputuserage(){

    printf("First, Enter your age :");
    scanf("%d",&age);
while(age>=18){
        gamebegin();
    }
    if (age==0){

    }
   else if (age<18){
        printf("Come back when you are 18");
    }
}

