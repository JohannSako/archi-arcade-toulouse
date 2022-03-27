/*
** EPITECH PROJECT, 2022
** dev
** File description:
** Sprite2D
*/

#ifndef SPRITE2D_HPP_
    #define SPRITE2D_HPP_

    #include "ecs/components/IComponent.hpp"
    #include <string>

    class Sprite2D : public IComponent {
        public:
            Sprite2D(const std::string& file = "") : _file(file) {}

            std::string _file;
    };

#endif /* !SPRITE2D_HPP_ */
