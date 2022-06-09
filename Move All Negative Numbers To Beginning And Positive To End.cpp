vector<int> separateNegativeAndPositive(vector<int> &nums){
    int n=nums.size();
    int i=0,j=0;
    while(i<n)
    {
        if(nums[i]<0)
        {
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            j=j+1;
        }
        i=i+1;
    }
    return nums;
}