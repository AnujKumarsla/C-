#include<iostream>
#include<conio.h>

using namespace std;

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void merge(int arr[], int left[], int right[], int start, int Llen, int Rlen){
    int Aindex=0, Lindex=0, Rindex=0;
    while(Lindex <= Llen-1 && Rindex <= Rlen-1){
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
    while (Lindex<=Llen-1)
    {
        arr[start]=left[Lindex];
        start++;
        Lindex++;
    }
    while (Rindex<=Rlen-1)
    {
        arr[start]=right[Rindex];
        start++;
        Rindex++;
    }

}

void merge_sort(int arr[], int len){
    if(len<2)
        return;
    int mid=len/2;
    int left[mid], right[len-mid];

    for(int i=0; i<=mid-1; i++)
        left[i]=arr[i];
    
    for(int i=mid; i<=len-1; i++)
        right[i]=arr[i];
    
    merge_sort(left, mid);
    merge_sort(right, len-mid);

    merge(arr, left, right, len, mid, len-mid);

}

void merge_sort1(int arr[], int start, int end){
    int len=end-start+1;
    if(len<2)
        return ;
    int mid=len/2 ;
    int Llen=mid, Rlen=len-mid;

    int left[Llen], right[Rlen];


    for(int i=0; i<=mid-1; i++)
        left[i]=arr[start+i];
    
    for(int i=0; i<=len-mid-1; i++)
        right[i]=arr[start+mid+i];
    
    merge_sort1(left, start, start+mid-1);
    merge_sort1(right, start+mid+1, end);

    merge(arr, left, right, start, mid, len-mid);
    
}

void merge_sort2(int arr[], int start, int end){
    if(start<end){
        int mid=start+end/2;
        int Llen=mid-start;
        int Rlen=end-mid+1;
        int left[Llen], right[Rlen];

        for(int i=0;i<=Llen-1; i++)
            left[i]=arr[start+i];
        for(int i=0;i<=Rlen-1; i++)
            right[i]=right[mid+i];

        merge_sort2(left, 0, Llen-1);
        merge_sort2(right, 0, Rlen-1);

        merge(arr, left, right, start, Llen, Rlen);
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
    merge_sort2(a, 0, len-1);

    cout<<"after :\n";
    printArray(a, len);
    

    return 0;
}