//By: Donovan Givens
//This is a C program that prompts the user to enter the intended set numbers in a array to be sorted
//From there the user will then list diffrent numbers for however many numbers inteded to be sorted 
//the program will then sort the array in transcendeing order. 
#include <stdio.h>
//Is the allgorithim used to sort the array of numbers
//By counting the frequency of each integer value, 
//then iterating it through the frequency array 
//to populate the sorted array.
void counting_sort(int arr[], int n) {
    int count[100] = {0}, i, j;
    for (i = 0; i < n; i++) {
        count[arr[i]]++;
    }
    for (i = 0, j = 0; i < 100; i++) {
        while (count[i] > 0) {
            arr[j++] = i;
            count[i]--;
        }
    }
}
//Function used to prompt the user to enter both the length of the array
//as well as the numbers within the array
int main() {
    int n, i;
    printf("How many values to sort (<100)? ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        printf("Enter a number: ");
        scanf("%d", &arr[i]);
    }
    counting_sort(arr, n);
    //print statement oputs the new sorted array using linear-time sorting sequence
    printf("The sorted numbers are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
