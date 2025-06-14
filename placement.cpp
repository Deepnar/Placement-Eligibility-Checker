#include <iostream>
#include <string>
using namespace std;

class Student {

    string name;
    int rollno;
    float avg;
    string branch;
    int technical_Score;
    int aptitude_Score;
public:
    void input() {
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> rollno;
        cout << "Enter average(OUT OF 100): ";
        cin >> avg;
        if (avg < 90) {
            cout << "You are not eligible for placement" << endl;
            exit(0);
        }
        cout << "Enter branch[IT, COMP, CSE, AIDS, CIVIL, MECH, ENTC](IN CAPITAL): ";
        cin.ignore();
        getline(cin, branch);
        cout << "Enter technical score(OUT OF 50): ";
        cin >> technical_Score;
        cout << "Enter aptitude score(OUT OF 50): ";
        cin >> aptitude_Score;
    }

    void Placement() {
            if (branch == "IT" || branch == "COMP" || branch == "CSE" || branch == "AIDS") {
                cout << "You can be placed for either of the following." << endl;
                int choice;
                cout << "Enter choice for placement category(1 or 2):\n1. AI Developer\n2. Data Scientist" << endl;
                cin >> choice;
                if (choice == 1) {
                    Category1();
                } else if (choice == 2) {
                    Category2();
                } else {
                    cout << "Invalid choice" << endl;
                }
            } else if (branch == "CIVIL" || branch == "MECH" || branch == "ENTC") {
                cout << "You can choose category 3" << endl;
                Category3();
            } else {
                cout << "Invalid branch" << endl;
            }
    }

private:
    void Category1() {
        if (technical_Score + aptitude_Score >= 85) {
            cout << "You are placed as an AI Developer" << endl;
        } else {
            cout << "You can enroll for AI course" << endl;
        }
    }

    void Category2() {
        if (technical_Score + aptitude_Score >= 85) {
            cout << "You are placed as a Data Scientist" << endl;
        } else {
            cout << "You can enroll for Data Science course" << endl;
        }
    }

    void Category3() {
        if (technical_Score + aptitude_Score >= 85) {
            cout << "You are placed as a Java Developer" << endl;
        } else {
            cout << "You can enroll for C++ and Java workshop" << endl;
        }
    }
};

int main() {
    Student student;
    student.input();
    student.Placement();
    return 0;
}