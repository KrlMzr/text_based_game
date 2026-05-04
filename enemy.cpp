#include "enemy.h"

namespace game {
    int Enemy::get_damage() const { return damage; }

    int Enemy::get_health() const { return health; }

    std::string Enemy::get_name() const { return name; }

    std::string Enemy::get_description() const { return description; }

    void Enemy::take_damage(int damage) { this->health -= damage; }

    bool Enemy::is_alive() const { return health > 0; }
}