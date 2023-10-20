#include <iostream>
#include <vector>
#include <algorithm>

struct Student {
    std::string name;
    std::string roll_number;
    float cgpa;

    Student(const std::string& n, const std::string& roll, float gpa)
        : name(n), roll_number(roll), cgpa(gpa) {}
};

// Comparator function to compare students based on CGPA in descending order
bool compareCGPA(const Student& a, const Student& b) {
    return a.cgpa > b.cgpa;
}

// Function to sort students based on CGPA
void sort_students(std::vector<Student>& students) {
    std::sort(students.begin(), students.end(), compareCGPA);
}

int main() {
    // Example usage
    std::vector<Student> students;

    // Create some student objects
    students.push_back(Student("Alice", "A101", 3.9));
    students.push_back(Student("Bob", "B202", 3.8));
    students.push_back(Student("Charlie", "C303", 3.95));

    // Sort the list of students by CGPA in descending order
    sort_students(students);

    // Print the sorted list of students
    for (const Student& student : students) {
        std::cout << "Name: " << student.name << ", Roll Number: " << student.roll_number << ", CGPA: " << student.cgpa << std::endl;
    }

    return 0;
}



