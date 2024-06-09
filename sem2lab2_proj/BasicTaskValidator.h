#pragma once
#include "TaskValidator.h"

class BasicTaskValidator : public TaskValidator
{
public:
    bool Validate(const Task& task) override
    {
        return !task.description.empty();
    }
};
