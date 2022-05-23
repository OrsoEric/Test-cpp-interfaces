#include "shape_interface.h"

class Square : public Shape
{
	public:

		Square( void )
		{
			std::cout << "Constructor | " << __PRETTY_FUNCTION__ << "\n";
			this -> prvt_init();
			return;
		}
		~Square( void )
		{
			std::cout << "Destructor | " << __PRETTY_FUNCTION__ << "\n";
			return;
		}

		bool set_size( float if32_side ) override
		{
			std::cout << "set_size | Square | " << __PRETTY_FUNCTION__ <<"\n";
			bool u1_fail = false;
			if (if32_side < 0.0)
			{
				this -> cf32_side = 0.0;
				u1_fail = true;
			}
			else
			{
				this -> cf32_side = if32_side;
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
			this -> cf32_side = 0.0;
			this -> cf32_area = 0.0;
			return false;
		}

		bool prvt_compute_area( void )
		{
			//Aize to Area
			this -> cf32_area = this -> cf32_side *this -> cf32_side *1.0;
			return false;
		}

		//! @brief side and area of the shape
		float cf32_side;
		float cf32_area;
};
