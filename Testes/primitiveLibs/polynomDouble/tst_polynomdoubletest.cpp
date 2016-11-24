#include <QString>
#include <QtTest>
#define testPolynom
#include "../../../headers/primitiveLibs/polynom.h"

class PolynomDoubleTest : public QObject
{
    Q_OBJECT

public:
    PolynomDoubleTest(){}

private Q_SLOTS:
    void constructorPolynomEscalarDouble ();
    void constructorPolynomMatrixNumeratorDoubleCase1 ();
    void constructorPolynomMatrixNumeratorDoubleCase2 ();
    void constructorPolynomMatrixNumeratorDoubleCase3 ();
    void PolynomCopyConstructorDoubleCase1 ();
    void PolynomCopyConstructorDoubleCase2 ();
    void constructorPolynomMatrixNumeratorDenominatorDoubleCase1 ();
    void constructorPolynomMatrixNumeratorDenominatorDoubleCase2 ();
    void constructorPolynomVoidDouble ();
    void destructorPolynomDoubleCase1 ();
    void destructorPolynomDoubleCase2 ();

    void getVarDoubleCase1 ();
    void getVarDoubleCase2 ();
    void getVarDoubleCase3 ();
    void getVarDoubleCase4 ();
    void changeVarDouble ();
    void getNumSizeDouble ();
    void getDenSizeDouble ();
    void getNumDouble ();
    void getDenDouble ();
    void setNumDoubleCase1 ();
    void setNumDoubleCase2 ();
    void setDenDoubleCase1 ();
    void setDenDoubleCase2 ();
};

void PolynomDoubleTest::constructorPolynomEscalarDouble ()
{
    PolynomHandler::Polynom<double> A(1.5);
    QBENCHMARK {
        PolynomHandler::Polynom<double> A(1.5);
    }
    QVERIFY2(A.getNumSize() == 1 && A.getDenSize() == 1, "Falhou ao testar o tamanho do Polinomio");
    QVERIFY2(A.getNum()(1,1) == 1.5 && A.getDen()(1,1) == 1, "Falhou ao comparar elementos do polinomio com valor Double");
    QVERIFY2(sizeof(A) == sizeof(PolynomHandler::Polynom<double>), "Falhou ao comparar o tipo do elemento do polinômio com valor double");
}

void PolynomDoubleTest::constructorPolynomMatrixNumeratorDoubleCase1 ()
{
    PolynomHandler::Polynom<double> A("1,2,1");
    QBENCHMARK {
        PolynomHandler::Polynom<double> A("1,2,1");
    }
    QVERIFY2(A.getNumSize() == 3 && A.getDenSize() == 1, "Falhou ao testar o tamanho do Polinomio");
    QVERIFY2(A.getNum()(1,1) == 1 && A.getNum()(1,2) == 2 && A.getNum()(1,3) == 1 && A.getDen()(1,1) == 1, "Falhou ao comparar elementos do polinomio com valor Double");
    QVERIFY2(sizeof(A) == sizeof(PolynomHandler::Polynom<double>), "Falhou ao comparar o tipo do elemento do polinômio com valor double");
}

void PolynomDoubleTest::constructorPolynomMatrixNumeratorDoubleCase2 ()
{
    LinAlg::Matrix<double> num = "1,2,1";
    PolynomHandler::Polynom<double> A(num);
    QBENCHMARK {
        PolynomHandler::Polynom<double> A(num);
    }
    QVERIFY2(A.getNumSize() == 3 && A.getDenSize() == 1, "Falhou ao testar o tamanho do Polinomio");
    QVERIFY2(A.getNum()(1,1) == 1 && A.getNum()(1,2) == 2 && A.getNum()(1,3) == 1 && A.getDen()(1,1) == 1, "Falhou ao comparar elementos do polinomio com valor Double");
    QVERIFY2(sizeof(A) == sizeof(PolynomHandler::Polynom<double>), "Falhou ao comparar o tipo do elemento do polinômio com valor double");
}

