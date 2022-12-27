#include<iostream>
using namespace std;
int Binary_search(int x[],int size,int target){
    int maximum= size-1;
    int minimum = 0;
    int mean;
    while (maximum>minimum){
        mean = (maximum+minimum)/2;
        if (x[mean] == target){
            cout << "The number you're looking for is found! \n";
            return mean;
        }
        else if(x[mean] > target){
            maximum = (mean-1);
        }
        else{
            minimum = (mean+1);
        }
    }
    return -1;
}
int main(){
    int x[]={1,2,3,4,5};
    int a=sizeof(x)/sizeof(x[0]);
    int target=4;
    int show=Binary_search(x,a,target);
    if (show != -1){
        cout << "Your result is in the index: " << show;
    }
    return 0;
}