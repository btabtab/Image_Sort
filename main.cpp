#include <SFML/Graphics.hpp>
#include <iostream>

#include "sfml_vars.h"

#include "image_load.h"
#include "image_sort.h"

#include "R_sort.h"
#include "G_sort.h"
#include "B_sort.h"

#include "new_sort.h"
#include "newsort/new_R.h"
#include "newsort/new_G.h"
#include "newsort/new_B.h"

#include "bidi_sort/fold.h"

#include "bidi_sort/X_sort_B.h"
#include "bidi_sort/X_sort_G.h"
#include "bidi_sort/X_sort_R.h"

#include "bidi_sort/Y_sort_G.h"
#include "bidi_sort/Y_sort_B.h"
#include "bidi_sort/Y_sort_R.h"

#include "line_by_line.h"
#include "row_by_row.h"

int main()
{
/*
loadImage();
total_res = image_X_res*image_Y_res;

for(int T = 0; T != 10000; T++)
{
sortImage();
//std::cout << T << std::endl;
}
std::cout << "1/4 done" << std::endl;

for(int T = 0; T != 10000; T++)
{
sortImage();
//std::cout << T << std::endl;
}
std::cout << "2/4 done" << std::endl;

for(int T = 0; T != 10000; T++)
{
sortImage();
//std::cout << T << std::endl;
}
std::cout << "3/4 done" << std::endl;

for(int T = 0; T != 10000; T++)
{
sortImage();
}
std::cout << "4/4 done" << std::endl;

std::cout << "finished";
*/
loadImage();
//std::cin >> mode;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        texture.loadFromImage(image);
        sprite.setTexture(texture);

        /*
            sortImage_red();
            sortImage_green();
            sortImage_blue();
        */
/*
        if(cycle_count != 10)
        {
            sortXR(); //draw();
            sortXG(); //draw();
            sortXB(); //draw();

            cycle_count++;
            std::cout << cycle_count << std::endl;
        }
        else
        {
            sortYR(); //draw();
            sortYG(); //draw();
            sortYB(); //draw();

            cycle_count = 0;
            std::cout << cycle_count << std::endl;
        }*/

        if(main_sort == true)
        {
            line_by_line();

        }
        else
        {
            row_by_row();
        }


        draw();
        //sortImage();


        //newSort();

        //newSortR();
        //newSortG();
        //newSortB();

        image.saveToFile(filename + "_out.bmp");

        window.clear();
        window.draw(sprite);
        window.display();
    }

    return 0;
}
