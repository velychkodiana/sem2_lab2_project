#include "FileTaskSaver.h"
#include <fstream>
#include <algorithm>

void FileTaskSaver::Save(const std::vector<Task>& tasks, const std::string& fileName)
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