#include "player.h"

namespace game {

    int Player::get_health() const { return health; }

    int Player::get_damage() const { return damage; }

    void Player::take_damage(int damage) { health -= damage; }

    bool Player::is_alive() const { return health > 0; }
}