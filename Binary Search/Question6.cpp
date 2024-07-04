class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int i=0,j=0;
    int m=nums1.size();
    int n=nums2.size();
    int x=m+n;
    int idx2=x/2;
    int idx1=idx2-1;
    int count=0;
    int ele1=-1,ele2=-1;
    while(i<m && j<n)
    {
        if(nums1[i]<nums2[j])
        {
            if(count==idx1) ele1=nums1[i];
            if(count==idx2) ele2=nums1[i];
            count++; 
            i++;
        }
        else
        {
            if(count==idx1) ele1=nums2[j];
            if(count==idx2) ele2=nums2[j];
            count++; 
            j++;
        }
    }
    while(i<m)
    {
        if(count==idx1) ele1=nums1[i];
        if(count==idx2) ele2=nums1[i];
        count++; 
        i++;
    }
    while(j<n)
    {
      if(count==idx1) ele1=nums2[j];
      if(count==idx2) ele2=nums2[j];
      count++; 
      j++;  
    }
    if(x%2==1)
    {
        return (double) ele2;
    }
    return (double)((double)(ele1+ele2))/2.0;
    }
};
