#include<bits/stdc++.h>
class Solution {
public:
    bool isPalindrome(int x) {
       long r=0;
       long z=x; 
        while(x){
             r=r*10 +x%10;
             x=x/10;
        }
         if(z<0) {z*=-1;}
        
        
       return z==r;
       //    long t=0;
       //  long v=x;
       //  if(v<0) v*=-1; 
       //  while(x){
       //      t=t*10 + (x%10);
       //      x/=10;
       //  }
       // //  cout<< 3%10<<"\n"<< -3%10; 
       //  return t==v;
    }
};