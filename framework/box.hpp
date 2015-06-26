#include "shape.hpp"
#include <glm/vec3.hpp>

class Box : public Shape
{
	public:
		Box();
		Box(glm::vec3 const& min, glm::vec3 const% max);
		double area() const override;
		double volume() const override;
		glm::vec3 min() const;
		glm::vec3 max() const;
	private:
		glm::vec3 min;
		glm::vec3 max;
};