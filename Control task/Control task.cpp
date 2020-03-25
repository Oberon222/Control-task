#include "Control task.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

Quiz* quizzes;
int countQuizzes = 0;

void AddQuiz()
{
	ofstream fout;
	fout.open("Quizzes.txt", fstream::app);
	bool isOpen = fout.is_open();
	if (isOpen = true) {
		Quiz* tmp = new Quiz[countQuizzes + 1];
		for (int i = 0; i < countQuizzes; i++) {
			tmp[i] = quizzes[i];
		}
		int countQuestions = 0;
		cout << "Enter the name of the quiz: ";
		cin >> tmp[countQuizzes].NameQuiz;
		cout << "Enter the number of questions: ";
		cin >> countQuestions;
		tmp[countQuizzes].countQuestions = countQuestions;

		tmp[countQuizzes].questions = new Question[countQuestions];
		for (int i = 0; i < countQuestions; i++) {
			cout << "Enter questions for this quiz: ";
			cin >> tmp[countQuizzes].questions[i].question;
			cout << "Please enter the correct answer for this question: ";
			cin >> tmp[countQuestions].questions[i].rightAnswer;
		}


		fout.close();
	}
	else {
		cout << "Error" << endl;
	}
}

void showQuiz()
{
}
