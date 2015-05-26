#ifndef CGLVIEWEVENFILTER_HPP
#define CGLVIEWEVENFILTER_HPP

#include <QObject>

class CGLViewEvenFilter : public QObject
{
    Q_OBJECT
    Q_CLASSINFO("version", "1.0.0")

public:
    explicit CGLViewEvenFilter(QObject *parent = 0);

signals:

public slots:
};

#endif // CGLVIEWEVENFILTER_HPP
