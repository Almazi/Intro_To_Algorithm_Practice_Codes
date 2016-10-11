#include<stdio.h>
int i = 0;
void merge_sort(int array[], int firstIndex, int lastIndex){
    //printf("\n%d inside mergesort",i);
    i++;
    //printf("%d, %d",firstIndex, lastIndex);
    if(firstIndex < lastIndex){
        printf("\ninside if");
        int midIndex = (firstIndex + lastIndex) / 2;
        printf("\nMid: %d, first: %d, last: %d",midIndex,firstIndex, lastIndex);
        printf("\nCalling 1st mergesort");
        merge_sort(array, firstIndex, midIndex);
        printf("\nCalling 2nd mergesort");
        merge_sort(array, midIndex+1, lastIndex);
        printf("\nCalling MERGE");
        merge(array, firstIndex, midIndex, lastIndex);
    }

}


void merge(int array[], int firstIndex, int midIndex, int lastIndex){
    printf("\ninside merge");
    int leftSize = midIndex - firstIndex + 1;
    int rightSize = lastIndex - midIndex;

    int leftArray[leftSize];
    int rightArray[rightSize];

    int i, j, k = 0;

    for(i = 0; i < leftSize; i++){
        leftArray[i] = array[firstIndex + i];
    }

    for(j = 0; j < rightSize; j++){
        rightArray[j] = array[midIndex + j + 1];
    }
    leftArray[leftSize] = 999999;
    rightArray[rightSize] = 999999;

    i = 0;
    j = 0;
    for(k = firstIndex; k <= lastIndex; k++){
        if(leftArray[i] <= rightArray[j]){
            array[k] = leftArray[i];
            i++;
        }
        else{
            array[k] = rightArray[j];
            j++;
        }
    }
    printf("\nThe merged array is: ");
    for(k = firstIndex; k <= lastIndex; k++){
        printf("%d, ", array[k]);
    }

}


void main(){
    int size = 10;
    int i = 0;
    printf("Array size: ");
    scanf("%d", &size);


    int array[10] = {10,9,8,7,6,5,1,2,3,4};
    printf("Array inputs: ");
    /*for(i = 0; i < size; i++){
        scanf("%d",&array[i]);
    }*/
    printf("Input done");
    merge_sort(array, 0, size-1);

}
