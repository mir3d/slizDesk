#ifndef GLVIEW_H
#define GLVIEW_H

#include <QOpenGLWidget>

class GLView : public QOpenGLWidget
{
    Q_OBJECT

public:
    explicit GLView(QWidget *parent = 0);
    //~GLView();

protected:
    void initializeGL() override;

};

#endif // GLVIEW_H
