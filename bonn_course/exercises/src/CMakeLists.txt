# Fetch GTest from online source
include(FetchContent)
FetchContent_Declare(
  googletest
  # Specify the commit you depend on and update it regularly.
  URL https://github.com/google/googletest/archive/e2239ee6043f73722e7aa812a459f54a28552929.zip
)

add_library(hello hello.cpp)
add_library(blah blah.cpp)

add_executable(main main.cpp)
target_link_libraries(main hello blah gtest)
