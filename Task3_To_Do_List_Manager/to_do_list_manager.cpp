#include <iostream>
#include <vector>
using namespace std;

struct Task {
    string name;
    bool completed;
};

vector<Task> tasks;

void addTask() {
    Task t;
    cin.ignore();
    cout << "Enter task: ";
    getline(cin, t.name);
    t.completed = false;
    tasks.push_back(t);
    cout << "Task added successfully!\n";
}

void viewTasks() {
    if (tasks.empty()) {
        cout << "No tasks available.\n";
        return;
    }

    cout << "\n===== TO-DO LIST =====\n";
    for (int i = 0; i < tasks.size(); i++) {
        cout << i + 1 << ". " << tasks[i].name << " - ";
        if (tasks[i].completed)
            cout << "Completed\n";
        else
            cout << "Pending\n";
    }
}

void markCompleted() {
    int index;
    viewTasks();

    cout << "Enter task number to mark as completed: ";
    cin >> index;

    if (index >= 1 && index <= tasks.size()) {
        tasks[index - 1].completed = true;
        cout << "Task marked as completed!\n";
    } else {
        cout << "Invalid task number!\n";
    }
}

void removeTask() {
    int index;
    viewTasks();

    cout << "Enter task number to remove: ";
    cin >> index;

    if (index >= 1 && index <= tasks.size()) {
        tasks.erase(tasks.begin() + index - 1);
        cout << "Task removed successfully!\n";
    } else {
        cout << "Invalid task number!\n";
    }
}

int main() {
    int choice;

    do {
        cout << "\n===== TO-DO LIST MANAGER =====\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addTask();
                break;
            case 2:
                viewTasks();
                break;
            case 3:
                markCompleted();
                break;
            case 4:
                removeTask();
                break;
            case 5:
                cout << "Thank you!\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}
