// MipsAssembler.cpp : Defines the entry point for the application.
//

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

string myAssm::regCheckrd(vector<string> command) {
    string rd = "";
    if (command[1] == "$zero") {
        std::bitset<5> bin{ static_cast<uint64_t>(0) };
        rd = bin.to_string();
        return rd;
    }
    else if (command[1] == "$at") {
        std::bitset<5> bin{ static_cast<uint64_t>(1) };
        rd = bin.to_string();
        return rd;
    }
    else if (command[1] == "$v0") {
        std::bitset<5> bin{ static_cast<uint64_t>(2) };
        rd = bin.to_string();
        return rd;
    }
    else if (command[1] == "$v1") {
        std::bitset<5> bin{ static_cast<uint64_t>(3) };
        rd = bin.to_string();
        return rd;
    }
    else if (command[1] == "$a0") {
        std::bitset<5> bin{ static_cast<uint64_t>(4) };
        rd = bin.to_string();
        return rd;
    }
    else if (command[1] == "$a1") {
        std::bitset<5> bin{ static_cast<uint64_t>(5) };
        rd = bin.to_string();
        return rd;
    }
    else if (command[1] == "$a2") {
        std::bitset<5> bin{ static_cast<uint64_t>(6) };
        rd = bin.to_string();
        return rd;
    }
    else if (command[1] == "$a3") {
        std::bitset<5> bin{ static_cast<uint64_t>(7) };
        rd = bin.to_string();
        return rd;
    }
    else if (command[1] == "$t0") {
        std::bitset<5> bin{ static_cast<uint64_t>(8) };
        rd = bin.to_string();
        return rd;
    }
    else if (command[1] == "$t1") {
        std::bitset<5> bin{ static_cast<uint64_t>(9) };
        rd = bin.to_string();
        return rd;
    }
    else if (command[1] == "$t2") {
        std::bitset<5> bin{ static_cast<uint64_t>(10) };
        rd = bin.to_string();
        return rd;
    }
    else if (command[1] == "$t3") {
        std::bitset<5> bin{ static_cast<uint64_t>(11) };
        rd = bin.to_string();
        return rd;
    }
    else if (command[1] == "$t4") {
        std::bitset<5> bin{ static_cast<uint64_t>(12) };
        rd = bin.to_string();
        return rd;
    }
    else if (command[1] == "$t5") {
        std::bitset<5> bin{ static_cast<uint64_t>(13) };
        rd = bin.to_string();
        return rd;
    }
    else if (command[1] == "$t6") {
        std::bitset<5> bin{ static_cast<uint64_t>(14) };
        rd = bin.to_string();
        return rd;
    }
    else if (command[1] == "$t7") {
        std::bitset<5> bin{ static_cast<uint64_t>(15) };
        rd = bin.to_string();
        return rd;
    }
    else if (command[1] == "$s0") {
        std::bitset<5> bin{ static_cast<uint64_t>(16) };
        rd = bin.to_string();
        return rd;
    }
    else if (command[1] == "$s1") {
        std::bitset<5> bin{ static_cast<uint64_t>(17) };
        rd = bin.to_string();
        return rd;
    }
    else if (command[1] == "$s2") {
        std::bitset<5> bin{ static_cast<uint64_t>(18) };
        rd = bin.to_string();
        return rd;
    }
    else if (command[1] == "$s3") {
        std::bitset<5> bin{ static_cast<uint64_t>(19) };
        rd = bin.to_string();
        return rd;
    }
    else if (command[1] == "$s4") {
        std::bitset<5> bin{ static_cast<uint64_t>(20) };
        rd = bin.to_string();
        return rd;
    }
    else if (command[1] == "$s5") {
        std::bitset<5> bin{ static_cast<uint64_t>(21) };
        rd = bin.to_string();
        return rd;
    }
    else if (command[1] == "$s6") {
        std::bitset<5> bin{ static_cast<uint64_t>(22) };
        rd = bin.to_string();
        return rd;
    }
    else if (command[1] == "$s7") {
        std::bitset<5> bin{ static_cast<uint64_t>(23) };
        rd = bin.to_string();
        return rd;
    }
    else if (command[1] == "$t8") {
        std::bitset<5> bin{ static_cast<uint64_t>(24) };
        rd = bin.to_string();
        return rd;
    }
    else if (command[1] == "$t9") {
        std::bitset<5> bin{ static_cast<uint64_t>(25) };
        rd = bin.to_string();
        return rd;
    }
    else if (command[1] == "$k0") {
        std::bitset<5> bin{ static_cast<uint64_t>(26) };
        rd = bin.to_string();
        return rd;
    }
    else if (command[1] == "$k1") {
        std::bitset<5> bin{ static_cast<uint64_t>(27) };
        rd = bin.to_string();
        return rd;
    }
    else if (command[1] == "$gp") {
        std::bitset<5> bin{ static_cast<uint64_t>(28) };
        rd = bin.to_string();
        return rd;
    }
    else if (command[1] == "$sp") {
        std::bitset<5> bin{ static_cast<uint64_t>(29) };
        rd = bin.to_string();
        return rd;
    }
    else if (command[1] == "$fp") {
        std::bitset<5> bin{ static_cast<uint64_t>(30) };
        rd = bin.to_string();
        return rd;
    }
    else if (command[1] == "$ra") {
        std::bitset<5> bin{ static_cast<uint64_t>(31) };
        rd = bin.to_string();
        return rd;
    }
    else {
        return "Error";
    }
}

