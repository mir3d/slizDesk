#ifndef CCONFIG_H
#define CCONFIG_H

#include <QObject>

class CConfig : public QObject
{
    Q_OBJECT
    Q_CLASSINFO("version", "1.0.0")

//    Q_PROPERTY(QString path READ path WRITE setPath NOTIFY pathChanged)
//    Q_PROPERTY(qreal width READ width WRITE setWidth NOTIFY widthChanged)
//    Q_PROPERTY(qreal height READ height WRITE setHeight NOTIFY heightChanged)

public:
    explicit CConfig(QObject *parent = 0);

    inline qreal width() const { return m_width; }
    inline qreal height() const { return m_height; }
    inline QString path() const { return m_path; }

public slots:
    void setWidth(qreal width);
    void setHeight(qreal height);
    void setPath(QString path);

signals:
    void widthChanged(qreal width);
    void heightChanged(qreal height);
    void pathChanged(QString path);

private:
    QString m_path; // path to file config

    qreal m_width; // width of Plate
    qreal m_height; // height of plate
};

#endif // CCONFIG_H
