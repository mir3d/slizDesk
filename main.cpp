#include "MainWindow.hpp"

#include <QApplication>
#include <QStyleFactory>

#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // QApplication::setStyle( QStyleFactory::create("Fusion"));
    // qDebug() << QStyleFactory::keys(); // list of styles name

//    QWidget::createWindowContainer(GLView);

    MainWindow w;
    w.show();

    return a.exec();
}



//void RB_SurfaceAxis( void ) {
//	GL_Bind( tr.whiteImage );
//	qglLineWidth( 3 );
//	qglBegin( GL_LINES );
//	qglColor3f( 1,0,0 );
//	qglVertex3f( 0,0,0 );
//	qglVertex3f( 16,0,0 );
//	qglColor3f( 0,1,0 );
//	qglVertex3f( 0,0,0 );
//	qglVertex3f( 0,16,0 );
//	qglColor3f( 0,0,1 );
//	qglVertex3f( 0,0,0 );
//	qglVertex3f( 0,0,16 );
//	qglEnd();
//	qglLineWidth( 1 );
//}
