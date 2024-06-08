#include "excursionview.h"
#include "../controller/excursioncontroller.h"
#include <memory.h>

ExcursionView::ExcursionView(QObject* parent): QObject(parent) {}

Excursion ExcursionView::excursionInfo()
{
    return excursion;
}

void ExcursionView::setExcursionInfo(Excursion& newExcursion)
{
    ExcursionController controller;
    std::shared_ptr<Excursion> excursionFinded = controller.getById("1");
    excursion = *excursionFinded;

    emit updateExcursion();
}
