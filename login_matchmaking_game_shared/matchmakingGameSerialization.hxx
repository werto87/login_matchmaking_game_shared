#pragma once

#include "login_matchmaking_game_shared/gameOptionAsString.hxx"
#include <cstddef>
#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <variant>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4003)
#endif
BOOST_FUSION_DEFINE_STRUCT ((matchmaking_game), UnhandledMessageError, (std::string, msg) (std::string, error))
BOOST_FUSION_DEFINE_STRUCT ((matchmaking_game), LeaveGameServer, (std::string, accountName))
BOOST_FUSION_DEFINE_STRUCT ((matchmaking_game), LeaveGameSuccess, )
BOOST_FUSION_DEFINE_STRUCT ((matchmaking_game), LeaveGameError, )
BOOST_FUSION_DEFINE_STRUCT ((matchmaking_game), GameOver, (std::string, gameName) (bool, ratedGame) (std::vector<std::string>, winners) (std::vector<std::string>, losers) (std::vector<std::string>, draws))
BOOST_FUSION_DEFINE_STRUCT ((matchmaking_game), StartGame, (std::vector<std::string>, players) (user_matchmaking_game::GameOptionAsString, gameOptionAsString) (bool, ratedGame))
BOOST_FUSION_DEFINE_STRUCT ((matchmaking_game), StartGameError, (std::string, error))
BOOST_FUSION_DEFINE_STRUCT ((matchmaking_game), StartGameSuccess, (std::string, gameName))
BOOST_FUSION_DEFINE_STRUCT ((matchmaking_game), GameOverSuccess, )
BOOST_FUSION_DEFINE_STRUCT ((matchmaking_game), GameOverError, (std::string, error))
BOOST_FUSION_DEFINE_STRUCT ((matchmaking_game), UserLeftGame, (std::string, accountName))
BOOST_FUSION_DEFINE_STRUCT ((matchmaking_game), UserLeftGameSuccess, (std::string, accountName))
BOOST_FUSION_DEFINE_STRUCT ((matchmaking_game), UserLeftGameError, (std::string, accountName) (std::string, error))
BOOST_FUSION_DEFINE_STRUCT ((matchmaking_game), ConnectToGame, (std::string, accountName) (std::string, gameName))
BOOST_FUSION_DEFINE_STRUCT ((matchmaking_game), ConnectToGameError, (std::string, error))
BOOST_FUSION_DEFINE_STRUCT ((matchmaking_game), ConnectToGameSuccess, )
BOOST_FUSION_DEFINE_STRUCT ((matchmaking_game), CustomMessage, (std::string, messageType) (std::string, message))

#ifdef _MSC_VER
#pragma warning(pop)
#endif

