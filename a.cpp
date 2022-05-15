#include<bits/stdc++.h>
using namespace std;

void  function(int x,int y){
    if(x!=50){
        return y+function(x+1,y);
    }
    else{
        return 0;
    }
}
