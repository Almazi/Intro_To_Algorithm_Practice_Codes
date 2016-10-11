#include<stdio.h>

void insertion_sort(int array[], int size){
    int i,j = 0;
    int key = 0;
    for(j = 1; j < size; j++){
        key = array[j]; //Key is the second element of the array, our job is to prove its smaller than its previous element.
        i = j - 1; //taking the index of the previous element of key
        while(i >= 0 && array[i] < key){ //If key is not smaller than its previous element then this block will do the switching
            array[i+1] = array[i]; //Storing the array[i] to its next index as it is larger than key
            i = i - 1; //changing the index to the previous one as we will have to compare key with every previous items until i < 0
        }
        array[i + 1] = key; //Storing the key to the right place after using/not using while block. as i = j -1 OR i = i -1 so we are storing the kye to i +1
    }
    printf("The sorted array is: ");
    for(i = 0; i < size; i ++){
        printf("%d, ", array[i]);
    }
}

void main(){
    int size = 0;
    int i = 0;
    printf("Array size: ");
    scanf("%d", &size);


    int array[size];
    printf("Array inputs: ");
    for(i = 0; i < size; i++){
        scanf("%d",&array[i]);
    }
    insertion_sort(array, size);

}
