#pragma once
#include "TaskComponent.h"
#include <vector>

class TaskGroup : public TaskComponent
{
public:
    void AddTask(TaskComponent* task) override;
    void RemoveTask(TaskComponent* task) override;
    void DisplayTask() const override;

private:
    std::vector<TaskComponent*> tasks;
};
