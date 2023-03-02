#include <stdio.h>

int is_palindrome(int num) {
    int temp = num;
    int reverse = 0;
    while (temp != 0) {
        reverse = reverse * 10 + temp % 10;
        temp /= 10;
    }
    return num == reverse;
}

int count_palindromes(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (is_palindrome(arr[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {421, 345, 567, 789};
    int size = sizeof(arr) / sizeof(arr[0]);

    int palindrome_count = count_palindromes(arr, size);
    printf("Количество палиндромов в массиве: %d\n", palindrome_count);

    return 0;
}