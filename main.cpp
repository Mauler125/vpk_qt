#include "mainwindow.h"

#include <QApplication>
#include <QStyleFactory>

void InitTheme(QApplication* pApp)
{
    // Modify theme to dark.
    QPalette darkPalette;
    darkPalette.setColor(QPalette::Window,QColor(32,34,38));
    darkPalette.setColor(QPalette::WindowText,Qt::white);
    darkPalette.setColor(QPalette::Disabled,QPalette::WindowText,QColor(127,127,127));
    darkPalette.setColor(QPalette::Base,QColor(42,42,42));
    darkPalette.setColor(QPalette::AlternateBase,QColor(66,66,66));
    darkPalette.setColor(QPalette::ToolTipBase,Qt::white);
    darkPalette.setColor(QPalette::ToolTipText,QColor(200,200,200));
    darkPalette.setColor(QPalette::Text,QColor(200,200,200));
    darkPalette.setColor(QPalette::Disabled,QPalette::Text,QColor(127,127,127));
    darkPalette.setColor(QPalette::Dark,QColor(35,35,35));
    darkPalette.setColor(QPalette::Shadow,QColor(20,20,20));
    darkPalette.setColor(QPalette::Button,QColor(36,38,40));
    darkPalette.setColor(QPalette::ButtonText,QColor(200,200,200));
    darkPalette.setColor(QPalette::Disabled,QPalette::ButtonText,QColor(127,127,127));
    darkPalette.setColor(QPalette::BrightText,Qt::red);
    darkPalette.setColor(QPalette::Link,QColor(42,130,218));
    darkPalette.setColor(QPalette::Highlight,QColor(42,130,218));
    darkPalette.setColor(QPalette::Disabled,QPalette::Highlight,QColor(80,80,80));
    darkPalette.setColor(QPalette::HighlightedText,Qt::white);
    darkPalette.setColor(QPalette::Disabled,QPalette::HighlightedText,QColor(127,127,127));

    pApp->setPalette(darkPalette);
    pApp->setStyle(QStyleFactory::create("Fusion"));
    pApp->setStyleSheet("");


}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    InitTheme(&a);

    MainWindow w;

    w.setWindowFlags(Qt::FramelessWindowHint);

    w.show();
    return a.exec();
}
