#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <set>
#include <string>
#include <iomanip>

using namespace std;

void display_words(const map<string, int> &words) {
    cout << setw(12) << left << "\nWord"
                << setw(7) << right << "Count"<< endl;
    cout << "===================" << endl;
    for (auto pair: words)
        cout << setw(12) << left << pair.first 
                       << setw(7) << right << pair.second << endl;
}

void display_words(const map<string, set<int>> &words)
{
     cout << setw(12) << left << "\nWord"
                << "Occurrences"<< endl;
    cout << "=====================================================================" << endl;
    for (auto pair: words) {
        cout << setw(12) << left << pair.first 
                       << left << "[ ";
        for (auto i: pair.second) 
            cout << i << " ";
        cout << "]" << endl;
    }
}

string clean_string(const string &s) {
    string result;
    for (char c: s) {
        if (c == '.' || c == ',' || c == ';' || c == ':')
            continue;
        else
            result += c;
    }
    return result;
}

void part1() {
    map<string, int> words;
    string line;       
    string word;   
    ifstream in_file {"../words.txt"};
    if (in_file) {
        while (getline(in_file, line)) {
            stringstream ss(line);
            while (ss >> word) {
                word = clean_string(word);
                words[word]++;
            }
        }
        in_file.close();
        display_words(words);
    } else {
        cerr << "Error opening input file" << endl;
    }
}
    
void part2() {
    map<string, set<int>> words;
    string line;
    string word;
    ifstream in_file {"../words.txt"};
    if (in_file) {
        int line_number = 0;
        while (getline(in_file, line)) {
            //cout << line;
            line_number++;
            stringstream ss(line);
            while (ss >> word) {
               word = clean_string(word);
               words[word].insert(line_number);
            }  
        }
        in_file.close();
        display_words(words);
    } else {
        cerr << "Error opening input file" << endl;
    }
}

int main() {
    part1();
    part2();
    return 0;
}

