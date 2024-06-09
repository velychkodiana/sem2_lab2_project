#include "TaskAdapter.h"

std::vector<Task> TaskAdapter::ConvertTasks(const std::vector<std::string>& thirdPartyTasks)
{
    std::vector<Task> tasks;
    for (const std::string& taskDescription : thirdPartyTasks)
    {
        tasks.push_back(Task{ taskDescription, false });
    }
    return tasks;
}