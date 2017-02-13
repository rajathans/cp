#include<iostream>
#include<stdio.h>

using namespace std;

void incSort(int arr[], int length) {
 int i, j ,tmp;
 for (i = 1; i < length; i++) {
 j = i;
 while (j > 0 && arr[j - 1] > arr[j]) {
 tmp = arr[j];
 arr[j] = arr[j - 1];
 arr[j - 1] = tmp;
 j--;
 }//end of while loop
 cout<<arr[5];

 }//end of for loop
 }//end of insertion_sort.

int main(){
    int T,temp,i;
    int N;
    int A[20],inc[20],dec[20];
    cin>>T;

    while(T--){
        cin>>N;

        for(i=0;i<N;i++){
                cin>>A[N];
        }

        incSort(A,N);

        for(i=0;i<N;i++){
            cout<<A[N];
        }
    }

    return 0;
}
