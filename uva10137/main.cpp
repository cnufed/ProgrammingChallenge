//
//  main.cpp
//  uva10137
//
//  Created by Sandip Saha on 24/11/17.
//  Copyright © 2017 cnufed. All rights reserved.
//
// @BEGIN_OF_SOURCE_CODE

#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
    int n;
    int amount, average = 0, total = 0;
    while(scanf("%d", &n) != EOF){
        if(n == 0) break;
        
        int sums[n];
        amount = average = total = 0.0f;
        for(int  i = 0 ; i < n; i++){
            float t;
            scanf("%f", &t);
            sums[i] = t*100;
            total += sums[i];
        }
        average = total/n;
        
        int max_transaction = 0;
        for(int i = 0; i < n; i++){
            if(average>sums[i])
                max_transaction += average - sums[i];
        }
        printf("%.2f\n", 1.0*(max_transaction/100));
    }
    
    return 0;
}


// @END_OF_SOURCE_CODE