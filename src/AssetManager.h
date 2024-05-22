#pragma once

#include <assert.h>
#include <map>

#include <SFML/Graphics.hpp>
#include "Texture.h"

class AssetManager
{
    public:
        AssetManager();

        static sf::Texture& getTexture(const std::string& filename);

    private:
        std::map<std::string, sf::Texture> textures;

        static AssetManager* Instance;
};