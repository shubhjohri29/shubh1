#include<iostream>
using namespace std;
int solve(int coin[],int n,int amount,int currentcoin){
    //base case
    if(amount==0)
    return 1;

    if(amount<0)
    return 0;

int ways=0;
//use every coin
for(int i=currentcoin;i<n;i++){
    ways += solve(coin,n,amount-coin[i],i);
}
return ways;

}

int main(){
    int coin[]={1,2};
    int amount=4;
    int size=2;
    int ans=solve(coin,size,amount,0);
    cout<<ans<<endl;

    return 0;
}