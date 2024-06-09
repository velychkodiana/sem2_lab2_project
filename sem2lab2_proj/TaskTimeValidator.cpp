#pragma once
#include "TaskDecorator.h"

class TaskTimeValidator : public TaskDecorator
{
public:
    TaskTimeValidator(TaskValidator* validator) : TaskDecorator(validator) {}

protected:
    bool ValidateTask(const Task& task) override
    {
        return true;
    }
};