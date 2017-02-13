#include <cstdlib>
#include <iostream>

using namespace std;

//member function
void insertion_sort(int arr[], int length);

int main() {

int array[5]= {5,4,3,2,1};
insertion_sort(array,5);
for(int i=0;i<5;i++){
    cout<<array[i];
}
 return 0;
}//end of main

void insertion_sort(int arr[], int length) {
 int i, j ,tmp;
 for (i = 1; i < length; i++) {
 j = i;
 while (j > 0 && arr[j - 1] > arr[j]) {
 tmp = arr[j];
 arr[j] = arr[j - 1];
 arr[j - 1] = tmp;
 j--;
 }//end of while loop
 }//end of for loop
 }//end of insertion_sort.
