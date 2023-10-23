#pragma once

#include <QApplication>
#include <QPushButton>
#include <QGridLayout>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QSlider>
#include <QWidget>
#include <QSpinBox>
#include <QPixmap>
#include <QPainter>
#include <QTimer>
#include <QPaintEvent>
#include <QDir>

class CircleWidget : public QWidget {
Q_OBJECT
public:
    CircleWidget() = default;
    CircleWidget(QWidget *parent);
    void paintEvent(QPaintEvent *e) override;
    QSize minimumSizeHint() const override;
public slots:
    void setYellow();
    void setRed();
    void setGreen();
    void setValue(int value);
private:
    QPixmap mCurrentCircle;
    QPixmap mYellowCircle;
    QPixmap mGreenCircle;
    QPixmap mRedCircle;
};