void PolynomDoubleTest::constructorPolynomMatrixNumeratorDoubleCase3 ()
{
    LinAlg::Matrix<int> num = "1,2,1";
    PolynomHandler::Polynom<double> A(num);
    QBENCHMARK {
        PolynomHandler::Polynom<double> A(num);
    }
    QVERIFY2(A.getNumSize() == 3 && A.getDenSize() == 1, "Falhou ao testar o tamanho do Polinomio");
    QVERIFY2(A.getNum()(1,1) == 1 && A.getNum()(1,2) == 2 && A.getNum()(1,3) == 1 && A.getDen()(1,1) == 1, "Falhou ao comparar elementos do polinomio com valor Double");
    QVERIFY2(sizeof(A) == sizeof(PolynomHandler::Polynom<double>), "Falhou ao comparar o tipo do elemento do polinômio com valor double");
}

void PolynomDoubleTest::PolynomCopyConstructorDoubleCase1 ()
{
    PolynomHandler::Polynom<double> B("1,2,1");
    PolynomHandler::Polynom<double> A(B);
    QBENCHMARK {
        PolynomHandler::Polynom<double> A(B);
    }
    QVERIFY2(A.getNumSize() == 3 && A.getDenSize() == 1, "Falhou ao testar o tamanho do Polinomio");
    QVERIFY2(A.getNum()(1,1) == 1 && A.getNum()(1,2) == 2 && A.getNum()(1,3) == 1 && A.getDen()(1,1) == 1, "Falhou ao comparar elementos do polinomio com valor Double");
    QVERIFY2(sizeof(A) == sizeof(PolynomHandler::Polynom<double>), "Falhou ao comparar o tipo do elemento do polinômio com valor double");
}

void PolynomDoubleTest::PolynomCopyConstructorDoubleCase2 ()
{
    PolynomHandler::Polynom<int> B("1,2,1");
    PolynomHandler::Polynom<double> A(B);
    QBENCHMARK {
        PolynomHandler::Polynom<double> A(B);
    }
    QVERIFY2(A.getNumSize() == 3 && A.getDenSize() == 1, "Falhou ao testar o tamanho do Polinomio");
    QVERIFY2(A.getNum()(1,1) == 1 && A.getNum()(1,2) == 2 && A.getNum()(1,3) == 1 && A.getDen()(1,1) == 1, "Falhou ao comparar elementos do polinomio com valor Double");
    QVERIFY2(sizeof(A) == sizeof(PolynomHandler::Polynom<double>), "Falhou ao comparar o tipo do elemento do polinômio com valor double");
}

void PolynomDoubleTest::constructorPolynomMatrixNumeratorDenominatorDoubleCase1 ()
{
    PolynomHandler::Polynom<double> A("1,1","1,2,1");
    QBENCHMARK {
        PolynomHandler::Polynom<double> A("1,1","1,2,1");
    }
    QVERIFY2(A.getNumSize() == 2 && A.getDenSize() == 3, "Falhou ao testar o tamanho do Polinomio");
    QVERIFY2(A.getNum()(1,1) == 1 && A.getNum()(1,2) == 1 &&
             A.getDen()(1,1) == 1 && A.getDen()(1,2) == 2 && A.getDen()(1,3) == 1,
             "Falhou ao comparar elementos do polinomio com valor Double");
    QVERIFY2(sizeof(A) == sizeof(PolynomHandler::Polynom<double>), "Falhou ao comparar o tipo do elemento do polinômio com valor double");
}

void PolynomDoubleTest::constructorPolynomMatrixNumeratorDenominatorDoubleCase2 ()
{
    LinAlg::Matrix<double> num = "1,1", den = "1,2,1";

    PolynomHandler::Polynom<double> A(num,den);
    QBENCHMARK {
        PolynomHandler::Polynom<double> A(num,den);
    }
    QVERIFY2(A.getNumSize() == 2 && A.getDenSize() == 3, "Falhou ao testar o tamanho do Polinomio");
    QVERIFY2(A.getNum()(1,1) == 1 && A.getNum()(1,2) == 1 &&
             A.getDen()(1,1) == 1 && A.getDen()(1,2) == 2 && A.getDen()(1,3) == 1,
             "Falhou ao comparar elementos do polinomio com valor Double");
    QVERIFY2(sizeof(A) == sizeof(PolynomHandler::Polynom<double>), "Falhou ao comparar o tipo do elemento do polinômio com valor double");
}

