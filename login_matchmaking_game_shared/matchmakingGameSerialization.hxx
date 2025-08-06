#ifndef F7525A03_A98E_4EEF_964B_E02274116B7D
#define F7525A03_A98E_4EEF_964B_E02274116B7D

#include "login_matchmaking_game_shared/gameOptionAsString.hxx"
#include <cstddef>
#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <variant>

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
BOOST_FUSION_DEFINE_STRUCT ((matchmaking_game), CustomMessage, (std::string, message))
#endif /* F7525A03_A98E_4EEF_964B_E02274116B7D */
