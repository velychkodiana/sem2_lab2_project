#pragma once
#include "Task.h"
#include <string>

class TaskBuilder {
private:
    Task task;
public:
    void BuildTaskDescription(const std::string& description);
    void BuildTaskComplexity(bool complex);
    Task GetTask();
};
