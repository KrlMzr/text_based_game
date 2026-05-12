#pragma once
#include "entity.h"

namespace game {
    class Player : public Entity {

        public:
            Player();
            std::string get_entity_type() const override;
    };
}
