#include "TaskBuilder.h"

void TaskBuilder::BuildTaskDescription(const std::string& description)
{
    task.description = description;
}

void TaskBuilder::BuildTaskComplexity(bool complex)
{
    task.done = complex;
}

Task TaskBuilder::GetTask()
{
    return task;
}