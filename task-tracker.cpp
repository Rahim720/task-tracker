#include <iostream>
#include <fstream>
#include <chrono>
#include <ctime>    
#include <time.h>
#include <string.h>
#include <ctime>
class Task{
    public:
        int id;
        std::string description;
        std::string status;
        std::time_t createdAt;
        std::time_t updatedAt;
};

void writeTaskToFile(const Task& task) {
    std::ofstream file("tasks.txt", std::ios::app);

    if (!file.is_open()) {
        std::cout << "ERROR: Could not open tasks.txt" << std::endl;
        return;
    }

    file << task.id << "|"
         << task.description << "|"
         << task.status << "|"
         << task.createdAt << "|"
         << task.updatedAt << std::endl;

    file.close();

    std::cout << "✓ Task " << task.id << " saved to file!" << std::endl; 
};


int main(int argc, char* argv[]) {
    // argc = argument count (includes program name)
    // argv = argument vector (array of strings)
    
    std::cout << "Program name: " << argv[1] << std::endl;
    std::cout << "Number of arguments: " << argc << std::endl;

    if (argc < 2) {
        std::cout << "Usage: task-tracker <command>" << std::endl;
        std::cout << "Commands: add, list, delete, help" << std::endl;
        return 1;  // Return 1 means "error"
    }

    std::string cmnd = argv[1];

    if (cmnd == "add"){
        std::cout <<"You wish to use the add command"<< std::endl;
    }

    if (cmnd == "list"){
        std::cout <<"You wish to use the add command"<< std::endl;
    }

    if (cmnd == "delete"){
        std::cout <<"You wish to use the delete command"<< std::endl;
    }

    if (cmnd == "help"){
        std::cout <<"You wish to use the help command"<< std::endl;
    }
    else {
        std::cout << "Unknown command: " << cmnd << std::endl;
        std::cout << "Use 'help' to see available commands" << std::endl;
        return 1;
    }
    
    return 0;
}