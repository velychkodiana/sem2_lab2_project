#pragma once
#include "Task.h"
#include <vector>

class AbstractTaskSaver
{
public:
    void SaveTasks(const std::vector<Task>& tasks, const std::string& fileName)
    {
        PrepareToSave(tasks);
        Save(tasks, fileName);
        FinishSave(tasks);
    }

protected:
    virtual void PrepareToSave(const std::vector<Task>& tasks) {}
    virtual void Save(const std::vector<Task>& tasks, const std::string& fileName) = 0;
    virtual void FinishSave(const std::vector<Task>& tasks) {}
};