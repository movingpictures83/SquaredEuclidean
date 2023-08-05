#ifndef SQUAREDEUCLIDEANPLUGIN_H
#define SQUAREDEUCLIDEANPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>
#include <vector>

class SquaredEuclideanPlugin : public Plugin
{
public: 
 std::string toString() {return "SquaredEuclidean";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
