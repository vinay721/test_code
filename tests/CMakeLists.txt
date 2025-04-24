# Download and unpack GoogleTest at configure time
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/release-1.12.1.zip
)
# Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Add test executable
add_executable(unit_tests test_main.cpp ../main.cpp)

# Link GoogleTest and pthread (needed for Linux)
target_link_libraries(unit_tests gtest_main)

# Register the test
include(GoogleTest)
gtest_discover_tests(unit_tests)
