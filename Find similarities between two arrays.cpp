pair < int , int > findSimilarity(vector < int > arr1, vector < int > arr2, int n, int m) 
{
	sort(arr1.begin(), arr1.end());

   sort(arr2.begin(), arr2.end());

   int common=0, i=0, j=0;

   while(i<n && j<m){

       if(arr1[i] == arr2[j]){

  common++;  

           i++; j++;

       }

       else if(arr1[i] > arr2[j]){

           j++;

       }

       else{

           i++;

       }

   }

   pair<int, int> p (common, ((n+m)-common));

   return p;

}        