string myAssm::regCheckrt(vector<string> command, int i) {
    string rt = "";
    if (command[i] == "$zero") {
        std::bitset<5> bin{ static_cast<uint64_t>(0) };
        rt = bin.to_string();
        return rt;
    }
    else if (command[i] == "$at") {
        std::bitset<5> bin{ static_cast<uint64_t>(1) };
        rt = bin.to_string();
        return rt;
    }
    else if (command[i] == "$v0") {
        std::bitset<5> bin{ static_cast<uint64_t>(2) };
        rt = bin.to_string();
        return rt;
    }
    else if (command[i] == "$v1") {
        std::bitset<5> bin{ static_cast<uint64_t>(3) };
        rt = bin.to_string();
        return rt;
    }
    else if (command[i] == "$a0") {
        std::bitset<5> bin{ static_cast<uint64_t>(4) };
        rt = bin.to_string();
        return rt;
    }
    else if (command[i] == "$a1") {
        std::bitset<5> bin{ static_cast<uint64_t>(5) };
        rt = bin.to_string();
        return rt;
    }
    else if (command[i] == "$a2") {
        std::bitset<5> bin{ static_cast<uint64_t>(6) };
        rt = bin.to_string();
        return rt;
    }
    else if (command[i] == "$a3") {
        std::bitset<5> bin{ static_cast<uint64_t>(7) };
        rt = bin.to_string();
        return rt;
    }
    else if (command[i] == "$t0") {
        std::bitset<5> bin{ static_cast<uint64_t>(8) };
        rt = bin.to_string();
        return rt;
    }
    else if (command[i] == "$t1") {
        std::bitset<5> bin{ static_cast<uint64_t>(9) };
        rt = bin.to_string();
        return rt;
    }
    else if (command[i] == "$t2") {
        std::bitset<5> bin{ static_cast<uint64_t>(10) };
        rt = bin.to_string();
        return rt;
    }
    else if (command[i] == "$t3") {
        std::bitset<5> bin{ static_cast<uint64_t>(11) };
        rt = bin.to_string();
        return rt;
    }
    else if (command[i] == "$t4") {
        std::bitset<5> bin{ static_cast<uint64_t>(12) };
        rt = bin.to_string();
        return rt;
    }
    else if (command[i] == "$t5") {
        std::bitset<5> bin{ static_cast<uint64_t>(13) };
        rt = bin.to_string();
        return rt;
    }
    else if (command[i] == "$t6") {
        std::bitset<5> bin{ static_cast<uint64_t>(14) };
        rt = bin.to_string();
        return rt;
    }
    else if (command[i] == "$t7") {
        std::bitset<5> bin{ static_cast<uint64_t>(15) };
        rt = bin.to_string();
        return rt;
    }
    else if (command[i] == "$s0") {
        std::bitset<5> bin{ static_cast<uint64_t>(16) };
        rt = bin.to_string();
        return rt;
    }
    else if (command[i] == "$s1") {
        std::bitset<5> bin{ static_cast<uint64_t>(17) };
        rt = bin.to_string();
        return rt;
    }
    else if (command[i] == "$s2") {
        std::bitset<5> bin{ static_cast<uint64_t>(18) };
        rt = bin.to_string();
        return rt;
    }
    else if (command[i] == "$s3") {
        std::bitset<5> bin{ static_cast<uint64_t>(19) };
        rt = bin.to_string();
        return rt;
    }
    else if (command[i] == "$s4") {
        std::bitset<5> bin{ static_cast<uint64_t>(20) };
        rt = bin.to_string();
        return rt;
    }
    else if (command[i] == "$s5") {
        std::bitset<5> bin{ static_cast<uint64_t>(21) };
        rt = bin.to_string();
        return rt;
    }
    else if (command[i] == "$s6") {
        std::bitset<5> bin{ static_cast<uint64_t>(22) };
        rt = bin.to_string();
        return rt;
    }
    else if (command[i] == "$s7") {
        std::bitset<5> bin{ static_cast<uint64_t>(23) };
        rt = bin.to_string();
        return rt;
    }
    else if (command[i] == "$t8") {
        std::bitset<5> bin{ static_cast<uint64_t>(24) };
        rt = bin.to_string();
        return rt;
    }
    else if (command[i] == "$t9") {
        std::bitset<5> bin{ static_cast<uint64_t>(25) };
        rt = bin.to_string();
        return rt;
    }
    else if (command[i] == "$k0") {
        std::bitset<5> bin{ static_cast<uint64_t>(26) };
        rt = bin.to_string();
        return rt;
    }
    else if (command[i] == "$k1") {
        std::bitset<5> bin{ static_cast<uint64_t>(27) };
        rt = bin.to_string();
        return rt;
    }
    else if (command[i] == "$gp") {
        std::bitset<5> bin{ static_cast<uint64_t>(28) };
        rt = bin.to_string();
        return rt;
    }
    else if (command[i] == "$sp") {
        std::bitset<5> bin{ static_cast<uint64_t>(29) };
        rt = bin.to_string();
        return rt;
    }
    else if (command[i] == "$fp") {
        std::bitset<5> bin{ static_cast<uint64_t>(30) };
        rt = bin.to_string();
        return rt;
    }
    else if (command[i] == "$ra") {
        std::bitset<5> bin{ static_cast<uint64_t>(31) };
        rt = bin.to_string();
        return rt;
    }
    else {
        return "Error";
    }
}

