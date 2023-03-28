#include "graph.h" 
#include "directory.h"
#include <iostream>

int main() {
  std::string vertices_dir = getCurrentDir();
  std::string edges_dir = getCurrentDir();
  std::vector<vertices> vlist;
  vertices_dir += "/vertices.txt";
  std::cout << vertices_dir << std::endl;

  vlist = readVerticesFile(vertices_dir);
  printVertices(vlist);
  return 0;
}
