#include "class.h"

CircleWidget::CircleWidget(QWidget *parent) {
    setParent(parent);
    setToolTip("Стоп");
    setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
    mGreenCircle = QPixmap(QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/GreenCircle.png");
    mRedCircle = QPixmap(QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/red.png");
    mYellowCircle = QPixmap( QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/yellow.png");
    mCurrentCircle = mGreenCircle;
    setGeometry(mCurrentCircle.rect());
}

QSize CircleWidget::minimumSizeHint() const {
    return QSize(400,200);
}

void CircleWidget::setYellow() {
    mCurrentCircle = mYellowCircle;
    update();
}

void CircleWidget::setRed() {
    mCurrentCircle = mRedCircle;
    update();
}

void CircleWidget::setGreen() {
    mCurrentCircle = mGreenCircle;
    update();
}

void CircleWidget::paintEvent(QPaintEvent *e) {
    QPainter p(this);
    p.drawPixmap(e->rect(),mCurrentCircle);
}

void CircleWidget::setValue(int value)
{
    if (value < 33)
        setGreen();
    else if (value >= 33 && value <= 66)
        setYellow();
    else
        setRed();

    update();
}
