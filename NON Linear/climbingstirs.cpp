// climbling stairs

0th step se last seedhi pe jaana hai 1 chlaang maarke ya 2 chlaang maarke

recursive relation hoga ki ek casse solve kardo 
last seedi pe kaise jaaoge ya toh first last se ek challang maarke 
ya toh second llast se 2 chalaang maarke 
f(n)= f(n-1)+ f(n-2)


#include <bits/stdc++.h> 
int countDistinctWays(int nStairs) {
   
//base
if (nStairs< 0) {
  return 0;
}
if (nStairs==0) {
  return 1;
}
// recursive


return countDistinctWays(nStairs-1)+countDistinctWays(nStairs-2);

// needs Dynamic programing to remove TLE

}
