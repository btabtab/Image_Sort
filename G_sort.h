#ifndef G_SORT_H_INCLUDED
#define G_SORT_H_INCLUDED

void sortImage_green()
{

                /*
                f = num_arr[i];
                num_arr[i] = num_arr[i+1];
                num_arr[i+1] = f;
                */

    for(int Y = 0; Y != image_Y_res; Y++)
    {
        for(int X = 0; X != image_X_res; X++)
        {

            if(image.getPixel(X, Y).g < image.getPixel(X + 1, Y).g)
            {
                colour_1 = image.getPixel(X, Y);
                hold = colour_1;
                colour_2 = image.getPixel(X+1, Y);

                colour_1 = colour_2;
                colour_2 = hold;

                image.setPixel(X, Y, colour_1);
                image.setPixel(X+1, Y, colour_2);
            }
        }
    }
    std::cout << "green done" << std::endl;

}

#endif // G_SORT_H_INCLUDED
