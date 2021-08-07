#include <iostream>
using namespace std; //Declares and initializes array below
void input(int&);//Declares functions
int findTotal(int[], int, int, int);
void findGreater(int,int[], int, int);
int main(){
int arr[50] = {28,	21,	12,	13,	6, 34,	3,	19,	3,	13, 7,	17,	1,	37,	24, 2,	30,	36,	25,	6, 37, 31, 1, 21, 20, 37, 23, 34,	21,	8, 24,	21,	25,	24,	20, 21,	33,	22,	4,	17, 11,	23,	18,	14,	2, 27,	4,	14,	19,	11};
int input1, pos = 0, appearances = 0, greaterThan = 0; //Declares and initializes variables
input(input1); // The main function is comprised of the 3 subfunctions
findTotal(arr, pos, input1, appearances);
findGreater(pos, arr, greaterThan, input1);

}
void input(int &input1){

cout << "I have a dataset of 50 European Roulette numbers from 1-37. I can tell you how many times that number has appeared and every number above it in the dataset. " << endl;
cout << "Enter a number: "; //The introduction to the user into the program
cin >> input1;
}
int findTotal(int arr[], int pos, int input1, int appearances){

 while (pos < 50){ //I find a while loop better than a for loop as i find it easier to write out and understand
    if (arr[pos] == input1) appearances++;// Compares array osition to the input and if true adds one to the appearances variable
    pos++; //To avoid double counting
 }
 cout << input1 << " appeared " << appearances << " times." << endl; // End of processing output
 return appearances;
}
void findGreater(int pos, int arr[], int greaterThan, int input1){ //Finds all values *greater* than the one chosen
 pos = 0;
 cout << "List of numbers greater than " << input1 << ": " << endl; // Some bells and whistles
 while (pos < 50){
    if (arr[pos] > input1) { //The while loop for processing
        greaterThan+=1; //Adds one to greaterthan is the condition is true
        cout << arr[pos] << "\t";
    }
    pos++; // Adds one to the position of the counter in the array to avoid double counting

 }
 cout << endl;
cout << greaterThan << " numbers are greater than " << input1; //Final output

}
