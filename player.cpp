#include "player.h"

namespace game {
    Player::Player() : Entity(100, 5) {}

    std::string Player::get_entity_type() const { return "Player entity"; }
}