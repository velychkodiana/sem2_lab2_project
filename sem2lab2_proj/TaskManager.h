#pragma once
#include "Task.h"
#include <vector>

class TaskManager
{
public:
    static TaskManager& GetInstance()
    {
        static TaskManager instance;
        return instance;
    }

    void AddTask(const Task& task);
    void DeleteTask(int index);
    void MoveTask(int fromIndex, int toIndex);
    std::vector<Task>& GetTasks();

private:
    TaskManager() = default;
    std::vector<Task> tasks;
};
