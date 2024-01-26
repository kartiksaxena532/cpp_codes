#include <bits/stdc++.h>

 

int findMajorityElement(int arr[], int n) {

    

     sort(arr,arr+n);

       int cur=arr[0];

       int c=1;

    for(int i=1;i<n;i++)

      {

         if(cur==arr[i])

         {

          c++;

         }

         else

         {

             if(c>n/2)

             {

                 return cur;

             }

             else

             {

                 c=1;

                 cur=arr[i];

             }

         }

          

      }

      if(c>n/2)

      {

          return cur;

      }

      

      return -1;

 

}
