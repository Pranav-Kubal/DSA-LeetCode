class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWords = 0;
        for (int i = 0; i < sentences.size(); i++) {
            int count = 1;
            for (int j = 0; j < sentences[i].size(); j++) {
                if (sentences[i][j] == ' ') {
                    count++;
                }
            }

            if (count > maxWords) {
                maxWords = count;
            }
        }
        return maxWords;
    }
};