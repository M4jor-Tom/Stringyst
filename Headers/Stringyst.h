#include <string>
#include <list>
#include <vector>

std::string ltrim(const std::string &_string, const std::string &mask);
 
std::string rtrim(const std::string &_string, const std::string &mask);

std::string trim(const std::string &_string, const std::string &mask);

std::list<std::string> lExplode(const std::string &separator, const std::string &str);

std::vector<std::string> vExplode(const std::string &separator, const std::string &str, bool reverse);