#pragma once
#include "Task.h"

class TaskValidator
{
public:
    virtual bool Validate(const Task& task) = 0;
    virtual ~TaskValidator() = default;
};
