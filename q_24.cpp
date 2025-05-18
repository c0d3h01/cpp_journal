#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

class FileAnalyzer {
private:
    string filename;
    int lineCount;
    int wordCount;
    int charCount;

public:
    FileAnalyzer(string fname) {
        filename = fname;
        lineCount = wordCount = charCount = 0;
    }

    void analyze() {
        ifstream file(filename);
        if (!file) {
            cerr << "Error opening file: " << filename << endl;
            return;
        }

        string line;
        while (getline(file, line)) {
            lineCount++;
            charCount += line.length();

            stringstream ss(line);
            string word;
            while (ss >> word) {
                wordCount++;
            }
        }
        file.close();
    }

    void displayResults() {
        cout << "File: " << filename << endl;
        cout << "Total Lines: " << lineCount << endl;
        cout << "Total Words: " << wordCount << endl;
        cout << "Total Characters: " << charCount << endl;
    }
};

int main() {
    string filename;
    cout << "Enter the filename to analyze: ";
    cin >> filename;

    FileAnalyzer analyzer(filename);
    analyzer.analyze();
    analyzer.displayResults();

    return 0;
}
