#include <stdio.h>


int check(int arr[], int n, int a) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == a) {
            return 1;
        }
    }
    return 0;
}


void get(int arr[], int n, int unique_arr[], int* unique_count) {
    for (int i = 0; i < n; i++) {
        if (!check(unique_arr, *unique_count, arr[i])) {
            unique_arr[*unique_count] = arr[i];
            (*unique_count)++;
        }
    }
}


void sort_array(int arr[], int n) {
	int i,j;
    for (i = 0; i < n; i++) {
        for ( j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void print_array(int arr[], int n) {
    int i; 
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int unique_arr[100]; 
    int unique_count = 0;

    get(arr, n, unique_arr, &unique_count);
    sort_array(unique_arr, unique_count);
    printf("\nOUTPUT\n");
    print_array(unique_arr, unique_count);

    return 0;
}
