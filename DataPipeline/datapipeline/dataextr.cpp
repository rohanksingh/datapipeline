#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
// #include <curl/curl.h> 


using namespace std;

// Funct to read CSV
vector<vector<string>> readCSV(const string& filename) 
{
	vector<vector<string>> data;
	ifstream file(filename);
	string line, word;
	
	while (getline(file, line)) 
	{
	vector<string> row;
	stringstream ss(line);
	while (getline(ss, word, ',')) 
	{
	row.push_back(word);

	}
	data.push_back(row);

	}
	file.close();
	return data;
}

// Function 

int main() 
{
	//Read from csv 
	
	vector<vector<string>> csvData = readCSV("stock_data.csv");
	
	// Fetch data fro
	
	cout << "Data Extraction Complete!\n";
}