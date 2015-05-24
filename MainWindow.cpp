#include "MainWindow.h"
#include "ui_MainWindow.h"

#include "CConfig.h"
#include "CPlate.h"

#include <QDebug>
#include <QObject>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //widgetLayout->addWidget(container);

    m_conf = new CConfig(this); // with default properties
    m_plate = new CPlate(this); // with default properties

    connect(m_conf, &m_conf->widthChanged, m_plate, &m_plate->setWidth);
    connect(m_conf, &m_conf->heightChanged, m_plate, &m_plate->setHeight);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionAdd_triggered() // on 'add model' option
{
    //m_plate.currentLayer().add(newModel);
}


