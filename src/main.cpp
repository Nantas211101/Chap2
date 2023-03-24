#include <iostream>
#include "../Function/Textures.hpp"

int main(){
    TextureHolder textures;
    textures.load(Textures::DumbPic, filename);
    
    sf::Sprite playerPlane;
    playerPlane.setTexture(textures.get(Textures::DumbPic));

}