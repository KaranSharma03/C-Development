#include <stdio.h>
#include <stdlib.h>

#define SIZE 60

int main(){
    int arr[SIZE];
    int arr_size, toSearch;
    int found=0;

    printf("Enter the array size:");
    scanf("%d", &arr_size);

    puts("\nEnter the elements of the array:");
    for(int i=0;i<arr_size; i++){
        printf("Element %d is ",i+1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search:");
    scanf("%d", toSearch);

    for(int i=0;i<arr_size; i++){
        if(toSearch==arr[i]){
            found==1;
            break;
        }
    }

    if(found==1){
        printf("\nElement found");
    }
    else{
        printf("\nElement not found");
    }

    return 0;
}
