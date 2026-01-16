  #ifndef SUBTASK_H
  #define SUBTASK_H

  #include <string>
  #include <vector>

  using namespace std;

  class Subtask {
    private:
      string title;
      string description;
      bool completed;
    
    public:
      Subtask();
      Subtask(const string& title, const string& description, bool completed);

      string getTitle() const;
      string getDescription() const;
      bool isCompleted() const;

      void setTitle(const string& title);
      void setDescription(const string& description);
      void setCompleted(bool completed);
  };

  #endif