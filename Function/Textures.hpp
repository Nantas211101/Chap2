#pragma once
#include <SFML/Graphics.hpp>
#include <map>

namespace Textures{
    enum ID {Landscape, Airplane, Missile};
}

class TextureHolder{
    private: 
        std::map<Textures::ID, std::unique_ptr<sf::Texture>> mTextureMap;

}