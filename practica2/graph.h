#include <iostream>
#include <list>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

typedef std::list<std::string> vertices;
// typedef std::list<std::list<std::string>> edges;
struct edges{
  std::string name;
  std::list<std::string> links;
};

std::vector<vertices> readVerticesFile(const std::string & path);
edges readEdgesFile(const std::string & path);
void printVertices(std::vector<vertices> vlist);
void printEdges(edges elist);
