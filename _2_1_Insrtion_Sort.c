#include<stdio.h>

void insertion_sort(int array[], int size){
    int i,j = 0;
    int key = 0;
    for(j = 1; j < size; j++){
        key = array[j];
        i = j - 1;
        while(i >= 0 && array[i] > key){
            array[i+1] = array[i];
            i = i - 1;
        }
        array[i + 1] = key;
    }
    printf("The sorted array is: ");
    for(i = 0; i < size; i ++){
        printf("%d", array[i]);
    }
}

void main(){
    int size = 0;
    int i = 0;
    int array[size];
    printf("Array size: ");
    scanf("%d", &size);
    printf("Array inputs: ");
    for(i = 0; i < size; i++){
        scanf("%d",&array[i]);
    }
    insertion_sort(array, size);

}