string myAssm::regCheckrs(vector<string> command, int i){
    string rs = "";
    if (command[i] == "$zero") {
        std::bitset<5> bin{ static_cast<uint64_t>(0) };
        rs = bin.to_string();
        return rs;
    }
    else if (command[i] == "$at") {
        std::bitset<5> bin{ static_cast<uint64_t>(1) };
        rs = bin.to_string();
        return rs;
    }
    else if (command[i] == "$v0") {
        std::bitset<5> bin{ static_cast<uint64_t>(2) };
        rs = bin.to_string();
        return rs;
    }
    else if (command[i] == "$v1") {
        std::bitset<5> bin{ static_cast<uint64_t>(3) };
        rs = bin.to_string();
        return rs;
    }
    else if (command[i] == "$a0") {
        std::bitset<5> bin{ static_cast<uint64_t>(4) };
        rs = bin.to_string();
        return rs;
    }
    else if (command[i] == "$a1") {
        std::bitset<5> bin{ static_cast<uint64_t>(5) };
        rs = bin.to_string();
        return rs;
    }
    else if (command[i] == "$a2") {
        std::bitset<5> bin{ static_cast<uint64_t>(6) };
        rs = bin.to_string();
        return rs;
    }
    else if (command[i] == "$a3") {
        std::bitset<5> bin{ static_cast<uint64_t>(7) };
        rs = bin.to_string();
        return rs;
    }
    else if (command[i] == "$t0") {
        std::bitset<5> bin{ static_cast<uint64_t>(8) };
        rs = bin.to_string();
        return rs;
    }
    else if (command[i] == "$t1") {
        std::bitset<5> bin{ static_cast<uint64_t>(9) };
        rs = bin.to_string();
        return rs;
    }
    else if (command[i] == "$t2") {
        std::bitset<5> bin{ static_cast<uint64_t>(10) };
        rs = bin.to_string();
        return rs;
    }
    else if (command[i] == "$t3") {
        std::bitset<5> bin{ static_cast<uint64_t>(11) };
        rs = bin.to_string();
        return rs;
    }
    else if (command[i] == "$t4") {
        std::bitset<5> bin{ static_cast<uint64_t>(12) };
        rs = bin.to_string();
        return rs;
    }
    else if (command[i] == "$t5") {
        std::bitset<5> bin{ static_cast<uint64_t>(13) };
        rs = bin.to_string();
        return rs;
    }
    else if (command[i] == "$t6") {
        std::bitset<5> bin{ static_cast<uint64_t>(14) };
        rs = bin.to_string();
        return rs;
    }
    else if (command[i] == "$t7") {
        std::bitset<5> bin{ static_cast<uint64_t>(15) };
        rs = bin.to_string();
        return rs;
    }
    else if (command[i] == "$s0") {
        std::bitset<5> bin{ static_cast<uint64_t>(16) };
        rs = bin.to_string();
        return rs;
    }
    else if (command[i] == "$s1") {
        std::bitset<5> bin{ static_cast<uint64_t>(17) };
        rs = bin.to_string();
        return rs;
    }
    else if (command[i] == "$s2") {
        std::bitset<5> bin{ static_cast<uint64_t>(18) };
        rs = bin.to_string();
        return rs;
    }
    else if (command[i] == "$s3") {
        std::bitset<5> bin{ static_cast<uint64_t>(19) };
        rs = bin.to_string();
        return rs;
    }
    else if (command[i] == "$s4") {
        std::bitset<5> bin{ static_cast<uint64_t>(20) };
        rs = bin.to_string();
        return rs;
    }
    else if (command[i] == "$s5") {
        std::bitset<5> bin{ static_cast<uint64_t>(21) };
        rs = bin.to_string();
        return rs;
    }
    else if (command[i] == "$s6") {
        std::bitset<5> bin{ static_cast<uint64_t>(22) };
        rs = bin.to_string();
        return rs;
    }
    else if (command[i] == "$s7") {
        std::bitset<5> bin{ static_cast<uint64_t>(23) };
        rs = bin.to_string();
        return rs;
    }
    else if (command[i] == "$t8") {
        std::bitset<5> bin{ static_cast<uint64_t>(24) };
        rs = bin.to_string();
        return rs;
    }
    else if (command[i] == "$t9") {
        std::bitset<5> bin{ static_cast<uint64_t>(25) };
        rs = bin.to_string();
        return rs;
    }
    else if (command[i] == "$k0") {
        std::bitset<5> bin{ static_cast<uint64_t>(26) };
        rs = bin.to_string();
        return rs;
    }
    else if (command[i] == "$k1") {
        std::bitset<5> bin{ static_cast<uint64_t>(27) };
        rs = bin.to_string();
        return rs;
    }
    else if (command[i] == "$gp") {
        std::bitset<5> bin{ static_cast<uint64_t>(28) };
        rs = bin.to_string();
        return rs;
    }
    else if (command[i] == "$sp") {
        std::bitset<5> bin{ static_cast<uint64_t>(29) };
        rs = bin.to_string();
        return rs;
    }
    else if (command[i] == "$fp") {
        std::bitset<5> bin{ static_cast<uint64_t>(30) };
        rs = bin.to_string();
        return rs;
    }
    else if (command[i] == "$ra") {
        std::bitset<5> bin{ static_cast<uint64_t>(31) };
        rs = bin.to_string();
        return rs;
    }
    else {
        return "Error";
    }
}

