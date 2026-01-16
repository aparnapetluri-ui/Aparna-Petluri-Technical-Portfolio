#include <iostream>

#include "ScreenDisplay.h"
#include "task.h"
#include "subtask.h"
#include "TaskManager.h"

using namespace std;

void ScreenDisplay::displayAddScreen(TaskManager userManager){
  cout << "+==================================+" << endl;
  cout << "             ADD TASK               " << endl;
  cout << "+==================================+" << endl;
  cout << "Please enter the following information:" << endl;

  userManager.addTask();

  cout << "Task added successfully!" << endl;
  cout << "1. Add Another Task" << endl;
  cout << "0. Return to Home" << endl;
  cout << "Enter your choice [0-1]: ";
  int choice;
  cin >> choice;

  if (choice == 1) {
    userManager.addTask(); // call addTask again to add another task
  } else {
    return; // return to the home menu
  }
}

string ScreenDisplay::defaultedInputs(const string& promptOutput, const string& originalValue) {
    // going to call this function to allow user to enter edited values, or enter through them to save original
    cout << promptOutput << "[" << originalValue << "]";
    string input;
    getline(cin, input); // getline() allows for empty input
    if (input == "") {
        return originalValue;
    } else {
        return input;
    }  
}

void ScreenDisplay::displayEditTask() {
    TaskManager tasksList;
    vector<Task> tasks = tasksList.getTasks();

    cout << "SELECT A TASK:" << endl;  // displaying all tasks by number for user to select
    for (unsigned i = 1; i <= tasks.size(); i++) {
        cout << i << ". " << tasks[i - 1].getTitle() << endl;
    }
    cout << endl; 

    string numberOfTasks = to_string(tasks.size());
    int taskChoice;
    cin >> taskChoice;
    cout << "Enter a task number to edit [1 -  " << numberOfTasks << "] (0 to cancel)" << endl;
    // need to display information for task at input
    if (taskChoice > 0 && taskChoice <= tasks.size()) {
        cout << tasks[taskChoice].getTitle() << endl;
        cout << tasks[taskChoice].getDescription() << endl;
        cout << tasks[taskChoice].isCompleted() << endl;
        cout << tasks[taskChoice].getDeadline() << endl;
        cout << tasks[taskChoice].getPriority() << endl;
        cout << tasks[taskChoice].getClassification() << endl;
    } else if (taskChoice == 0) {
        // revert to home page
    } else {
        cout << "Invalid input." << endl;
    }

    Task& chosenWord = tasks[taskChoice - 1];

    cout << "Enter new information (press Enter to keep current value):" << endl;
    string newTitle = defaultedInputs("New Title: ", chosenWord.getTitle());
    string newDescription = defaultedInputs("New Description: ", chosenWord.getDescription());
    string newDeadline = defaultedInputs("New Deadline: ", to_string(chosenWord.getDeadline()));
    string newPriority = defaultedInputs("New Priority: ", chosenWord.getPriority());
    string newClassification = defaultedInputs("New Classification: ", chosenWord.getClassification());
    
    string yesEditSubtask;
    cin >> yesEditSubtask;
    cout << "Edit subtasks? [y/n]: " << endl;
    if (yesEditSubtask == "y") {
        string seperator = "----------------------------------------";
        cout << seperator << endl;
        vector<Subtask> subtasksVector = chosenWord.getSubtasks();
        cout << "Current Subtasks: " << endl;
        for (unsigned i = 1; i <= subtasksVector.size(); i++) {
            cout << i << ". " << subtasksVector[i - 1].getTitle() << endl;
        }
        cout << seperator << endl;
        cout << "1. Add New Subtask" << endl;
        cout << "2. Edit Existing Subtask" << endl;
        cout << "3. Remove Subtask" << endl;
        cout << "4. Mark Subtask as Completed" << endl;
        cout << "0. Finish Editing Subtasks" << endl;
        int subtaskEditChoice;
        cin >> subtaskEditChoice;
        cout << "Enter your choice [0-4]: " << endl;

        if (subtaskEditChoice == 1) {

            string newSubtaskTitle;
            cout << "Enter new title: ";
            getline(cin, newSubtaskTitle);
            cout << "Enter new description: ";
            string newSubtaskDescription;
            getline(cin, newSubtaskDescription);
            Subtask newSubtask(newSubtaskTitle, newSubtaskDescription, false);
            subtasksVector.push_back(newSubtask);

        } else if (subtaskEditChoice == 2) {
            int selectedSubtask;
            cin >> selectedSubtask;
            cout << "Select from above list which subtask you want to mark as completed." << endl;
            if (selectedSubtask > 0 && selectedSubtask <= subtasksVector.size()) {
                cout << "Enter new information (press Enter to keep current value):" << endl;
                Subtask subtaskEdited = subtasksVector[selectedSubtask - 1];
                string newSubtaskTitle = defaultedInputs("New Title: ", subtaskEdited.getTitle());
                string newSubtaskDescription = defaultedInputs("New Description: ", subtaskEdited.getDescription());
            }


        } else if (subtaskEditChoice == 3) {
            // remove subtask -- not yet implemented
        } else if (subtaskEditChoice == 4) {
        
            int markCompleted;
            cin >> markCompleted;
            cout << "Select from above list which subtask you want to mark as completed." << endl;
            if (markCompleted > 0 && markCompleted <= subtasksVector.size()) {
                subtasksVector[markCompleted - 1].setCompleted(true);
            } else {
                cout << "Invalid input." << endl;
            }

        } else if (subtaskEditChoice == 0) {
            // finish editing subtasks
        } else {
            cout << "Invalid input." << endl;
        }
    }
    // view account home (go back to home page)
}

void ScreenDisplay::displaySortScreen(TaskManager userManager){
    string separators = "+==================================+";

  // Top Sort Task Bar
  cout << separators << endl << endl;
  cout << "             SORT TASK             " << endl << endl;
  cout << separators << endl;

  // Sorting options
  cout << "Sort by:" << endl;
  cout << "1. Priority (High → Medium → Low)" << endl;
  cout << "2. Classification (Work, School, Personal, etc.)" << endl;
  cout << "3. Due Date (Earliest → Latest)" << endl;
  cout << "0.  Back to Home" << endl << endl;

  // Prompt user to choose
  cout << "Enter your choice [0-3]: _ (input)" << endl;
  int input;
  cin >> input;
  while (input < 0 || input > 3){
    cout << "Please enter a valid choice [0-3]" << endl;
    cin >> input;
  }

  if (input == 1) {
    userManager.sortTaskPriority();
  } else if (input == 2) {
    cout << "Enter classification priority ('school', 'work', 'personal', 'health', 'other'):" << endl;
    
    vector<string> classificationOrder(5);
    string input;
    for (unsigned i = 0 ; i < 5; ++i){
      cout << "Your " << (i + 1) << "st priority: " << endl;
      cin >> input;
      while (input != "school" || input != "work" || input != "personal" || input != "health" || input != "other"){
        cout << endl << "Please enter a valid priority: \"school\", \"work\", \"personal\", \"health\", \"other\")" << endl;
        cin >> input;
      }
      classificationOrder[i] = input;
    }
    userManager.sortTaskClassification(classificationOrder);
  } else if (input == 3) {
    userManager.sortTaskDueDate();
  } else {
    // viewAccountHome();
  }
}
