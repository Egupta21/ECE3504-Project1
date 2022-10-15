// MipsAssembler.h : Include file for standard system include files,
// or project specific include files.

#ifndef MYASSM_HPP
#define MYASSM_HPP

#include "myAssembler.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <iterator>
#include <bitset>

using namespace std;

class myAssm {

private:
	vector < pair<int, string>> branchData;

	vector<string> outFileData;

public:
	string regCheckrd(vector<string> command);

	string regCheckrt(vector<string> command, int i);

	string regCheckrs(vector<string> command, int i);

	string immediate(vector<string> command, int i);

	string immediatebranch(vector<string> command, int i, int line);

	string Rtypesh(vector<string> command, string s);

	string Rtypejr(vector<string> command, string s);

	string Rtype(vector<string> command, string s);

	string Itype(vector<string> command, string s);

	string Itypeimrt(vector<string> command, string s);

	string Itypeimm(vector<string> command, string s);

	void checkOp(vector<string> command, int i);

	string Itypebranch(vector<string> command, string s, int i);

	int starter(int argc, char* argv[]);

	void AddData(vector<string> command, int i);
		
	string FakeCommand(vector<string> command, int i);

	void fileWriter();

	string bintohex(string s);
};

#endif