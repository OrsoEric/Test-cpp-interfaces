#include <iostream>

#include "shape_interface.h"

//! @brief takes in input a Shape Derived class, but only know about Shape Interface. Calls Shape Derived methods.
float test_shape( Shape &ic_shape, float if32_size )
{
	ic_shape.set_size( if32_size );
	std::cout << "Test Shape : Size | " << if32_size << " | \n";

	float f32_area;
	ic_shape.get_area( f32_area );
	std::cout << "Test Shape : Size | " << f32_area << " | \n";

	ic_shape.method();

	return f32_area;
}

#include "square.hpp"
#include "circle.hpp"

int main()
{
    std::cout << "Hello world!" << std::endl;

    Square cl_my_square_shape = Square();

	//c_my_square_shape.set_size( 11.3 );
	//std::cout << c_my_square_shape.get_area() << std::endl;


	test_shape( cl_my_square_shape, 1.111 );


	Circle cl_my_circle = Circle();

	test_shape( cl_my_circle, 0.5 );

    return 0;
}



