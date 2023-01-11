set(TEST_TARGET_NAME _test)
add_executable(${TEST_TARGET_NAME}
        main.cxx
        )

target_link_libraries(${TEST_TARGET_NAME}
        ${TARGET_NAME}
        CONAN_PKG::catch2
        CONAN_PKG::durak
        )
target_include_directories(${TEST_TARGET_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_SOURCE_DIR})

add_test(NAME ${TEST_TARGET_NAME}
        COMMAND ${TEST_TARGET_NAME} -r junit)


target_compile_definitions(${TEST_TARGET_NAME} PRIVATE
        PATH_TO_USER_DEFINED_GAME_OPTION="test/userDefinedGameOption.hxx"
        )