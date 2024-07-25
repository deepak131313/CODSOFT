#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task {
    string description;
    bool completed;
};

vector<Task> tasks;

void addTask() {
    string task;
    cout << "Enter task: ";
    getline(cin, task);
    tasks.push_back({task, false});
}

void viewTasks() {
    cout << "Tasks:\n";
    for (int i = 0; i < tasks.size(); i++) {
        cout << i + 1 << ". " << tasks[i].description;
        if (tasks[i].completed) {
            cout << " (completed)";
        }
        cout << endl;
    }
}

void markTaskCompleted() {
    int index;
    cout << "Enter task number to mark as completed: ";
    cin >> index;
    if (index >= 1 && index <= tasks.size()) {
        tasks[index - 1].completed = true;
        cout << "Task marked as completed." << endl;
    } else {
        cout << "Invalid task number." << endl;
    }
}

void removeTask() {
    int index;
    cout << "Enter task number to remove: ";
    cin >> index;
    if (index >= 1 && index <= tasks.size()) {
        tasks.erase(tasks.begin() + index - 1);
        cout << "Task removed." << endl;
    } else {
        cout << "Invalid task number." << endl;
    }
}

int main() {
    int choice;

    do {
        cout << "\nTo-Do List Manager\n";
        cout << "1. Add task\n";
        cout << "2. View tasks\n";
        cout << "3. Mark task as completed\n";
        cout << "4. Remove task\n";
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
                markTaskCompleted();
                break;
            case 4:
                removeTask();
                break;
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    } while (choice != 5);

    return 0;
}