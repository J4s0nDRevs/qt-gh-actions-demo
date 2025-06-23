#include <QtTest>
#include <QObject>

class DummyTest : public QObject {
    Q_OBJECT
private slots:
    void basicMath() {
        QVERIFY(1 + 1 == 2);
    }
};

QTEST_MAIN(DummyTest)
#include "test_main.moc"