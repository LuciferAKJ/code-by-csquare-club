#include<iostream>
using namespace std;


void name(){
    cout<<"No name supplied"<<endl;;
}

void name( string nm){
    cout<<"user gave:"<<nm<<endl;
}

void square(int rows, int columns){
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            
            cout<<" *";
        }
        cout<<endl;
    }
}
void triangle(int rows){
    for(int i=0;i<rows;i++){
        for(int j=0;j<rows-i;j++){
            cout<<" ";
        }
        for(int k=0;k<i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    }
void alphabets(){
    for(int i=65; i<75;i++){
        cout<<char(i);
    }
}


void linearSearch(int arr[], int n, int e){
    int f=0, index;
    for(int i=0;i<n;i++){
        if(arr[i] == e){
            f=1;
            index=i;
        }
        }
        if(f==1){
            cout<<"Element "<<e<<" found at index "<<index<<endl;
        }
    
}

int binarySearch(int arr[], int n, int e){
    int beg = arr[0];
    int end = n-1;
    int mid;
    while(beg<=end){
        mid = (beg+end)/2;
        if(e == arr[mid] ){
            cout<<"Element found at position "<<mid<<" and its value is "<< arr[mid]<<endl;
            return 0;
        }
        else if(e > mid){
            beg = mid + 1;
        }
        else{
            end = mid - 1;
        }
    
    }
}

int main(){
    square();
    triangle(5);
    int myArr[10]={1,2,3,4,5,6,7,8,9,10};
    binarySearch(myArr, 10, 2);
    linearSearch(myArr, 10, 2);

    return 0;
}
    