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

    void save_bomb_num(int bombnum)
    {
        bomb_num = bombnum;
    }

    int get_bomb_num()
    {
        return bomb_num;
    }


protected:
    ModelListener* modelListener;
    int bomb_num;
};

#endif // MODEL_HPP
