#pragma once
#include <SFML/Graphics.hpp>
#include <memory>
#include <map>
#include <assert.h>
const std::string filename = "C:/Users/ADMIN/Pictures/Screenshots/Screenshot (95).png";
namespace Textures{
    enum ID {Landscape, Airplane, Missile, DumbPic};
}

class TextureHolder{
    public:
        void                load(Textures::ID id, const std::string& filename);
        sf::Texture&        get(Textures::ID id) const;

    private: 
        std::map<Textures::ID, std::unique_ptr<sf::Texture>> mTextureMap;
};