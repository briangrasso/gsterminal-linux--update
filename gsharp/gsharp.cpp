//stringstream the contents of argv[] to a variable convert to integer and compare numerically against acceptable argument strings
#include "headers/gsheaders.h"

int main(int argc, const char* argv[]){

// Why is 'S' displayed at startup when no additional arguments have been entered?
// cout << *argv[2] << endl;
if(argc > 1){
for(int Ivec = 0; Ivec < argc; ++Ivec){
cout << argv[Ivec] << endl;
}
////////////////////////////////////////////////
//why won't atoi conversion work?
// do atoi conversion for each argument
// use enum to store values for each argument
string argString = argv[1];

printf("argString as integer = %d\n argString as hex = 0x%08x\n", argString);/*values for arguments do not change in c-string HEX form*///!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// think username and password
// try using hebrew by doing bitwise comparison!!!?

// write switch/case for config parameters for shortcuts to desired apps before login
// require argv[1] to be username, and argv[2] to be password - compare against files for verification to skip main page and "create user" step...

// need to add coredata to gstemplates, and instantiate from there
if(argString  == "core"){
AddApp.Core();
}else if(argString == "coredata"){
system("cd ~/develop/GSProj/gsharp/core; g++ coreValues.cpp -o core; ./core");
}
}else{}

GSharpStructs::ToneTable myTones;

for(int tones = 0; tones < 126; ++ tones){
cout << myTones.ToneArray[tones] << "\t";
}
cout << endl << "Enter Main" << endl;

userList[0] = "asdf";
userList[1] = "brian";

// ComLine.LoadRegUsrLs();

// adding a second layer to the program by overloading the functions/applications, and making those utilize each other's return values first may help to understand providing those 
	// values to other programs


// what I need is to wrap the variables and functions I save to files programmatically in extern "C"
UsrList.Login();

if(registeredUser == 1)
	ComLine.Entry();
else
	exit(0);

return 0;
}

