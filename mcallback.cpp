#include "fun.h"
#include <GLFW/glfw3.h>
#include <iostream>

#include <vulkan/vulkan_core.h>

std::vector<const char*> HelloTriangleApplication::getRequiredExtentions(){
  uint32_t glfwExtensionCount = 0;
  const char** glfwExtensions;
  glfwExtensions = glfwGetRequiredInstanceExtensions(&glfwExtensionCount);
      
}
