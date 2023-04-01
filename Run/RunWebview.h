#ifndef RUNWEBVIEW_H
#define RUNWEBVIEW_H

#include <QWebEngineView>
#include <QtCore5Compat>

class RunWebViewManager;

class RunWebView : public QWebEngineView
{
    Q_OBJECT
public:
    explicit RunWebView(RunWebViewManager *webviewManager,QWidget *parent);
    ~RunWebView();
private:

    RunWebViewManager *mWebviewManager;
    int  m_injectCheckTimes = 0;
    void injectJavascriptCheck();

protected:
    QWebEngineView *createWindow(QWebEnginePage::WebWindowType type);
signals:


public slots:

};
#endif // RUNWEBVIEW_H