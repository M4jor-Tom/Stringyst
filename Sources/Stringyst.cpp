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


list<string> explode(const string &separator, const string &str)
{
    list<string> ret;

    /*size_t firstSeparatorPos = str.find(separator, 0);
    
    ret.push_front(
        str.substr(
            0,
            firstSeparatorPos
        )
    );

    ret.merge(
        explode(
            separator,
            str.substr(
                firstSeparatorPos,
                str.size() - firstSeparatorPos
            )
        )
    );*/

    return ret;
}