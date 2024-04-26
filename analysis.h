#ifndef GUARD_analysis_h
#define GUARD_analysis_h

#include <iostream>
#include <vector>
#include <string>
#include "Student_info.h"


double optimistic_median(const Student_info&);
double optimistic_median_analysis(const std::vector<Student_info>&);
double grade_aux(const Student_info&);
double median_analysis(const std::vector<Student_info>&);
double average_grade(const Student_info&);
double average_analysis(const std::vector<Student_info>&);
void write_analysis(ostream& out, const string& name,
    double analysis(const vector<Student_info>&),
    const vector<Student_info>& did,
    const vector<Student_info>& didnt);
bool did_all_hw(const Student_info&);
double analysis(const std::vector<Student_info>&,
    double(const Student_info&));
#endif