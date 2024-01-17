#include<stdio.h>
int arr[50];
int UB = -1;
int LB = 0;
int size = 50;


void display(){
    if(UB == -1){
        printf("\n ARRAY Underflow\n");
    }
    else{
        for(int i=0;i<=UB;i++){
        printf("%d\t",arr[i]);
    }

    }
    printf("\n");
    
}
void insertAtLast(int data){
    if(UB == size){
        printf("\n Array Overflow\n");
    }
    else{
        UB++;
        arr[UB] = data;

    }
}


void insertAtStart(int data){
     if(UB >= size){
        printf("\n Array Overflow\n");
    }
    else{
        for(int i = UB; i>=LB; i--){
            arr[i+1] = arr[i];
    }
    arr[LB] = data;
    UB++;
  
    }
   

    
}

void insertAtindex(int data, int index){
     
    if(UB >= size){
        printf("\n Array Overflow\n");
    }
    else if(index > UB){
        printf("\nplease enter correct index\n");
    }
    else{
        for(int i = UB; i>= index; i--){
            arr[i+1] = arr[i];
        }
        arr[index] = data;
        UB++;
    }
    
}

void deletionAtLast(){
     if(UB == -1){
        printf("\n ARRAY Underflow\n");
    }
    else{

    UB--;
    }
}
void deletionAtStart(){
     if(UB == -1){
        printf("\n ARRAY Underflow\n");
    }
    else{
    for(int i = 0; i<UB; i++){
        arr[i] = arr[i+1];
    }
    UB--;

    }
}
void deletionAtindex(int index){
     if(UB == -1){
        printf("\n ARRAY Underflow\n");
    }
    else{
        for (int i=index; i<=UB; i++){
            arr[i] = arr[i+1];
        }
    }
    UB--;

}


int main(){
    
   
    // insertAtLast(50);
    // insertAtLast(50);
    // insertAtLast(70);
    // insertAtLast(40);
    // insertAtLast(20);
    // insertAtLast(10);
    // insertAtStart(2);
    // insertAtStart(2);
    // insertAtStart(2);
    // insertAtStart(2);
    // insertAtindex(100,5);

    // display();


    // deletionAtLast();
    // deletionAtLast();
    // deletionAtLast();
    // deletionAtLast();
    // deletionAtLast();
    // deletionAtStart();
    // deletionAtStart();
    // deletionAtStart();
    // deletionAtStart();
    // deletionAtindex(5);

    

   

  

    // display();


}