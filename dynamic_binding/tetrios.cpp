#include <iostream>
using namespace std;

struct Cell
{
    int x, y;
};

class Tetromino
{
public:
    virtual void move_right(int cols_in_grid) = 0;
    virtual void move_left() = 0;
    virtual void move_down() = 0;
    virtual void rotate(int cols_in_grid) = 0;
    virtual Cell get_current_pivot_position() const = 0;
    virtual int get_current_orientation() const = 0;
    virtual ~Tetromino() {}
};

class T : public Tetromino
{
    Cell pivot;
    int orientation;

public:
    T(const Cell &pivot)
    {
        if (pivot.x <= 0 || pivot.x >= 9 || pivot.y <= 0 || pivot.y >= 19)
        {
            cout << "Invalid PIVOT!" << endl;
            exit(-1);
        }
        this->pivot = pivot;
        this->orientation = 1;
    }
    ~T() {}

    virtual void move_right(int cols_in_grid)
    {
        if (pivot.x == 8)
        {
            return;
        }

        pivot.x += 1;
        return;
    }

    virtual void move_left()
    {
        if (pivot.x == 1)
        {
            return;
        }

        pivot.x -= 1;
        return;
    }
    virtual void move_down()
    {
        if (pivot.y == 1)
        {
            return;
        }

        pivot.y -= 1;
    }

    virtual void rotate(int cols_in_grid)
    {
        if (orientation == 4)
        {
            orientation = 1;
            return;
        }

        orientation++;
        return;
    }
    virtual Cell get_current_pivot_position() const
    {
        return pivot;
    }
    virtual int get_current_orientation() const
    {
        return orientation;
    }
};

class L : public Tetromino
{
    Cell pivot;
    int orientation;

public:
    L(const Cell &pivot)
    {
        this->pivot = pivot;
        this->orientation = 1;
    }
    ~L() {}
    virtual void move_right(int cols_in_grid)
    {
        if ((orientation != 3 && pivot.x == 8) || pivot.x == 9)
        {
            return;
        }

        pivot.x += 1;
        return;
    }
    virtual void move_left()
    {
        if ((orientation != 1 && pivot.x == 1) || pivot.x == 0)
        {
            return;
        }

        pivot.x -= 1;
        return;
    }
    virtual void move_down()
    {
        if ((orientation != 4 && pivot.y == 1) || pivot.y == 0)
        {
            return;
        }

        pivot.y -= 1;
        return;
    }
    virtual void rotate(int cols_in_grid)
    {
        if ((orientation == 3 && pivot.x == 9) || (orientation == 1 && pivot.x == 0) || (orientation == 4 && pivot.y == 0) || (orientation == 2 && pivot.y == 19))
        {
            return;
        }

        else if (orientation == 4)
        {
            orientation = 1;
            return;
        }

        else
        {
            orientation++;
            return;
        }
    }
    virtual Cell get_current_pivot_position() const
    {
        return pivot;
    }
    virtual int get_current_orientation() const
    {
        return orientation;
    }
};

class S : public Tetromino
{
    Cell pivot;
    int orientation;

public:
    S(const Cell &pivot)
    {
        this->pivot = pivot;
        this->orientation = 1;
    }
    ~S() {}
    virtual void move_right(int cols_in_grid)
    {
        if (((orientation != 1 && orientation != 4) && pivot.x == 8) || pivot.x == 9)
        {
            return;
        }

        pivot.x += 1;
        return;
    }
    virtual void move_left()
    {
        if (((orientation != 2 && orientation != 3) && pivot.x == 1) || pivot.x == 0)
        {
            return;
        }

        pivot.x -= 1;
        return;
    }
    virtual void move_down()
    {
        if (((orientation != 2 && orientation != 1) && pivot.y == 1) || pivot.y == 0)
        {
            return;
        }
        pivot.y -= 1;
        return;
    }
    virtual void rotate(int cols_in_grid)
    {
        if ((orientation == 3 && pivot.x == 1) || (orientation == 1 && pivot.x == 9) || (orientation == 4 && pivot.y == 19) || (orientation == 2 && pivot.y == 0))
        {
            return;
        }

        else if (orientation == 4)
        {
            orientation = 1;
            return;
        }

        else
        {
            orientation++;
            return;
        }
    }
    virtual Cell get_current_pivot_position() const
    {
        return pivot;
    }
    virtual int get_current_orientation() const
    {
        return orientation;
    }
};

class C : public Tetromino
{
    Cell pivot;
    int orientation;

public:
    C(const Cell &pivot)
    {
        this->pivot = pivot;
        this->orientation = 1;
    }
    ~C() {}
    virtual void move_right(int cols_in_grid)
    {
        if ((orientation != 3 && pivot.x == 8) || pivot.x == 9)
        {
            return;
        }

        pivot.x += 1;
    }
    virtual void move_left()
    {
        if ((orientation != 1 && pivot.x == 1) || pivot.x == 0)
        {
            return;
        }

        pivot.x -= 1;
    }
    virtual void move_down()
    {
        if ((orientation != 4 && pivot.y == 1) || pivot.y == 0)
        {
            return;
        }

        pivot.y -= 1;
    }
    virtual void rotate(int cols_in_grid)
    {
        if ((orientation == 3 && pivot.x == 9) || (orientation == 1 && pivot.x == 0) || (orientation == 4 && pivot.y == 0) || (orientation == 2 && pivot.y == 19))
        {
            return;
        }

        else if (orientation == 4)
        {
            orientation = 1;
            return;
        }

        else
        {
            orientation++;
            return;
        }
    }
    virtual Cell get_current_pivot_position() const
    {
        return pivot;
    }
    virtual int get_current_orientation() const
    {
        return orientation;
    }
};

int main()
{
    const int COLS_IN_GRID = 10;

    int x, y;
    std::cin >> x >> y;
    Cell pivot = {x, y};

    Tetromino *tetrominoes[4];
    tetrominoes[0] = new T(pivot);
    tetrominoes[1] = new L(pivot);
    tetrominoes[2] = new S(pivot);
    tetrominoes[3] = new C(pivot);

    char c;
    std::cin >> c;
    do
    {
        switch (c)
        {
        case 'L':
            for (int i = 0; i < 4; i++)
                tetrominoes[i]->move_left();
            break;
        case 'R':
            for (int i = 0; i < 4; i++)
                tetrominoes[i]->move_right(COLS_IN_GRID);
            break;
        case 'D':
            for (int i = 0; i < 4; i++)
                tetrominoes[i]->move_down();
            break;
        case 'O':
            for (int i = 0; i < 4; i++)
                tetrominoes[i]->rotate(COLS_IN_GRID);
            break;
        }
        std::cin >> c;
    } while (!std::cin.eof());

    for (int i = 0; i < 4; i++)
    {
        pivot = tetrominoes[i]->get_current_pivot_position();
        std::cout << pivot.x << " " << pivot.y << std::endl;
        std::cout << tetrominoes[i]->get_current_orientation() << std::endl;
        delete tetrominoes[i];
    }
    return 0;
}