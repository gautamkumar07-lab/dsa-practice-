#include <stdio.h>

int main() {
    int arr[100], n, key;
    int low, high, mid, pos = -1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter sorted elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == key) {
            pos = mid;   // element found
            break;
        }
        else if(arr[mid] < key) {
            low = mid + 1;   // search right half
        }
        else {
            high = mid - 1;  // search left half
        }
    }

    if(pos != -1)
        printf("Element found at index %d\n", pos);
    else
        printf("Element not found\n");

    return 0;
}
