#pragma once
#include "TaskValidator.h"

class TaskDecorator : public TaskValidator
{
public:
    TaskDecorator(TaskValidator* validator) : validator(validator) {}

    bool Validate(const Task& task) override
    {
        return validator->Validate(task) && ValidateTask(task);
    }

protected:
    virtual bool ValidateTask(const Task& task) = 0;

private:
    TaskValidator* validator;
};
