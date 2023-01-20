//https://leetcode.com/problems/length-of-last-word/
class Solution {
public:
    int lengthOfLastWord(string s) {
        bool spacecrossed=false;
        int wordlength=0;
        int i=0;
        while(i<s.length())
        {
            if(s[i]!=' ')
            {   
                if(spacecrossed==true)
                {
                    wordlength=0;
                    spacecrossed=false;    
                }
                wordlength++;
            }
            if(s[i]==' ')
            {
                spacecrossed=true;
            }
            i++;
        }
        return wordlength;
    }
};
