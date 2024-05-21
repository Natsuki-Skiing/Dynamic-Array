#include "Dynamic_Array.h"
#include<stdlib.h>
dArrayInt dAIntNew(int size){
    dArrayInt newDArray;
    newDArray.array = (int*)malloc(sizeof(int)*size);
    return(newDArray);


}

int main(){
    dArrayInt test = dAIntNew(30);
    test.array[0] = 6;
    test.array[1]=8;
    printf("%d",test.array[0]);
    printf("%d",test.array[1]);
}