#include "CConfig.hpp"

CConfig::CConfig(QObject *parent) : QObject(parent),
    m_width(0),
    m_height(0)
{

}

void CConfig::setWidth(qreal width)
{
    if (m_width == width)
        return;

    m_width = width;
    emit widthChanged(width);
}

void CConfig::setHeight(qreal height)
{
    if (m_height == height)
        return;

    m_height = height;
    emit heightChanged(height);
}

void CConfig::setPath(QString path)
{
    if (m_path == path)
        return;

    m_path = path;
    emit pathChanged(path);
}

