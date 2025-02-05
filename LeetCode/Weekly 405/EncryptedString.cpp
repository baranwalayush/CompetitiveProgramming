class Solution {
public:
    string getEncryptedString(string s, int k) {
        int n=s.size();
        k=k%n;
        string s1;
        for(int i=0;i<n;i++){
            char c=s[(i+k)%n];
            s1.push_back(c);
        }
        return s1;
    }
};