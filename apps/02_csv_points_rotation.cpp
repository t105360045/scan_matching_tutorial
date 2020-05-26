#include <iostream>
#include <Eigen/Dense>
#include<scan_matching/csv reader.hpp>

int main()
{
    Eigen::Matrix2Xd input_points;
    readPointsFromCsv("../data/retangle_points10.csv",input_points);
    Eigen::Matrix2Xd rot_points;
    writePointToCsv("../data/retangle_points10.csv",rot_points)
    return 0;
}