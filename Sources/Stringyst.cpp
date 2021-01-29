#include "../Headers/Stringyst.h"

#include <sstream>
#include <iterator>

using namespace std;
 
string ltrim(const string &_string, const string &mask)
{
    //Begin string after banned characters
    size_t start = _string.find_first_not_of(mask);
    
    //Return string from first kept character only if wanted characters exist
    return start == string::npos 
    	? ""
    	: _string.substr(start);
}
 
string rtrim(const string &_string, const string &mask)
{
    //End string before banned characters
    size_t end = _string.find_last_not_of(mask);
    
    //Return string from last kept character only if wanted characters exist
    return end == string::npos
    	? ""
    	: _string.substr(0, end + 1);
}
 
string trim(const string &_string, const string &mask)
{
    //Return string from borders kept characters only if wanted characters exist
    return rtrim(ltrim(_string, mask), mask);
}


list<string> lExplode(const string &separator, const string &str)
{
    size_t firstSeparatorPos = str.find(separator);
    
    if (firstSeparatorPos == string::npos)
    {
        list<string> leaf;
        leaf.push_front(str);
        return leaf;
    }
    
    string sub = str.substr(
        0,
        firstSeparatorPos
    );

    list<string> _lExplode = lExplode(
        separator,
        str.substr(
            firstSeparatorPos + separator.size(),
            str.size() - firstSeparatorPos
        )
    );
    _lExplode.push_front(sub);
    return _lExplode;
}

vector<string> vExplode(const string &separator, const string &str)
{
    return vExplode(separator, str, false);
}

vector<string> vExplode(const string &separator, const string &str, bool reverse)
{
    list<string> listExplode = lExplode(separator, str);
    if(reverse)
        listExplode.reverse();
    vector<string> ret(listExplode.begin(), listExplode.end());
    return ret;
}