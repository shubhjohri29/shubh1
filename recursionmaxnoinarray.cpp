#include<iostream>
using namespace std;
int a,n;

int findmax(int a[],int n){
    //base case
    if(n==1)
        return a[0];
    return max(a[n-1], findmax( a ,n-1));

}

int main(){
    int a[]={4,2,6,5,1,0,12};
    int n= sizeof (a)/sizeof(a[0]);

    cout<<"the max number in array is "<<findmax(a,n)<<endl;
    return 0;
}