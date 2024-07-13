#include <iostream>
#include <map>
using namespace std;
int solve(int* A, int n1, int B) {
    int xr=0;
    int c=0;
    map <int,int> mpp;
    mpp [xr]++;
    for(int i=0;i<n1;i++)
    {
        xr=xr^A[i];
        int x=xr^B;
        c+=mpp[x];
        mpp[xr]++;
    }
    return c;
}
int main()
{
    int n=5;
    int arr[5]={4,2,2,6,4};
    int x=6;
    cout<<solve(arr,n,x);
    return 0;

}
