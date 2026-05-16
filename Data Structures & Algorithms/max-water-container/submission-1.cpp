// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int n = height.size();
//         int ans = 0;

//         for(int i = 0; i < n; i++){
//             for(int j = i + 1; j < n; j++){
//                 int h = min(height[i], height[j]);
//                 int w = j - i;
//                 ans = max(ans, h * w);
//             }
//         }

//         return ans;
//     }
// };


class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int ans = 0;
        int s=0,e=n-1;
        while(s<e){
            int h=min(height[s],height[e]);
            int w=e-s;
            ans=max(ans,h*w);
            if(height[s]<height[e])
            s++;
            else
            e--;
        }

        

        return ans;
    }
};