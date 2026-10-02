#include <stdio.h>

int main() {
    int arr[100], n, key, i, pos = -1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            pos = i;    
            break;     
        }
    }

    if(pos != -1)
        printf("Element found at index %d\n", pos);
    else
        printf("Element not found\n");

    return 0 ;

 }