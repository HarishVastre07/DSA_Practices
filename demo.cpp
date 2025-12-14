#include <iostream>
#include <vector>
#include <string>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) 
    return "";
    
    string prefix = "";

    for (int i = 0; i < strs[0].length(); i++) {
        char ch = strs[0][i];
        
        for (int j = 1; j < strs.size(); j++) {
            if (i >= strs[j].length() || strs[j][i] != ch) {
                return prefix;
            }
        }
                prefix += ch;
    }
    
    return prefix;
}

int main() {
    vector<string> strs = {"flower", "flow", "flight"};
    cout << longestCommonPrefix(strs) << endl;
    
    cout << "\nPress Enter to exit..." << flush;
    cin.ignore();
    cin.get();
    
    return 0;
}
