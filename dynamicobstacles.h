#ifndef DYNAMICOBSTACLES_H
#define DYNAMICOBSTACLES_H
#include "gl_const.h"
#include "structs.h"
#include <vector>
#include "tinyxml2.h"
#include <string>
#include <iostream>

class DynamicObstacles
{
    std::vector<obstacle> obstacles;
public:
    DynamicObstacles();
    bool getObstacles(const char* fileName);
    std::vector<Node> getSections(int num) const;
    double getSize(int num) const;
    int getID(int num) const;
    int getNumberOfObstacles() const { return obstacles.size(); }
};

#endif // DYNAMICOBSTACLES_H
