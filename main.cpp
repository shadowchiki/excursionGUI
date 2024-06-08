#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "controller/excursioncontroller.h"
#include "view/excursionview.h"
#include <memory>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    ExcursionController controller;
    std::shared_ptr<Excursion> excursion = controller.getById("1");

    qmlRegisterType<ExcursionView>("com.klonoadesign.excursionview", 1,0, "ExcursionView");

    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/ExcursionsGUI/Main.qml"));
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
