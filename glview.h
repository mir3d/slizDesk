#ifndef GLVIEW_H
#define GLVIEW_H

#include <QWindow>
#include <QOpenGLFunctions>

class GLView : public QWindow, protected QOpenGLFunctions
{
    Q_OBJECT

public:
    explicit GLView(QWindow *parent = 0);
    //~GLView();
};

#endif // GLVIEW_H
