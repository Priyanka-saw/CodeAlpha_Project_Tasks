#include <iostream>
#include <filesystem>
#include <fstream>
#include <string>
using namespace std;

void showMenu() {
    cout<<"/t/n/n Welcome To The Basic File Manager"<<endl;
    cout << "Basic File Manager\n";
    cout << "1. Navigate Directories\n";
    cout << "2. View File\n";
    cout << "3. Create Directory\n";
    cout << "4. Copy File\n";
    cout << "5. Move File\n";
    cout << "6. Exit\n";
    cout << "Enter your choice: ";
}
void navigateDirectory(const string& path) {
    try {
        for (const auto& entry : filesystem directory_iterator(path)) {
            cout << entry.path().string() <<endl;
        }
    } catch (filesystem::filesystem_error& e) {
        cout << "Failed to access directory: " << e.what() <<endl;
    }
}
void viewFile(const string& path) {
    ifstream file(path);
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
        cout << line <<endl;
        }
        file.close();
    } else {
        cout <<"Unable to open file\n";
    }
}
void createDirectory(const string& path) {
    if (filesystem create_directory(path)) {
        cout << "Directory created\n";
    } else {
        cout << "Failed to create directory\n";
    }
}
void copyFile(const string& from, const string& to) {
    try {
        filesystem copy(from, to);
        cout << "File copied\n";
    } catch (filesystem filesystem_error& e) {
        cout << "Failed to copy file: " << e.what() <<endl;
    }
}
void moveFile(const string& from, const string& to) {
    try {
        filesystem rename(from, to);
        cout << "File moved\n";
    } catch (std filesystem filesystem_error& e) {
        cout << "Failed to move file: " << e.what() << endl;
    }
}
int main() {
    int choice;
    string path, source, destination;
    while (true) {
        showMenu();
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter directory path: ";
                cin >> path;
                navigateDirectory(path);
                break;
            case 2:
                cout << "Enter file path: ";
                cin >> path;
                viewFile(path);
                break;
            case 3:
                cout << "Enter directory path to create: ";
                cin >> path;
                createDirectory(path);
                break;
            case 4:
                cout << "Enter source file path: ";
                cin >> source;
                cout << "Enter destination file path: ";
                cin >> destination;
                copyFile(source, destination);
                break;
            case 5:
                cout << "Enter source file path: ";
                cin >> source;
                cout << "Enter destination file path: ";
                cin >> destination;
                moveFile(source, destination);
                break;
            case 6:
                cout << "Exit...\n";
                return 0;
            default:
                cout << "Invalid Choice, try again\n";
                
        }
    }
}
