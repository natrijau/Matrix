#include    "../include/vector.hpp"
#include	<vector>

vector::vector(float x, float y) : _x(x), _y(y){
	//std::cout << "vector created" << std::endl;
};

vector::~vector(){
	//std::cout << "vector deleted" << std::endl;
};

float vector::getX() const{
	return _x;
};

float vector::getY() const{
	return _y;
};