subdirs(worker)
include_directories(${SRC_DIR}/src/worker)
add_executable(call_test
    main.cc
    )

target_link_libraries(call_test call_lib)
install(TARGETS call_test
    RUNTIME DESTINATION bin)
