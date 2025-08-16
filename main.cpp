#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

// Reverse text function
void reverseFileContent(const string& inputFile, const string& outputFile) {
    ifstream inFile(inputFile);
    if (!inFile) {
        cerr << "Error opening file: " << inputFile << endl;
        return;
    }

    // Read the text of the file
    string content((istreambuf_iterator<char>(inFile)), istreambuf_iterator<char>());
    inFile.close();

    // Reverse the text
    reverse(content.begin(), content.end());

    // Write reverse text to the output file
    ofstream outFile(outputFile);
    if (!outFile) {
        cerr << "Error creating file: " << outputFile << endl;
        return;
    }

    outFile << content;
    outFile.close();

    cout << "Reversed content written to " << outputFile << endl;
}

int main() {
    const string inputFilename = "CSC450_CT5_mod5.txt";
    const string reversedFilename = "CSC450-mod5-reverse.txt";

    // Get user input
    string userInput;
    cout << "Enter text to append to the file: ";
    getline(cin, userInput);

    // Append input to the file
    ofstream outFile(inputFilename, ios::app);
    if (!outFile) {
        cerr << "Error opening file for appending: " << inputFilename << endl;
        return 1;
    }

    outFile << userInput << endl;
    outFile.close();

    // Reverse file content and write to another file
    reverseFileContent(inputFilename, reversedFilename);

    return 0;
}