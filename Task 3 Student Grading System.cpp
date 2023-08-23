#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct Student {
    std::string name;
    double grade;
};

int main() {
    int numStudents;
    
    std::cout << "Student Grading System" << std::endl;
    std::cout << "Enter the number of students: ";
    std::cin >> numStudents;

    std::vector<Student> students;
    double totalGrades = 0.0;

    for (int i = 0; i < numStudents; ++i) {
        Student student;
        std::cout << "Enter name for student " << i + 1 << ": ";
        std::cin >> student.name;
        
        std::cout << "Enter grade for " << student.name << ": ";
        std::cin >> student.grade;
        totalGrades += student.grade;

        students.push_back(student);
    }

    double averageGrade = totalGrades / numStudents;

    auto minMaxGrade = std::minmax_element(students.begin(), students.end(),
        [](const Student& a, const Student& b) {
            return a.grade < b.grade;
        });

    std::cout << "\nAverage Grade: " << averageGrade << std::endl;
    std::cout << "Highest Grade: " << minMaxGrade.second->grade << " (Student: " << minMaxGrade.second->name << ")" << std::endl;
    std::cout << "Lowest Grade: " << minMaxGrade.first->grade << " (Student: " << minMaxGrade.first->name << ")" << std::endl;

    return 0;
}
