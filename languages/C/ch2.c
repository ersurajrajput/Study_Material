// Rules for defining variables
// A variable can have alphabets, digits, and underscore.
// A variable name can start with the alphabet, and underscore only. It can't start with a digit.
// No whitespace is allowed within the variable name.
// A variable name must not be any reserved word or keyword, e.g. int, float, etc.
// **********************************************************************************************************
// Types of Variables in C
// There are many types of variables in c:

// local variable == accessible only within the block of code (and destroyrd after that block,if we call that block again it will initialize again) 
// global variable == accessible anywhere within the code/file 
// static variable == accessible only within the block of code (but not destroyrd after that block,if we call that block again it will not reinitialize again) 
// automatic variable == 
// extern variable == used first but initialized leter (External variable )
// const == variable that we not want to change (but you still change it)
// register == will try to hold variable in register or closer to cpu (access as fast as possible ) (global rejister varibole are not allowed)


/***************************************DATA TYPES*******************************/


/**************************************operators*******************************/
//ARITHMATIC                               (-+*/%--++)
//LOGICAL                                  (&&,||,!)
//RELATIONAL                               (>,>=,<,<=,==,!=)
//BITWISE                                  (&,|,^,~,>>,<<) (AND,NOT,XOR,ONES COMPLEMENT,SHIFT RIGHT , SHIFT LEFT)
//? OPERATOR                               EXP1 ? EXP2 : EXP3 (Y>9 ? 100:200 ) (IF Y>9, THEN Y = 100 ELSE Y = 200)
// &,* (AS POINTER)                        & GIVES US THE ADDRESS OF A VARIABLE , * GIVES US THE VALUE AT THAT ADDRESS 
//COMMA OP                                 X = (Y=3, Y+1); FIRST ASSIGNS THE 3 TO X THEN ASSINGS VLUE 4 TO X
// . , ->                                  USED TO ACCESSS THE ELEMENTS OF A STRUCTURE
// CAST                                    INT I = 10; PRINTF("%f",(float) I/2); :-> the result will print in float            

//

#include <stdio.h>
int x; // global variable (scope = in whole program)

 void display(){
    // printf("%d",a);
 }
int main(){
    int b; // local variable (scope = only in function)
    static int a; // scope only in main but retain its storage even after end of main , and if we call main again it will not reinitialize 
    const static int c; // static+const
    printf("%d",a);
    display();
}