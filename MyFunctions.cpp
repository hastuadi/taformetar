#include "MyFunctions.h"

string IntToString(int input)
{
    stringstream ss;
    ss << input;
    return ss.str();
}

int StrToInt(string input)
{
    int retval;
    istringstream buffer(input);
    buffer >> retval;
    return retval;
}

string FloatToStr(double input)
{
    ostringstream ss;
    ss << input;
    string s(ss.str());
    return s;
}

bool StringComparation(string input1, string input2)
{
    if(strcmp(input1.c_str(),input2.c_str()) == 0)
        return true;
    else
        return false;
}

bool AllAreNumber(string input)
{
    bool retval = true;
    for(unsigned int a=0; a<input.length(); a++)
        if(!isdigit(input.at(a)))
            retval = false;
    return retval;
}
