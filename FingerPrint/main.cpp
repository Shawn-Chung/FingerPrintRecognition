#include "FingerPrint.h"
#include <QApplication>
#include "easylogging++.h"

INITIALIZE_EASYLOGGINGPP

int main(int argc, char *argv[])
{
    START_EASYLOGGINGPP(argc, argv);
    el::Configurations cfg("test_conf.conf");
    el::Loggers::reconfigureAllLoggers(cfg);

    QApplication a(argc, argv);
    FingerPrint w;
    w.show();


    return a.exec();
}
