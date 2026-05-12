#include "enemy.h"

namespace game {

    Enemy::Enemy() : Entity(10, 20) {}

    std::string Enemy::get_entity_type() const { return "Enemy entity"; }

    std::string Enemy::get_name() const { return name; }

    std::string Enemy::get_description() const { return description; }
}