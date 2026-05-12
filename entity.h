#pragma once
#include <string>

namespace game {
    class Entity {
        private:
            int health;
            int damage;

        protected:
            Entity(int health, int damage);

        public:
            virtual std::string get_entity_type() const = 0;
            virtual ~Entity() = default;
            int get_health() const;
            void set_health(int health);
            int get_damage() const;
            void set_damage(int damage);
            void take_damage(int damage);
            bool is_alive() const;
    };
}


