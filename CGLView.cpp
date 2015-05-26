#include "CGLView.hpp"
#include "CGLViewEvenFilter.hpp"

#include <QEvent>
#include <QObject>
#include <QSurfaceFormat>
#include <QOpenGLContext>
//#include <QOpenGLFunctions_3_2_Core>
#include <QOpenGLFunctions_1_4>

#include <QDebug>

CGLView::CGLView(QWidget *parent) : QOpenGLWidget(parent),
    f(nullptr)
{
    //m_eventFilter = new CGLView
    //installEventFilter(m_eventFilter);

    QSurfaceFormat format;
    format.setDepthBufferSize(24);
    format.setStencilBufferSize(8);
    format.setVersion(3, 2);
    format.setProfile(QSurfaceFormat::CoreProfile);
    setFormat(format);

    f = QOpenGLContext::currentContext()->versionFunctions<QOpenGLFunctions_1_4>();
    if(f == nullptr) {
        qDebug() << "ЖОПА!";
        return;
    }

}

void CGLView::initializeGL()
{


//    f->glEnable(GL_DEPTH_TEST);
//    f->glClearColor(0.5f, 0.5f, 0.5f, 0.5f);
}

void CGLView::resizeGL(int w, int h)
{
//    QOpenGLFunctions_1_4 *f =
//            QOpenGLContext::currentContext()->versionFunctions<QOpenGLFunctions_1_4>();
//    f->glViewport(0, 0, w, h);
//    f->glMatrixMode(GL_PROJECTION);
//    f->glLoadIdentity();

//    //gluPerspective(45.0f, float(w) / float(h), 1.0f, 100.0f);
//    //GLdouble fovy, GLdouble aspect, GLdouble zNear, GLdouble zFar

//    // args
//    GLdouble fovy = 45.0f;
//    GLdouble aspect = float(w) / float(h);
//    GLdouble zNear = 1.0f;
//    GLdouble zFar = 1.0f;

//    GLdouble xmin, xmax, ymin, ymax;

//    ymax = zNear * tan(fovy * M_PI / 360.0);
//    ymin = -ymax;
//    xmin = ymin * aspect;
//    xmax = ymax * aspect;

//    f->glFrustum(xmin, xmax, ymin, ymax, zNear, zFar);

//    f->glMatrixMode(GL_MODELVIEW);
//    f->glLoadIdentity();
}

void CGLView::paintGL()
{
//    // тут необходимо добавить данные в vbo перед открисовкой0
//    //QOpenGLFunctions_3_2_Core *f =
//    QOpenGLFunctions_1_4 *f =
//            QOpenGLContext::currentContext()->versionFunctions<QOpenGLFunctions_1_4>();
//    //f->glBindBuffer();
//    f->glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//    f->glLoadIdentity();

//    f->glRotatef(30.0f, 0.0f, 0.0f, 1.0f);
//    f->glBegin(GL_TRIANGLES);
//    f->glColor3f(1.0f, 0.0f, 0.0f);
//    f->glVertex3f(-0.5f, -0.5f, -2.0f);
//    f->glColor3f(1.0f, 1.0f, 0.0f);
//    f->glVertex3f( 0.5f, -0.5f, -2.0f);
//    f->glColor3f(0.0f, 0.0f, 1.0f);
//    f->glVertex3f( 0.0f, 0.5f, -2.0f);
//    f->glEnd();
}


#include <QDebug>
bool CGLView::eventFilter(QObject *obj, QEvent *evt)
{
    qDebug() << "m: " << evt->type();
}
//if (( e->type() == QEvent::MouseMove)) {
//    cout << "filter out\n";
//    return TRUE;
//}
//return QWidget::eventFilter(obj,e);
