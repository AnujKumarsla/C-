#include<iostream>
#include<conio.h>

using namespace std;

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void merge(int arr[], int left[], int right[], int start, int Lend, int Rend){
    int Aindex=0, Lindex=0, Rindex=0;
    while(Lindex <= Lend && Rindex <= Rend){
        if(left[Lindex]<right[Rindex]){
            arr[start]=left[Lindex];
            Lindex++;
        }
        else{
            arr[start]=right[Rindex];
            Rindex++;
        }
        start++;
    }
    while (Lindex<=Lend)
    {
        arr[start]=left[Lindex];
        start++;
        Lindex++;
    }
    while (Rindex<=Rend)
    {
        arr[start]=right[Rindex];
        start++;
        Rindex++;
    }

}

void merge_sort(int arr[], int start, int end){
    if(start<end){
        int len=end-start+1;
        int mid=len/2;
        int left[mid], right[len-mid];

        for(int i=0;i<=mid-1; i++)
            left[i]=arr[start+i];
        for(int i=0;i<=len-mid-1;i++)
            right[i]=arr[mid+i];
        
        merge_sort(left, 0, mid-1);
        merge_sort(right, 0, len-mid-1);

        merge(arr, left, right, start, mid-1, len-mid-1);
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

    // merge_sort1(a, 0, len-1);
    merge_sort(a, 0, len-1);

    cout<<"after :\n";
    printArray(a, len);
    

    return 0;
}