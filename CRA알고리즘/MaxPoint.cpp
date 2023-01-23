class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int max = 1;
        for(int i = 0 ; i < points.size() ; i++){
            map<float, int> slope;
            for(int j = 0 ; j < points.size() ; j++){
                if(i != j){
                    float temp = (points[i][1]-points[j][1])*1.0/(points[i][0]-points[j][0]);
                    if(slope.find(temp) != slope.end()){
                        slope[temp] += 1;
                    }
                    else {
                        slope.insert({temp, 2});
                    }
                    cout << temp << endl;
                }
            }
            for(auto iter = slope.begin() ; iter !=  slope.end(); iter++){
                if(iter->second > max){
                    max = iter->second;
                }
            }
        }
        return max;
    }
};