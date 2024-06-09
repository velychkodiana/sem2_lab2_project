#include "TaskGroup.h"
#include <algorithm>

void TaskGroup::AddTask(TaskComponent* task)
{
    tasks.push_back(task);
}

void TaskGroup::RemoveTask(TaskComponent* task)
{
    tasks.erase(std::remove(tasks.begin(), tasks.end(), task), tasks.end());
}

void TaskGroup::DisplayTask() const
{
    for (const auto& task : tasks)
    {
        task->DisplayTask();
    }
}