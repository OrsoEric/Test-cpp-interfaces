#include "shape_interface.h"

class Circle : public Shape
{
	public:

		Circle( void )
		{
			std::cout << "Constructor | " << __PRETTY_FUNCTION__ << "\n";
			this -> prvt_init();
			return;
		}
		~Circle( void )
		{
			std::cout << "Destructor | " << __PRETTY_FUNCTION__ << "\n";
			return;
		}

		bool set_size( float if32_radious ) override
		{
			std::cout << "set_size | Circle | " << __PRETTY_FUNCTION__ <<"\n";
			bool u1_fail = false;
			if (if32_radious < 0.0)
			{
				this -> cf32_radious = 0.0;
				u1_fail = true;
			}
			else
			{
				this -> cf32_radious = if32_radious;
				u1_fail = this -> prvt_compute_area();
			}
			return u1_fail;
		}

		bool get_area( float &orf32_area ) override
		{
			std::cout << "get_area | " << __PRETTY_FUNCTION__ << "\n";
			orf32_area = this -> cf32_area;
			return false;
		}

		bool method( void )
        {
			std::cout << __PRETTY_FUNCTION__ << "\n";
			return true;
        }

	private:
		bool prvt_init( void )
		{
			this -> cf32_radious = 0.0;
			this -> cf32_area = 0.0;
			return false;
		}

		bool prvt_compute_area( void )
		{
			//Aize to Area
			this -> cf32_area = this -> cf32_radious *this -> cf32_radious *3.14158;
			return false;
		}

		//! @brief side and area of the shape
		float cf32_radious;
		float cf32_area;
};

