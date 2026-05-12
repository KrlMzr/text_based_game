#include "entity.h"

namespace game {

    Entity::Entity(int health, int damage) : health{health}, damage{damage} {}

    int Entity::get_health() const { return health; }

    void Entity::set_health(int health) { this->health = health; }

    int Entity::get_damage() const { return damage; }

    void Entity::set_damage(int damage) { this->damage = damage; }

    void Entity::take_damage(int damage) { health -= damage; }

    bool Entity::is_alive() const { return health > 0; }
}
