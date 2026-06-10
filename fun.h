#pragma once

#include <GLFW/glfw3.h>
#include <vector>
#include <vulkan/vulkan.h>
#include <cstring>
#include <stdexcept>
constexpr uint32_t WIDTH = 800;
constexpr uint32_t HEIGHT = 600;

extern const std::vector<const char*> validationLayers;

class HelloTriangleApplication {
public:
  void run();

private:
  void initWindow();
  void initVulkan();
  void mainLoop();
  void cleanup();
  void createInstance();
  bool checkValidationLayerSupport();
  GLFWwindow *window;
  VkInstance instance;
  std::vector<const char*> getRequiredExtentions();
};
#ifdef NDEBUG
    const bool enableValidationLayers = false;
#else
    const bool enableValidationLayers = true;
#endif

