#pragma once
#include "Task.h"
#include <string>

enum class TaskType {
    Simple,
    Complex
};

class TaskFactory {
public:
    static Task CreateTask(const std::string& description, TaskType type);
};