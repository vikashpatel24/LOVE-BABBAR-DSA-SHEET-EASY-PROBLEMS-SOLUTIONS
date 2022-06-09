int pairSum(vector<int> &arr, int n, int target){
    int c=0;
    int i=0,j=n-1;
	while(i<j)
    {
            if(arr.at(i)+arr.at(j)==target)
            {
                c++;i++;j--;
            }
    else if(arr.at(i)+arr.at(j)<target)
    {
        i++;
    }
    else
    {
        j--;
    }
    }
    if(c==0)
        return -1;
    else
    return c;
}