#include <iostream>
#include <string>

using namespace std;

struct stSubjectsInfo
{
    string SubjectName;
    int SubjectMark;
    int SubjectsHourse;
};


void ReadNumOfSubjects(int& NumOfSubjects)
{
    cout << "Please enter the Number of Subjects" << endl;
    cin >> NumOfSubjects;
}


float ReadNameOfSubjectsAndMarks(int NumOfSubjects)
{

    int sumt = 0;
    int sum = 0;

    for (int Counter = NumOfSubjects; Counter > 1; Counter--)
    {
        
        sum++;

        cout << "Please enter a Name of Subject" << to_string(sum) << endl;
        cin >> SubjectsData.SubjectName;

        cout << "Please enter a Mark of Subject" << to_string(sum) << endl;
        cin >> SubjectsData->SubjectMark[sumt];

        cout << "Please enter Hourse of Subject" << to_string(sum) << endl;
        cin >> SubjectsData->SubjectsHourse[sumt];
    }
}









int main()
{   
    int NumOfSubjects;

    ReadNumOfSubjects(NumOfSubjects);

    stSubjectsInfo SubjectsData;

    ReadNameOfSubjectsAndMarks(NumOfSubjects);

    

    return 0;
}