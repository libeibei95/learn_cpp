#include <iostream>
using namespace std;

bool arr[200005];
const int N=200000;
int nums[20005];

int main(){
    //质数筛
    for(int i=2;i<=N;i++){
        if(arr[i]==true) continue;
        for(int j=2;i*j<=N;j++){
            arr[i*j]=true;
        }
    }

    int cnt=0;
    for(int i=2;i<=N;i++){
        if(arr[i]==false) {
            // cout<<i<<" ";
            nums[++cnt]=i;
        }
    }
    // cout<<endl;
    cout<<cnt<<endl;
    return 0;
}