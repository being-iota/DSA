// approach 1 ->hmne sorting kia and then compare kia
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!= t.length()){
            return false;
        }
       sort(s.begin(), s.end());
       sort(t.begin(), t.end());
    return s == t;
    }
};

// approach 2 -> hmne ek map banaya and then usme count krke compare kia
class Solution { 
public:
    bool isAnagram(string s, string t) {
        if(s.length()!= t.length()){
            return false;
        }
        unordered_map<char, int> mp;
        for(int i=0; i<s.length(); i++){
            mp[s[i]]++;
            mp[t[i]]--;
        }
        for(auto x: mp){
            if(x.second!=0){
                return false;
            }
        }
        return true;
    }
};

// approach 3 -> hmne ek array banaya and usme count krke compare kia
class Solution {
public:
    bool isAnagram(string s, string t) {
         if (s.length() != t.length()) return false;
    std::vector<int> count(26, 0); // only lowercase letters
    for (char c : s) count[c - 'a']++;
    for (char c : t) {
        if (count[c - 'a'] == 0) return false;
        count[c - 'a']--;
    }
    return true;
}
};

//approach 4 -> hmne prime multication(advance approach use kia)->isko padhna hai abhi 
class Solution {   
if (s.length() != t.length()) return false;
    std::vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101}; // prime numbers for each character
    int productS = 1, productT = 1;
    for (char c : s) productS *= primes[c - 'a'];
    for (char c : t) productT *= primes[c - 'a'];
    return productS == productT;
}


