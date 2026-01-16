# Task Agenda

 Authors: [Aparna Petluri](https://github.com/aparnapetluri1), [Alexis Castaneda](https://github.com/hyacinth237), [Alda Tam](https://github.com/aldat27), [Priscilla Sou](https://github.com/psou002)

## Project Description
Why is it important or interesting to you? (Aparna)

As undergraduate students at UC Riverside, we have all become overwhelmed with the culmination of personal, academic, and career oriented tasks that need to be completed. With a task agenda, we believe that structure can be better added to our tasks, and will provide us a means to become more efficient. Additionally, having tasks separated into order of importance and due date will make it easier for students like us to better decide what tasks to do when. 

What languages/tools/technologies do you plan to use? (Priscilla)

We plan to code our task agenda using C++. This makes it ideal for building a system for task scheduling. We’ll probably use command-line interaction as our main user interface for various functions. Things like adding tasks, editing, or deleting will all be done through the terminal. The task agenda is also only accessible through a computer or laptop due to the use of a command line interface. 

What will be the input/output of your project? (Alda)

The input to our task agenda will come from the user through a command-line interface, users can type in text commands through the terminal. Users can input data such as task titles, descriptions, classifications (like personal, work, or study), priority levels, durations, and due dates. The output of all the tasks will also be displayed in the terminal, and sorted based on priority (due date and importance). If possible, we may also include optional outputs like progress indicators or a timer.

What are the features that the project provides? (Alexis)

Our task agenda will allow the user to create tasks by adding a title and details, organizing them by either date or priority. We will also include a feature that allows the user to switch their calendar category (i.e. personal, work, school). If time permits, we might also implement features that allow you to indicate the progress of a task or potentially even a focus timer.


## User Interface Specification

### Navigation Diagram
![cs 100 Navigation Diagram 5-2-2025](https://github.com/user-attachments/assets/99f5e289-2742-476d-adfe-ef789143d52d)


Our navigation diagram demonstrates the different stages in which a user will go through in our task scheduler. They will first create, or log in to a previously existing account, and be taken to a home page. This page will show their name and highest priority task, as well as a list of the names of all tasks. On this home page, a user can decide to do one of five options: sort tasks, add a task, edit a task, display the list of tasks, or delete a task.

Tasks can be sorted based on priority (whether the task is of high, medium, or low importance), classification (personal, work, school, etc.), or due date based on the user's preference. When adding a task, the user will provide the title, description, deadline, priority, classification of a task, and has the option to add subtasks as well. When displaying the tasks list, the entire task, with all the information added, along with all subtasks for each task. A progress bar will also be displayed for subtasks, where each completed subtask counts for a percentage of completion.


### Screen Layouts
### Starting Screen
```
+=====================================+

    Welcome to the Task Scheduler!

+=====================================+

Login to Existing Account
Create a new Account
Exit
Enter your choice: [0-2]: _ (input)
```
When logging into an existing account, the user will be prompted to enter their username and password. If a user inputs the incorrect username or password, they’ll be prompted again. Similarly, if the user chooses to create a new account and if they choose a username that already exists, they’ll be prompted to select a new username. 

### Create Account/Login Screen

```
+==================================+

    Create a New Account/Login

+==================================+

Please enter the following:

Username: (first prompt)
Password: (second prompt)

1. Create Account/Login
0. Back to Main Menu

Enter your choice: [0-1]: _ (input)
```
- Both the login and account creation UI will be similar, just with a few wording tweaks.
- The user will be prompted for a username and a password when logging into and creating an account.
- When logging into an existing account, if the username/password is incorrect, the program will prompt to try again, and the user will be led back to this prompt.
- When creating a new account, if the user inputs an already existing username, they’ll be prompted to choose a different username and also be led back to this prompt. If the user successfully creates a new account or logs in, they'll be led to the main menu.
### Main Menu
```
+==================================+

             HOME PAGE

+==================================+

Welcome, [Username]!

HIGHEST PRIORITY TASK:

CS100 Final Project (HIGH) - Due: 2025-5-15

YOUR TASKS: 

1. CS100 Final Project
2. Weekly Grocery Shopping
3. Prepare for Interview
4. Study for Midterm
5. Finish Homework

+==================================+

1. Add Tasks 
2. Sort Tasks
3. Edit Tasks
4. Display Tasks
5. Delete Task
0. Logout 

Enter your choice [0-5]: _
```
- The main menu or homepage will output the user’s highest priority task and other tasks ordered by highest priority to lowest.
- The homepage will also give the user a list of commands they can choose from, most of them about the tasks.
- Add tasks will allow them to create a new task, sort tasks will allow them to sort already existing tasks, edit tasks will allow them to edit already existing tasks, display tasks will display all of their tasks in a more detailed manner and delete task will allow them to delete any of their existing tasks.
### Add Tasks Screen
```
+==================================+

             ADD TASK

+==================================+
Please enter the following information:

Title: _ (input)
Description: _ (input)
Due Date [YYYY-MM-DD]: _ (input)
Priority:
  1. High
  2. Medium
  3. Low
Enter choice [1-3]: _ (input)

Classification:
  1. School
  2. Work
  3. Personal
  4. Health
  5. Other

Enter choice [1-5]: _ (input)

How many subtasks? [0-5]: _ (input)
Subtask 1: _  
Subtask 2: _
Subtask 3: _
Subtask 4: _
Subtask 5: _
(depends on how many subtasks u want here)

Task added successfully!

1. Add Another Task
0. Back to Home

Enter your choice [0-1]: _
```
- In the add task command, the user will be prompted for the task title, description, date, priority, and classification. If the user wants to add subtasks, they have to put a number greater than 0. After that, they can add the number of subtasks they chose. If the number 0 is chosen, the main task will be added. When the task is successfully created, the user can either create another task or go back to the home page to do another command.

### Sort Tasks Screen
```
+==================================+

             SORT TASK

+==================================+
Sort by:
1. Priority (High → Medium → Low
2. Classification (Work, School, Personal, etc.)
3. Due Date (Earliest → Latest)
0.  Back to Home

Enter your choice [0-3]: _ (input)

(If User Chooses Classification/2):
Enter classification priority (‘school’, ‘work’, ‘personal’, ‘health’, ‘other’):
1. _ input()
2. _ input()
3. _ input()
4. _ input()
5. _ input()
```
- The sort task command is for the user to choose how they want their tasks displayed by priority, classification, or due date. For priority and due date, the tasks will be displayed in a preset order. For priority, it’ll be displayed from high, medium, to low. For the due date, it’ll be displayed from the earliest to the latest. However, if the user chooses to display the tasks by classification, they can choose the priority for each category. For example, work can be at number one while personal at number 5. The user will be prompted for each priority number.
### Edit Task Screen
```
+======================================+

               EDIT TASK

+======================================+
Your Tasks:
1. CS100 Final Project
2. Weekly Grocery Shopping
3. Prepare for Interview
4. Study for Midterm
5. Finish Homework

Enter task number to edit [1-5] (0 to cancel): _ (input)

Current Information:
Title: CS100 Final Project
Description: Implement a task scheduler with three design patterns
Deadline: 2025-05-15
Priority: High
Classification: School

Enter new information (press Enter to keep current value):
New Title [CS100 Final Project]: _
New Description [Implement a task scheduler with three design patterns]: _(Input: Add observer pattern implementation)
New Deadline [2025-05-15]: _ (input: 2025-05-20)
New Priority [High]: 
New Classification [School]: 

Edit subtasks? [y/n]: y
--------------------------------------
Current Subtasks:
a. [x] Create project structure
b. [ ] Implement Composite Pattern
c. [ ] Implement Command Pattern
d. [ ] Write unit tests
--------------------------------------
1. Add New Subtask
2. Edit Existing Subtask
3. Remove Subtask
4. Mark Subtask as Completed
0. Finish Editing Subtasks
Enter your choice [0-4]: _ (input)

// if 2, 3, or 4 is chosen
Enter task to edit [a-d]: _ (input)

// if 2
Enter new title: _ (input)

// if 3
Subtask deleted successfully!

// if 4
Subtask Completed!

0. Back to home
1. Edit another task

Enter your choice [0-1]: _ (input)
```
- The edit task command will prompt the user to edit each attribute of the task they choose to edit: title, description, deadline, priority, and classification. If they don’t want to change that attribute, they may just press enter. After, they will be prompted to edit the subtasks of that task. If they choose ‘y’,  it will allow them to add a new subtask, edit the title of the subtask, remove it, or mark it as completed. If the user wants to edit, remove, or mark completed a specific subtask, it will prompt the user to enter that subtask.
  
### Display Task List Screen
```
+==================================+

        DISPLAY TASK LISTS

+==================================+
TASK 1: CS100 Final Project
Priority: HIGH 
Classification: School
Due Date: 2025-05-20 
Description: Add observer pattern implementation 
Subtasks Progress: [████████░░] 40%
 1. [x] Create project structure
 2. [x] Finish diagrams and layouts
 3. [ ] Plan the code
 4. [ ] Finish classes
 5. [ ] Write unit tests
-------------------------------------- 
TASK 2: Weekly Grocery Shopping 
Priority: MEDIUM 
Classification: Personal 
Due Date: 2025-05-07
Description: Buy groceries for the week
Subtasks Progress: [██░░░░░░░░] 20%
 1. [x] Make a shopping list
 2. [ ] Buy vegetables
 3. [ ] Buy meat
 4. [ ] Buy snacks
 5. [ ] Buy hot dogs
-------------------------------------- 
TASK 3: Prepare for Interview
Priority: HIGH 
Classification: Work 
Due Date: 2025-05-10 
Description: Get ready for software engineer interview 
Subtasks Progress: [████████░░] 80%
 1. [x] Review resume
 2. [x] Practice coding problems
 3. [x] Research company
 4. [x] Prepare questions
 5. [ ] Mock interview
====================================== 
Enter '0' to go back to home: _
```
- The display task command will display all of the user’s tasks in full detail. Compared to the homepage displaying tasks, the display task command will show the task’s title, priority, classification, due date, and description. If the main task has subtasks under it, a progress bar and percentage will also be displayed, showing which subtasks are finished. The user will be prompted to go back to the homepage.

### Delete Task Screen
```
+==================================+

           DELETE A TASK

+==================================+

Your tasks: 
1. CS100 Final Project
2. Weekly Grocery Shopping
3. Prepare for Interview
4. Study for Midterm
5. Finish Homework

Enter your choice [1-5] (0 to cancel): _ (input)

Task Deleted Successfully!


0. Back to Home
1. Delete another Task


Enter your choice [0-1]: _
```
- In the delete a task command, the user is allowed to delete any main task that is pre existing. The user is prompted to enter which task they want to delete, or they can cancel their decision if they have changed their mind. If they choose to delete a task, they must input the number of tasks they want deleted. The task will be successfully deleted (if a displayed number is chosen), and the user will be prompted to go back to the home page or to delete another task.

## Class Diagram
![CS100 Task Agenda Class Diagram](https://github.com/user-attachments/assets/eb9865b6-a94b-4062-a7c6-dcedf2320de3)

In our class diagram, we have 5 main classes: the User class, the Login class, the Subtask class, the Task Class, and the Task Manager class. The Login class uses the User class, the User class uses the Task Manager class, the Task Manager class uses the Task class, and the Task class inherits from the Subtask Class.

#### User Class:

The User class contains 3 variables, 1 public variable "name" and 2 private variables "password" and "username", which allows the user to create their own account to store their tasks. The class also has 5 member functions, all of which allow the user to set and get their user information. The functions setPassword() and getPassword() allow the user to set and get their password. The functions setUsername() and getUsername() allow the user to set and get their username. As name is a public variable, the user can directly alter their name, only requiring a getName() function to get their name.

#### Login Class:

The Login class has one public member variable "Users", stores a vector of Users. The number of current/previously logged in accounts that will be saved to a txt file (to store the account information after the program exits). It also has three functions, createAccount()-- allows users to create an account, login()-- allows users to login/access their pre-existing account(s), and viewAccountHome()-- displays the home page, which has a greeting to the user, reminds the users of their closest task deadline, and their simplified task list (only task names and due dates) sorted by due date (closest to furthest).

#### Subtask Class:

The Subtask Class contains of 3 public member variables and 3 public member functions. The public variables "title", "description", and "completed" are components of each Subtask. The functions-- getTitle(), getDescription(), and getCompleted() allow the user to see each variable.

#### Task Class

The Task Class inherits from the Subtask Class and consists of 4 public variables and 5 public functions (not including the inherited variables and functions). The variable "deadline" keeps track of a task's deadline, "subtasks" keeps count of the number of subtasks a task has, "priority" holds a task's relative priority (none, low, medium, high), and "classification" stores a task's type (personal, work, school). Three of the functions allow the user to see a task's information, with those being "deadline" (getDeadline()), "priority" (getPriority()), and "classification" (getClassification()). The function addSubtask() allows the user to add a subtask to a task and displayProgress() displays the proportion of completed subtasks within a task to the user. Additionally, when tasks are completed, they are automatically deleted.

#### Task Manager Class:

The Task Manager class consists of 5 public member functions: addTask()-- alows the user to add a task to their task agenda, deleteTask()-- allows the user to manually delete an unfinished task, sortTask()-- allows the user to sort their tasks by either priority, classification, or deadline (default), editTask()-- allows the user to edit a pre-existing task, and displayTask()-- displays the user's whole tasks (title, description, deadline, priority, and classification)  in a list. 


### Updated Class Diagram:
![Class Diagram](https://github.com/user-attachments/assets/8b532403-71e5-4843-9dbf-590b964eb21e)

After considering the SOLID principles, we made a few major changes to our class diagram. 

The first change was dividing our Task Manager class into two classes: Task Manager and Screen Display. We applied the Single Responsibility Principle and the Interface Segregation Principle to ensure our classes only had one responsibility. To apply this change, we altered our pre-existing code, having our interface focused portions becoming their own functions which called the setter/getter task functions. This change increased the readability of our code and the overall confusion we were starting to have with the Task Manager class.

Our second change was dividing certain Task Manager functions (ex. sortTask()) into smaller, single-purposed functions. We applied the Interface Segregation Principle to guarentee these functions only contained what they needed. We changed the original function by breaking the different types of task sorting into their own functions--sortTaskPriority(), sortTaskClassification(), and sortTaskDueDate(). This change allowed us to simplify the code in the displaySortScreen() function as it would only need to call the user chosen method instead of storing the code for all 3 variations and only calling upon one.


For future reference: 

Updated Navigation Diagram:
![cs 100 Navigation Diagram 5-2-2025](https://github.com/user-attachments/assets/43e3b791-6fa4-44f6-a81e-91bf5c268bfd)
