#include<iostream>
using namespace std;

void find sequence(left sum, right sum,int i, int j, char*output){
    //base case 
    if(i>j)
    {
        if(left sum==right sum)
        cout<<output<<endl;
        return;
    }
    //put 0,0
    output[i]='0';
    output[j]='0';
    find sequence(left sum, right sum, output, i+1,j-1);

     //put 1,0
    output[i]='0';
    output[j]='0';
    find sequence(left sum+1, right sum, output, i+1,j-1);

     //put 0,1
    output[i]='0';
    output[j]='0';
    find sequence(left sum, right sum+1, output, i+1,j-1);

     //put 1,1
    output[i]='0';
    output[j]='0';
    find sequence(left sum+1, right sum+1, output, i+1,j-1);
}

int main(){
    cout<<"enter the value of n"<<endl;
    int n;
    cin>>n;
char*arr=new char[2*n];

find sequence(0,0,arr,0,2*n-1);

return 0;
}