#include <iostream>
#include <string>
#include "subtask.h"

using namespace std;

Subtask::Subtask() : title(""), description(""), completed(false) {}

Subtask::Subtask(const string& title, const string& description, bool completed) 
  : title(title), description(description), completed(completed) {}


string Subtask::getTitle() const {
  return title;
}

string Subtask::getDescription() const {
  return description;
}

bool Subtask::isCompleted() const {
  return completed;
}

void Subtask::setTitle(const string& title) {
  this->title = title;
}

void Subtask::setDescription(const string& description) {
  this->description = description;
}
void Subtask::setCompleted(bool completed) {
  this->completed = completed;
}
