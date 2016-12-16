class Solution {
public:
    bool isValid(string s) {
        stack<char> paren;
        unordered_map<char, char> small = {{'(',')'},{'{','}'},{'[',']'}};
        for(auto c : s){
            if(small.find(c) != small.end())
                paren.push(c);
            else if(paren.empty()) return false;
            else{
                if( small[paren.top()] != c )
                    return false;
                paren.pop();
            }
        }
        return paren.empty();
    }
};
