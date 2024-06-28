#include <stdio.h>
#include <math.h>

int is_prime(int n) {
    if (n<= 1) return 0; 
    int i;
    int loop = sqrt(n);
    for (i = 2; i <= loop; i++) {
        if (n % i == 0) return 0; 
    }
    return 1; 
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

    int found_prime = 0;
    printf("\nOUTPUT\n");
    for (int i = 0; i < n; i++) {
        if (is_prime(arr[i])) {
            printf("%d ", arr[i]);
            found_prime = 1;
        }
    }
    if ((found_prime)==0) {
        printf("No prime number exists");
    }
    printf("\n");

    return 0;
}
