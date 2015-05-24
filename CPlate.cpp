#include "CPlate.h"

CPlate::CPlate(QObject *parent) : QObject(parent)
{

}

void CPlate::setWidth(qreal width)
{
    if (m_width == width)
        return;

    m_width = width;
    emit widthChanged(width);
}

void CPlate::setHeight(qreal height)
{
    if (m_height == height)
        return;

    m_height = height;
    emit heightChanged(height);
}



