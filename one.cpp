bool find3Numbers(int arr[], int n, int x)
{
    sort(arr,arr+n);
    
    bool ans=false;
    
    for(int i=0;i<n-2;i++)
    {
        int l=i+1;
        int r=n-1;
        
        while(l<r)
        {
            if(arr[i]+arr[l]+arr[r]==x)
            {
                ans=true;
                return ans;
            }
            
            else if(arr[i]+arr[l]+arr[r]<x)
            l++;
            
            else
            r--;
            
        }
        
    }
    return ans;
}