#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string decodeSong(string remix) {
    string result;
    string word;
    stringstream ss(remix);
    
    while (getline(ss, word, ' ')) {
        size_t pos;
        while ((pos = word.find("WUB")) != string::npos) {
            word.replace(pos, 3, " ");
        }
        result += word + " ";
    }
    
    // Trim leading/trailing spaces
    while (!result.empty() && result.front() == ' ') result.erase(result.begin());
    while (!result.empty() && result.back() == ' ') result.pop_back();
    
    return result;
}

int main() {
    string remix;
    cin >> remix;
    
    string originalSong = decodeSong(remix);
    cout << originalSong << endl;
    
    return 0;
}
