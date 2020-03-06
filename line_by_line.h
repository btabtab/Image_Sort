#ifndef LINE_BY_LINE_H_INCLUDED
#define LINE_BY_LINE_H_INCLUDED

int curr_Y;

sf::Clock time_taken;

void line_by_line()
{
    curr_Y++;

    if(curr_Y  == image.getSize().y/2)
    {
        std::cout << curr_Y << std::endl;

    }


    if(curr_Y >= image.getSize().y)
    {
        curr_Y = 0;

        std::cout << "microseconds: " << time_taken.getElapsedTime().asMicroseconds() << std::endl;
        std::cout << "milliseconds: " << time_taken.getElapsedTime().asMilliseconds() << std::endl;
        std::cout << "seconds: " << time_taken.getElapsedTime().asSeconds() << std::endl;
        time_taken.restart();
        /*
        main_sort = false;
        */

    }


    for(int X = 0; X != image.getSize().x; X++)
    {
        for(int oth_X = X; oth_X != image.getSize().x; oth_X++)
        {
            if(image.getPixel(X, curr_Y).r < image.getPixel(oth_X, curr_Y).r)
                {
                    colour_1 = image.getPixel(X, curr_Y);
                    hold = colour_1;
                    colour_2 = image.getPixel(oth_X, curr_Y);

                    colour_1 = colour_2;
                    colour_2 = hold;

                    image.setPixel(X, curr_Y, colour_1);
                    image.setPixel(oth_X, curr_Y, colour_2);
                }
                if(image.getPixel(X, curr_Y).g < image.getPixel(oth_X, curr_Y).g)
                {
                    colour_1 = image.getPixel(X, curr_Y);
                    hold = colour_1;
                    colour_2 = image.getPixel(oth_X, curr_Y);

                    colour_1 = colour_2;
                    colour_2 = hold;

                    image.setPixel(X, curr_Y, colour_1);
                    image.setPixel(oth_X, curr_Y, colour_2);
                }
                if(image.getPixel(X, curr_Y).b < image.getPixel(oth_X, curr_Y).b)
                {
                    colour_1 = image.getPixel(X, curr_Y);
                    hold = colour_1;
                    colour_2 = image.getPixel(oth_X, curr_Y);

                    colour_1 = colour_2;
                    colour_2 = hold;

                    image.setPixel(X, curr_Y, colour_1);
                    image.setPixel(oth_X, curr_Y, colour_2);
                }
        }
    }
}



#endif // LINE_BY_LINE_H_INCLUDED
