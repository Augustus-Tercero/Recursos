#include "graph.h"

std::vector<vertices> readVerticesFile(const std::string & path)
{
  std::vector<vertices> vlist;
  vertices v;
  std::string line;
  std::ifstream file(path);
  if (!file.is_open())
  {
    std::cout << "File does not exist!" << std::endl;
    exit(1);
  }
  while (std::getline(file, line))
  {
    std::ifstream iss(line);
    std::string substring;
    while(std::getline(iss, substring, ','))
    {
      v.push_back(substring);
    }
    vlist.push_back(v);
  }
  return vlist;
}

void printVertices(std::vector<vertices> vlist) 
{
  for (int i = 0; i < vlist.size(); i++)
  {
    std::cout << i << ": ";
    for (auto j : vlist[i]) 
    {
      for (auto k : j)
      {
        std::cout << k << " ";
      }
    }
    std::cout << std::endl;
  }
}
