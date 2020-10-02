#include <stdio.h>

/* Make a program that allows the user to choose the number of elements on the array 
and show the highest value chosen */

void chooNumb(int num[], int period){ //function used to choose our numbers on array
    for(int i = 0; i < period; i++){ 
        printf("Choose a number: ");
        scanf("%i", &num[i]); 
    }
    /* this is going to repeat the process until our variable "i" is equal to the number of elements 
in our array called period*/
}

void bigNum(int num[], int period){ // function used to get the bigger number in our array
    
    for(int i = 1; i < period; i++){
        if(num[0] < num[i]){
            num[0] = num[i];//everytime that num[0] is smaller than num[i], the value is stored in num[0]
        }
     }
    printf("The bigger number here is: %i", num[0]);
        
} 

void main(){
    int range;

    printf("Choose a range: ");
    scanf("%i", &range);

    int arr[range];

    chooNumb(arr, range);
    bigNum(arr, range);
}
