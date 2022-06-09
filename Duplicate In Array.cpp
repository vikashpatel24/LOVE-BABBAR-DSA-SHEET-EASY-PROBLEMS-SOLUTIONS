int findDuplicate(vector<int> &arr) 
{
    int s=arr.size();
    int sum=0;
    for(int i=0;i<s;i++)
    {
        sum+=arr.at(i);
    }
    return sum-(s*(s-1))/2;
}