#pragma once

#include <memory>

// Template class should be implemented on the header
template<typename T>
class Vector3
{
public:
	Vector3();
	Vector3(T x, T y, T z);
	Vector3(const Vector3<T>& vector);
	~Vector3();

	// Client has to delete returned pointer
	Vector3<double> Normalize() const;
	double distance_to(const Vector3<T>& vector) const;
	double dot_product(const Vector3<T>& vector) const;
	// Client has to delete returned pointer
	Vector3<T> cross_product(const Vector3<T>& vector) const;
	double angle_between(const Vector3<T>& vector) const;

	Vector3 operator + (const Vector3<T>& vector) const;
	
	T getX() const { return x_; }
	T getY() const { return y_; }
	T getZ() const { return z_; }
	double getModule() const { return module_; }
	T square(const T a) const { return a * a; }

private:
	T x_;
	T y_;
	T z_;
	double module_;
};

