class Solution {
public:
    vector<string>ans;
    
    void gen(int n, int i, bool flag, string &temp){
        if(i>=n){
            ans.push_back(temp);
            return;
        }
        temp.push_back('1');
        gen(n,i+1,true, temp);
        temp.pop_back();
        if(flag){
            temp.push_back('0');
            flag=false;
            gen(n, i+1, flag, temp);
            temp.pop_back();
            flag=true;
        }

    }
    vector<string> validStrings(int n) {
        string temp;
        bool flag=true;
        int i=0;
        gen(n, i, flag, temp);

        return ans;
    }
};