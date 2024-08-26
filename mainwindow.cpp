#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QLabel>
#include <cstdlib>
#include <stack>
#include <cctype>
#include <stdexcept>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

QString temp, equation;
double result = 0;

void initialisation(){
    result = 0;
    temp = "";
    equation = "";
}

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

double applyOperation(double a, double b, char op) {
    switch (op) {
    case '+': return a + b;
    case '-': return a - b;
    case '*': return a * b;
    case '/':
        if (b == 0) throw std::runtime_error("Division by zero");
        return a / b;
    default: return 0;
    }
}

double evaluateExpression(const QString &expression) {
    std::stack<double> values;
    std::stack<char> ops;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i].isSpace()) continue;

        if (expression[i].isDigit() || expression[i] == ',') {
            QString valStr;
            while (i < expression.length() && (expression[i].isDigit() || expression[i] == ',')) {
                valStr += expression[i];
                i++;
            }
            values.push(valStr.replace(',', '.').toDouble());
            i--;
        }
        else if (expression[i] == '(') {
            ops.push(expression[i].toLatin1());
        }
        else if (expression[i] == ')') {
            while (!ops.empty() && ops.top() != '(') {
                double val2 = values.top(); values.pop();
                double val1 = values.top(); values.pop();
                char op = ops.top(); ops.pop();
                values.push(applyOperation(val1, val2, op));
            }
            if (!ops.empty()) ops.pop();
        }
        else if (expression[i] == '-') {
            if (i == 0 || (i > 0 && !expression[i-1].isDigit() && expression[i-1] != ')')) {
                QString valStr = "-";
                i++;
                while (i < expression.length() && (expression[i].isDigit() || expression[i] == ',')) {
                    valStr += expression[i];
                    i++;
                }
                values.push(valStr.replace(',', '.').toDouble());
                i--;
            } else {
                while (!ops.empty() && precedence(ops.top()) >= precedence(expression[i].toLatin1())) {
                    double val2 = values.top(); values.pop();
                    double val1 = values.top(); values.pop();
                    char op = ops.top(); ops.pop();
                    values.push(applyOperation(val1, val2, op));
                }
                ops.push(expression[i].toLatin1());
            }
        }
        else {
            while (!ops.empty() && precedence(ops.top()) >= precedence(expression[i].toLatin1())) {
                double val2 = values.top(); values.pop();
                double val1 = values.top(); values.pop();
                char op = ops.top(); ops.pop();
                values.push(applyOperation(val1, val2, op));
            }
            ops.push(expression[i].toLatin1());
        }
    }

    while (!ops.empty()) {
        double val2 = values.top(); values.pop();
        double val1 = values.top(); values.pop();
        char op = ops.top(); ops.pop();
        values.push(applyOperation(val1, val2, op));
    }

    return values.top();
}

bool est_une_signe(QChar ch) {
    return ch == '+' || ch == '-' || ch == '/' || ch == '*' || ch == '(' || ch == ')';
}


void MainWindow::on_b0_clicked()
{
    temp += "0";
    ui->aff->setText(temp);
    equation += "0";
    ui->equa->setText(equation);
}

void MainWindow::on_b1_clicked()
{
    temp += "1";
    ui->aff->setText(temp);
    equation += "1";
    ui->equa->setText(equation);
}

void MainWindow::on_b2_clicked()
{
    temp += "2";
    ui->aff->setText(temp);
    equation += "2";
    ui->equa->setText(equation);
}

void MainWindow::on_b3_clicked()
{
    temp += "3";
    ui->aff->setText(temp);
    equation += "3";
    ui->equa->setText(equation);
}

void MainWindow::on_b4_clicked()
{
    temp += "4";
    ui->aff->setText(temp);
    equation += "4";
    ui->equa->setText(equation);
}

void MainWindow::on_b5_clicked()
{
    temp += "5";
    ui->aff->setText(temp);
    equation += "5";
    ui->equa->setText(equation);
}

void MainWindow::on_b6_clicked()
{
    temp += "6";
    ui->aff->setText(temp);
    equation += "6";
    ui->equa->setText(equation);
}

void MainWindow::on_b7_clicked()
{
    temp += "7";
    ui->aff->setText(temp);
    equation += "7";
    ui->equa->setText(equation);
}

void MainWindow::on_b8_clicked()
{
    temp += "8";
    ui->aff->setText(temp);
    equation += "8";
    ui->equa->setText(equation);
}

void MainWindow::on_b9_clicked()
{
    temp += "9";
    ui->aff->setText(temp);
    equation += "9";
    ui->equa->setText(equation);
}

void MainWindow::on_b_negative_clicked()
{
    temp = ui->aff->text();
    if (temp.startsWith('-')) {
        ui->aff->setText(temp.mid(1));
        equation.chop(1);
    } else {
        ui->aff->setText('-' + temp);
        equation += "-";
    }
    ui->equa->setText(equation);
}

//######################################################### les executions mathematique ################################################################

void MainWindow::on_b_plus_clicked()
{
    if(!temp.isEmpty()){
        ui->aff->setText("");
        temp = "";
        equation += "+";
    }
    ui->equa->setText(equation);
}

void MainWindow::on_b_moin_clicked()
{
    if(!temp.isEmpty()){
        ui->aff->setText("");
        temp = "";
        equation += "-";
    }
    ui->equa->setText(equation);
}


void MainWindow::on_b_fois_clicked()
{
    if(!temp.isEmpty()){
        ui->aff->setText("");
        temp = "";
        equation += "*";
    }
    ui->equa->setText(equation);
}


void MainWindow::on_b_sur_clicked()
{
    if(!temp.isEmpty()){
        ui->aff->setText("");
        temp = "";
        equation += "/";
    }
    ui->equa->setText(equation);
}



void MainWindow::on_b_vir_clicked()
{
    if(!temp.isEmpty()){
        temp += ",";
        equation += ",";
    }
    ui->equa->setText(equation);
    ui->aff->setText(temp);
}



//##################################################################### resultat ###################################################################

void MainWindow::on_result_clicked() {
    QString ch = ui->equa->text();
    if(!est_une_signe(ch[ch.size() - 1])){
        try {
            double result = evaluateExpression(equation);
            ui->equa->setText(equation + " = " + QString::number(result));
            ui->aff->setText(QString::number(result));
        } catch (const std::runtime_error &e) {
            ui->equa->setText("Error");
            ui->aff->setText("Error");
        }
    }else{
        ui->aff->setText("Error");
        ui->equa->setText("Error");
    }
    // Reset variables
    initialisation();
}


void MainWindow::on_b_ac_clicked()
{
    initialisation();
    ui->aff->setText(temp);
    ui->equa->setText(equation);
}
