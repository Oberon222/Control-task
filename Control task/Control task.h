#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Question
{
	string question;
	string rightAnswer;
	
};

struct Quiz
{
	string NameQuiz;
	Question* questions;
	int countQuestions;
	
};

void AddQuiz();
void showQuiz();
