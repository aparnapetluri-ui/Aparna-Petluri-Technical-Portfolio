#include "TaskManager.h"
#include "task.h"
#include "login.h"

#include <limits>
#include <fstream>
#include <sstream>
#include <iostream>

using namespace std;

void TaskManager::saveTasks(const string& username, const vector<Task>& tasks) {
  ifstream inFile("users.txt");
  if (!inFile) {
     throw runtime_error("Failed to open users.txt for reading.");
  }
  // implement something to find username to match 

  stringstream taskStream;
  for (const auto& task : tasks) { // for each task in tasks (vector)
    taskStream << "Title: " << task.getTitle() << "\n";
    taskStream << "Description: " << task.getDescription() << "\n";
    taskStream << "Completed: " << task.isCompleted() << "\n";
    taskStream << "Deadline: " << task.getDeadline() << "\n";
    taskStream << "Priority: " << task.getPriority() << "\n";
    taskStream << "Classification: " << task.getClassification() << "\n";
  }
}

string TaskManager::displayProgress() {
  int completed = 0;
  TaskManager tasksList;
  vector<Task> subtasks = tasksList.getTasks();
  for (const auto& subtask : subtasks) {
    if (subtask.isCompleted()) {
      completed++;
    }
  }
  int barWidth = subtasks.size();
  string bar = "";
  int numberOfUnfilled = barWidth - completed;
  for (unsigned i = 0; i < completed; i++) {
    bar.append("█");
  }
  for (unsigned i = 0; i < numberOfUnfilled; i++) {
    bar.append("░");
  } 
   int percentage = static_cast<int>((static_cast<double>(completed) / barWidth) * 100); // making sure its not going to round down to 0
   
   cout << "[" << bar << "] " << to_string(percentage) << endl;

}

void TaskManager::sortTaskPriority(){
  int taskNumber = 1;
  for (unsigned i = 0; i < tasks.size(); ++i) {
    if (tasks.at(i).getClassification() == "High") {
      cout << taskNumber << ". " << tasks.at(i).getTitle();
      ++taskNumber;
    }
  }
  for (unsigned i = 0; i < tasks.size(); ++i) {
    if (tasks.at(i).getClassification() == "Medium") {
      cout << taskNumber << ". " << tasks.at(i).getTitle();
      ++taskNumber;
    }
  }
  for (unsigned i = 0; i < tasks.size(); ++i) {
    if (tasks.at(i).getClassification() == "Low") {
      cout << taskNumber << ". " << tasks.at(i).getTitle();
      ++taskNumber;
    }
  }
}

void TaskManager::sortTaskClassification(vector<string> classificationOrder) {
  int taskNumber = 1;
  for (unsigned i = 0; i < classificationOrder.size(); ++i) {
    for (unsigned j = 0; j < tasks.size(); ++j) {
      if (tasks.at(j).getClassification() == classificationOrder.at(i)){
        cout << taskNumber << ". " << tasks.at(j).getTitle() << endl;
        ++taskNumber;
      }
    }
  }
}

void TaskManager::sortTaskDueDate() {
  // unsure on implementation right now
}

void TaskManager::addTask() {
  string title, description, priorityString, classificationString;
  int deadline, priority, classification, subtaskCount;
  // idk if we should make deadline a string or not, as input would be 09302024 as an int
  // but we can convert it to a string later on

  cout << "Title: ";
  getline(cin, title);

  cout << "Description: ";
  getline(cin, description);

  cout << "Due date [MM-DD-YYYY]: ";
  cin >> deadline; // deadline here is a number.. idk to change it to a string or not as inputting would be like 09302023 instead of 09-30-2023

  cout << "Priority:" << endl;
  cout << "1. High" << endl;
  cout << "2. Medium" << endl;
  cout << "3. Low" << endl;
  cout << "Enter your choice [1-3]: ";
  cin >> priority; // priority here is a number (or ill change it or smth), when outputting tasks, we should convert it to a string

  if (priority == 1) {
    priorityString = "High";
  } else if (priority == 2) {
    priorityString = "Medium";
  } else if (priority == 3) {
    priorityString = "Low";
  } else {
    cout << "Invalid choice. Defaulting to Low." << endl;
    priorityString = "Low";
  }
  // i kinda hate this part, we can think of a better way to do this later..
  cout << "Classification:" << endl;
  cout << "1. School" << endl;   cout << "2. Work" << endl;
  cout << "3. Personal" << endl;   cout << "4. Health" << endl;
  cout << "5. Other" << endl;   cout << "Enter your choice [1-5]: ";
  cin >> classification; // same thing as priority, we should convert it to a string when outputting tasks

  if (classification == 1) {
    classificationString = "School";
  } else if (classification == 2) {
    classificationString = "Work";
  } else if (classification == 3) {
    classificationString = "Personal";
  } else if (classification == 4) {
    classificationString = "Health";
  } else if (classification == 5) {
    classificationString = "Other";
  } else {
    cout << "Invalid choice. Defaulting to Other." << endl;
    classificationString = "Other";
  }

  cout << "How many subtasks? [0-5]: ";
  cin >> subtaskCount;
  if (subtaskCount < 0 || subtaskCount > 5) { // checker
    cout << "Invalid number of subtasks. Defaulting to 0." << endl;
    subtaskCount = 0;
  }

  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  vector<Subtask> subtasks;

  Task newTask(deadline, subtasks, priorityString, classificationString); // create a new task object
  newTask.setTitle(title);
  newTask.setDescription(description);

  for (int i = 0; i < subtaskCount && i < 5; i++) {
    string subtaskTitle, subtaskDesc;
    cout << "Subtask " << (i + 1) << ": ";
    getline(cin, subtaskTitle);

    if (!subtaskTitle.empty()) { // not sure about description for subtasks atm
      Subtask subtask(subtaskTitle, "", false);
      newTask.addSubtask(subtask);
    }
  }

  tasks.push_back(newTask); // add the new task to the tasks vector
}
