#include <stdio.h>

void printInt(int array[], int size){

    printf("array pointer %p\n", array);

    printf("[");
    for (int i = 0; i < size; i++){
        printf("%d", array[i]);
        if(i < 4){
            printf(", ");
        }
    };
    printf("]");
}

void prNL (){
    printf("\n\n");
}

int main(){

    char name1[] = "Simen";

    printf("%s\n\n", name1); // name1 = referencing the whole array.

    char *name2 = name1;

    printf("name1 --> %p (%s)\n", name1, name1);
    printf("name2 --> %p (%s)\n\n", name2, name2);


    name2 += 3;

    printf("name1 --> %p (%s) \n", name1, name1);
    printf("name2 --> %p (%s)\n\n", name2, name2);

    *name2 = 'o';

    printf("name1 --> %s\n\n", name1);


    int nums1[] = {1,2,3,4,5};

    printInt(nums1, 5);
    prNL();

    int *nums2 = nums1;

    printf("nums1 --> %p\n", nums1);
    printf("nums2 --> %p\n\n", nums2);

    nums2 +=2;

    printf("nums1 --> %p\n", nums1);
    printf("nums2 --> %p\n", nums2); // Demonstrates the pointer has moved more than 2 places.

    *nums2 = 100;
    prNL();

    printInt(nums1, 5);
    prNL();

}