#include <stdio.h>

int main() {
    int arr[100], n, pos, val, choice;

    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nChoose deletion method:\n");
    printf("1. Delete by position\n");
    printf("2. Delete by value\n");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("Enter position (1 to %d): ", n);
        scanf("%d", &pos);

        if(pos < 1 || pos > n) {
            printf("Invalid position!\n");
        } else {
            for(int i = pos - 1; i < n - 1; i++) {
                arr[i] = arr[i + 1];  // shift left
            }
            n--; // reduce size
        }
    }
    else if(choice == 2) {
        printf("Enter value to delete: ");
        scanf("%d", &val);

        int found = -1;
        for(int i = 0; i < n; i++) {
            if(arr[i] == val) {
                found = i;
                break;
            }
        }

        if(found == -1) {
            printf("Value not found!\n");
        } else {
            for(int i = found; i < n - 1; i++) {
                arr[i] = arr[i + 1];  // shift left
            }
            n--; // reduce size
        }
    }

    
    printf("\nArray after deletion:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
