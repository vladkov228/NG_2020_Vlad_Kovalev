#include <GL/freeglut.h>
#include <random>
#include <iostream>
#include <ctime>

using namespace std;

#define COLUMNS 40//ширина высота игрового поля
#define ROWS 40

#define UP 1
#define DOWN 2
#define RIGHT 3
#define LEFT 4

#define SPEED 5


short Dir = LEFT;

int score=false;
int SnakeLenght = 5;
int ourX;// колизия змеи
int ourY;
int PositionX[COLUMNS]={25,25,25,25,25};//змея
int PositionY[ROWS]={25,24,23,22,21};
int foodX;
int foodY;

bool gameOver=false;
bool food=true;

void DrawGrid();

void DrawSnake();

void DrawFood();

void timer_callback (int);

void reshape_callback(int width, int heigh)// отрисовка мира
{
    glViewport(0, 0, width, heigh);//создание поля
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, COLUMNS, 0, ROWS, -1, 1);
    glMatrixMode(GL_MODELVIEW);
}

void display_callback(){// вызов всех обьектов функций
    DrawGrid();
    DrawFood();
    DrawSnake();
    glutSwapBuffers();
    if(gameOver)
    {
        cout<< "Game by V&V" << endl <<"your score is- "<<score<<endl;
        exit(0);
    }
}


void DrawGrid(){// отрисовка сетки и рамки
    int x, y;
    glClearColor(1, 1, 0.6, 255);//сетка и цвет
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3ub(244, 244, 111);//цвет линий
    glLineWidth(1);//линия
    glBegin(GL_LINES);
    for(x=0;x<COLUMNS;x++)
    {
        for(y=0;y<ROWS;y++)
        {
            glVertex2f(x, y);//координаты линий
            glVertex2f(x, y + 1);
            glVertex2f(x, y);
            glVertex2f(x + 1, y);
        }
    }
    glEnd();


    for(x=0;x<COLUMNS;x++)
    {
        for(y=0;y<ROWS;y++)
        {
            if (x == 0 || x == ROWS-1 || y == 0 || y == ROWS - 1)
            {
                glColor3ub(250, 0, 115);// отрисовка рамки
                glRectd(x, y, x + 1, y + 1);
            }
        }
    }
}
void random(int &x,int &y)// функции рандома
{
    int maxX=COLUMNS-2;
    int maxY=ROWS-2;
    int min=1;
    srand(time(NULL));
    x = min + rand()%(maxX);
    y = min + rand()%(maxY);

}
void DrawFood()// спавн еды
{
    if(score!=5)
    {
        if(food)
        {
            random(foodX,foodY);
            food=false;
        }
        glColor3ub(49, 247, 0);// об яблоко
        glRectf(foodX,foodY,foodX+1,foodY+1);

    }
    if(score==5)
    {
        if(food)
        {
            random(foodX,foodY);
            food=false;
        }
        glColor3ub(255, 0,0);//красное яблоко
        glRectf(foodX,foodY,foodX+1,foodY+1);

    }
}

void DrawSnake()//змея
{
    for(int index = SnakeLenght-1;index>0;index--)
    {
        PositionX[index] = PositionX[index-1];
        PositionY[index] = PositionY[index-1];
    }

    if(Dir == UP)
    {
        PositionY[0]++;
    }
    if(Dir == DOWN)
    {
        PositionY[0]--;
    }
    if(Dir == RIGHT)
    {
        PositionX[0]++;
    }
    if(Dir == LEFT)
    {
        PositionX[0]--;
    }
    for(int index=0;index<SnakeLenght;index++)
    {
        if(index==0)
        {
            glColor3ub (0,165,250);//голова
        }
        else
            glColor3ub(0,255,255);//тело
            glRectd(PositionX[index],PositionY[index],PositionX[index]+1,PositionY[index]+1);
    }
    if(PositionX[0]==0 || PositionX[0]==COLUMNS-1 || PositionY[0]==0 || PositionY[0] == ROWS-1)
    {
        gameOver=true;
    }
    for(int index=0;index<=SnakeLenght;index++)
    {
        if(index==0)
        {
            ourX=PositionX[0];
            ourY=PositionY[0];
        }
        if(index>0)
        {
            if(ourX==PositionX[index] && ourY==PositionY[index])
            {
                gameOver=true;
            }

        }

    }
    if(PositionX[0]==foodX && PositionY[0]==foodY)
    {
        SnakeLenght++;
        score++;
        food=true;
        if(score==6)
        {
            int randDeathorWin=rand()%2+1;
            if(randDeathorWin==1)
            {
                score+=3;
            }
            else
            {
                gameOver=true;
            }
        }
    }
}
void timer_callback (int)//Количество кадров в секунду
{
    glutPostRedisplay();
    glutTimerFunc(400/SPEED,timer_callback,0);
}

void keyboard_callback(int key,int,int)//управление клавишами
{
    switch(key)
    {
    case GLUT_KEY_UP:
        if(Dir!=DOWN)
            Dir=UP;
        break;
    case GLUT_KEY_DOWN:
        if(Dir!=UP)
            Dir=DOWN;
        break;
    case GLUT_KEY_RIGHT:
        if(Dir!=LEFT)
            Dir=RIGHT;
        break;
    case GLUT_KEY_LEFT:
        if(Dir!=RIGHT)
            Dir=LEFT;
        break;
    }
}

int main(int argc, char **argv)// вызов всех функций
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
    glutInitWindowPosition(100, 100);// координаты появления окна
    glutInitWindowSize(600, 600);// ширина и высота игрового окна
    glutCreateWindow("GameSnake");
    glutDisplayFunc(display_callback);
    glutReshapeFunc(reshape_callback);
    glutTimerFunc(400/SPEED,timer_callback,0);
    glutSpecialFunc(keyboard_callback);
    glutMainLoop();
    return 0;
}
