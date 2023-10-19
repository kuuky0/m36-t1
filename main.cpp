#include "class.h"

int main(int argc,char **argv)
{
  QApplication app(argc,argv);
  QWidget *window = new QWidget();

  auto *slider = new QSlider(Qt::Horizontal);
  auto *circle = new CircleWidget(nullptr);

  auto *layout = new QVBoxLayout(window);
  layout->addWidget(circle);
  layout->addWidget(slider);
  window->setFixedSize(200,250);
  QObject::connect(slider,&QSlider::valueChanged,circle,&CircleWidget::setValue);

  window->show();
  app.exec();
}