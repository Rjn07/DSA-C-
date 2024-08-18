#include<iostream>
using namespace std;

int binarysearch(int arr[],int size,int key){

    int s=0;
    int e=size-1;
    int mid= s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            return mid;

        }else if(key > arr[mid]){
            s=mid+1;
        }else{
            e=mid-1;

        }
         mid= s+(e-s)/2;


    }

return -1;

};

int main(){

    int even[6]={2,3,6,9,12,25};
    int odd[5]={4,6,8,10,12};

    int index=binarysearch(even,6,12);

    cout<<"index value is :"<<index;
    


    return 0 ;
}