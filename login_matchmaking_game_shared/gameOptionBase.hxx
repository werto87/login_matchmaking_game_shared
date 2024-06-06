#pragma once
#include <boost/algorithm/string.hpp>
#include <boost/fusion/adapted/struct/adapt_struct.hpp>
#include <boost/fusion/adapted/struct/define_struct.hpp>
#include <boost/fusion/algorithm/query/count.hpp>
#include <boost/fusion/functional.hpp>
#include <boost/fusion/include/adapt_struct.hpp>
#include <boost/fusion/include/algorithm.hpp>
#include <boost/fusion/include/at.hpp>
#include <boost/fusion/include/count.hpp>
#include <boost/fusion/include/define_struct.hpp>
#include <boost/fusion/sequence/intrinsic/at.hpp>
#include <boost/fusion/sequence/intrinsic_fwd.hpp>
#include <boost/hana/assert.hpp>
#include <boost/hana/at_key.hpp>
#include <boost/hana/equal.hpp>
#include <boost/hana/find.hpp>
#include <boost/hana/for_each.hpp>
#include <boost/hana/integral_constant.hpp>
#include <boost/hana/map.hpp>
#include <boost/hana/optional.hpp>
#include <boost/hana/pair.hpp>
#include <boost/hana/tuple.hpp>
#include <boost/hana/type.hpp>
#include <boost/json.hpp>
#include <boost/mpl/for_each.hpp>
#include <boost/mpl/if.hpp>
#include <boost/mpl/range_c.hpp>
#include <expected>
#include <memory>

namespace user_matchmaking_game
{
class GameOptionBase
{
public:
  virtual ~GameOptionBase () noexcept = default;
};

struct GameOptionWrapper
{
  std::unique_ptr<user_matchmaking_game::GameOptionBase> gameOption{};
};

std::expected<void, std::string> errorInGameOption (user_matchmaking_game::GameOptionBase const &gameOption);

}

BOOST_FUSION_ADAPT_STRUCT (user_matchmaking_game::GameOptionBase, )
BOOST_FUSION_ADAPT_STRUCT (user_matchmaking_game::GameOptionWrapper, gameOption)
