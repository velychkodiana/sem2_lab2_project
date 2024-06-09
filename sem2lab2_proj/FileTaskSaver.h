#pragma once
#include "TaskSaver.h"

class FileTaskSaver : public TaskSaver
{
public:
    void Save(const std::vector<Task>& tasks, const std::string& fileName) override;
};
