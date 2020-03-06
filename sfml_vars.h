#ifndef SFML_VARS_H_INCLUDED
#define SFML_VARS_H_INCLUDED

sf::RenderWindow window(sf::VideoMode(600.f, 600.f), "image pixel sorter");

sf::Sprite sprite;
sf::Texture texture;
sf::Image image;

sf::Color temp_col;

std::string filename;

float image_X_res; float image_Y_res;

                sf::Color colour_1;
                sf::Color colour_2;
                sf::Color hold;

                sf::View camera;

bool red = false;
bool green = false;
bool blue = false;

int total_res;

int cycle_count;

std::string mode;

bool main_sort = true;

void draw()
{
    window.clear();
    window.draw(sprite);
    window.display();
}

#endif // SFML_VARS_H_INCLUDED
