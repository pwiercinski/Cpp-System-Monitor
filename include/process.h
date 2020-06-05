#ifndef PROCESS_H
#define PROCESS_H

#include <string>


class Process {
 public:
  int Pid();                               // TODO: See src/process.cpp
  std::string User();                      // TODO: See src/process.cpp
  std::string Command();                   // TODO: See src/process.cpp
  float CpuUtilization();                  // TODO: See src/process.cpp
  std::string Ram();                       // TODO: See src/process.cpp
  long int UpTime();                       // TODO: See src/process.cpp
  bool operator<(Process const& a) const;  // TODO: See src/process.cpp
  Process(int pid);

  // TODO: Declare any necessary private members
 private:
  std::string kProcDirectory{"/proc/"};
  std::string kStatFilename{"/stat"};
  int pid_;
  float cpu_;
};

#endif
