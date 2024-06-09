#pragma once
#include "Task.h"
#include <vector>
#include <fstream>
#include <algorithm> 
#include <iostream> 

class TaskSaveStrategy {
public:
    virtual void SaveTasks(const std::vector<Task>& tasks, const std::string& fileName) = 0;
    virtual ~TaskSaveStrategy() {}
};

class TextFileSaveStrategy : public TaskSaveStrategy
{
public:
    void SaveTasks(const std::vector<Task>& tasks, const std::string& fileName) override;
};

void TextFileSaveStrategy::SaveTasks(const std::vector<Task>& tasks, const std::string& fileName)
{
    std::ofstream ostream(fileName);
    if (!ostream.is_open())
    {
        std::cout << "Cannot open file: " << fileName << std::endl;
        return;
    }

    ostream << tasks.size();
    for (const Task& task : tasks)
    {
        std::string description = task.description;
        std::replace(description.begin(), description.end(), ' ', '_');
        ostream << '\n' << description << ' ' << task.done;
    }

    ostream.close();
}

class BinaryFileSaveStrategy : public TaskSaveStrategy
{
public:
    void SaveTasks(const std::vector<Task>& tasks, const std::string& fileName) override;
};

void BinaryFileSaveStrategy::SaveTasks(const std::vector<Task>& tasks, const std::string& fileName)
{
    std::ofstream ostream(fileName, std::ios::binary);
    if (!ostream.is_open())
    {
        std::cout << "Cannot open file: " << fileName << std::endl;
        return;
    }

    for (const Task& task : tasks)
    {
        ostream.write(reinterpret_cast<const char*>(&task), sizeof(Task));
    }

    ostream.close();
}
