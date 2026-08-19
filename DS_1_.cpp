#include <iostream>
using namespace std;

struct Student
{
    int roll;
    char name[30];
    float marks;
};

// Function to input student details
void input(Student *s)
{
    cout << "Enter Roll No: ";
    cin >> s->roll;

    cout << "Enter Name: ";
    cin >> s->name;

    cout << "Enter Marks: ";
    cin >> s->marks;
}

// Function to display student details
void display(Student *s)
{
    cout << "\nRoll No: " << s->roll;
    cout << "\nName: " << s->name;
    cout << "\nMarks: " << s->marks << endl;
}

int main()
{
    Student s[3];   // Array of structures

    // Input details
    for (int i = 0; i < 3; i++)
    {
        cout << "\nEnter details of Student " << i + 1 << endl;
        input(&s[i]);    // Pointer
    }

    // Display details
    cout << "\n===== Student Details =====\n";

    for (int i = 0; i < 3; i++)
    {
        display(&s[i]);  // Pointer
    }

    return 0;
}
