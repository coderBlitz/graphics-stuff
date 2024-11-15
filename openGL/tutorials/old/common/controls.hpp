#ifndef CONTROLS_HPP
#define CONTROLS_HPP


#include<GLFW/glfw3.h>
#include<glm/gtc/matrix_transform.hpp>

void computeMatricesFromInputs(GLFWwindow *);
glm::mat4 getProjectionMatrix();
glm::mat4 getViewMatrix();

#endif
