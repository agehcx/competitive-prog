class Solution {
public:
    bool checkRecord(string s) {
        int totalAbsent = 0;
        int ConsecutiveLate = 0;
        for(char idx : s) {
            if(idx=='A') {
                totalAbsent++; 
                ConsecutiveLate = 0;
            } else if(idx=='L') {
                ConsecutiveLate++;
            } else ConsecutiveLate = 0;
            if(totalAbsent>1 || ConsecutiveLate>2) return false;
        }
        return true;
    }
};
