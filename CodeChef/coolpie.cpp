#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int T,tp,tr,N,i;
    cin>>T;

    int wp[30];
    int wr[30];


    while(T--){
        tp=0;
        tr=0;
        cin>>N;
        for(i=0;i<N;i++){
            cin>>wp[i];
            tp+=wp[i];
        }

        for(i=0;i<N;i++){
            cin>>wr[i];
            tr+=wr[i];
        }

        while(tr>tp){
            N=N-1;
        }

        cout<<N;
    }

    return 0;
}
