#include "directory.h"

std::string getCurrentDir()
{
  char buffer[FILENAME_MAX];
  if (getcwd(buffer, FILENAME_MAX))
  {
    std::string currDir(buffer);
    return currDir;
  }
  return "";
}
