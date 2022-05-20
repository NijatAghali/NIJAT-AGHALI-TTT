  cmake_minimum_required(VERSION 3.0)

  project(Connect-4 LANGUAGES C)

  add_executable(${PROJECT_NAME} "")
  target_sources(${PROJECT_NAME} PRIVATE main.c)

  target_link_libraries(${PROJECT_NAME} PUBLIC compilation)

  add_subdirectory(compilation)