#ifndef UTILITY_H
#define UTILITY_H

#include <string>
#include <vector>
#include <sstream>
#include <omp.h>
#include <cstring>

namespace vg {

using namespace std;

string reverse_complement(const string& seq);
int get_thread_count(void);

// split a string on a single delimiter character (delim)
std::vector<std::string>& split(const std::string &s, char delim, std::vector<std::string> &elems);
std::vector<std::string> split(const std::string &s, char delim);
// split a string on any character found in the string of delimiters (delims)
std::vector<std::string>& split(const std::string &s, const std::string& delims, std::vector<std::string> &elems);
std::vector<std::string> split(const std::string &s, const std::string& delims);

}

#endif
