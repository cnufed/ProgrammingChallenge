//
//  uva100.cpp
//  pc
//
//  Created by Sandip Saha on 24/11/17.
//  Copyright © 2017 cnufed. All rights reserved.
//
// @BEGIN_OF_SOURCE_CODE

#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
    int a, b, ta, tb;
    while(scanf("%d %d", &a, &b) != EOF){
        int max_length = 1, cycle_length = 1;
        ta = min(a,b);
        tb = max(a,b);
        for(int i = ta; i <= tb; i++){
            unsigned int t = i;
            cycle_length = 1;
            while(t > 1){
                if(t%2 == 0) t /= 2;
                else t = 3*t+1;
                cycle_length++;
            }
            max_length = max(cycle_length, max_length);
        }
        printf("%d %d %d\n", a, b, max_length);
    }
    return 0;
}


// @END_OF_SOURCE_CODE