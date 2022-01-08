#include "headers/gsheaders.h"
// need to save function template write/read to files as class of functions

// in C# write code , and use paint like CSS for styling GUI pages???
string a = "asdf";

string ReturnString();
int Debug();
int ReturnStringValues();
int ReturnIndividualStrings(int stringChoice);

int main(/*Consider making the command line the login where password and username are parameters to START the OS*/) {
	//MakeDir();
Debug();

	cout << "Enter Main" << endl;
    
    userList[0] = "asdf";

    //ComLine.LoadRegUsrLs();
	UsrList.Login();

	if (registeredUser == 1)
		ComLine.Entry();
	else
		exit(0);

return 0;
}

// Make command line of gsproj.cpp with all variables and functions accessible from the command line.

string ReturnString(){
return a;
}

// is an interface for the application to transmit the contents of the header files in every manner desired
// re-structure Core in it's own struct

int Debug(){

GSharpStructs::ToneTable ToneRegister;
cout << ToneRegister.EOt << endl;
cout << "fretboard[2][11]: " << ToneRegister.fretBoard[2][11] << endl;

ReturnStringValues();
cout << "Enter string number: " << endl;
int stringNum = 0; // entering 6 returns the AlephBet Array as integers -- reading MEMORY OUTSIDE RANGE AND RETURNING ANOTHER 
                        // VARIABLE'S DATA -- change ReturnIndividualStrings for loop range to 22 for full AlephBet
cin >> stringNum;
ReturnIndividualStrings(stringNum);
// create as part of ToneTable struct method for returning all values/key of each string and by fret
cout << ReturnString();
cout << a << endl;
printf("%c", 99); //integer values of memory mapped to character output
                            // -tab = -30711
                            // -question diamond = 14733
                            // -
/* construct a template (tuple) that returns all of the values, characters, words, and other "object data" (think structing user information struct userinfo)
make the character callable by its various types by changing the prefixed classification
create a prototype template that will serve as the container "FORM" of the character*/

for(int r = 0; r < 22; ++r){
cout << Literals[r] << "\t" << /*AlephBet[r] <<*/ "\t" << letterArray[r] << "\t" << &letterArray[r] << "\t" << letterWords[r] << "\t";
printf("%d\t%x\t%u\t%n\n", AlephBet[r]);
}
//They consist of these values
return 0;
}

int ReturnStringValues(){
GSharpStructs::ToneTable ToneRegister;
for(int t = 0; t < 21; t++){ // change to greater than 21 to exceed bounds and access AlephBet array
cout << ToneRegister.fretBoard[0][t] << "\t" << ToneRegister.fretBoard[1][t] << "\t" << ToneRegister.fretBoard[2][t] << "\t" << \
        ToneRegister.fretBoard[3][t] << "\t" << ToneRegister.fretBoard[4][t] << "\t" << ToneRegister.fretBoard[5][t] << endl;
}

return 0;
}

int ReturnIndividualStrings(int stringChoice){
GSharpStructs::ToneTable ToneRegister;
for(int t = 0; t < 1000; t++){ 
cout << ToneRegister.fretBoard[stringChoice][t] << "\t";
}

cout << endl << "Boundary exceeded: fretBoard[6][22]: " << &ToneRegister.fretBoard[6][21] << "\t" << ToneRegister.fretBoard[6][22] << endl;
return 0;
}


