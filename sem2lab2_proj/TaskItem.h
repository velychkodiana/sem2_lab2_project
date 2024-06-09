#pragma once
#include "TaskComponent.h"

class TaskItem : public TaskComponent
{
public:
    TaskItem(const Task& task) : task(task) {}
    void AddTask(TaskComponent* task) override {}
    void RemoveTask(TaskComponent* task) override {}
    void DisplayTask() const override;

private:
    Task task;
};
