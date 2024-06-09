#pragma once
#include "Task.h"
#include <vector>

class TaskSaver
{
public:
    virtual void Save(const std::vector<Task>& tasks, const std::string& fileName) = 0;
    virtual ~TaskSaver() = default;
};
