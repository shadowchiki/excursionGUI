cmake_minimum_required(VERSION 3.5)

# Agrega un ejecutable para las pruebas unitarias
add_executable(daotest  daotests.cpp)

# Vincula la biblioteca dateutils al ejecutable de prueba
target_link_libraries(daotest PRIVATE dao gtest_main)

include(FetchContent)
FetchContent_Declare(
  googletest
  # Specify the commit you depend on and update it regularly.
  URL https://github.com/google/googletest/archive/5376968f6948923e2411081fd9372e71a59d8e77.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Habilita el sistema de prueba
enable_testing()
