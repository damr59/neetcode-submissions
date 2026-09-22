class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {

        int n = position.size();

        // Store {position, speed}
        vector<pair<int, int>> cars;

        for (int i = 0; i < n; i++) {
            cars.push_back({position[i], speed[i]});
        }

        // Closest to target first
        sort(cars.rbegin(), cars.rend());

        stack<double> st;

        for (auto& car : cars) {

            int pos = car.first;
            int spd = car.second;

            double time = (double)(target - pos) / spd;

            // New fleet
            if (st.empty() || time > st.top()) {
                st.push(time);
            }

            // Otherwise:
            // current car joins the fleet at st.top()
        }

        return st.size();
    }
};