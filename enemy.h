#pragma once
#include <string>
#include "entity.h"

namespace game {
    class Enemy : public Entity {
        private:
            std::string name {"Placeholder Enemy"};
            std::string description {"Placeholder enemy description"};

        public:
            Enemy();
            std::string get_entity_type() const override;
            std::string get_name() const;
            std::string get_description() const;
    };
}
