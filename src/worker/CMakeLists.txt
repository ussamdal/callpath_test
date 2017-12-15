
add_library(call_lib SHARED
    employee.cc
    )

install(TARGETS call_lib
    LIBRARY DESTINATION bin)
