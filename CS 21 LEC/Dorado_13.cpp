#include <iostream>
#include <cstdio>
using namespace std;

template<typename Type>
void BubbleSort(Type arr[], int n){
    int i, j; //variable
    for (i = 0; i < n-1; i++){ //loop to access each array
        for (j = 0; j < n-i-1; j++){ //loop to compare array
            if (arr[j] > arr[j+1]){ //if statement to switch if coditions met

                //swaping of the values
                int temp = arr[j]; //assign arr[j] to temp
                arr[j] = arr[j+1]; //assign arr[j] to arr[j+i]
                arr[j+1] = temp; //assign temp to arr[j+1]
           }
        }
    }
}

int main(){
    int i, n;

    int a = 4;
    int arr1[] = {66, 71, 40, 39}; //integer array
    int b = 4;
    double arr2[] = {3.00, 5.00, 4.00, 2.00}; //double array
    int c = 4;
    char arr3[] = {'j', 'm', 'k', 'f'}; //character array

    printf("Bubble Sort using template\n");
    BubbleSort(arr1, a); //function call for bubble
    printf("Sort1: ");
    for(i = 0; i < a; i++) //for loop to print array
        printf("%i ", arr1[i]);
    printf("\n");

    BubbleSort(arr2, b); //function call for bubble
    printf("Sort2: ");
    for(i = 0; i < b; i++) //for loop to print array
        printf("%.2lf ", arr2[i]);
    printf("\n");

    BubbleSort(arr3, c); //function call for bubble
    printf("Sort3: ");
    for(i = 0; i < c; i++)  //for loop to print array
        printf("%c ", arr3[i]);
    printf("\n");
}

//https://www.geeksforgeeks.org/templates-cpp/ was used for supplementary informatin about templates