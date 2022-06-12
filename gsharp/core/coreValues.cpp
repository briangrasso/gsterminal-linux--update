#include <iostream>
#include <tuple>
#include <string>
#include "../headers/gsheaders.h"

using namespace std;
// fretBoard is the container name of type Board


int eleCount = 0;
// constexpr int eleSub(){return eleCount + 0;}

template <typename Board>
void DisplayBoard(Board& fBoard){	// I want to make a variadic of this as well to allow for different boards to be
						// constructed
// board should contain everything (think game boards: go, chess - what is the difference between an intersection and a block?)
const int numAttrib = tuple_size<Board>::value;
//cout << "Number of Board attributes: " << numAttrib << endl;
//cout << "First element: " << get<numAttrib - 4>(fBoard) << endl;
//cout << "Glyph: " << get<numAttrib - 3>(fBoard) << "\t" << "Glyph Name: " << get<numAttrib - 2>(fBoard) << "\t\t" << "AlephBet Value: " << get<numAttrib - 1>(fBoard) << endl;
cout << get<numAttrib - 4>(fBoard) << "\t" << get<numAttrib - 3>(fBoard) << "\t" << get<numAttrib - 2>(fBoard) << "\t" << get<numAttrib - 1>(fBoard) << endl;
/*
for (int  dispAll = 0; dispAll < numAttrib; ++dispAll){
cout << "Element [" << eleCount << "]" << "\t" << get<dispAll>(fBoard) << endl;
++eleCount;
}*/
}

// think argc argv[]
// save Tuple to file... 
y
// create Tuple for_each Glyph/letter that returns all, individual, and desired groupings.
// return value printf() (operator pointers?)
int main(){
GSharpStructs::ToneTable boardGS;
cout << "Glyph:\t" << "Name:\t" << "ABVal:\t" << "CVal:" << endl;
for(int tupleInc = 0; tupleInc < 22; ++tupleInc){
// to output all Glyphs
tuple<string, string, wchar_t, int> fBoardGS(make_tuple(Literals[tupleInc], letterWords[tupleInc], AlephBet[tupleInc], letterArray[tupleInc]));	// place chords in vector -- place tones in vector
//tuple<int, wchar_t, string, string> fBoardGS(make_tuple(boardGS.EO9, AlephBet[someInt], letterWords[4], Literals[5]));
DisplayBoard(fBoardGS);
}

return 0;
}
/*
// the Tone Bank is ToneTable();
template <typename ToneBase>
class { 			// tones are common
// to scale, and shift scope
// what are the characteristics of a tone: location (per fret and string); numerical value; letter value; ??other tones it can be grouped into chords with
};

int main(){

return 0;
}

/*
template Chord

template Key
// for all major keys 

template Fret

template SStrings


template Glyphs

template Languages


#include <iostream>
#include <tuple>
#include <string>

using namespace std;

template <typename tupleType>
void DisplayTupleInfo(tupleType& tup){
const int numMembers = tuple_size<tupleType>::value;	// counter like int argc
cout << "Num elements in tuple: " << numMembers << endl;

cout << "Last element value: " << get<numMembers - 1>(tup) << endl;
}

int main(){
tuple<int, char, string> tup1(make_tuple(101, 's', "Hello Tuple!"));

auto tup2(make_tuple(3.14, false));
DisplayTupleInfo(tup2);

auto concatTup(tuple_cat(tup2, tup1));	// contains tup2, tup1 members
DisplayTupleInfo(concatTup);

double pi;
string sentence;
tie(pi, ignore, ignore, ignore, sentence) = concatTup;
cout << "Unpacked! Pi: " << pi << " and \"" << sentence << "\"" << endl;

return 0;
}
*/
