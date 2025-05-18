#include <iostream>
#include <fstream>
using namespace std;

class FileCopier {
    string sourceFile;
    string destinationFile;

public:
    FileCopier(string src, string dest) {
        sourceFile = src;
        destinationFile = dest;
    }

    void copyFile() {
        ifstream inFile(sourceFile);
        ofstream outFile(destinationFile);

        if (!inFile || !outFile) {
            cout << "Error opening file!" << endl;
            return;
        }

        string line;
        while (getline(inFile, line)) {
            outFile << line << endl;
        }

        cout << "File copied successfully!" << endl;

        inFile.close();
        outFile.close();
    }
};

int main() {
    string source, destination;

    cout << "Enter source file name: ";
    cin >> source;

    cout << "Enter destination file name: ";
    cin >> destination;

    FileCopier copier(source, destination);
    copier.copyFile();

    return 0;
}
