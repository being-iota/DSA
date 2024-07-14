class Solution {
public:
    int minimumCost(int m, int n, vector<int>& horizontalCut, vector<int>& verticalCut) {
        vector<pair<int, char>> cuts;

        for (int cost : horizontalCut) {
            cuts.push_back({cost, 'H'});
        }
        for (int cost : verticalCut) {
            cuts.push_back({cost, 'V'});
        }

        sort(cuts.begin(), cuts.end(), greater<pair<int, char>>());

        int horizontalPieces = 1;
        int verticalPieces = 1;
        int totalCost = 0;

        for (auto& cut : cuts) {
            if (cut.second == 'H') {
                totalCost += cut.first * verticalPieces;
                horizontalPieces++;
            } else {
                totalCost += cut.first * horizontalPieces;
                verticalPieces++;
            }
        }

        return totalCost;
    }
};
