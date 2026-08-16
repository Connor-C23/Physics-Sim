#pragma once
#include "core.h"

using namespace PhysicsSim;

class Particle
{
public:
	/**
	* Holds the linear position of the particle in
	* world space.
	*/
	Vector3 position;
	/**
	* Holds the linear velocity of the particle in
	* world space.
	*/
	Vector3 velocity;
	/**
	* Holds the acceleration of the particle. This value
	* can be used to set acceleration due to gravity (its primary
	* use) or any other constant acceleration.
	*/
	Vector3 acceleration;
};