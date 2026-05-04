#include "level.h"

namespace game {

    std::string Level::get_description() const { return description; }

    Enemy& Level::get_level_enemy() { return level_enemy; }
}
