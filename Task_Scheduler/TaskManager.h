#ifndef TASKMANAGER_H
#define TASKMANAGER_H

#include <string>
#include <vector>
#include "task.h"

using namespace std;

class TaskManager {
  private:
    vector<Task> tasks;
  public:
    static void saveTasks(const string& username, const vector<Task>& tasks);
    vector<Task> getTasks() const;
    void addTask();
    string displayProgress();
    void sortTaskPriority();
    void sortTaskClassification(vector<string> );
    void sortTaskDueDate();
};

#endif