string myAssm::immediate(vector<string> command, int i) {
    int func;
    std::istringstream(command[i]) >> std::dec >> func;
    if (func > 65536) {
        return "Error";
    }
    std::bitset<16> bin{ static_cast<uint64_t>(func) };
    return bin.to_string();
}

string myAssm::immediatebranch(vector<string> command, int i, int line) {
    int linenum = 0;
    //int skipper = 0;
    for (int k = 0; k < branchData.size(); k++) {
        /*if (command[k].size() == 1) {
            skipper++;
        }*/
        if (branchData[k].second.find(command[i]) != string::npos) {
            cout << branchData[k].second << "    this matches    " << command[i] << endl;
            linenum = branchData[k].first - 2;
            if (linenum > 0) {
                linenum--;
            }
            break;
        }
        else if (k == branchData.size() - 1) {
            return "Error";
        }
    }
    int com = linenum - line;
    cout << com << endl;
    //std::istringstream(com) >> std::dec >> func;
    std::bitset<16> bin{ static_cast<uint64_t>(com) };
    return bin.to_string();
}

string myAssm::Rtypesh(vector<string> command, string s) {
    for (int i = 0; i < command.size(); i++) {
        cout << command[i] << " ";
    }
    cout << endl;
    string binCommand = "";
    int func;
    int shift;
    std::istringstream(s) >> std::hex >> func;
    std::bitset<6> bin{ static_cast<uint64_t>(func) };
    std::istringstream(command[3]) >> std::dec >> shift;
    std::bitset<5> bin2{ static_cast<uint64_t>(shift) };
    binCommand.append("000000");
    binCommand.append("00000");
    if (regCheckrt(command, 2) == "Error")
        return "Error";
    binCommand.append(regCheckrt(command, 2));
    if (regCheckrd(command) == "Error") {
        return "Error";
    }
    binCommand.append(regCheckrd(command));
    binCommand.append(bin2.to_string());
    binCommand.append(bin.to_string());

    cout << binCommand << endl;
    return binCommand;
}

