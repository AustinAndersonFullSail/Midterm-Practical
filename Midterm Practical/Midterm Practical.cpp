#include <iostream>

int GetQuestion();
void CheckAnswer(char userAnswer, int question);

int main()
{
	int question = GetQuestion();

	char answer;
	std::cin >> answer;

	system("cls");

	CheckAnswer(answer, question);

	system("pause");

	return 0;
}

int GetQuestion() {

	srand(time(NULL));
	int question = rand() % 4;

	if (question == 0) {
		std::cout << "What is the capital of Oklahoma?" << std::endl;

		std::cout << "A. Oklahoma City" << std::endl << "B. Austin" << std::endl << "C. New York City" << std::endl << "D. Kansas City" << std::endl;
	}
	else if (question == 1) {
		std::cout << "Where is Antarctica?" << std::endl;

		std::cout << "A. North" << std::endl << "B. East" << std::endl << "C. South" << std::endl << "D. West" << std::endl;
	}
	else if (question == 2) {
		std::cout << "Who is the current president of the United States?" << std::endl;

		std::cout << "A. George Bush" << std::endl << "B. Joe Biden" << std::endl << "C. Barrack Obama" << std::endl << "D. Donald Trump" << std::endl;
	}
	else if (question == 3) {
		std::cout << "When was the United States founded?" << std::endl;

		std::cout << "A. 1876" << std::endl << "B. 1995" << std::endl << "C. 2022" << std::endl << "D. 1776" << std::endl;
	}

	return question;
}

void CheckAnswer(char userAnswer, int question) {

	if (question == 0 && toupper(userAnswer) == 'A' ||
		question == 1 && toupper(userAnswer) == 'C' ||
		question == 2 && toupper(userAnswer) == 'B' ||
		question == 3 && toupper(userAnswer) == 'D') {

		std::cout << "Correct!" << std::endl;
	}
	else
		std::cout << "Wrong!" << std::endl;
}