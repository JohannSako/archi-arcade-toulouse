/*
** EPITECH PROJECT, 2022
** dev
** File description:
** IGame
*/

#ifndef IGAME_HPP_
#define IGAME_HPP_

#include "IEvent.hpp"
#include "ecs/scenes/IScene.hpp"

class IGame
{
public:
    virtual ~IGame() = default;

    virtual IScene &init() = 0;
    virtual IScene &update() = 0;
    // TODO: Replace raw pointer with reference / smart pointers
    virtual void manageEvents(IEvent *event) = 0;
    virtual void destroy() = 0;

protected:
private:
};

#endif /* !IGAME_HPP_ */
