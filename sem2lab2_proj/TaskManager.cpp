#include "TaskManager.h"

void TaskManager::AddTask(const Task& task)
{
    tasks.push_back(task);
}

void TaskManager::DeleteTask(int index)
{
    if (index >= 0 && index < tasks.size())
    {
        tasks.erase(tasks.begin() + index);
    }
}

void TaskManager::MoveTask(int fromIndex, int toIndex)
{
    if (fromIndex >= 0 && fromIndex < tasks.size() && toIndex >= 0 && toIndex < tasks.size())
    {
        std::swap(tasks[fromIndex], tasks[toIndex]);
    }
}

std::vector<Task>& TaskManager::GetTasks()
{
    return tasks;
}