#include "TaskItem.h"
#include <iostream>

void TaskItem::DisplayTask() const
{
    std::cout << "Task: " << task.description << " - " << (task.done ? "Done" : "Not done") << std::endl;
}