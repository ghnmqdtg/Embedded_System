#ifndef MODEL_HPP
#define MODEL_HPP

class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    void tick();

    void save_bomb_num(int16_t bombnum)
    {
        bomb_num = bombnum;
    }

    int16_t get_bomb_num()
    {
        return bomb_num;
    }


protected:
    ModelListener* modelListener;
    int16_t bomb_num;
};

#endif // MODEL_HPP
