class Solution {

private:
bool valid(char ch){

if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')||(ch >= 'A' && ch <= 'Z')){
    return 1 ;
}
else{return 0 ;
}


}

 char tolowercase(char ch) {
        if (ch >= 'A' && ch <= 'Z') {
            return ch - 'A' + 'a';
        }
        return ch;
    }
bool checkPalindrome(string s) {
    int st = 0;
    int e = s.size() - 1;

    while (st <= e) {
       

     
     if (s[st] != s[e]) {
            return false;
        } else {
            st++;
            e--;
        }
    }
    return true;
}
public:
    bool isPalindrome(string s) {

        string temp="";
        for (int j=0; j<s.size();j++){
            if(valid(s[j])){
                temp.push_back(s[j]);
            }
        }
        for (int j=0;j<temp.size();j++){
            temp[j]=tolowercase(temp[j]);
        }
         return checkPalindrome(temp);
    }
};