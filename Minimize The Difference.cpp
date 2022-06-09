int minimizeIt(vector<int> A, int K)
{
	sort(A.begin(),A.end());

   int ans = A[A.size()-1] - A[0];

   int smalldiff = A[0] + K;

   int maxdiff = A[A.size()-1] - K;

   int mi,ma;

   for(int i = 0;i < A.size()-1;i++){

       mi = min(smalldiff,A[i+1]-K);

       ma = max(maxdiff,A[i] + K);

       if(mi < 0){

           continue;

       }

       ans = min(ans,ma-mi);

   }

   return ans;
}