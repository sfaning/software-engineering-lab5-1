#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>
#include <math.h>
#include <set>
using namespace std;

int extractGrade(string &grade)
{
    string str1=grade.substr(grade.length()-1);
    int num = stoi(str1);
    return num;
}

double generateEquation(int grade)
{

}

void read(string &grade, int &num_questions)
{

}

void solve(string &grade, int &num_questions)
{

}

int main()
{
    int num_questions;
    string grade;

    read(grade, num_questions);

    solve(grade, num_questions);

    system("pause");

    return 0;
}
