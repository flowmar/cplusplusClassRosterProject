//
//  degree.h
//  omarImamC867
//
//  Created by Omar Imam on 2/10/21.
//

#ifndef degree_h
#define degree_h

static const int NUMBER_OF_PROGRAMS = 4;

enum class DegreeProgram { SECURITY, NETWORK, SOFTWARE, NONE };
std::string DegreeProgramStrings[NUMBER_OF_PROGRAMS] = { "SECURITY", "NETWORK", "SOFTWARE", "NONE"};

#endif /* degree_h */
