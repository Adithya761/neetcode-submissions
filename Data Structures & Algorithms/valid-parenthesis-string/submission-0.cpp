class Solution {
public:
    bool checkValidString(string s) {
        int lmin = 0;
        int lmax = 0;

        for(int i = 0;i < s.size();i++){
            if(s[i] == '('){
                lmin += 1;
                lmax += 1;
            }
            else if(s[i] == ')'){
                lmin -= 1;
                lmax -= 1;
            }
            else{
                lmin -= 1;
                lmax += 1;
            }
            if(lmin < 0){
                lmin = 0;
            }
            if(lmax < 0){
                return false;
            }
        }
        return (lmin == 0);
    }
};
