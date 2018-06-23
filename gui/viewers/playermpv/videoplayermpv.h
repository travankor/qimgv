#ifndef VIDEOPLAYERMPV_H
#define VIDEOPLAYERMPV_H

#include "gui/viewers/videoplayer.h"
#include "settings.h"

class MpvWidget;

class VideoPlayerMpv : public VideoPlayer {
    Q_OBJECT
public:
    explicit VideoPlayerMpv(QWidget *parent = 0);
    bool openMedia(Clip *clip);
    void setVideoUnscaled(bool mode);

public slots:
    void seek(int pos);
    void seekRelative(int pos);
    void pauseResume();
    void frameStep();
    void frameStepBack();
    void stop();
    void setPaused(bool mode);
    void setMuted(bool);
    //void show();
    //void hide();

protected:
    void paintEvent(QPaintEvent *event);

    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
private slots:
    void readSettings();

private:
    MpvWidget *m_mpv;

};

#endif // VIDEOPLAYERMPV_H
