#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <stdio.h>
#include <QFile>
#include <QMessageBox>
#include <QStandardItemModel>
#include <QPushButton>
#include <QLabel>
#include <QRect>
#include <QScreen>
#include <QDesktopServices>
#include <QChar>

class Destinatie{
public:
    int numarCurs;
    int numarPagina;
    int numarParagraf;
    QString link;
};

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    resetez();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void deschidereDocument(const QString curs)
{
    QDesktopServices::openUrl(QUrl(curs, QUrl::TolerantMode));
}


void fisier();

//variabile globale
Destinatie curs;
int pagini[13], aparitii[13];


void MainWindow::on_pushButton_clicked()
{
    resetez();
    //facem vizibil labelul unde este rezultatul
    ui->label_3->setVisible(1);
    QFile file("C:/Users/andre/Desktop/ChatBot POO/proiect/resources/test.txt");

    //testam daca primim eroare cand se deschide fisierul in care citim
    if(!file.open(QIODevice::ReadOnly)) {
        QMessageBox::information(0, "error", file.errorString());
    }

    QTextStream in(&file);

    //declarari
    curs.numarCurs = 0;
    paginiSiAparitii();
    QString raspuns, text, line;
    int gasit = 0;

    //cat timp nu ajunge la final de fisier, citim
    while(!in.atEnd()) {
        line = in.readLine();

        QString searchString(ui->lineEdit->text());

        //pentru ca a citit o linie, marim numarul paragrafului
        curs.numarParagraf++;

        //daca gasim CURS inseamna ca trecem la cursul urmator si salvam datele despre cursul anterior
        if(line.contains("CURS", Qt::CaseSensitive)){
            curs.numarCurs++;
            pagini[curs.numarCurs] = curs.numarPagina; //memoram cate pagini are cursul
            curs.numarPagina = 1;
            //curs.numarParagraf = 0;
        }
        //daca gasim PAGINA inseamna ca am trecut la pagina urmatoare si crestem numarul paginii
        if(line.contains("PAGINA", Qt::CaseSensitive)){
            curs.numarPagina++;
            //curs.numarParagraf = 0;
        }

        //verifica daca a gasit in fisier imputul userului
        if (line.contains(searchString, Qt::CaseSensitive)){
            //transformam numarul cursului in string
            text = QString("%1 ").arg(curs.numarCurs);

            //daca nu am gasit pana acum cuvantul cheie in curs, modificam variabila ca sa stim ce afisam
            if(gasit == 0){
                raspuns = "Cuvantul cheie apare in cursurile: ";
                gasit = 1;
            }

            //daca este prima data cand gaseste in acest curs cuvantul cheie, adaugam cursul la raspuns
            if(aparitii[curs.numarCurs] == 0){
                raspuns = raspuns + text;

            }
            //marim numarul de aparitii al cuvantului cheie in curs
            aparitii[curs.numarCurs]++;

            //facem vizibil butonul cursului respectiv pentru a fi deschis
            activezButon(curs.numarCurs);

            //memoram numarul paginii unde a fost gasit cuvantul cheie pentru a putea deschide PDF-ul la pagina dorita
            pagini[curs.numarCurs] = curs.numarPagina;
        }
    }
    //afisam rezultatul cautarilor
    ui->label_4->setText(raspuns);

    //daca nu a gasit macar o data cuvantul in cursuri afisam mesajul
    if(gasit == 0){
        ui->label_4->setText("Cuvantul cheie nu exista in cursuri");
    }

    //inchidem fisierul de intrare
    file.close();
}

void MainWindow::paginiSiAparitii(){
    int i;
    for(i = 1; i <= 12; i++){
        pagini[i] = 1;
        aparitii[i] = 0;
    }
}

