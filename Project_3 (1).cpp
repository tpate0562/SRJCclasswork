#include <iostream>
#include <algorithm> // for the sort function
#include <fstream>
using namespace std;
void takeInput(int[], int);
void takeInputFromFile(int[], int);
void printAll(int[], int);
void printHighestScore(int[], int);// Declares all functions
void printLowest(int[], int);
void printAverage(int[]);
void searchData(int[]);
void initialInputs(int&);
int main(){
const int arraySize = 10;
int choice,  arr[arraySize]; //Declare variables, the previous email was very helpful with figuring out localization of variables
initialInputs(choice);
while (choice != 8){
if (choice == 1){takeInput(arr, arraySize); initialInputs(choice);}//Calls functions based on the user's input
if (choice == 2){takeInputFromFile(arr, arraySize); initialInputs(choice);}
if (choice == 3){printAll(arr, arraySize); initialInputs(choice);}// This looks pretty jumbled, but its mainly calling the function name, attaches the array and integer arraySize, and calls for the initialInputs funtion
if (choice == 4){printHighestScore(arr, arraySize); initialInputs(choice);}
if (choice == 5){printLowest(arr, arraySize); initialInputs(choice);}
if (choice == 6){printAverage(arr); initialInputs(choice);} //Adding initialinputs to the end of a function call saves programming time and adds simplicity in my opinion
if (choice == 7){searchData(arr); initialInputs(choice);}}
}
void takeInput(int arr[], const int arraySize){
cout << "Number 1: "; cin >> arr[0];
cout << "Number 2: "; cin >> arr[1];
cout << "Number 3: "; cin >> arr[2];
cout << "Number 4: "; cin >> arr[3]; //Option 1 function
cout << "Number 5: "; cin >> arr[4];
cout << "Number 6: "; cin >> arr[5];
cout << "Number 7: "; cin >> arr[6]; // Asks for user input of numbers
cout << "Number 8: "; cin >> arr[7];
cout << "Number 9: "; cin >> arr[8];
cout << "Number 10: "; cin >> arr[9];
}
void takeInputFromFile(int arr[], const int arraySize){
   int count = 0;             // Loop counter variable
    ifstream inputFile;

    // Open the file
    inputFile.open("scores.txt");

    // Reads the numbers from the file into the array
    while (count < arraySize && inputFile >> arr[count]){
        count++; // avoids overwriting
    }

    // Close the file.
    inputFile.close();
}
void printAll(int arr[], const int arraySize){ //Option 3 function
cout << "Number 1: " << arr[0] << endl;
cout << "Number 2: " << arr[1] << endl;
cout << "Number 3: " << arr[2] << endl;
cout << "Number 4: " << arr[3] << endl;//Write all of the array values into terminal
cout << "Number 5: " << arr[4] << endl;
cout << "Number 6: " << arr[5] << endl;
cout << "Number 7: " << arr[6] << endl;
cout << "Number 8: " << arr[7] << endl;
cout << "Number 9: " << arr[8] << endl;
cout << "Number 10: " << arr[9] << endl;
}
void printHighestScore(int arr[], const int arraySize){//Option 4 function
int n = sizeof(arr) / sizeof(arr[0]);//Gets the size of the array end to beginning
sort(arr, arr + n); // Sorts the array. It is the main reason for the inclusion of the algorithm header file
cout << arr[9] << endl; //Outputs the highest number
}
void printLowest(int arr[], const int arraySize){//Option 5 function
int n = sizeof(arr) / sizeof(arr[0]);//Does the same as void printHighestScore()
sort(arr, arr + n);
cout << arr[0] << endl;} //Outputs the lowest number
void printAverage(int arr[]){//Option 6 function
float avg = (arr[0] + arr[1] + arr[2] + arr[3] + arr[4] + arr[5] + arr[6] + arr[7] + arr[8] + arr[9]) / 10; //Solves the average
cout << "The average is " << avg << endl; //Outputs the average
}
void searchData(int arr[]){//Option 7 function
int entryNumber;
cout << "Enter data point to find: " << endl; //Gets the input from the user
cin >> entryNumber;
cout << "Data point value is " << arr[entryNumber - 1] << endl; //Outputs the specific data point asked for
}
void initialInputs(int& choice){
 cout << "---------------------------------------------------\n"
"1-D ARRAY PROCESSING MENU OPTIONS\n"
"---------------------------------------------------\n"
"1. Read in 10 scores from user.\n"
"2. Read in 10 scores from the file, scores.txt.\n" //The output text
"3. Print all scores.\n"
"4. Print the highest score.\n"
"5. Print the lowest score.\n"
"6. Print the average score.\n"
"7. Print one score (give its entry number)\n"
"8. Quit program\n"
"Enter choice: ";
cin >> choice;
if(cin.fail() || choice > 8 || choice < 1)
		{
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Please enter a valid number!\n"; // Failsafe
		cout << "Enter choice: ";
		cin >> choice;
		}
}
