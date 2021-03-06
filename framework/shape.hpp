#ifndef BUW_SHAPE_HPP
#define BUW_SHAPE_HPP
#define GLM_FORCE_RADIANS
#include "color.hpp"
#include <string>
#include <ray.hpp>
#include <glm/glm.hpp>
#include <iostream>
#include <glm/ext.hpp>
#include <stdexcept>
class Shape
{
	public: 
		Shape();
		Shape(std::string const& name, Color const& color);
		virtual double area() const = 0;
		virtual double volume() const = 0;
		virtual bool intersect(Ray ray, float& distance) const = 0;
		virtual std::ostream& print(std::ostream& os) const;
		Color color() const;
		std::string name() const;
		virtual ~Shape();

	protected:
		std::string _name;
		Color _color;
};

std::ostream& operator<<(std::ostream& os , Shape const& s);

#endif