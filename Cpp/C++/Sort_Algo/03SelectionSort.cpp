#include<iostream>
#include<conio.h>

using namespace std;

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void SlectionSort(int a[], int len){
    for(int i=0; i<= len-2; i++){
        int min=i;
        for(int j=i; j<=len-1 ; j++){
            if(a[j]<a[min]){
                swap(a+j, a+min);
            }
        }
        swap(a+i, a+min);
    }
}

void bubbleSort(int a[], int len){
    for(int i=0;i<=len-2; i++){
        for(int j=0;j<len-1-i; j++){
            if(a[j]>a[j+1]){
                swap(a+j, a+j+1);
            }
        }
    }
}

void insertionSort(int a[], int len){
    for(int i=1; i<=len-1; i++){
        for(int j=i ; j>0 ;j--){
            if(a[j-1]>a[j]){
                swap(a+j-1, a+j);
            }
            else{
                break;
            }
        }
    }
}

void merge(int arr[], int left[], int right[], int len, int llen, int rlen){
    int k=0, i=0, j=0;

    while(i<llen && j<rlen){
        if(left[i]<right[j]){
            arr[k]=left[i];
            i++;
        }
        else{
            arr[k]=right[j];
            j++;
        }
        k++;
    }
    while(i<llen){
        arr[k]=left[i];
        i++;
        k++;
    }
    while(j<rlen){
        arr[k]=right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int len){
    if(len<2)
        return;
    int mid=len/2;
    int left[mid], right[len-mid];

    for(int i=0;i<=mid-1 ; i++){
        left[i]=arr[i];
    }
    for(int i=mid;i<=len-1; i++){
        right[i-mid]=arr[i];
    }
    mergeSort(left, mid);
    mergeSort(right, len-mid);

    merge(arr, left, right, len, mid, len-mid);
}

int partion(int arr[], int start, int end){
    int sm_var=start;
    int pivot=end;

    for (int i=start ; i<=end-1; i++){
        if(arr[i]<=arr[pivot]){
            swap(arr+i, arr+sm_var);
            sm_var++;
        }
    }
    swap(arr+sm_var, arr+pivot);
    return sm_var;
}

void QuickSort(int arr[], int start, int end){

    // if(start<0 && start>end)
    //     return;

    if(start<end){
        int pindex=partion(arr, start, end);

        QuickSort(arr, start, pindex-1);
        QuickSort(arr, pindex+1, end);
    }
}

void printArray(int a[], int len){
    for(int i=0; i<len ; i++)
        cout<<a[i]<<"  ";
        // cout<<"a["<<i<<"] : "<<a[i]<<"\t";
    cout<<endl;
}

int main(){
    int a[]={4,9,8,6,5,7,2,8,3,4,6};
    int len=sizeof(a)/sizeof(a[0]);
    cout<<"Size of the array : "<<len<<endl;
    cout<<"before :\n";
    printArray(a, len);

    // SlectionSort(a, len);
    // bubbleSort(a, len);
    // insertionSort(a, len);
    mergeSort(a, len);
    // QuickSort(a, 0, len-1);

    cout<<"after :\n";
    printArray(a, len);
    

    return 0;
}