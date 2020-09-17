// Time Complexity : O(n)
// Space Complexity : O(1)
// Your code here along with comments explaining your approach
//1. Use formula

//Conventional method
//Use powerset creation and multiply (2^n) solution
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

//formula (1+a)(1+b)(1+c)..... -1

int main() {
    vector<int> nums ={1,2,3};
    int result =1;
    for(auto i:nums){
        result = result * (1+i);
    }
    result = result-1;
    cout<<result<<endl;
    return 0;
}