string myAssm::Rtypejr(vector<string> command, string s) {
    for (int i = 0; i < command.size(); i++) {
        cout << command[i] << " ";
    }
    cout << endl;
    string binCommand = "";
    int func;
    std::istringstream(s) >> std::hex >> func;
    std::bitset<6> bin{ static_cast<uint64_t>(func) };
    binCommand.append("000000");
    if (regCheckrs(command, 1) == "Error") {
        return "Error";
    }
    binCommand.append(regCheckrs(command, 1));
    binCommand.append("00000");
    binCommand.append("00000");
    binCommand.append("00000");
    binCommand.append(bin.to_string());

    cout << binCommand << endl;
    return binCommand;
}

string myAssm::Rtype(vector<string> command, string s) {
    for (int i = 0; i < command.size(); i++) {
        cout << command[i] << " ";
    }
    cout << endl;
    string binCommand = "";
    int func;
    std::istringstream(s) >> std::hex >> func;
    //string tempstr = "";
    std::bitset<6> bin{ static_cast<uint64_t>(func) };
    binCommand.append("000000");
    if (regCheckrs(command, 2) == "Error")
        return "Error";
    binCommand.append(regCheckrs(command, 2));

    if (regCheckrt(command, 3) == "Error")
        return "Error";
    binCommand.append(regCheckrt(command, 3));

    if (regCheckrd(command) == "Error")
        return "Error";
    binCommand.append(regCheckrd(command));

    binCommand.append("00000");
    binCommand.append(bin.to_string());
    cout << binCommand << endl;
    return binCommand;
}

string myAssm::Itype(vector<string> command, string s) {
    for (int i = 0; i < command.size(); i++) {
        cout << command[i] << " ";
    }
    cout << endl;
    string binCommand = "";
    int func;
    std::istringstream(s) >> std::hex >> func;
    std::bitset<6> bin{ static_cast<uint64_t>(func) };
    binCommand.append(bin.to_string());
    if (regCheckrs(command, 2) == "Error")
        return "Error";
    binCommand.append(regCheckrs(command, 2));

    if (regCheckrt(command, 1) == "Error")
        return "Error";
    binCommand.append(regCheckrt(command, 1));
    if (immediate(command, 3) == "Error") {
        return "Error";
    }
    binCommand.append(immediate(command, 3));
    cout << binCommand << endl;
    return binCommand;
}

string myAssm::Itypebranch(vector<string> command, string s, int i) {
    for (int i = 0; i < command.size(); i++) {
        cout << command[i] << " ";
    }
    cout << endl;
    string binCommand = "";
    int func;
    std::istringstream(s) >> std::hex >> func;
    std::bitset<6> bin{ static_cast<uint64_t>(func) };
    binCommand.append(bin.to_string());

    if (regCheckrt(command, 1) == "Error")
        return "Error";
    binCommand.append(regCheckrt(command, 1));

    if (regCheckrs(command, 2) == "Error") 
        return "Error";
    binCommand.append(regCheckrs(command, 2));

    if (immediatebranch(command, 3, i) == "Error") {
        return "Error";
    }
    binCommand.append(immediatebranch(command, 3, i));
    //cout << i << endl;
    cout << binCommand << endl;
    return binCommand;
}

