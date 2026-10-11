#include <iostream>
using namespace std;

int main() {
    int roll[5], marks[5];

    cout << "Enter roll number and marks of 5 students:\n";

    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << ": ";
        cin >> roll[i] >> marks[i];
    }
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (marks[i] < marks[j]) {

                int temp = marks[i];
                marks[i] = marks[j];
                marks[j] = temp;

                
                temp = roll[i];
                roll[i] = roll[j];
                roll[j] = temp;
            }
        }
    }

    cout << "\nStudents from highest marks to lowest marks:\n";

    for (int i = 0; i < 5; i++) {
        cout << "Roll No: " << roll[i]
             << "  Marks: " << marks[i] << endl;
    }

    return 0;
}
