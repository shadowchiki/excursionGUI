#ifndef EXCURSIONVIEW_H
#define EXCURSIONVIEW_H

#include <QObject>
#include <QQuickItem>
#include "../controller/dao/excursion.h"

class ExcursionView : public QObject
{
    Q_OBJECT
    Q_PROPERTY(Excursion excursionInfo READ excursionInfo WRITE setExcursionInfo NOTIFY updateExcursion)
    Q_PROPERTY(QString ide READ ide WRITE setIde NOTIFY updateIde)
public:
    explicit ExcursionView(QObject* parent = nullptr);
    Excursion excursionInfo();
    void setExcursionInfo(Excursion& newExcursion);
    QString ide();
    void setIde();
private:
    Excursion excursion;
    QString id;

signals:
    void updateExcursion();
    void updateIde();

public slots:

};

#endif // EXCURSIONVIEW_H