string myAssm::Itypeimrt(vector<string> command, string s) {
    for (int i = 0; i < command.size(); i++) {
        cout << command[i] << " ";
    }
    cout << endl;
    string binCommand = "";

    int index = 0;

    vector<string> immrs;
    string imm = "";
    string rs = "";
    for (int i = 0; i < command[2].length(); i++) {
        if (command[2][i] != '(') {
            imm.push_back(command[2][i]);
        }
        else {
            index = i;
            break;
        }
    }
    //cout << imm << endl;
    immrs.push_back(imm);

    for (int i = index + 1; i < command[2].length() - 1; i++) {
        rs.push_back(command[2][i]);
    }
    immrs.push_back(rs);
    //cout << rs << endl;
    

    int func;
    std::istringstream(s) >> std::hex >> func;
    std::bitset<6> bin{ static_cast<uint64_t>(func) };
    binCommand.append(bin.to_string());
    if (regCheckrs(immrs, 1) == "Error")
        return "Error";
    binCommand.append(regCheckrs(immrs, 1));
    if (regCheckrt(command, 1) == "Error")
        return "Error";
    binCommand.append(regCheckrt(command, 1));
    if (immediate(immrs, 0) == "Error") {
        return "Error";
    }
    binCommand.append(immediate(immrs, 0));
    cout << binCommand << endl;
    return binCommand;
}

string myAssm::Itypeimm(vector<string> command, string s) {
    for (int i = 0; i < command.size(); i++) {
        cout << command[i] << " ";
    }
    cout << endl;
    string binCommand = "";
    int func;
    std::istringstream(s) >> std::hex >> func;
    std::bitset<6> bin{ static_cast<uint64_t>(func) };
    binCommand.append(bin.to_string());
    binCommand.append("00000");
    if (regCheckrt(command, 1) == "Error")
        return "Error";
    binCommand.append(regCheckrt(command, 1));
    if (immediate(command, 2) == "Error") {
        return "Error";
    }
    binCommand.append(immediate(command, 2));
    cout << binCommand << endl;
    return binCommand;
}

string myAssm::FakeCommand(vector<string> command, int i) {
    string line;
    for (int i = 0; i < command.size(); i++) {
        line.append(command[i]);
        line.append(" ");
    }
    string lineNum = to_string(i + 1);
    string output = "Cannot Assemble ";
    output.append(line);
    output.append("at line ");
    output.append(lineNum);
    cout << output << endl;
    return output;
}

