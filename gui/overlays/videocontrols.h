#ifndef VIDEOCONTROLS_H
#define VIDEOCONTROLS_H

#include "gui/customwidgets/floatingwidget.h"
#include <QPushButton>

namespace Ui {
class VideoControls;
}

class VideoControls : public FloatingWidget
{
    Q_OBJECT

public:
    explicit VideoControls(OverlayContainerWidget *parent = 0);
    ~VideoControls();

public slots:
    void setDurationSeconds(int);
    void setPositionSeconds(int);

signals:
    void pause();
    void seek(int pos);
    void seekRight();
    void seekLeft();
    void nextFrame();
    void prevFrame();

private:
    Ui::VideoControls *ui;
    int lastVideoPosition;
};

#endif // VIDEOCONTROLS_H