void PolynomDoubleTest::constructorPolynomVoidDouble ()
{
    PolynomHandler::Polynom<double> A;
    QBENCHMARK {
        PolynomHandler::Polynom<double> A;
    }
    QVERIFY2(A.getNumSize() == 0 && A.getDenSize() == 0, "Falhou ao testar o tamanho do Polinomio");
    QVERIFY2(sizeof(A) == sizeof(PolynomHandler::Polynom<double>), "Falhou ao comparar o tipo do elemento do polinômio com valor double");
}

void PolynomDoubleTest::destructorPolynomDoubleCase1 ()
{
    PolynomHandler::Polynom<double> A;
    A.~Polynom();
    QBENCHMARK {
        PolynomHandler::Polynom<double> A;
        A.~Polynom();
    }
    QVERIFY2(A.getNumSize() == 0 && A.getDenSize() == 0, "Falhou ao testar o tamanho do Polinomio");
    QVERIFY2(sizeof(A) == sizeof(PolynomHandler::Polynom<double>), "Falhou ao comparar o tipo do elemento do polinômio com valor double");
}

void PolynomDoubleTest::destructorPolynomDoubleCase2 ()
{
    PolynomHandler::Polynom<double> A("1,1","1,2,1");
    A.~Polynom();
    QBENCHMARK {
        PolynomHandler::Polynom<double> A("1,1","1,2,1");
        A.~Polynom();
    }
    QVERIFY2(A.getNumSize() == 0 && A.getDenSize() == 0, "Falhou ao testar o tamanho do Polinomio");
    QVERIFY2(sizeof(A) == sizeof(PolynomHandler::Polynom<double>), "Falhou ao comparar o tipo do elemento do polinômio com valor double");
}

void PolynomDoubleTest::getVarDoubleCase1 ()
{
    PolynomHandler::Polynom<double> A(1);
    char x;
    QBENCHMARK {
        x = A.getVar();
    }
    QVERIFY2(x == 'x', "Falhou ao testar variável do Polinomio");
}

void PolynomDoubleTest::getVarDoubleCase2 ()
{
    LinAlg::Matrix<double> num = "1,1";
    PolynomHandler::Polynom<double> A(num);
    char x;
    QBENCHMARK {
        x = A.getVar();
    }
    QVERIFY2(x == 'x', "Falhou ao testar variável do Polinomio");
}

void PolynomDoubleTest::getVarDoubleCase3 ()
{
    LinAlg::Matrix<double> num = "1,1", den = "1,2,1";
    PolynomHandler::Polynom<double> A(num,den);
    char x;
    QBENCHMARK {
        x = A.getVar();
    }
    QVERIFY2(x == 'x', "Falhou ao testar variável do Polinomio");
}

void PolynomDoubleTest::getVarDoubleCase4 ()
{
    PolynomHandler::Polynom<double> A;
    char x;
    QBENCHMARK {
        x = A.getVar();
    }
    QVERIFY2(x == 'x', "Falhou ao testar variável do Polinomio");
}

void PolynomDoubleTest::changeVarDouble ()
{
    PolynomHandler::Polynom<double> A;
    QBENCHMARK {
       A.changeVar('s');
    }
    QVERIFY2(A.getVar() == 's', "Falhou ao testar variável do Polinomio");
}

void PolynomDoubleTest::getNumSizeDouble ()
{
    LinAlg::Matrix<double> num = "1,1", den = "1,2,1";
    unsigned numSize;
    PolynomHandler::Polynom<double> A(num,den);
    QBENCHMARK {
        numSize = A.getNumSize();
    }
    QVERIFY2(numSize == 2, "Falhou ao testar o tamanho do Polinomio");
}

