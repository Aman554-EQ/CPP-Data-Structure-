#include<iostream>
using namespace std;
int main(){
int *grades = NULL;
int numberOfGrades;

cout << "Enter the number of grades: ";
cin >> numberOfGrades;
grades = new int[numberOfGrades];

for (int i = 0; i < numberOfGrades; i++)
   cin >> grades[i];

for (int j = 0; j < numberOfGrades; j++)
      cout << grades[j] << " ";

delete [] grades;
grades = NULL;


}
