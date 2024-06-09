#include "TaskFactory.h"
#include <stdexcept>

Task TaskFactory::CreateTask(const std::string& description, TaskType type)
{
    switch (type)
    {
    case TaskType::Simple:
        return Task{ description, false };
    case TaskType::Complex:
        return Task{ description, true };
    default:
        throw std::runtime_error("Unknown task type");
    }
}