class Solution {
public:
    int countVowelStrings(int n, int l = 1 ) {
        
        return (n + 1) * (n + 2) * (n + 3) * (n + 4) / 24;
        
    }
};