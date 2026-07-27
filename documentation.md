### DOCUMENTATION OF PROGRESS - DYNAMIC

- core : main.cpp , model.cpp

- main.cpp -> the runtime file that will talk to user.
- models.hpp -> contains the class and protoypes for models.cpp
- models.cpp -> contains the models for creating and performing functions on task, main logic file.

---

## models.cpp

- Made a calss named Task that contains following functions :
  - create_task() -> creates a task that contains id,name,desc, prioroty, status, date
  - task_done() -> to update status done
  - task_undone() -> to uncheck the status to pending
  - edit_priority() -> to edit the priority again
  - display_task() -> to display the task details.

- Used a fucntion to convert bool status value into done and pending to return value to user.
- Used Basic constructor to ensure safe default values

---
