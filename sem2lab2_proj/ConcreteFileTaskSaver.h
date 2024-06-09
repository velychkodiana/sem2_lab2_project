#pragma once
#include "AbstractTaskSaver.h"
#include <fstream>
#include <algorithm>

class ConcreteFileTaskSaver : public AbstractTaskSaver
{
protected:
    void Save(const std::vector<Task>& tasks, const std::string& fileName) override
    {
        std::ofstream ostream(fileName);
        ostream << tasks.size();
        for (const Task& task : tasks)
        {
            std::string description = task.description;
            std::replace(description.begin(), description.end(), ' ', '_');
            ostream << '\n' << description << ' ' << task.done;
        }
    }
};
