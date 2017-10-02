#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Note that we must take the first parameter by reference
void writeToStream(ostream& output, int number) {
    output << number << endl;
}

string outputFilename = "res.txt";
int kevinsFavoriteNumber = 8675309;

int main() {

	// Write an int to the user's console.
    int myNum = 65536;
    cout << "Result when writing an int directly to cout: " << myNum << endl;
    writeToStream(cout, kevinsFavoriteNumber);

    // Write an int to a file
    ofstream outputFile;
    outputFile.open(outputFilename.c_str());
    writeToStream(outputFile, kevinsFavoriteNumber);

	//Wait for us
	char c;
	cin >> c;
}
