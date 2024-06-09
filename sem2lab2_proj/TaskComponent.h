#pragma once
#include "Task.h"

class TaskComponent
{
public:
    virtual void AddTask(TaskComponent* task) = 0;
    virtual void RemoveTask(TaskComponent* task) = 0;
    virtual void DisplayTask() const = 0;
    virtual ~TaskComponent() = default;
};
