#include <vector>
#include <string>
#include <unordered_map>
#include <locale>

#include "word_anagram.h"

vector<string> anagrams(vector<char> chars, vector<string> dictionary) {
    vector<string> res;
    int charSize = chars.size();
    
    if(charSize == 0){
        return res;
    }
    
    unordered_map<char, int> charMap;
    
    for(char c : chars) {
        c = tolower(c);
        ++charMap[c];
    }
    
    for(string word : dictionary) {
        int wordSize = word.size();
        if(wordSize != charSize){
            continue;
        }
        
        
        unordered_map<char, int> tmpMap = charMap;
        string originalWord = word;
        bool isBreak = false;
        for(char c : word) {
            c = tolower(c);
            // not contain this char
            if(!tmpMap.count(c)) {
                isBreak = true;
                break;
            }
            //contain this char
            --tmpMap[c];
            if(tmpMap[c] < 0) {
                isBreak = true;
                break;
            }
            
        }
        
        if(!isBreak) {
            res.push_back(originalWord);
        }
    }
    return res;
}