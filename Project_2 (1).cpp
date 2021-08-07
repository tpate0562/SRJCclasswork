//Sample Functional Decomposition Phase 3 (Math Skill Builder)
#include <iostream>
#include <cstdlib>       //for srand
#include <ctime>         //to seed the random number
#include <cmath>         //for geometric expressions
#include <iomanip>       //formatted display
using namespace std;
void initialText();
void processInitialInput(int&, int&);
void arithmeticSets(float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, int&, int&);
void geometrySets(float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, int&, int&, const float);
void statistics();
void printReport(int, int, float);
void exit();
int main(){
 srand(time(0));
 const float pi = 3.141593;          // use for geometry problems
int numProbSets, numCorrect, numberIncorrect, input;
float additionInput, subtractionInput, multiplicationInput, divisionInput;
int correct = 0, incorrect = 0, times;
float number1, number2, number3, number4, number5, number6, number7, number8, cpi, answerOne, answerTwo, answerThree, answerFour, inputOne, inputTwo, inputThree, inputFour;
float additionAnswer, subtractionAnswer, multiplicationAnswer, divisionAnswer; // Declares all variables    //seed the random number generator
initialText();
processInitialInput(input, times);
if (input == 1){ // All the functions for an input of choice 1
    if (times == 1)arithmeticSets( number1,  number2,  number3,  number4,  number5,  number6,  number7,  number8,  additionAnswer,  subtractionAnswer,  multiplicationAnswer,  divisionAnswer,  additionInput,  subtractionInput,  multiplicationInput,  divisionInput, correct, incorrect);
    if (times == 2){arithmeticSets( number1,  number2,  number3,  number4,  number5,  number6,  number7,  number8,  additionAnswer,  subtractionAnswer,  multiplicationAnswer,  divisionAnswer,  additionInput,  subtractionInput,  multiplicationInput,  divisionInput, correct, incorrect);cout << "Set #2" << endl;arithmeticSets( number1,  number2,  number3,  number4,  number5,  number6,  number7,  number8,  additionAnswer,  subtractionAnswer,  multiplicationAnswer,  divisionAnswer,  additionInput,  subtractionInput,  multiplicationInput,  divisionInput, correct, incorrect);}
    if (times == 3){arithmeticSets( number1,  number2,  number3,  number4,  number5,  number6,  number7,  number8,  additionAnswer,  subtractionAnswer,  multiplicationAnswer,  divisionAnswer,  additionInput,  subtractionInput,  multiplicationInput,  divisionInput, correct, incorrect);cout << "Set #2" << endl;arithmeticSets( number1,  number2,  number3,  number4,  number5,  number6,  number7,  number8,  additionAnswer,  subtractionAnswer,  multiplicationAnswer,  divisionAnswer,  additionInput,  subtractionInput,  multiplicationInput,  divisionInput, correct, incorrect);cout << "Set #3" << endl;arithmeticSets( number1,  number2,  number3,  number4,  number5,  number6,  number7,  number8,  additionAnswer,  subtractionAnswer,  multiplicationAnswer,  divisionAnswer,  additionInput,  subtractionInput,  multiplicationInput,  divisionInput, correct, incorrect);}
    if (times == 4){arithmeticSets( number1,  number2,  number3,  number4,  number5,  number6,  number7,  number8,  additionAnswer,  subtractionAnswer,  multiplicationAnswer,  divisionAnswer,  additionInput,  subtractionInput,  multiplicationInput,  divisionInput, correct, incorrect);cout << "Set #2" << endl;arithmeticSets( number1,  number2,  number3,  number4,  number5,  number6,  number7,  number8,  additionAnswer,  subtractionAnswer,  multiplicationAnswer,  divisionAnswer,  additionInput,  subtractionInput,  multiplicationInput,  divisionInput, correct, incorrect);cout << "Set #3" << endl;arithmeticSets( number1,  number2,  number3,  number4,  number5,  number6,  number7,  number8,  additionAnswer,  subtractionAnswer,  multiplicationAnswer,  divisionAnswer,  additionInput,  subtractionInput,  multiplicationInput,  divisionInput, correct, incorrect);cout << "Set #4" << endl;arithmeticSets( number1,  number2,  number3,  number4,  number5,  number6,  number7,  number8,  additionAnswer,  subtractionAnswer,  multiplicationAnswer,  divisionAnswer,  additionInput,  subtractionInput,  multiplicationInput,  divisionInput, correct, incorrect);}
    if (times == 5){arithmeticSets( number1,  number2,  number3,  number4,  number5,  number6,  number7,  number8,  additionAnswer,  subtractionAnswer,  multiplicationAnswer,  divisionAnswer,  additionInput,  subtractionInput,  multiplicationInput,  divisionInput, correct, incorrect);cout << "Set #2" << endl;arithmeticSets( number1,  number2,  number3,  number4,  number5,  number6,  number7,  number8,  additionAnswer,  subtractionAnswer,  multiplicationAnswer,  divisionAnswer,  additionInput,  subtractionInput,  multiplicationInput,  divisionInput, correct, incorrect);cout << "Set #3" << endl;arithmeticSets( number1,  number2,  number3,  number4,  number5,  number6,  number7,  number8,  additionAnswer,  subtractionAnswer,  multiplicationAnswer,  divisionAnswer,  additionInput,  subtractionInput,  multiplicationInput,  divisionInput, correct, incorrect);cout << "Set #4" << endl;arithmeticSets( number1,  number2,  number3,  number4,  number5,  number6,  number7,  number8,  additionAnswer,  subtractionAnswer,  multiplicationAnswer,  divisionAnswer,  additionInput,  subtractionInput,  multiplicationInput,  divisionInput, correct, incorrect);cout << "Set #5" << endl;arithmeticSets( number1,  number2,  number3,  number4,  number5,  number6,  number7,  number8,  additionAnswer,  subtractionAnswer,  multiplicationAnswer,  divisionAnswer,  additionInput,  subtractionInput,  multiplicationInput,  divisionInput, correct, incorrect);}
    printReport(correct, incorrect, cpi);
}
if (input == 2){// All the functions for choice input 2
    if (times == 1)geometrySets(number1, number2, number3, number4, number5, number6, number7, number8, inputOne, inputTwo, inputThree, inputFour, answerOne, answerTwo, answerThree, answerFour, correct, incorrect, pi);
    if (times == 2){geometrySets(number1, number2, number3, number4, number5, number6, number7, number8, inputOne, inputTwo, inputThree, inputFour, answerOne, answerTwo, answerThree, answerFour, correct, incorrect, pi);cout << "Set #2" << endl;geometrySets(number1, number2, number3, number4, number5, number6, number7, number8, inputOne, inputTwo, inputThree, inputFour, answerOne, answerTwo, answerThree, answerFour, correct, incorrect, pi);}
    if (times == 3){geometrySets(number1, number2, number3, number4, number5, number6, number7, number8, inputOne, inputTwo, inputThree, inputFour, answerOne, answerTwo, answerThree, answerFour, correct, incorrect, pi);cout << "Set #2" << endl;geometrySets(number1, number2, number3, number4, number5, number6, number7, number8, inputOne, inputTwo, inputThree, inputFour, answerOne, answerTwo, answerThree, answerFour, correct, incorrect, pi);cout << "Set #3" << endl;geometrySets(number1, number2, number3, number4, number5, number6, number7, number8, inputOne, inputTwo, inputThree, inputFour, answerOne, answerTwo, answerThree, answerFour, correct, incorrect, pi);}
    if (times == 4){geometrySets(number1, number2, number3, number4, number5, number6, number7, number8, inputOne, inputTwo, inputThree, inputFour, answerOne, answerTwo, answerThree, answerFour, correct, incorrect, pi);cout << "Set #2" << endl;geometrySets(number1, number2, number3, number4, number5, number6, number7, number8, inputOne, inputTwo, inputThree, inputFour, answerOne, answerTwo, answerThree, answerFour, correct, incorrect, pi);cout << "Set #3" << endl;geometrySets(number1, number2, number3, number4, number5, number6, number7, number8, inputOne, inputTwo, inputThree, inputFour, answerOne, answerTwo, answerThree, answerFour, correct, incorrect, pi);cout << "Set #4" << endl;geometrySets(number1, number2, number3, number4, number5, number6, number7, number8, inputOne, inputTwo, inputThree, inputFour, answerOne, answerTwo, answerThree, answerFour, correct, incorrect, pi);}
    if (times == 5){geometrySets(number1, number2, number3, number4, number5, number6, number7, number8, inputOne, inputTwo, inputThree, inputFour, answerOne, answerTwo, answerThree, answerFour, correct, incorrect, pi);cout << "Set #2" << endl;geometrySets(number1, number2, number3, number4, number5, number6, number7, number8, inputOne, inputTwo, inputThree, inputFour, answerOne, answerTwo, answerThree, answerFour, correct, incorrect, pi);cout << "Set #3" << endl;geometrySets(number1, number2, number3, number4, number5, number6, number7, number8, inputOne, inputTwo, inputThree, inputFour, answerOne, answerTwo, answerThree, answerFour, correct, incorrect, pi);cout << "Set #4" << endl;geometrySets(number1, number2, number3, number4, number5, number6, number7, number8, inputOne, inputTwo, inputThree, inputFour, answerOne, answerTwo, answerThree, answerFour, correct, incorrect, pi);cout << "Set #5" << endl;geometrySets(number1, number2, number3, number4, number5, number6, number7, number8, inputOne, inputTwo, inputThree, inputFour, answerOne, answerTwo, answerThree, answerFour, correct, incorrect, pi);}
    printReport(correct, incorrect, cpi);
}
if (input == 3){ // All functions for 3
    statistics();
}
if (input == 4){ // All for 4
    exit();
}
}
void initialText(){
cout << " ++++++++++++++++++++++++++++++++++++++++++\n"
 "-  MATH SKILL BUILDER Sets - Select one  -\n"
 "*          1. BASIC ARITHMETIC           *\n" // Initial Output for intro
 "π           2. BASIC GEOMETRY            π\n"
 "%          3. BASIC STATISTICS           %\n"
 "/               4. EXIT                  /\n"
 "++++++++++++++++++++++++++++++++++++++++++" << endl;

}
void processInitialInput(int& input, int& times){ // Processes initial inputs

cout << "Choose an activity from the list 1-4: "; // Asks for the activity
cin >> input;
if(cin.fail() || input > 4 || input < 1)
		{
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Please enter a number!\n"; // Failsave
		cin >> input;
		}
cout << "How many times would you like to do the Set? (Each Set is 4 problems) ";
cin >> times; // Asks for sets
if(cin.fail() || input > 5 || input < 1)
		{
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Please enter a number!\n"; // Failsafe
		cin >> times;
		}

}
void arithmeticSets(float number1, float number2, float number3, float number4, float number5, float number6, float number7, float number8, float additionAnswer, float subtractionAnswer, float multiplicationAnswer, float divisionAnswer, float additionInput, float subtractionInput, float multiplicationInput, float divisionInput, int& correct, int& incorrect){

number1 = rand() % 10;
number2 = rand() % 10;
number3 = rand() % 10;
number4 = rand() % 10; //Generates all random numbers and assigns a variable
number5 = rand() % 10;
number6 = rand() % 10;
number7 = rand() % 10;
number8 = (rand() % 9) + 1;
additionAnswer = number1 + number2;
subtractionAnswer = number3 - number4;
multiplicationAnswer = number5 * number6; //Declares all answers
divisionAnswer = number7 / number8;
cout << number1 << " + " << number2; //Looks for input from user
cin >> additionInput;
    while(cin.fail()) // failsafe
		{
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Please enter a number!\n";
		cin >> additionInput;
		}
	if (additionInput == additionAnswer){cout << "correct" << endl;correct++;}
	else {cout << "incorrect" << endl;incorrect++;}
cout << number5 << " x " << number6;
cin >> multiplicationInput; //Looks for input from user
    while(cin.fail())// failsafe
		{
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Please enter a number!\n";
		cin >> multiplicationInput;
		}
	if (multiplicationInput == multiplicationAnswer){cout << "correct" << endl;correct++;}
	else {cout << "incorrect" << endl;incorrect++;}
	cout << number3 << " - " << number4;//Looks for input from user
cin >> subtractionInput;
    while(cin.fail())// failsafe
		{
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Please enter a number!\n";
		cin >> subtractionInput;
		}
	if (subtractionInput == subtractionAnswer){cout << "correct" << endl;correct++;}
	else {cout << "incorrect" << endl;incorrect++;}
	cout << number7 << " / " << number8;//Looks for input from user
cin >> divisionInput;
    while(cin.fail())// failsafe
		{
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Please enter a number!\n";
		cin >> divisionInput;
		}
	if ((divisionInput > divisionAnswer - 0.1) && (divisionInput < divisionAnswer + 0.1) ){cout << "correct" << endl;correct++;}
	else {cout << "incorrect" << endl;incorrect++;}
}
void geometrySets(float number1, float number2, float number3, float number4, float number5, float number6, float number7, float number8,  float inputOne, float inputTwo, float inputThree, float inputFour, float answerOne, float answerTwo, float answerThree, float answerFour, int &correct, int& incorrect, const float pi){

number1 = (rand() % 9) + 1;
number2 = (rand() % 9) + 1;
number3 = (rand() % 9) + 1;
number4 = (rand() % 9) + 1; // Generates all numbers and assigns a variable to them
number5 = (rand() % 9) + 1;
number6 = (rand() % 9) + 1;
number7 = (rand() % 9) + 1;
number8 = (rand() % 9) + 1;

cout << "Calculate the area of a Triangle given base and height: Base = " << number1 << " and Height = " << number2;
answerOne = 0.5 * number1 * number2;
cin >> inputOne;//Looks for input from user
    if(cin.fail())// failsafe
		{
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Please enter a number!\n";
		cin >> inputOne;
		}
if ((inputOne > answerOne - 0.1) && (inputOne < answerOne + 0.1) ){cout << "correct" << endl;correct++;}
	else {cout << "incorrect" << endl;incorrect++;}
cout << "Calculate the perimeter of a Triangle with three sides: Side 1: " << number3 << " Side 2:  " << number4 << " and Side 3: " << number5;
answerTwo = number3 + number4 + number5;//Looks for input from user
cin >> inputTwo;
    if(cin.fail())// failsafe
		{
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Please enter a number!\n";
		cin >> inputTwo;
		}
if ((inputTwo > answerTwo - 0.1) && (inputTwo < answerTwo + 0.1) ){cout << "correct" << endl;correct++;}
	else {cout << "incorrect" << endl;incorrect++;}
cout << "Calculate the perimeter of a Rectangle : Length = " << number6 << " and Height = " << number7;
answerThree = number6 * number7 * 2;//Looks for input from user
cin >> inputThree;
    if(cin.fail())// failsafe
		{
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Please enter a number!\n";
		cin >> inputThree;
		}
		if ((inputThree > answerThree - 0.1) && (inputThree < answerThree + 0.1) ){cout << "correct" << endl;correct++;}
	else {cout << "incorrect" << endl;incorrect++;}
cout << "Calculate the area of a Circle given radius: Radius = " << number8 << " and pi = " << pi;
answerThree = pi * number8;//Looks for input from user
cin >> inputFour;
    if(cin.fail())// failsafe
		{
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Please enter a number!\n";
		cin >> inputFour;
		}
if ((inputFour > answerFour - 0.1) && (inputFour < answerFour + 0.1) ){cout << "correct" << endl;correct++;}
	else {cout << "incorrect" << endl;incorrect++;}


}
void statistics(){
cout << "Coming Soon!";



}
void exit(){}
void printReport(int correct, int incorrect, float cpi){
cout << correct << " correct and ";
cout << incorrect<< " incorrect. Your percentage score is: "; // Grabs all correct/incorrect data and prints a report
cpi = correct + incorrect;
cout << (correct / cpi) * 100;}
