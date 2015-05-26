#ifndef CPLATE_HPP
#define CPLATE_HPP

#include <QObject>

class CPlate : public QObject
{
    Q_OBJECT
    Q_CLASSINFO("version", "1.0.0")

    Q_PROPERTY(qreal width READ width WRITE setWidth NOTIFY widthChanged)
    Q_PROPERTY(qreal height READ height WRITE setHeight NOTIFY heightChanged)

public:
    explicit CPlate(QObject *parent = 0);

    inline qreal width() const { return m_width; }
    inline qreal height() const { return m_height; }

public slots:
    void setWidth(qreal width);
    void setHeight(qreal height);

signals:
    void widthChanged(qreal width);
    void heightChanged(qreal height);

private:
    qreal m_width;
    qreal m_height;
};

#endif // CPLATE_HPP
