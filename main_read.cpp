#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    int num;
    int score1, score2;
    double sum, avg;
    string sname;

    ifstream ifs;
    ifs.open("students.txt");

    // prevent running with bad file name
    if(!ifs){
        cerr << "Failed to open file." << endl;
        return 1;
    }

    // read number of students
    ifs >> num;

    cout << "Total " << num << " students" << endl;

    for(int i = 0; i < num; i++){
        ifs >> sname >> score1 >> score2;

        sum = score1 + score2;
        avg = sum / 2.0;

        cout << "Student Name: " << sname
             << " score1: " << score1
             << " score2: " << score2
             << " Sum: " << sum
             << " Avg: " << avg << endl;
    }

    ifs.close();

    return 0;
}