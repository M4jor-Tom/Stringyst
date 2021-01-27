#include <string>
#include <list>

std::string ltrim(const std::string &_string, const std::string &mask);
 
std::string rtrim(const std::string &_string, const std::string &mask);

std::string trim(const std::string &_string, const std::string &mask);

std::list<std::string> explode(const std::string &separator, const std::string &str);