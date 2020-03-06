#ifndef ROW_BY_ROW_H_INCLUDED
#define ROW_BY_ROW_H_INCLUDED

int curr_X;

void row_by_row()
{
    curr_X++;

    if(curr_X  == image.getSize().x/2)
    {
        std::cout << curr_X << std::endl;

    }

    /*
    if(curr_X >= image.getSize().x)
    {
        curr_X = 0;
        std::cout << "microseconds: " << time_taken.getElapsedTime().asMicroseconds() << std::endl;
        std::cout << "milliseconds: " << time_taken.getElapsedTime().asMilliseconds() << std::endl;
        std::cout << "seconds: " << time_taken.getElapsedTime().asSeconds() << std::endl;
        time_taken.restart();

        main_sort = false;

    }
    */

    for(int Y = 0; Y != image.getSize().y; Y++)
    {
        for(int oth_Y = 0; oth_Y != image.getSize().y; oth_Y++)
        {
            if(image.getPixel(curr_X, Y).r < image.getPixel(curr_X, oth_Y).r)
                {
                    colour_1 = image.getPixel(curr_X, Y);
                    hold = colour_1;
                    colour_2 = image.getPixel(curr_X, oth_Y);

                    colour_1 = colour_2;
                    colour_2 = hold;

                    image.setPixel(curr_X, Y, colour_1);
                    image.setPixel(curr_X, oth_Y, colour_2);

                }

                if(image.getPixel(curr_X, Y).g < image.getPixel(curr_X, oth_Y).g)
                {
                    colour_1 = image.getPixel(curr_X, Y);
                    hold = colour_1;
                    colour_2 = image.getPixel(curr_X, oth_Y);

                    colour_1 = colour_2;
                    colour_2 = hold;

                    image.setPixel(curr_X, Y, colour_1);
                    image.setPixel(curr_X, oth_Y, colour_2);
                }

                if(image.getPixel(curr_X, Y).b < image.getPixel(curr_X, oth_Y).b)
                {
                    colour_1 = image.getPixel(curr_X, Y);
                    hold = colour_1;
                    colour_2 = image.getPixel(curr_X, oth_Y);

                    colour_1 = colour_2;
                    colour_2 = hold;

                    image.setPixel(curr_X, Y, colour_1);
                    image.setPixel(curr_X, oth_Y, colour_2);
                }

        }
    }
}

#endif // ROW_BY_ROW_H_INCLUDED
