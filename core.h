#pragma once
#include "precision.h"

namespace PhysicsSim {
	class Vector3
	{
	public: 
		real x;

		real y;

		real z;

	private: 
		/** Padding to ensure 4-word alignment. */
		real pad;

	public:
		// default constructor: zero vector
		Vector3() : x(0), y(0), z(0) {}

		// vector with given components
		Vector3(const real x, const real y, const real z)
			: x(x), y(y), z(z) {}

		//flips components
		void invert()
		{
			x = -x;
			y = -y;
			z = -z;
		}

		real magnitude() const
		{
			return real_sqrt(x * x + y * y + z * z);
		}

		/** Gets the squared magnitude of this vector. */
		real squareMagnitude() const
		{
			return x * x + y * y + z * z;
		}
		/** Turns a non-zero vector into a vector of unit length. */
		void normalize()
		{
			real l = magnitude();
			if (l > 0)
			{
				(*this) *= ((real)1) / l;
			}
		}

		/** Multiplies this vector by the given scalar(value). */
		void operator*=(const real value)
		{
			x *= value;
			y *= value;
			z *= value;
		}
		/** Returns a copy of this vector scaled to the given value. */
		Vector3 operator*(const real value) const
		{
			return Vector3(x * value, y * value, z * value);
		}
	};
}