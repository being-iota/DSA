class Solution {
public:
    string losingPlayer(int x, int y) {
        int maxMoves = min(x, y / 4);
        return (maxMoves % 2 == 1) ? "Alice" : "Bob";
    }
};