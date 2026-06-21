#include <iostream>
using namespace std;

class point
{
    int x,y;

public:
    friend class Rectangle;
    point(int a,int b):x(a),y(b){}
};

class Rectangle 
{
    point tl,tr,bl,br;

public:
    Rectangle(point p1,point p2,point p3,point p4):tl(p1),tr(p2),bl(p3),br(p4){}
    
    void move(char m,int u)
    {
        if (m == 'U')
        {
            tl.y+=u;
            tr.y+=u;
            br.y+=u;
            bl.y+=u;
        }
        
        else if (m == 'D')
        {
            tl.y-=u;
            tr.y-=u;
            br.y-=u;
            bl.y-=u;    
        }
        
        else if (m == 'L')
        {
            tl.x-=u;
            tr.x-=u;
            br.x-=u;
            bl.x-=u;    
        }

        else if (m == 'R')
        {
            tl.x+=u;
            tr.x+=u;
            br.x+=u;
            bl.x+=u;    
        }
        return ;
    }

    void disp()
    {
        cout << tl.x<<" "<<tl.y<<endl<<tr.x<<" "<<tr.y<<endl<<bl.x<<" "<<bl.y<<endl<<br.x<<" "<<br.y<<endl;
    }
};


int main()
{
    int x1,y1,x2,y2,x3,y3,x4,y4;
    cin >> x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    Rectangle r1(point(x1,y1),point(x2,y2),point(x3,y3),point(x4,y4));
    int n,u;
    cin >> n;
    char c;
    for (int i = 0; i < n; i++)
    {
        cin >> c >> u;
        r1.move(c,u);
    }
    
    r1.disp();
    return 0;
}