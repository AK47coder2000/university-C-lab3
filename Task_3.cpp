#include <iostream>
using namespace std;

struct Student{
    int studentID;
    string name;
    float cgpa;
};

int main(){
    Student students[3] = {{1, "Alice", 3.7}, {2,"Bob", 3.1},{3, "Charlie", 3.5}};

    for (int i =0; i < 3; i++) {
        cout << "Student ID: " << students[i].studentID << endl;
        cout << "Student Name: " << students[i].name << endl;
        cout << "Student CGPA: " << students[i].cgpa << endl;
    }

    return 0;
}