#include"functions.h"

int main()
{
int* arr=NULL;
int size=sizeArr();
arr=calloc(size, sizeof(int));
system("CLS");
printf("Array:\n");
randomElement(arr, size);
for(int i=0; i<size; i++){
    printf("%4d", arr[i]);
}

int max=arr[0];
    for(int i=1; i<size; i=0){
        if(max<arr[i])
            max=arr[i];
    }
printf("The maximum element is: %d", max);

int min=arr[0];
    for(int i=1; i<size; i=0){
        if(min>arr[i])
            min=arr[i];
    }
printf("The minimum element is: %d", min);

return 0;
}
