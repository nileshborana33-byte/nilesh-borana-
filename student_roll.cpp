#include<iostream>
using namespace std;

int main() {
int rollNumbers[5];

cout<<"Enter the roll number of 5 student:"<<endl;
for(int i=0; i < 5; i++) {
  cout<< "Enter roll number for student"<<(i+1)<<":";
  cin>> rollNUmbers[1];
}

cout<< "\n--- Displaying Student roll numbers ---" <<endl;
for(int i = 0; i < 5; i++) {
  cout<< "student" << (i+1) << " Roll No: " <<rollNumbers[i] << endl;
}

return 0;
}