void MainWindow::on_pushButton_2_clicked(){
    QString text = "file:///C:/Users/andre/Desktop/ChatBot POO/proiect/resources/curs_1.pdf#page=" + QString::number(pagini[1]);
    deschidereDocument(text);
}
void MainWindow::on_pushButton_3_clicked(){
    QString text = "file:///C:/Users/andre/Desktop/ChatBot POO/proiect/resources/curs_2.pdf#page=" + QString::number(pagini[2]);
    deschidereDocument(text);
}
void MainWindow::on_pushButton_4_clicked(){
    QString text = "file:///C:/Users/andre/Desktop/ChatBot POO/proiect/resources/curs_3.pdf#page=" + QString::number(pagini[3]);
    deschidereDocument(text);
}
void MainWindow::on_pushButton_5_clicked(){
    QString text = "file:///C:/Users/andre/Desktop/ChatBot POO/proiect/resources/curs_4.pdf#page=" + QString::number(pagini[4]);
    deschidereDocument(text);
}
void MainWindow::on_pushButton_6_clicked(){
    QString text = "file:///C:/Users/andre/Desktop/ChatBot POO/proiect/resources/curs_5.pdf#page=" + QString::number(pagini[5]);
    deschidereDocument(text);
}
void MainWindow::on_pushButton_7_clicked(){
    QString text = "file:///C:/Users/andre/Desktop/ChatBot POO/proiect/resources/curs_6.pdf#page=" + QString::number(pagini[6]);
    deschidereDocument(text);
}
void MainWindow::on_pushButton_8_clicked(){
    QString text = "file:///C:/Users/andre/Desktop/ChatBot POO/proiect/resources/curs_7.pdf#page=" + QString::number(pagini[7]);
    deschidereDocument(text);
}
void MainWindow::on_pushButton_9_clicked(){
    QString text = "file:///C:/Users/andre/Desktop/ChatBot POO/proiect/resources/curs_8.pdf#page=" + QString::number(pagini[8]);
    deschidereDocument(text);
}
void MainWindow::on_pushButton_10_clicked(){
    QString text = "file:///C:/Users/andre/Desktop/ChatBot POO/proiect/resources/curs_9.pdf#page=" + QString::number(pagini[9]);
    deschidereDocument(text);
}
void MainWindow::on_pushButton_11_clicked(){
    QString text = "file:///C:/Users/andre/Desktop/ChatBot POO/proiect/resources/curs_10.pdf#page=" + QString::number(pagini[10]);
    deschidereDocument(text);
}
void MainWindow::on_pushButton_12_clicked(){
    QString text = "file:///C:/Users/andre/Desktop/ChatBot POO/proiect/resources/curs_11.pdf#page=" + QString::number(pagini[11]);
    deschidereDocument(text);
}
void MainWindow::on_pushButton_13_clicked(){
    QString text = "file:///C:/Users/andre/Desktop/ChatBot POO/proiect/resources/curs_12.pdf#page=" + QString::number(pagini[12]);
    deschidereDocument(text);
}

//functie pentru a face vizibil butonul cursului in care a fost gasit cuvantul cheie
void MainWindow::activezButon(int numar){
    switch (numar) {
    case 1:
        ui->pushButton_2->setVisible(1);
        break;
    case 2:
        ui->pushButton_3->setVisible(1);
        break;
    case 3:
        ui->pushButton_4->setVisible(1);
        break;
    case 4:
        ui->pushButton_5->setVisible(1);
        break;
    case 5:
        ui->pushButton_6->setVisible(1);
        break;
    case 6:
        ui->pushButton_7->setVisible(1);
        break;
    case 7:
        ui->pushButton_8->setVisible(1);
        break;
    case 8:
        ui->pushButton_9->setVisible(1);
        break;
    case 9:
        ui->pushButton_10->setVisible(1);
        break;
    case 10:
        ui->pushButton_11->setVisible(1);
        break;
    case 11:
        ui->pushButton_12->setVisible(1);
        break;
    case 12:
        ui->pushButton_13->setVisible(1);
        break;
    case 13:

        break;
    }
}

void MainWindow:: resetez(){
    ui->pushButton_2->setVisible(0);
    ui->pushButton_3->setVisible(0);
    ui->pushButton_4->setVisible(0);
    ui->pushButton_5->setVisible(0);
    ui->pushButton_6->setVisible(0);
    ui->pushButton_7->setVisible(0);
    ui->pushButton_8->setVisible(0);
    ui->pushButton_9->setVisible(0);
    ui->pushButton_10->setVisible(0);
    ui->pushButton_11->setVisible(0);
    ui->pushButton_12->setVisible(0);
    ui->pushButton_13->setVisible(0);
    ui->label_3->setVisible(0);
    ui->label_5->setVisible(0);
}


void MainWindow::on_pushButton_14_clicked()
{
    if(ui->label_5->isVisible() == 0){
        ui->label_5->setVisible(1);
        ui->pushButton_14->setText("Ascunde sugestiile");
    }
    else{
        ui->label_5->setVisible(0);
        ui->pushButton_14->setText("Vezi sugestii");
    }
}


