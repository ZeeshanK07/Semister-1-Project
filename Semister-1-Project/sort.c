#include <stdio.h>

 int main()    
{   
    //Programe to sort the array in decending order 

    //Initialize array     
    int arr[] = {5, 30, 18, 7, 10};     
    int temp = 0;    
        
    //Calculate length and displaying the orignal array
  
    int length = sizeof(arr)/sizeof(arr[0]);    
           
    printf("Elements of original array: \n");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr[i]);     
    }      

    //Sorting the array in decreasing order
    for (int i = 0; i < length; i++) {     
        for (int j = i+1; j < length; j++) {     
           if(arr[i] < arr[j]) {    
               temp = arr[i];    
               arr[i] = arr[j];    
               arr[j] = temp;    
           }     
        }     
    }    
    printf("\n");    

    printf("Arrays in decreasing order: \n");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr[i]);    
    }    
    return 0;    
}    