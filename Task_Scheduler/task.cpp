#include <iostream>
#include <string>

#include "task.h"
#include "subtask.h"

using namespace std;

Task::Task() : deadline(0), subtasks({}), priority(""), classification("") {}

Task::Task(int deadline, const vector<Subtask>& subtasks, const string& priority, const string& classification)
  : deadline(deadline), subtasks(subtasks), priority(priority), classification(classification) {
}

int Task::getDeadline() const {
  return deadline;
}

string Task::getPriority() const {
  return priority;
}

string Task::getClassification() const {
  return classification;
}

vector<Subtask> Task::getSubtasks() const {
  return subtasks;
}

void Task::setDeadline(int deadline) {
  this->deadline = deadline;
}

void Task::setPriority(const string& priority) {
  this->priority = priority;
}

void Task::setClassification(const string& classification) {
  this->classification = classification;
}

void Task::setSubtasks(const vector<Subtask>& subtasks) {
  this->subtasks = subtasks;
}
void Task::addSubtask(const Subtask& subtask) {
  subtasks.push_back(subtask);
}