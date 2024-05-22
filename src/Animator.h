
#pragma once

#include <string>
#include <vector>
#include <list>

#include <SFML/Graphics.hpp>

#include "AssetManager.h"

class Animator
{
    public:
        struct Animation
        {
            std::string              name;
            std::vector<sf::IntRect> frames;
            sf::Time                 duration;
            bool                     isLooping;

            Animation(const std::string& name, const sf::Time& duration, const bool& looping)
                : name(name), duration(duration), isLooping(looping)
            { }

            void addFrames(const sf::Vector2i& startFrom,
                        const sf::Vector2i& frameSize,
                        const unsigned int& frames)
            {
                sf::Vector2i current = startFrom;
                for (unsigned int i = 0; i < frames; ++i)
                {
                    this->frames.push_back(sf::IntRect(current.x, current.y, frameSize.x, frameSize.y));
                    current.x += frameSize.x;
                }
            }
        };

        Animator(sf::Sprite& sprite);

        Animator::Animation& createAnimation(const std::string& name, const sf::Time& duration,
                                            const bool& isLoop = false);

        void update(const sf::Time& deltaTime);

        bool switchAnimation(const std::string& name);
        void pushAnimation(const std::string& name);

        std::string getCurrentAnimationName() const;

    private:
        Animator::Animation* findAnimation(const std::string& name);

        void switchAnimation(Animator::Animation* animation);
        void popAnimation();

        sf::Sprite& sprite;
        sf::Time currentTime;
        std::list<Animator::Animation> animations;
        Animator::Animation* currentAnimation;
        Animator::Animation* previousAnimation;
};
