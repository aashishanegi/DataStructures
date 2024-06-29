#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int nums[n];
    for (int i=0;i<n;i++){
        cin>>nums[i];
    }
    int temp=nums[0];
        for (int i=1;i<n;i++)
        {
            nums[i-1]=nums[i];
        }
        nums[n-1]=temp;
        for (int j=0;j<n;j++)
        {
            cout<<nums[j]<<" ";
        }
        return 0;
}