void myAssm::checkOp(vector<string> command, int i) {
    if (command[0] == "add") {
        if (Rtype(command, "20") == "Error") {
            outFileData.push_back(FakeCommand(command, i));
        }
        else(outFileData.push_back(Rtype(command, "20")));
    }
    else if (command[0] == "addi") {
        if (Itype(command, "8") == "Error") {
            outFileData.push_back(FakeCommand(command, i));
        }
        else(outFileData.push_back(Itype(command, "8")));
    }
    else if (command[0] == "addiu") {
        if (Itype(command, "9") == "Error") {
            outFileData.push_back(FakeCommand(command, i));
        }
        else(outFileData.push_back(Itype(command, "9")));
    }
    else if (command[0] == "addu") {
        if (Rtype(command, "21") == "Error") {
            outFileData.push_back(FakeCommand(command, i));
        }
        else(outFileData.push_back(Rtype(command, "21")));
    }
    else if (command[0] == "and") {
        if (Rtype(command, "24") == "Error") {
            outFileData.push_back(FakeCommand(command, i));
        }
        else(outFileData.push_back(Rtype(command, "24")));
    }
    else if (command[0] == "andi") {
        if (Itype(command, "c") == "Error") {
            outFileData.push_back(FakeCommand(command, i));
        }
        else(outFileData.push_back(Itype(command, "c")));
    }
    else if (command[0] == "beq") {
        if (Itypebranch(command, "4", i) == "Error") {
            outFileData.push_back(FakeCommand(command, i));
        }
        else(outFileData.push_back(Itypebranch(command, "4", i)));
    }
    else if (command[0] == "bne") {
        if (Itypebranch(command, "5", i) == "Error") {
            outFileData.push_back(FakeCommand(command, i));
        }
        else(outFileData.push_back(Itypebranch(command, "5", i)));
    }
    else if (command[0] == "jr") {
        if (Rtypejr(command, "08") == "Error") {
            outFileData.push_back(FakeCommand(command, i));
        }
        else(outFileData.push_back(Rtypejr(command, "08")));
    }
    else if (command[0] == "lbu") {
        if (Itypeimrt(command, "24") == "Error") {
            outFileData.push_back(FakeCommand(command, i));
        }
        else(outFileData.push_back(Itypeimrt(command, "24")));
    }
    else if (command[0] == "lhu") {
        if (Itypeimrt(command, "25") == "Error") {
            outFileData.push_back(FakeCommand(command, i));
        }
        else(outFileData.push_back(Itypeimrt(command, "25")));
    }
    else if (command[0] == "ll") {
        if (Itypeimrt(command, "30") == "Error") {
            outFileData.push_back(FakeCommand(command, i));
        }
        else(outFileData.push_back(Itypeimrt(command, "30")));
    }
    else if (command[0] == "lui") {
        if (Itypeimm(command, "f") == "Error") {
            outFileData.push_back(FakeCommand(command, i));
        }
        else(outFileData.push_back(Itypeimm(command, "f")));
    }
    else if (command[0] == "lw") {
        if (Itypeimrt(command, "23") == "Error") {
            outFileData.push_back(FakeCommand(command, i));
        }
        else(outFileData.push_back(Itypeimrt(command, "23")));
    }
    else if (command[0] == "nor") {
        if (Rtype(command, "27") == "Error") {
            outFileData.push_back(FakeCommand(command, i));
        }
        else(outFileData.push_back(Rtype(command, "27")));
    }
    else if (command[0] == "or") {
        if (Rtype(command, "25") == "Error") {
            outFileData.push_back(FakeCommand(command, i));
        }
        else(outFileData.push_back(Rtype(command, "25")));
    }
    else if (command[0] == "ori") {
        if (Itype(command, "d") == "Error") {
            outFileData.push_back(FakeCommand(command, i));
        }
        else(outFileData.push_back(Itype(command, "d")));
    }
    else if (command[0] == "slt") {
        if (Rtype(command, "2a") == "Error") {
            outFileData.push_back(FakeCommand(command, i));
        }
        else(outFileData.push_back(Rtype(command, "2a")));
    }
    else if (command[0] == "slti") {
        if (Itype(command, "a") == "Error") {
            outFileData.push_back(FakeCommand(command, i));
        }
        else(outFileData.push_back(Itype(command, "a")));
    }
    else if (command[0] == "sltiu") {
        if (Itype(command, "b") == "Error") {
            outFileData.push_back(FakeCommand(command, i));
        }
        else(outFileData.push_back(Itype(command, "b")));
    }
    else if (command[0] == "sltu") {
        if (Rtype(command, "2b") == "Error") {
            outFileData.push_back(FakeCommand(command, i));
        }
        else(outFileData.push_back(Rtype(command, "2b")));
    }
    else if (command[0] == "sll") {
        if (Rtypesh(command, "00") == "Error") {
            outFileData.push_back(FakeCommand(command, i));
        }
        else(outFileData.push_back(Rtypesh(command, "00")));
    }
    else if (command[0] == "srl") {
        if (Rtypesh(command, "02") == "Error") {
            outFileData.push_back(FakeCommand(command, i));
        }
        else(outFileData.push_back(Rtypesh(command, "02")));
    }
    else if (command[0] == "sb") {
        if (Itypeimrt(command, "28") == "Error") {
            outFileData.push_back(FakeCommand(command, i));
        }
        else(outFileData.push_back(Itypeimrt(command, "28")));
    }
    else if (command[0] == "sc") {
        if (Itypeimrt(command, "38") == "Error") {
            outFileData.push_back(FakeCommand(command, i));
        }
        else(outFileData.push_back(Itypeimrt(command, "38")));
    }
    else if (command[0] == "sh") {
        if (Itypeimrt(command, "29") == "Error") {
            outFileData.push_back(FakeCommand(command, i));
        }
        else(outFileData.push_back(Itypeimrt(command, "29")));
    }
    else if (command[0] == "sw") {
        if (Itypeimrt(command, "2b") == "Error") {
            outFileData.push_back(FakeCommand(command, i));
        }
        else(outFileData.push_back(Itypeimrt(command, "2b")));
    }
    else if (command[0] == "sub") {
        if (Rtype(command, "22") == "Error") {
            outFileData.push_back(FakeCommand(command, i));
        }
        else(outFileData.push_back(Rtype(command, "22")));
    }
    else if (command[0] == "subu") {
        if (Rtype(command, "23") == "Error") {
            outFileData.push_back(FakeCommand(command, i));
        }
        else(outFileData.push_back(Rtype(command, "23")));
    }
    else if(command[0][command[0].length()-1] == ':') {
        for (int i = 0; i < command.size(); i++) {
            cout << command[i] << " ";
        }
        cout << endl;
        //cout << "         don't work           " << endl;
    }
    else {
        outFileData.push_back(FakeCommand(command, i));
    }
}

