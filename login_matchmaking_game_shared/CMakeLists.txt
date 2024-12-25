##
## Copyright (c) 2024 Waldemar Schneider (w-schneider1987 at web dot de)
##
## Distributed under the Boost Software License, Version 1.0.
## (See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)


add_library(login_matchmaking_game_shared INTERFACE)


add_library(myproject::login_matchmaking_game_shared ALIAS login_matchmaking_game_shared)



find_package(Boost)


target_link_libraries(login_matchmaking_game_shared INTERFACE
        Boost::headers
        )

target_include_directories(login_matchmaking_game_shared INTERFACE $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
        $<BUILD_INTERFACE:${PROJECT_BINARY_DIR}/include>)

target_compile_features(login_matchmaking_game_shared INTERFACE cxx_std_20)


install(FILES
        gameOptionAsString.hxx
        matchmakingGameSerialization.hxx
        userMatchmakingSerialization.hxx
        DESTINATION include/login_matchmaking_game_shared
        )
install(TARGETS login_matchmaking_game_shared DESTINATION lib)
