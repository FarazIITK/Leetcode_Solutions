class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        // For water the first step we have to make one step
        int ans = 1;
        // After watering first plant the currentCapacity is reduced
        int currentCapacity = capacity - plants[0];
        for(int i=1;i<plants.size();i++){
            // If the container capacity is greater than plant requirement,
            // we move to next plant 
            if(currentCapacity >= plants[i]){
                ans += 1;
                currentCapacity = currentCapacity - plants[i];
            }
            // Otherwise we have to return back and fill the container
            else{
                ans = ans + i * 2 + 1;
                currentCapacity = capacity - plants[i];
            }
        }
        return ans;
    }
};