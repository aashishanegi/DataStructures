int countStudents (vector <int> &arr, int pages)
{
    int n=arr.size();
    int stud=1;
    long long pagescount=0;
    for(int i=0;i<n;i++)
    {
        if(pagescount+arr[i]<=pages)
        {
            pagescount+=arr[i];
        }
        else{
            stud++;
         pagescount=arr[i];
        }
    }
    return stud;
}
int findPages(vector<int>& arr, int n, int m) {
    // Write your code here.
    if(m>n) return -1;
    int low = *max_element(arr.begin(),arr.end());
    int high = accumulate(arr.begin(),arr.end(),0);
    for(int pages = low; pages<=high;pages++)
    {
        if(countStudents(arr,pages)==m)
        {
            return pages;
        }
    }
    return low;
}
