#include <iostream>
#include <algorithm>
using namespace std;
void intro();
void option1();
void option2();
void option3();
void option4();
void option5();
int option6();
int choice;
int tdr[5][7];

int main(){
tdr[0][1] = 100;
tdr[0][2] = 101;
tdr[0][3] = 102;
tdr[0][4] = 103;
tdr[0][5] = 104;
tdr[0][6] = 105;
tdr[1][0] = 1;
tdr[1][1] = 3;
tdr[1][2] = 1;
tdr[1][3] = 5;
tdr[1][4] = 2;
tdr[1][5] = 1;
tdr[1][6] = 5;
tdr[2][0] = 2;
tdr[2][1] = 4;
tdr[2][2] = 2;
tdr[2][3] = 1;
tdr[2][4] = 4;
tdr[2][5] = 2;
tdr[2][6] = 4;
tdr[3][0] = 3;
tdr[3][1] = 3;
tdr[3][2] = 1;
tdr[3][3] = 2;
tdr[3][4] = 4;
tdr[3][5] = 4;
tdr[3][6] = 1;
tdr[4][0] = 4;
tdr[4][1] = 5;
tdr[4][2] = 1;
tdr[4][3] = 4;
tdr[4][4] = 2;
tdr[4][5] = 4;
tdr[4][6] = 2;
intro();
while (choice != 6){
if (choice == 1){option1(); intro();}//Calls functions based on the user's input
if (choice == 2){option2(); intro();}
if (choice == 3){option3(); intro();}
if (choice == 4){option4(); intro();}
if (choice == 5){option5(); intro();}
if (choice == 6){option6(); intro();}
}
return 0;

}
void intro(){
cout << "---------------------------------------------------" << endl;
	cout << "2-D ARRAY PROCESSING MENU OPTIONS" << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "1. Display current movie ratings" << endl;
	cout << "2. Show the average rating for each movie." << endl;
	cout << "3. Show a reviewers highest rated movie/s. (enter reviewer# 1-4)" << endl;
	cout << "4. Show a movies lowest rating. (enter movie# 100-105)" << endl;
	cout << "5. Enter new ratings (1-5) for movie# 100-105 for four reviewers" << endl;
	cout << "6. Quit program" << endl;
	cout << endl << "Enter your choice:";
 	cin >> choice;
 	while(cin.fail() || choice > 6 || choice < 1)
		{
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Please enter a valid number 1-6!\n"; // Failsafe
		cout << "Enter choice: ";
		cin >> choice;
		}

}
void option1(){
cout << "Reviewer   #100   #101   #102   #103   #104   #105\n";
cout << "   " << tdr[1][0] << "\t" <<"     " << tdr[1][1] << "\t" <<"    " << tdr[1][2] << "\t" << "   " <<tdr[1][3] << "\t" <<"  " << tdr[1][4] <<"  " << "\t" << tdr[1][5] <<" " << "\t" << tdr[1][6] << "\n";
cout << "   " << tdr[2][0] << "\t" <<"     " << tdr[2][1] << "\t" <<"    " << tdr[2][2] << "\t" << "   " <<tdr[2][3] << "\t" <<"  " << tdr[2][4] <<"  " << "\t" << tdr[2][5] <<" " << "\t" << tdr[2][6] << "\n";
cout << "   "  << tdr[3][0] << "\t" <<"     " << tdr[3][1] << "\t" <<"    " << tdr[3][2] << "\t" <<"   " << tdr[3][3] << "\t" <<"  " << tdr[3][4] <<"  " << "\t" << tdr[3][5] <<" " << "\t" << tdr[3][6] << "\n";
cout << "   " << tdr[4][0] << "\t" << "     " <<tdr[4][1] << "\t" <<"    " << tdr[4][2] << "\t" <<"   " << tdr[4][3] << "\t" <<"  " << tdr[4][4] <<"  " << "\t" << tdr[4][5] <<" " << "\t" << tdr[4][6] << "\n";

}
void option2(){

    float rating0 = (tdr[1][1]+tdr[2][1]+tdr[3][1]+tdr[4][1])/4;
    float rating1 = (tdr[1][2]+tdr[2][2]+tdr[3][2]+tdr[4][2])/4;
    float rating2 = (tdr[1][3]+tdr[2][3]+tdr[3][3]+tdr[4][3])/4;
    float rating3 = (tdr[1][4]+tdr[2][4]+tdr[3][4]+tdr[4][4])/4;
    float rating4 = (tdr[1][5]+tdr[2][5]+tdr[3][5]+tdr[4][5])/4;
    float rating5 = (tdr[1][6]+tdr[2][6]+tdr[3][6]+tdr[4][6])/4;
cout << "Movie 100: " << rating0 << endl;
cout << "Movie 101: " << rating1 << endl;
cout << "Movie 102: " << rating2 << endl;
cout << "Movie 103: " << rating3 << endl;
cout << "Movie 104: " << rating4 << endl;
cout << "Movie 105: " << rating5 << endl;


}
void option3(){
int optionChoice, highest4, highest3, highest2, highest1;
    string rv1;
int reviewer1[6] = {tdr[1][1], tdr[1][2], tdr[1][3], tdr[1][4], tdr[1][5], tdr[1][6]};
int reviewer2[6] = {tdr[2][1], tdr[2][2], tdr[2][3], tdr[2][4], tdr[2][5], tdr[2][6]};
int reviewer3[6] = {tdr[3][1], tdr[3][2], tdr[3][3], tdr[3][4], tdr[3][5], tdr[3][6]};
int reviewer4[6] = {tdr[4][1], tdr[4][2], tdr[4][3], tdr[4][4], tdr[4][5], tdr[4][6]};
cout << "Which reviewer would you like to see a highest rating for? ";
cin >> optionChoice;

if (optionChoice == 1){
    int n = sizeof(reviewer1) / sizeof(reviewer1[0]);
    sort(reviewer1, reviewer1 + n);
    highest1 = reviewer1[5];
    if (highest1 == tdr[1][1]){
        rv1 = "Movie 100";
    }
    else if (highest1 == tdr[1][2]){
        rv1 = "Movie 101";
    }
    else if (highest1 == tdr[1][3]){
        rv1 = "Movie 102";
    }
    else if (highest1 == tdr[1][4]){
        rv1 = "Movie 103";
    }
    else if (highest1 == tdr[1][5]){
        rv1 = "Movie 104";
    }
    else if (highest1 == tdr[1][6]){
        rv1 = "Movie 105";
    }
    cout << highest1 << " is the highest rating and it has been given to " << rv1 << endl;
}
else if (optionChoice == 2){
    int n = sizeof(reviewer2) / sizeof(reviewer2[0]);
    sort(reviewer2, reviewer2 + n);
    highest2 = reviewer2[5];
    if (highest2 == tdr[2][1]){
        rv1 = "Movie 100";
    }
    else if (highest2 == tdr[2][2]){
        rv1 = "Movie 101";
    }
    else if (highest2 == tdr[2][3]){
        rv1 = "Movie 102";
    }
    else if (highest2 == tdr[2][4]){
        rv1 = "Movie 103";
    }
    else if (highest2 == tdr[2][5]){
        rv1 = "Movie 104";
    }
    else if (highest2 == tdr[2][6]){
        rv1 = "Movie 105";
    }
    cout << highest2 << " is the highest rating and it has been given by reviewer " << rv1 << endl;
}
else if (optionChoice == 3){
    int n = sizeof(reviewer3) / sizeof(reviewer3[0]);
    sort(reviewer3, reviewer3 + n);
    highest3 = reviewer3[5];
    if (highest3 == tdr[3][1]){
        rv1 = "Movie 100";
    }
    else if (highest3 == tdr[3][2]){
        rv1 = "Movie 101";
    }
    else if (highest3 == tdr[3][3]){
        rv1 = "Movie 102";
    }
    else if (highest3 == tdr[3][4]){
        rv1 = "Movie 103";
    }
    else if (highest3 == tdr[3][5]){
        rv1 = "Movie 104";
    }
    else if (highest3 == tdr[3][6]){
        rv1 = "Movie 105";
    }
    cout << highest3 << " is the highest rating and it has been given to " << rv1 << endl;
}
else if (optionChoice == 4){
    int n = sizeof(reviewer4) / sizeof(reviewer4[0]);
    sort(reviewer4, reviewer4 + n);
    highest4 = reviewer4[5];
    if (highest4 == tdr[4][1]){
        rv1 = "Movie 100";
    }
    else if (highest4 == tdr[4][2]){
        rv1 = "Movie 101";
    }
    else if (highest4 == tdr[4][3]){
        rv1 = "Movie 102";
    }
    else if (highest4 == tdr[4][4]){
        rv1 = "Movie 103";
    }
    else if (highest4 == tdr[4][5]){
        rv1 = "Movie 104";
    }
    else if (highest4 == tdr[4][6]){
        rv1 = "Movie 105";
    }
    cout << highest4 << " is the highest rating and it has been given by reviewer " << rv1 << endl;
}
}
void option4(){
    int optionChoice, lowest0, lowest1, lowest2, lowest3, lowest4, lowest5;
    string rv1;
int movie100[4] = {tdr[1][1], tdr[2][1], tdr[3][1], tdr[4][1]};
int movie101[4] = {tdr[1][2], tdr[2][2], tdr[3][2], tdr[4][2]};
int movie102[4] = {tdr[1][3], tdr[2][3], tdr[3][3], tdr[4][3]};
int movie103[4] = {tdr[1][4], tdr[2][4], tdr[3][4], tdr[4][4]};
int movie104[4] ={tdr[1][5], tdr[2][5], tdr[3][5], tdr[4][5]};
int movie105[4] = {tdr[1][6], tdr[2][6], tdr[3][6], tdr[4][6]};
cout << "Which movie would you like to see a lowest rating for? ";
cin >> optionChoice;

if (optionChoice == 100){
    int n = sizeof(movie100) / sizeof(movie100[0]);
    sort(movie100, movie100 + n);
    lowest0 = movie100[0];
    if (lowest0 == tdr[1][1]){
        rv1 = "Reviewer 1";
    }
    else if (lowest0 == tdr[2][1]){
        rv1 = "Reviewer 2";
    }
    else if (lowest0 == tdr[3][1]){
        rv1 = "Reviewer 3";
    }
    else if (lowest0 == tdr[4][1]){
        rv1 = "Reviewer 4";
    }
    cout << lowest0 << " is the lowest rating and it has been given by reviewer " << rv1 << endl;
}
else if (optionChoice == 101){
    int n = sizeof(movie101) / sizeof(movie101[0]);
    sort(movie101, movie101 + n);
    lowest1 = movie101[0];
    if (lowest1 == tdr[1][2]){
        rv1 = "Reviewer 1";
    }
    else if (lowest1 == tdr[2][2]){
        rv1 = "Reviewer 2";
    }
    else if (lowest1 == tdr[3][2]){
        rv1 = "Reviewer 3";
    }
    else if (lowest1 == tdr[4][2]){
        rv1 = "Reviewer 4";
    }
    cout << lowest1 << " is the lowest rating and it has been given by reviewer " << rv1 << endl;
}
else if (optionChoice == 102){
    int n = sizeof(movie102) / sizeof(movie102[0]);
    sort(movie102, movie102 + n);
    lowest2 = movie102[0];
    cout << lowest2 << endl;
    if (lowest2 == tdr[1][3]){
        rv1 = "Reviewer 1";
    }
    else if (lowest2 == tdr[2][3]){
        rv1 = "Reviewer 2";
    }
    else if (lowest2 == tdr[3][3]){
        rv1 = "Reviewer 3";
    }
    else if (lowest2 == tdr[4][3]){
        rv1 = "Reviewer 4";
    }
    cout << lowest2 << " is the lowest rating and it has been given by reviewer " << rv1 << endl;
}
else if (optionChoice == 103){
    int n = sizeof(movie103) / sizeof(movie103[0]);
    sort(movie103, movie103 + n);
    lowest3 = movie103[0];
    if (lowest3 == tdr[1][4]){
        rv1 = "Reviewer 1";
    }
    else if (lowest3 == tdr[2][4]){
        rv1 = "Reviewer 2";
    }
    else if (lowest3 == tdr[3][4]){
        rv1 = "Reviewer 3";
    }
    else if (lowest3 == tdr[4][4]){
        rv1 = "Reviewer 4";
    }
    cout << lowest3 << " is the lowest rating and it has been given by reviewer " << rv1 << endl;
}
else if (optionChoice == 104){
    int n = sizeof(movie104) / sizeof(movie104[0]);
    sort(movie104, movie104 + n);
    lowest4 = movie104[0];
    if (lowest4 == tdr[1][5]){
        rv1 = "Reviewer 1";
    }
    else if (lowest4 == tdr[2][5]){
        rv1 = "Reviewer 2";
    }
        else if (lowest4 == tdr[3][5]){
        rv1 = "Reviewer 3";
    }
    else if (lowest4 == tdr[4][5]){
        rv1 = "Reviewer 4";
    }
    cout << lowest4 << " is the lowest rating and it has been given by reviewer " << rv1 << endl;
}
else if (optionChoice == 105){
    int n = sizeof(movie105) / sizeof(movie105[0]);
    sort(movie105, movie105 + n);
    lowest5 = movie105[0];
    if (lowest5 == tdr[1][6]){
        rv1 = "Reviewer 1";
    }
    else if (lowest5 == tdr[2][6]){
        rv1 = "Reviewer 2";
    }
    else if (lowest5 == tdr[3][6]){
        rv1 = "Reviewer 3";
    }
    else if (lowest5 == tdr[4][6]){
        rv1 = "Reviewer 4";
    }
    cout << lowest5 << " is the lowest rating and it has been given by reviewer " << rv1 << endl;
}

}
void option5(){
cout << "Reviewer 1: " << endl;
cout << "Movie 100: " << endl;
cin >> tdr[1][1];
 	while(cin.fail() || tdr[1][1] > 5 || tdr[1][1] < 1){cin.clear();cin.ignore(100, '\n');
        cout << "Please enter a valid number 1-5!\n"; // Failsafe
		cout << "Movie 100: "; cin >> tdr[1][1];}
cout << "Movie 101: " << endl;
cin >> tdr[1][2];
 	while(cin.fail() || tdr[1][2] > 5 || tdr[1][2] < 1){cin.clear();cin.ignore(100, '\n');
        cout << "Please enter a valid number 1-5!\n"; // Failsafe
		cout << "Movie 101: "; cin >> tdr[1][2];}
cout << "Movie 102: " << endl;
cin >> tdr[1][3];
 	while(cin.fail() || tdr[1][3] > 5 || tdr[1][3] < 1){cin.clear();cin.ignore(100, '\n');
        cout << "Please enter a valid number 1-5!\n"; // Failsafe
		cout << "Movie 102: "; cin >> tdr[1][3];}
cout << "Movie 103: " << endl;
cin >> tdr[1][4];
 	while(cin.fail() || tdr[1][4] > 5 || tdr[1][4] < 1){cin.clear();cin.ignore(100, '\n');
        cout << "Please enter a valid number 1-5!\n"; // Failsafe
		cout << "Movie 103: "; cin >> tdr[1][4];}
cout << "Movie 104: " << endl;
cin >> tdr[1][5];
 	while(cin.fail() || tdr[1][5] > 5 || tdr[1][5] < 1){cin.clear();cin.ignore(100, '\n');
        cout << "Please enter a valid number 1-5!\n"; // Failsafe
		cout << "Movie 104: "; cin >> tdr[1][5];}
cout << "Movie 105: " << endl;
cin >> tdr[1][6];
 	while(cin.fail() || tdr[1][6] > 5 || tdr[1][6] < 1){cin.clear();cin.ignore(100, '\n');
        cout << "Please enter a valid number 1-5!\n"; // Failsafe
		cout << "Movie 105: "; cin >> tdr[1][6];}
cout << "Reviewer 2: " << endl;
cout << "Movie 100: " << endl;
cin >> tdr[2][1];
 	while(cin.fail() || tdr[2][1] > 5 || tdr[2][1] < 1){cin.clear();cin.ignore(100, '\n');
        cout << "Please enter a valid number 1-5!\n"; // Failsafe
		cout << "Movie 100: "; cin >> tdr[2][1];}
cout << "Movie 101: " << endl;
cin >> tdr[2][2];
 	while(cin.fail() || tdr[2][2] > 5 || tdr[2][2] < 1){cin.clear();cin.ignore(100, '\n');
        cout << "Please enter a valid number 1-5!\n"; // Failsafe
		cout << "Movie 101: "; cin >> tdr[2][2];}
cout << "Movie 102: " << endl;
cin >> tdr[2][3];
 	while(cin.fail() || tdr[2][3] > 5 || tdr[2][3] < 1){cin.clear();cin.ignore(100, '\n');
        cout << "Please enter a valid number 1-5!\n"; // Failsafe
		cout << "Movie 102: "; cin >> tdr[2][3];}
cout << "Movie 103: " << endl;
cin >> tdr[2][4];
 	while(cin.fail() || tdr[2][4] > 5 || tdr[2][4] < 1){cin.clear();cin.ignore(100, '\n');
        cout << "Please enter a valid number 1-5!\n"; // Failsafe
		cout << "Movie 103: "; cin >> tdr[2][4];}
cout << "Movie 104: " << endl;
cin >> tdr[2][5];
 	while(cin.fail() || tdr[2][5] > 5 || tdr[2][5] < 1){cin.clear();cin.ignore(100, '\n');
        cout << "Please enter a valid number 1-5!\n"; // Failsafe
		cout << "Movie 104: "; cin >> tdr[2][5];}
cout << "Movie 105: " << endl;
cin >> tdr[2][6];
 	while(cin.fail() || tdr[2][6] > 5 || tdr[2][6] < 1){cin.clear();cin.ignore(100, '\n');
        cout << "Please enter a valid number 1-5!\n"; // Failsafe
		cout << "Movie 105: "; cin >> tdr[2][6];}
cout << "Reviewer 3: " << endl;
cout << "Movie 100: " << endl;
cin >> tdr[3][1];
 	while(cin.fail() || tdr[3][1] > 5 || tdr[3][1] < 1){cin.clear();cin.ignore(100, '\n');
        cout << "Please enter a valid number 1-5!\n"; // Failsafe
		cout << "Movie 100: "; cin >> tdr[3][1];}
cout << "Movie 101: " << endl;
cin >> tdr[3][2];
 	while(cin.fail() || tdr[3][2] > 5 || tdr[3][2] < 1){cin.clear();cin.ignore(100, '\n');
        cout << "Please enter a valid number 1-5!\n"; // Failsafe
		cout << "Movie 101: "; cin >> tdr[3][2];}
cout << "Movie 102: " << endl;
cin >> tdr[3][3];
 	while(cin.fail() || tdr[3][3] > 5 || tdr[3][3] < 1){cin.clear();cin.ignore(100, '\n');
        cout << "Please enter a valid number 1-5!\n"; // Failsafe
		cout << "Movie 102: "; cin >> tdr[3][3];}
cout << "Movie 103: " << endl;
cin >> tdr[3][4];
 	while(cin.fail() || tdr[3][4] > 5 || tdr[3][4] < 1){cin.clear();cin.ignore(100, '\n');
        cout << "Please enter a valid number 1-5!\n"; // Failsafe
		cout << "Movie 103: "; cin >> tdr[3][4];}
cout << "Movie 104: " << endl;
cin >> tdr[3][5];
 	while(cin.fail() || tdr[3][5] > 5 || tdr[3][5] < 1){cin.clear();cin.ignore(100, '\n');
        cout << "Please enter a valid number 1-5!\n"; // Failsafe
		cout << "Movie 104: "; cin >> tdr[3][5];}
cout << "Movie 105: " << endl;
cin >> tdr[3][6];
 	while(cin.fail() || tdr[3][6] > 5 || tdr[3][6] < 1){cin.clear();cin.ignore(100, '\n');
        cout << "Please enter a valid number 1-5!\n"; // Failsafe
		cout << "Movie 105: "; cin >> tdr[3][6];}
cout << "Reviewer 4: " << endl;
cout << "Movie 100: " << endl;
cin >> tdr[4][1];
 	while(cin.fail() || tdr[4][1] > 5 || tdr[4][1] < 1){cin.clear();cin.ignore(100, '\n');
        cout << "Please enter a valid number 1-5!\n"; // Failsafe
		cout << "Movie 100: "; cin >> tdr[4][1];}
cout << "Movie 101: " << endl;
cin >> tdr[4][2];
 	while(cin.fail() || tdr[4][2] > 5 || tdr[4][2] < 1){cin.clear();cin.ignore(100, '\n');
        cout << "Please enter a valid number 1-5!\n"; // Failsafe
		cout << "Movie 101: "; cin >> tdr[4][2];}
cout << "Movie 102: " << endl;
cin >> tdr[4][3];
 	while(cin.fail() || tdr[4][3] > 5 || tdr[4][3] < 1){cin.clear();cin.ignore(100, '\n');
        cout << "Please enter a valid number 1-5!\n"; // Failsafe
		cout << "Movie 102: "; cin >> tdr[4][3];}
cout << "Movie 103: " << endl;
cin >> tdr[4][4];
 	while(cin.fail() || tdr[4][4] > 5 || tdr[4][4] < 1){cin.clear();cin.ignore(100, '\n');
        cout << "Please enter a valid number 1-5!\n"; // Failsafe
		cout << "Movie 103: "; cin >> tdr[4][4];}
cout << "Movie 104: " << endl;
cin >> tdr[4][5];
 	while(cin.fail() || tdr[4][5] > 5 || tdr[4][5] < 1){cin.clear();cin.ignore(100, '\n');
        cout << "Please enter a valid number 1-5!\n"; // Failsafe
		cout << "Movie 104: "; cin >> tdr[4][5];}
cout << "Movie 105: " << endl;
cin >> tdr[4][6];
 	while(cin.fail() || tdr[4][6] > 5 || tdr[4][6] < 1){cin.clear();cin.ignore(100, '\n');
        cout << "Please enter a valid number 1-5!\n"; // Failsafe
		cout << "Movie 105: "; cin >> tdr[4][6];}
cout << "Reviewer 5: " << endl;
cout << "Movie 100: " << endl;
cin >> tdr[5][1];
 	while(cin.fail() || tdr[5][1] > 5 || tdr[5][1] < 1){cin.clear();cin.ignore(100, '\n');
        cout << "Please enter a valid number 1-5!\n"; // Failsafe
		cout << "Movie 100: "; cin >> tdr[5][1];}
cout << "Movie 101: " << endl;
cin >> tdr[5][2];
 	while(cin.fail() || tdr[5][2] > 5 || tdr[5][2] < 1){cin.clear();cin.ignore(100, '\n');
        cout << "Please enter a valid number 1-5!\n"; // Failsafe
		cout << "Movie 101: "; cin >> tdr[5][2];}
cout << "Movie 102: " << endl;
cin >> tdr[5][3];
 	while(cin.fail() || tdr[5][3] > 5 || tdr[5][3] < 1){cin.clear();cin.ignore(100, '\n');
        cout << "Please enter a valid number 1-5!\n"; // Failsafe
		cout << "Movie 102: "; cin >> tdr[5][3];}
cout << "Movie 103: " << endl;
cin >> tdr[5][4];
 	while(cin.fail() || tdr[5][4] > 5 || tdr[5][4] < 1){cin.clear();cin.ignore(100, '\n');
        cout << "Please enter a valid number 1-5!\n"; // Failsafe
		cout << "Movie 103: "; cin >> tdr[5][4];}
cout << "Movie 104: " << endl;
cin >> tdr[5][5];
 	while(cin.fail() || tdr[5][5] > 5 || tdr[5][5] < 1){cin.clear();cin.ignore(100, '\n');
        cout << "Please enter a valid number 1-5!\n"; // Failsafe
		cout << "Movie 104: "; cin >> tdr[5][5];}
cout << "Movie 105: " << endl;
cin >> tdr[5][6];
 	while(cin.fail() || tdr[5][6] > 5 || tdr[5][6] < 1){cin.clear();cin.ignore(100, '\n');
        cout << "Please enter a valid number 1-5!\n"; // Failsafe
		cout << "Movie 105: "; cin >> tdr[5][6];}

}
int option6(){return 0;}
/* Display current movie ratings.
Show the average rating for each movie.
Show a reviewers highest rated movie/s. (enter reviewer# 1-4)*
Show a movies lowest rating. (enter movie# 100-105)**
Enter new ratings (1-5) for movie# 100-105 for four reviewers.
Exit the program*/
