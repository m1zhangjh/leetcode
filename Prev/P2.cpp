#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
 
using namespace std;

bool has4(int x) //bool L
{ 
    while (x != 0) 
    { 
        if (x%10 == 4) 
           return true; 
        x = x /10; //分号
    } 
    return false; 
} 

int count4(int n) 
{ 
    int result = 0;
  
    for (int x=1; x<=n; x++) 
        result += has4(x)? 1 : 0; 
  
    return result; 
} 
  
int main() 
{ 
	int n;
    cin >> n;
    cout << n - count4(n) << endl; 
	return 0; 
}

//网上找的 题目不一样的 但是算法原理 是一样的
//你先都删掉吧

// 你还是给我看看下个题目