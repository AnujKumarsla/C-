#include<iostream>
#include<conio.h>

using namespace std;

int partition(int a[], int start, int end);

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void QuickSort(int *a , int start, int end){
    if (start<end){
        int pindex=partition(a, start, end);
        QuickSort(a, start , pindex-1);
        QuickSort(a, pindex+1 , end);
    }
}


int partition(int a[] , int start, int end){

    int pindex=start;
    int pivot=a[end];

    for(int i=start; i<=end-1; i++){
        if(a[i]<pivot){
            swap(&a[pindex], &a[i]);
            pindex++;
        }
    }
    swap(&a[pindex], &a[pivot]);
    return pindex;

}
int main(){
    // int a[20], len;
    int a[] = {10, 7, 8, 9, 1, 5};  
    int len = sizeof(a) / sizeof(a[0]);  
    // cout<<"Enter the length of array : ";
    // cin>>len;
    // for(int i=0; i<len; i++){
    //     cin>>a[i];
    // }

    cout<<"Before :\n";
    for(int i=0;i<len;i++){
        cout<<"a["<<i<<"] : "<<a[i]<<endl;
    }

    QuickSort(a, 0, len-1);

    cout<<"\nAfter :\n";
    for(int i=0;i<len;i++){
        cout<<"a["<<i<<"] : "<<a[i]<<endl;
    }
    return 0;
}