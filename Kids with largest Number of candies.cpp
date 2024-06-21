class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
       int mini1=INT_MIN;
       int mini2 = INT_MAX;
       vector<bool>v;
       int n=candies.size();
        for(int i=0;i<n;i++)
        {
           mini1=max(mini1 ,candies[i]);
        }
        for(int i=0;i<n;i++)
        {
            int z=candies[i]+ extraCandies;

                if(z>=mini1)
                v.push_back(true);
                else
                v.push_back(false);

        }
        return v;
    }
};
