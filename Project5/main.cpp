	#include <iostream>
	#include <fstream>
	#include <sstream>
	#include <string>
	using namespace std;
	
	int main() {
		ifstream inFile;
		string currentLine;
		string sNum1, sNum2, text;
		int num1, num2;
		stringstream converter;
	
		inFile.open("data.csv"); 
		while(getline(inFile, currentLine)){ 
		 
		converter.clear();
		converter.str(currentLine);
	
		getline(converter, sNum1, ',');  
		getline(converter, sNum2, ',');  
		getline(converter, text);
	
		converter.clear();
		converter.str("");
		converter << sNum1 << " " << sNum2;
		converter >> num1 >> num2;
		
		int sum = num1 + num2;
	
		for (int i = 0; i < sum; i++) {
			cout << text << " ";
		}
		cout << endl;
		}
	
		inFile.close();
		return 0;
	}
	