void myAssm::AddData(vector<string> command, int i) {
    pair<int, string> data;
    data.first = i + 1;
    data.second = command[0];
    branchData.push_back(data);
    cout << branchData[branchData.size() - 1].first << ", " << branchData[branchData.size() - 1].second << endl << endl;
}

void myAssm::fileWriter() {

    ofstream outfile;
    outfile.open ("myAssembler.obj");
    if (!outfile) {
        cout << "File not created!";
    }
    else {
        cout << "File created successfully!" << endl << endl;
    }
    for (int i = 0; i < outFileData.size(); i++) {
        
        string s = bintohex(outFileData[i]);
        cout << outFileData[i] << endl << s << endl;
        outfile << s;
        outfile << "\n";
    }
    outfile.close();
}

string myAssm::bintohex(string s) {
    string hexa = "";
    if (s.length() != 32) {
        return s;
    }
    for (int i = 0; i < s.length(); i = i+4) {
        if (s.substr(i, 4) == "0000") {
            hexa.append("0");
        }
        else if (s.substr(i, 4) == "0001") {
            hexa.append("1");
        }
        else if (s.substr(i, 4) == "0010") {
            hexa.append("2");
        }
        else if (s.substr(i, 4) == "0011") {
            hexa.append("3");
        }
        else if (s.substr(i, 4) == "0100") {
            hexa.append("4");
        }
        else if (s.substr(i, 4) == "0101") {
            hexa.append("5");
        }
        else if (s.substr(i, 4) == "0110") {
            hexa.append("6");
        }
        else if (s.substr(i, 4) == "0111") {
            hexa.append("7");
        }
        else if (s.substr(i, 4) == "1000") {
            hexa.append("8");
        }
        else if (s.substr(i, 4) == "1001") {
            hexa.append("9");
        }
        else if (s.substr(i, 4) == "1010") {
            hexa.append("a");
        }
        else if (s.substr(i, 4) == "1011") {
            hexa.append("b");
        }
        else if (s.substr(i, 4) == "1100") {
            hexa.append("c");
        }
        else if (s.substr(i, 4) == "1101") {
            hexa.append("d");
        }
        else if (s.substr(i, 4) == "1110") {
            hexa.append("e");
        }
        else if (s.substr(i, 4) == "1111") {
            hexa.append("f");
        }
    }
    return hexa;
}

int main(int argc, char* argv[])
{
    if (argc < 2) {
        cout << "No file was passed. error.";
    }
    cout << "arg was found";
    ifstream myfile(argv[1]);
    
    if (!myfile.is_open()) {
        cout << "the file isn't open";
    }
    else
    {
        cout << " The file opened" << endl;
    }

    vector<string> linevec;   
    
    string line;                               
    while (getline(myfile, line))
    {
        line.erase(std::remove(line.begin(), line.end(), ','), line.end());
        linevec.push_back(line);
        //cout << line << endl;
    }

    vector<vector<string>> vec1;
    
    for (int i = 0; i < linevec.size(); i++) {
        string s = linevec[i];
        stringstream ss(s);
        istream_iterator<std::string> begin(ss);
        istream_iterator<std::string> end;
        vector<string> tokens(begin, end);
        vector<string> tempvec;
        for (auto& s : tokens) {
            tempvec.push_back(s);
            //std::cout << s << std::endl;
        }
        vec1.push_back(tempvec);
    }

    //for (int i = 0; i < vec1.size(); i++) {
    //    for (int k = 0; k < vec1[i].size(); k++) {
    //        cout << vec1[i][k] << " ";
    //    }
    //    cout << endl;
    //}

    myAssm a;
    for (int i = 0; i < vec1.size(); i++) {
        if (vec1[i].size() == 1) {
            a.AddData(vec1[i], i);
        }
    }

    for (int i = 0; i < vec1.size(); i++) {
        if (vec1[i].size() == 1) {
            vec1.erase(vec1.begin()+i);
            i--;
        }
    }

    //a.out_file.open("myAssembler.obj");
    for (int i = 0; i < vec1.size(); i++) {
        a.checkOp(vec1[i], i);
    }

    a.fileWriter();
    
    //for()

    //The sample file has 10 lines, so complete_Vector.size() should be 10 (10 vectors are in it)
    return 1;
}


