#ifndef TASK_H
#define TASK_H
#include <string>
#include <vector>
#include "subtask.h"

using namespace std;

class Task : public Subtask {
  private:
    int deadline;
    vector<Subtask> subtasks;
    string priority;
    string classification;

  public:
    Task();
    Task(int deadline, const vector<Subtask>& subtasks, const string& priority, const string& classification);

    int getDeadline() const;
    string getPriority() const;
    string getClassification() const;
    vector<Subtask> getSubtasks() const;

    void setDeadline(int deadline);
    void setPriority(const string& priority);
    void setClassification(const string& classification);
    void setSubtasks(const vector<Subtask>& subtasks);
    void addSubtask(const Subtask& subtask);
};

#endif