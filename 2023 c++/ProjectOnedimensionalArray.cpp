#include <iostream>
#include <string>
using namespace std;

int main()
{   
    int count = 5;          // Set number of student as you want
    string students[count]; // Holds the number of students in array eg: (NITISH, MOFIJUL, ANCHAL)

cout << "------------------------------------------" << endl;
cout << "-- Welcome to Student Management System --" << endl;
cout << "--------NKR--System--Starting--Up---------" << endl;
cout << "------------------------------------------" << endl;

cout << "\nEnter the name of the students: " << endl;
for (int i = 0; i < count; i++) //4 i++ (1 incr)
{
    cout << "Name Of Student " << i + 1 << ": ";
    getline(cin,students[i]);
}

//For test 1
double test1Arr[count];
cout << "\n*** Test 1 Marks (out of 20) ***" << endl;
for (int i = 0; i < count; i++)
{
    cout << "Enter Marks obtained by " << students[i] << " : ";
    cin >> test1Arr[i];     
}


//For test 2
double test2Arr[count];
cout << "\n*** Test 2 Marks (out of 25) ***" << endl;
for (int i = 0; i < count; i++)
{
    cout << "Enter Marks obtained by " << students[i] << " : ";
    cin >> test2Arr[i];     
}


//For test 3
double test3Arr[count];
cout << "\n\n*** Test 3 Marks (out of 35) ***" << endl;
for (int i = 0; i < count; i++)
{
    cout << "Enter Marks obtained by " << students[i] << " : ";
    cin >> test3Arr[i];     
}

//Storing total of each student and adding in array
double eachTotalMarksArray[count];
for (int i = 0; i < count; i++)
{
    eachTotalMarksArray[i] = test1Arr[i]+test2Arr[i]+test3Arr[i];       
}

//{100,100,80}

//Calculating  average total score for whole class
double TotalMarks = 0;
for (int i = 0; i < count; i++)
{
    TotalMarks = TotalMarks + eachTotalMarksArray[i];       
}
double averageTotalMarks = TotalMarks/count;

cout << "\nTotal Marks Obtained By Each Students: " << endl;
for(int i = 0; i < count; i++) {
    cout << students[i] << " : " << eachTotalMarksArray[i]  << endl;
}

cout << "\nAverage Total Score For The Class: " << averageTotalMarks << endl;    
return 0;


}

