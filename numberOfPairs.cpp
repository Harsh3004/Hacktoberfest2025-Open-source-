// Find the Number of Ways to Place People II

class Solution {
    static bool compare(vector<int> &a, vector<int> &b){
        if(a[0] == b[0])
            return a[1] > b[1];
        return a[0] < b[0];
    }
    public:
    int numberOfPairs(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),compare);
        int cnt = 0;
        for(int i=1;i<points.size();i++){
            for(int j=i-1;j>=0;j--){
                if(points[j][0]<=points[i][0] && points[j][1] >= points[i][1]){
                    bool flag = false;
                    for(int k=i-1;k>j;k--){
                        if((points[k][0] >= points[j][0] && points[k][0] <= points[i][0]) &&
                        (points[k][1] <= points[j][1] && points[k][1] >= points[i][1])){
                            flag = true;
                            break;
                        }
                    }
                    if(!flag)
                        cnt++;
                }
            }
        }

        return cnt;
    }
};
