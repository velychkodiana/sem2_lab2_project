#pragma once
#include "Task.h"
#include <vector> 

class TaskAdapter {
public:
    static std::vector<Task> ConvertTasks(const std::vector<std::string>& thirdPartyTasks);
};
