#ifndef GLVIEW_HPP
#define GLVIEW_HPP

#include <QOpenGLWidget>
#include <QOpenGLFunctions_1_4>

//class CGLViewEvenFilter;

class CGLView : public QOpenGLWidget
{
    Q_OBJECT
    Q_CLASSINFO("version", "1.0.0")

public:
    explicit CGLView(QWidget *parent = 0);
    //~GLView();

protected:
    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;

    bool eventFilter(QObject *obj, QEvent *evt) override;

private:
    //CGLViewEvenFilter m_eventFilter;
    QOpenGLFunctions_1_4 *f;
};

#endif // GLVIEW_HPP