void PolynomDoubleTest::getDenSizeDouble ()
{
    LinAlg::Matrix<double> num = "1,1", den = "1,2,1";
    unsigned denSize;
    PolynomHandler::Polynom<double> A(num,den);
    QBENCHMARK {
        denSize = A.getDenSize();
    }
    QVERIFY2(denSize == 3, "Falhou ao testar o tamanho do Polinomio");
}

void PolynomDoubleTest::getNumDouble ()
{
    LinAlg::Matrix<double> num = "1,1", den = "1,2,1";
    PolynomHandler::Polynom<double> A(num,den);
    QBENCHMARK {
        num = A.getNum();
    }
    QVERIFY2(num.getNumberOfColumns() == 2, "Falhou ao testar o tamanho do numerador do Polinomio");
    QVERIFY2(num(1,1) == 1 && num(1,2) == 1, "Falhou ao testar os valores do numerador do Polinomio");
}

void PolynomDoubleTest::getDenDouble ()
{
    LinAlg::Matrix<double> num = "1,1", den = "1,2,1";
    PolynomHandler::Polynom<double> A(num,den);
    QBENCHMARK {
        den = A.getDen();
    }
    QVERIFY2(den.getNumberOfColumns() == 3, "Falhou ao testar o tamanho do denominador do Polinomio");
    QVERIFY2(den(1,1) == 1 && den(1,2) == 2 && den(1,3) == 1, "Falhou ao testar os valores do denominador do Polinomio");
}

void PolynomDoubleTest::setNumDoubleCase1 ()
{
    PolynomHandler::Polynom<double> A;
    QBENCHMARK {
        A.setNum("1,1");
    }
    QVERIFY2(A.getNum().getNumberOfColumns() == 2, "Falhou ao testar o tamanho do numerador do Polinomio");
    QVERIFY2(A.getNum()(1,1) == 1 && A.getNum()(1,2) == 1, "Falhou ao testar os valores do numerador do Polinomio");
}

void PolynomDoubleTest::setNumDoubleCase2 ()
{
    PolynomHandler::Polynom<double> A;
    double *num = new double[2]; num[0] = 1; num[1] = 1;
    QBENCHMARK {
        A.setNum(num,2);
    }
    QVERIFY2(A.getNum().getNumberOfColumns() == 2, "Falhou ao testar o tamanho do numerador do Polinomio");
    QVERIFY2(A.getNum()(1,1) == 1 && A.getNum()(1,2) == 1, "Falhou ao testar os valores do numerador do Polinomio");
}

void PolynomDoubleTest::setDenDoubleCase1 ()
{
    PolynomHandler::Polynom<double> A;
    QBENCHMARK {
        A.setDen("1,2,1");
    }
    QVERIFY2(A.getDen().getNumberOfColumns() == 3, "Falhou ao testar o tamanho do denominador do Polinomio");
    QVERIFY2(A.getDen()(1,1) == 1 && A.getDen()(1,2) == 2 && A.getDen()(1,3) == 1,
             "Falhou ao testar os valores do denominador do Polinomio");
}

void PolynomDoubleTest::setDenDoubleCase2 ()
{
    PolynomHandler::Polynom<double> A;
    double *den = new double[2]; den[0] = 1; den[1] = 2; den[2] = 1;
    QBENCHMARK {
        A.setDen(den,3);
    }
    QVERIFY2(A.getDen().getNumberOfColumns() == 3, "Falhou ao testar o tamanho do denominador do Polinomio");
    QVERIFY2(A.getDen()(1,1) == 1 && A.getDen()(1,2) == 2 && A.getDen()(1,3) == 1,
             "Falhou ao testar os valores do denominador do Polinomio");
}

QTEST_APPLESS_MAIN(PolynomDoubleTest)

#include "tst_polynomdoubletest.moc"