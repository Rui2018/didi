#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>

#include "word_anagram.h"

using namespace std;

int main(int argc, char** argv) {
    ifstream f("/usr/share/dict/words");
    string word;
    vector<string> dictionary;
    
    if (f.is_open()) {
        while(getline(f, word)) {
            dictionary.push_back(std::move(word));
        }
    } else {
        cout << "Open file failure." << endl;
    }
    
    vector<char> chars = {'a', 'b'};
    vector<string> res = anagrams(chars, dictionary);
    cout<<"words are: "<<endl;
    for(string word : res){
        cout<<word<<endl;
    }
    return 0;
}
