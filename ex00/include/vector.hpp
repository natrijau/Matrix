#ifndef	__VECTOR_HPP__
#define	__VECTOR_HPP__

#include	<iostream>

#include <vector>


class	vector{

	private:
		const float* _n;

	public:
		vector(float x, float y);
		~vector();

		float getX() const;
		float getY() const;
};

#endif