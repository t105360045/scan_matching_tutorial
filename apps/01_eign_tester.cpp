#include <iostream>
#include <Eigen/Dense>

int main()
{
	Eigen::Vector2d a(5.0,6.0);
	Eigen::Vector2d b(2.0,8.0);
	std::cout<<(a+b).transpose()<<std::endl;
	return 0;
}
