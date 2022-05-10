#include <fstream>
#include <map>
#include <iostream>

int main()
{
    std::ifstream ifs("in.txt");
    std::string s;
    std::map<std::string, int> map;

    while (ifs >> s)
        ++map[s];

    typedef std::map<std::string, int>::const_iterator iter;
  
    for (iter it = map.begin(); it != map.end(); ++it)
      std::cout << "le nombre d'occurence du mot " << it->first << " est " << it->second << std::endl;

    return 0;
}