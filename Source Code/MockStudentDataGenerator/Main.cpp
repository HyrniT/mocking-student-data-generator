#define _CRT_SECURE_NO_WARNINGS
#include "RandomStudentGenerator.h"
#include "Student.h"
#include <fstream>
using namespace std;

int main()
{
	int temp = 0;
	Score sum = 0;
	Score avg = 0;

	freopen("student.txt", "rt", stdin);

	Student st_file;
	vector<Student> listStudent;

	//Read all students saved in the file "students.txt" back into a vector of Student
	while (cin >> st_file)
	{
		listStudent.push_back(st_file);
		temp = st_file.GetterId();
		sum = sum + st_file.GetterScore();
	}
	//Generate randomly a number n in the range of [5, 10]
	RandomIntegerGenerator i_rng;
	int n = i_rng.next(5, 10);

	//Generate randomly n Students and add to the previous vector
	RandomStudentGenerator s_rgn;
	for (int i = 0; i < n; i++)
	{
		Student st_mock = s_rgn.next(++temp);
		listStudent.push_back(st_mock);
		sum = sum + st_mock.GetterScore();
	}

	//Print out the average GPA of all students
	avg = sum.GetterScore() / listStudent.size();
	cout << "Average of all student: " << avg << endl;

	//Print out all the students that have a GPA greater than the average GPA
	for (int i = 0; i < listStudent.size(); i++)
	{
		if (listStudent[i].GetterScore() > avg)
		{
			cout << listStudent[i].GetterId() << " - " << listStudent[i].GetterFullName() << ", GPA:" << listStudent[i].GetterScore() << endl;
		}
	}

	//Overwrite and save and the students in the current vector back to the file "students.txt"
	freopen("student.txt", "wt", stdout);
	for (int i = 0; i < listStudent.size(); i++)
		cout << listStudent[i];
	return 0;
}
