#include <iostream>

#ifndef _SHAPE_INTERFACE_H
	#define _SHAPE_INTERFACE_H
class Shape
{
	public:
		Shape( void )
		{
			std::cout << "Constructor | " << __PRETTY_FUNCTION__ << "\n";
			return;
		}
		~Shape( void )
		{
			std::cout << "Destructor | " << __PRETTY_FUNCTION__ << "\n";
			return;
		}
		//! @brief a generic shape has a size that can be set
		virtual bool set_size( float if32_side )
		{
			std::cout << __PRETTY_FUNCTION__ << "\n";
			return true;
		}
		//! @brief a generic shape has an area that can be read
		virtual bool get_area( float &orf32_area )
		{
			std::cout << __PRETTY_FUNCTION__ << "\n";
			return true;
		}

        bool method( void )
        {
			std::cout << __PRETTY_FUNCTION__ << "\n";
			return true;
        }

	protected:

	private:

};

#else
	#warning "Multiple inclusion _SHAPE_INTERFACE_H"
#endif // _SHAPE_INTERFACE_H
