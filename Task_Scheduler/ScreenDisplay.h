#ifndef SCREENDISPLAY_H
#define SCREENDISPLAY_H

using namespace std;

class ScreenDisplay {
    private: 

    public:
      // Displays the screen to add a task, calls the addTask() function in TaskManager
      void displayAddScreen(TaskManager );

      // Displays the screen to delete a task, calls the deleteTask() function in TaskManager
      void displayDeleteScreen();

      // Displays the screen to sort pre-existing tasks, calls the sortTask() functions in TaskManager
      void displaySortScreen(TaskManager );

      // Displays the screen to edit pre-existing tasks, calls the editTask() function in TaskManager
      string defaultedInputs(const string& promptOutput, const string& originalValue);
      void displayEditTask();

      // Displays the screen to edit pre-exisiting tasks, calls the displayTask() function in TaskManager
      void displayTask();
};

#endif