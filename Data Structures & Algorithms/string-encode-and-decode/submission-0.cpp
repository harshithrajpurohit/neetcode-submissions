class Solution {
public:

    string encode(vector<string>& strs) {
        string result="";   //empty string to store the list as string
        for(string& s: strs){
            result += to_string(s.length()) + "#" + s;  //lenth of string + # + string
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string>result;
        int i = 0;
        while(i<s.length()){
            int j=i;
            while(s[j]!='#'){
                j++;
            }                                       //ij
            int length = stoi(s.substr(i, j - i));    //5#hello-- 5 nikal diya and converted to int
            string str = s.substr(j+1, length); //--after #, take length(5) char
            result.push_back(str);
            i = j+length+1; //next i 
        }
        return result;
    }
};
