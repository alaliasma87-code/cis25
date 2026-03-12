#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

// Class to store information from the dataset
class DatasetRecord {
public:
    string id, name, year, rating, genre;

    // Display the 5 fields extracted from each row
    void display() {
        cout << "ID: " << id << " | Name: " << name << " | Year: " << year 
             << " | Rating: " << rating << " | Genre: " << genre << endl;
    }
};

int main() {
    // Logic: Opens the external data.csv in this folder
    ifstream file("data.csv"); 
    if (!file.is_open()) {
        cout << "Error: Could not find data.csv" << endl;
        return 1;
    }

    string line;
    vector<DatasetRecord> records;
    getline(file, line); // Skip the header row

    // Logic: Loads 10 entries into the class vector
    while (getline(file, line) && records.size() < 10) {
        stringstream ss(line);
        DatasetRecord r;
        
        getline(ss, r.id, ',');
        getline(ss, r.name, ',');
        getline(ss, r.year, ',');
        getline(ss, r.rating, ',');
        getline(ss, r.genre, ',');

        records.push_back(r);
    }

    // Output the results
    for (auto& entry : records) {
        entry.display();
    }

    file.close();
    return 0;
}
