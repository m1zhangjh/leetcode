#include <iostream>
#include <string>
 
using namespace std;
 
class Solution {
	
public:
	
	vector<vector<int>> merge(int** roomTimes, int roomTimesRowLen, int* roomTimesColLen) {	// 这里是和题目一样的
		// RowLen is the number of meeting 
		// ColLen is the length of times

        //if (roomTimes.empty()) return {};
        //sort(roomTimes.begin(), roomTimes.end());
		vector<int> tmp(roomTimes[0], roomTimesColLen[0])
        vector<vector<int> > res;
		res.push_back(tmp);
        for (int i = 1; i < roomTimesRowLen; ++i) {
            if (res.back()[1] < roomTimes[i][0]) {
			vector<int> tmp1(roomTimes[i], roomTimesColLen[i])
                res.push_back(roomTimes[tmp1]);
            } else {
                res.back()[1] = max(res.back()[1], roomTimes[i][1]);
            }
        }   
        return res;	
		
		//我没看懂题目。。也不知道 这对不对。。。 你先打着试试

	}
}	// 4 ge 

你继续

//我没看懂 题目的意思。。。。
// 没看懂他给得数据是怎么存的。。。。