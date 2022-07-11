#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(&login, SIGNAL(loguj()),this,SLOT(zaloguj()));

    connect(&panPrac, SIGNAL(edytuj()),this,SLOT(edytuj_stan()));
    connect(&panPrac, SIGNAL(edytuj()),this,SLOT(Wyswietl_Zlecenia()));
    connect(&panPrac, SIGNAL(harmonogram()),this,SLOT(do_harmonogramu()));

    connect(&panEksp, SIGNAL(edytuj()),this,SLOT(edytuj_stan()));
    connect(&panEksp, SIGNAL(edytuj()),this,SLOT(Wyswietl_Zlecenia()));
    connect(&panEksp, SIGNAL(wycena()),this,SLOT(Panel_Wyceny_Eksperta()));
    connect(&panEksp, SIGNAL(wycena()),this,SLOT(Wyswietl_Wyceny()));
    connect(&panEksp, SIGNAL(harmonogram()),this,SLOT(do_harmonogramu()));

    connect(&edtStanZl, SIGNAL(edytuj()),this,SLOT(Edycja_Stan_Zlecenia_Eksperta()));
    connect(&edtStanZl, SIGNAL(wroc()),this,SLOT(Wroc()));

    connect(&panWcn, SIGNAL(edytuj()),this,SLOT(edytuj_wycene_ekspert()));
    connect(&panWcn, SIGNAL(dodaj()),this,SLOT(dodaj_wycene_ekspert()));
    connect(&panWcn, SIGNAL(wroc()),this,SLOT(Wroc()));
    connect(&panWcn, SIGNAL(usun()),this,SLOT(usun_wycene_ekspert()));

    connect(&panSzef, SIGNAL(stworz_raport()),this,SLOT(Raport_Ekonomiczny()));
    connect(&panSzef, SIGNAL(panel_pracownikow()),this,SLOT(Panel_Pracownikow()));
    connect(&panSzef, SIGNAL(panel_pracownikow()),this,SLOT(Wyswietl_Pracownikow()));
    connect(&panSzef, SIGNAL(panel_typow_pracownikow()),this,SLOT(Panel_Typow_Pracownikow()));
    connect(&panSzef, SIGNAL(panel_typow_pracownikow()),this,SLOT(Wyswietl_Typ_Pracownikow()));

    connect(&panRec, SIGNAL(klient()),this,SLOT(Panel_Klientow()));
    connect(&panRec, SIGNAL(klient()),this,SLOT(Wyswietl_Klientow()));
    connect(&panRec, SIGNAL(model()),this,SLOT(Panel_Modeli()));
    connect(&panRec, SIGNAL(model()),this,SLOT(Wyswietl_Modele()));
    connect(&panRec, SIGNAL(przeglad()),this,SLOT(Panel_Przegladow()));
    connect(&panRec, SIGNAL(przeglad()),this,SLOT(Wyswietl_Przeglady()));
    connect(&panRec, SIGNAL(samochody()),this,SLOT(Panel_Samochodow()));
    connect(&panRec, SIGNAL(samochody()),this,SLOT(Wyswietl_Samochody()));
    //connect(&panRec, SIGNAL(stanowisko()),this,SLOT( ));
    connect(&panRec, SIGNAL(usluga()),this,SLOT(Panel_Uslug()));
    connect(&panRec, SIGNAL(usluga()),this,SLOT(Wyswietl_Uslugi()));
    connect(&panRec, SIGNAL(wycena()),this,SLOT(Panel_Wycen()));
    connect(&panRec, SIGNAL(wycena()),this,SLOT(Wyswietl_Wyceny()));
    connect(&panRec, SIGNAL(zlecenie()),this,SLOT(Panel_Zlecen()));
    connect(&panRec, SIGNAL(zlecenie()),this,SLOT(Wyswietl_Zlecenia()));
    connect(&panRec, SIGNAL(harmonogram()),this,SLOT(do_harmonogramu()));

    connect(&zarzPrac, SIGNAL(dodaj()),this,SLOT(dodaj_pracownika()));
    connect(&zarzPrac, SIGNAL(usun()),this,SLOT(usun_pracownika()));
    connect(&zarzPrac, SIGNAL(edytuj()),this,SLOT(edytuj_pracownika()));
    connect(&zarzPrac, SIGNAL(wroc()),this,SLOT(Wroc()));

    connect(&zarzTypPrac, SIGNAL(dodaj()),this,SLOT(dodaj_typ_pracownika()));
    connect(&zarzTypPrac, SIGNAL(usun()),this,SLOT(usun_typ_pracownika()));
    connect(&zarzTypPrac, SIGNAL(edytuj()),this,SLOT(edytuj_typ_pracownika()));
    connect(&zarzTypPrac, SIGNAL(wroc()),this,SLOT(Wroc()));

    connect(&zarzZlc, SIGNAL(dodaj()),this,SLOT(dodaj_zlecenie()));
    connect(&zarzZlc, SIGNAL(usun()),this,SLOT(usun_zlecenie()));
    connect(&zarzZlc, SIGNAL(wroc()),this,SLOT(Wroc()));

    connect(&harm, SIGNAL(wroc()),this,SLOT(Wroc()));

    connect(&panMag, SIGNAL(harmonogram()),this,SLOT(do_harmonogramu()));
    connect(&panMag, SIGNAL(czesci()),this,SLOT(Panel_Czesci()));

    connect(&zarzKlient, SIGNAL(wroc()),this,SLOT(Wroc()));
    connect(&zarzKlient, SIGNAL(dodaj()),this,SLOT(dodaj_klienta()));
    connect(&zarzKlient, SIGNAL(edytuj()),this,SLOT(edytuj_klienta()));
    connect(&zarzKlient, SIGNAL(usun()),this,SLOT(usun_klienta()));

    connect(&zarzSamoch, SIGNAL(wroc()),this,SLOT(Wroc()));
    connect(&zarzSamoch, SIGNAL(dodaj()),this,SLOT(dodaj_samochod()));
    connect(&zarzSamoch, SIGNAL(edytuj()),this,SLOT(edytuj_samochod()));
    connect(&zarzSamoch, SIGNAL(usun()),this,SLOT(usun_samochod()));

    connect(&zarzModel, SIGNAL(wroc()),this,SLOT(Wroc()));
    connect(&zarzModel, SIGNAL(dodaj()),this,SLOT(dodaj_model()));
    connect(&zarzModel, SIGNAL(usun()),this,SLOT(usun_model()));

    connect(&zarzPrzeg, SIGNAL(wroc()),this,SLOT(Wroc()));
    connect(&zarzPrzeg, SIGNAL(dodaj()),this,SLOT(dodaj_przeglad()));
    connect(&zarzPrzeg, SIGNAL(usun()),this,SLOT(usun_przeglad()));

    connect(&zarzUslug, SIGNAL(wroc()),this,SLOT(Wroc()));
    connect(&zarzUslug, SIGNAL(dodaj()),this,SLOT(dodaj_usluge()));
    connect(&zarzUslug, SIGNAL(usun()),this,SLOT(usun_usluge()));

    connect(&zarzWycen, SIGNAL(wroc()),this,SLOT(Wroc()));
    connect(&zarzWycen, SIGNAL(dodaj()),this,SLOT(dodaj_wycene_recep()));
    connect(&zarzWycen, SIGNAL(edytuj()),this,SLOT(edytuj_wycene_recep()));
    connect(&zarzWycen, SIGNAL(usun()),this,SLOT(usun_wycene_recep()));

    mydb= QSqlDatabase::addDatabase("QMYSQL","MyConnect");
    mydb.setHostName("localhost");
    mydb.setUserName("root");
    mydb.setPassword("G2ho86Mlz@1");
    mydb.setDatabaseName("mydb");

    if(!mydb.open())
       qDebug()<<"Nie otwarto";
    else
        qDebug()<<"Otwarto";

     ui->kontroler->addWidget(&login); //2
     ui->kontroler->addWidget(&panPrac); //3
     ui->kontroler->addWidget(&panSzef); //4
     ui->kontroler->addWidget(&panRec);  //5
     ui->kontroler->addWidget(&panEksp); //6
     ui->kontroler->addWidget(&panMag);  //7
     ui->kontroler->addWidget(&edtStanZl); //8
     ui->kontroler->addWidget(&panWcn); //9
     ui->kontroler->addWidget(&zarzPrac); //10
     ui->kontroler->addWidget(&zarzTypPrac); //11
     ui->kontroler->addWidget(&rapEkon); //12
     ui->kontroler->addWidget(&zarzZlc); //13
     ui->kontroler->addWidget(&harm); //14
     ui->kontroler->addWidget(&zarzCzesc); //15
     ui->kontroler->addWidget(&zarzKlient); //16
     ui->kontroler->addWidget(&zarzSamoch); //17
     ui->kontroler->addWidget(&zarzModel); //18
     ui->kontroler->addWidget(&zarzPrzeg); //19
     ui->kontroler->addWidget(&zarzUslug); //20
     ui->kontroler->addWidget(&zarzWycen); //21
     ui->kontroler->setCurrentIndex(2);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::zaloguj()
{
    if(!mydb.isOpen())
    {
            qDebug()<<"Failed to open";
    }

    QString PESEL = login.PESEL;
    QString Haslo = login.Haslo;

    QSqlQuery q_rec(QSqlDatabase::database("MyConnect"));
    q_rec.prepare(QString("SELECT * From pracownik WHERE PESEL =:PESEL AND Haslo = :Haslo"));
    q_rec.bindValue(":PESEL",PESEL);
    q_rec.bindValue(":Haslo",Haslo);

    if(q_rec.exec())
    {
        if (q_rec.next())
        {
            bool Szef, Recepcjonista, Ekspert, Magazynier, Pracownik;
            QString username = q_rec.value(1).toString();
            QString password = q_rec.value(10).toString();

            Szef = q_rec.value(8).toBool();
            Recepcjonista = q_rec.value(5).toBool();
            Ekspert = q_rec.value(6).toBool();
            Magazynier = q_rec.value(7).toBool();
            Pracownik = q_rec.value(9).toBool();


            if(username == PESEL && password == Haslo)
                {
                if(Pracownik != 0)
                    ui->kontroler->setCurrentIndex(3);
                if(Szef != 0)
                    ui->kontroler->setCurrentIndex(4);
                if(Recepcjonista != 0)
                    ui->kontroler->setCurrentIndex(5);
                if(Ekspert != 0)
                    ui->kontroler->setCurrentIndex(6);
                if(Magazynier != 0)
                    ui->kontroler->setCurrentIndex(7);

                login.wyczyscDane();
                }
        }
        else
            {
                qDebug()<<"Nie udało się zalogować";
                login.wyczyscDane();
            }
       }
}

void MainWindow::edytuj_stan()
{
    currentWidget = ui->kontroler->currentIndex();
    ui->kontroler->setCurrentIndex(8);
}

void MainWindow::Panel_Wyceny_Eksperta()
{
     currentWidget = ui->kontroler->currentIndex();
     ui->kontroler->setCurrentIndex(9);
}

void MainWindow::Edycja_Stan_Zlecenia_Eksperta()
{
   // QString Id_Zlecenia = edtStanZl.ID_Zlecenia;
    //QString Stan_Zlecenia = edtStanZl.Stan_Zlecenia;

    QSqlQuery q_rec(QSqlDatabase::database("MyConnect"));
    q_rec.prepare("Update Zlecenie SET Stan_Zlecenia='"+edtStanZl.Stan_Zlecenia+"' WHERE Id_Zlecenia ="+edtStanZl.ID_Zlecenia+";");
    q_rec.exec();

    Wyswietl_Zlecenia();
}

void MainWindow::Wroc()
{
    ui->kontroler->setCurrentIndex(currentWidget);
}

void MainWindow::Wyswietl_Zlecenia()
{
   QSqlQueryModel* model = new QSqlQueryModel();
   QSqlQuery* query  = new QSqlQuery(mydb);

   query->prepare("SELECT * FROM Zlecenie;");
   query->exec();
   model->setQuery(*query);

   zarzZlc.ustawModel(model);

   edtStanZl.ustawModel(model);


}

void MainWindow::Wyswietl_Wyceny()
{
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery* query  = new QSqlQuery(mydb);
    query->prepare("SELECT * FROM Wycena;");
    query->exec();
    model->setQuery(*query);
    panWcn.ustawModel(model);
    zarzWycen.ustawModel(model);
}

void MainWindow::Panel_Pracownikow()
{
    currentWidget = ui->kontroler->currentIndex();
    ui->kontroler->setCurrentIndex(10);
}

void MainWindow::Raport_Ekonomiczny()
{
    currentWidget = ui->kontroler->currentIndex();
    ui->kontroler->setCurrentIndex(12);
}

void MainWindow::Wyswietl_Pracownikow()
{
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery* query  = new QSqlQuery(mydb);
    query->prepare("SELECT * FROM pracownik;");
    query->exec();
    model->setQuery(*query);
    zarzPrac.ustawModel(model);

}


void MainWindow::usun_wycene_ekspert()
{
    QSqlQuery q_rec(QSqlDatabase::database("MyConnect"));
    q_rec.prepare("DELETE FROM Wycena WHERE Id_Wyceny='"+panWcn.ID_Wyceny+"';");
    q_rec.exec();
    Wyswietl_Wyceny();
}

void MainWindow::edytuj_wycene_ekspert()
{
    QSqlQuery q_rec(QSqlDatabase::database("MyConnect"));
    q_rec.prepare("Update Wycena SET Cena='"+panWcn.Cena+"', Opis_Eksperta='"+panWcn.Opis_Eksperta+"' WHERE Id_Wyceny='"+panWcn.ID_Wyceny+"' ;");
    q_rec.exec();
    Wyswietl_Wyceny();
}

void MainWindow::dodaj_wycene_ekspert()
{
    //
    //
    //
    //
    //
    //

}

void MainWindow::dodaj_pracownika()
{
    int Recepcjonista = 0,Ekspert = 0,Magazynier = 0,Pracownik_Warsztatowy = 0,Szef = 0;

    if(zarzPrac.Posada == "Recepcjonista")
    {
        Recepcjonista = 1;
    }
    if(zarzPrac.Posada == "Szef")
    {
        Szef = 1;
    }
    if(zarzPrac.Posada == "Ekspert")
    {
        Ekspert = 1;
    }
    if(zarzPrac.Posada == "Magazynier")
    {
        Magazynier = 1;
    }
    if(zarzPrac.Posada == "Pracownik Warsztatowy")
    {
        Pracownik_Warsztatowy = 1;
    }

    QSqlQuery query(QSqlDatabase::database("MyConnect"));
    query.prepare(QString("SELECT * From Typ_Pracownika WHERE Kompetencje ='"+zarzPrac.Typ_Pracownika+"';"));
    query.exec();
    QString Typ_Pracownika;

    if(query.next())
    {
        Typ_Pracownika = query.value(0).toString();
    }

    QSqlQuery q_rec(QSqlDatabase::database("MyConnect"));

    q_rec.prepare("INSERT INTO pracownik(Id_Pracownika, PESEL,Imie,Nazwisko,Id_Typu_Pracownika,Recepcjonista,Ekspert_Od_Wyceny,Magazynier,Szef,Pracownik_Warsztatowy,Haslo)"
                   "VALUES(:id,:PESEL,:Imie,:Nazwisko,:Typ,:Recepcjonista,:Ekspert,:Magazynier,:Szef,:Pracownik,:Haslo)");
    q_rec.bindValue(":id",zarzPrac.Id_Pracownika);
    q_rec.bindValue(":PESEL",zarzPrac.PESEL);
    q_rec.bindValue(":Imie",zarzPrac.Imie);
    q_rec.bindValue(":Nazwisko",zarzPrac.Nazwisko);
    q_rec.bindValue(":Recepcjonista",Recepcjonista);
    q_rec.bindValue(":Ekspert",Ekspert);
    q_rec.bindValue(":Magazynier",Magazynier);
    q_rec.bindValue(":Szef",Szef);
    q_rec.bindValue(":Pracownik",Pracownik_Warsztatowy);
    q_rec.bindValue(":Haslo",zarzPrac.Haslo);

    if(zarzPrac.Typ_Pracownika =="Brak")
    {

    }
    else
    {
        q_rec.bindValue(":Typ",Typ_Pracownika.toInt());
    }
    q_rec.exec();
    qDebug()<<Typ_Pracownika;
    qDebug()<<Typ_Pracownika.toInt();
    Wyswietl_Pracownikow();
}

void MainWindow::usun_pracownika()
{
    QSqlQuery q_rec(QSqlDatabase::database("MyConnect"));
    q_rec.prepare("DELETE FROM pracownik WHERE Id_Pracownika='"+zarzPrac.Id_Pracownika+"';");
    q_rec.exec();
    Wyswietl_Pracownikow();
}

void MainWindow::edytuj_pracownika()
{
     // DO ZROBIENIA//
    Wyswietl_Pracownikow();
}

void MainWindow::Wyswietl_Typ_Pracownikow()
{
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery* query  = new QSqlQuery(mydb);
    query->prepare("SELECT * FROM Typ_Pracownika;");
    query->exec();
    model->setQuery(*query);
    zarzTypPrac.ustawModel(model);
}

void MainWindow::dodaj_typ_pracownika()
{
    QSqlQuery q_rec(QSqlDatabase::database("MyConnect"));

    q_rec.prepare("INSERT INTO Typ_Pracownika(Id_Typ_Pracownika,Kompetencje,Koszt_Godzinny)"
                   "VALUES(:Typ_Pracownika,:Kompetencje,:Koszt_Godzinny )");
    q_rec.bindValue(":Typ_Pracownika",zarzTypPrac.Id_Typu);
    q_rec.bindValue(":Kompetencje",zarzTypPrac.Kompetencje);
    q_rec.bindValue(":Koszt_Godzinny",zarzTypPrac.Koszt);
    q_rec.exec();

    Wyswietl_Typ_Pracownikow();
}

void MainWindow::usun_typ_pracownika()
{
    QSqlQuery q_rec(QSqlDatabase::database("MyConnect"));
    q_rec.prepare("DELETE FROM Typ_pracownika WHERE Id_Typ_Pracownika='"+zarzTypPrac.Id_Typu+"';");
    q_rec.exec();
    Wyswietl_Typ_Pracownikow();
}

void MainWindow::edytuj_typ_pracownika()
{
    QSqlQuery q_rec(QSqlDatabase::database("MyConnect"));
    q_rec.prepare("Update Typ_pracownika SET Kompetencje='"+zarzTypPrac.Kompetencje+"', Koszt_Godzinny='"+zarzTypPrac.Koszt+"' WHERE Id_Typ_Pracownika='"+zarzTypPrac.Id_Typu+"' ;");
    q_rec.exec();

    Wyswietl_Typ_Pracownikow();
}

void MainWindow::Panel_Zlecen()
{
    currentWidget = ui->kontroler->currentIndex();
    ui->kontroler->setCurrentIndex(13);
}

void MainWindow::dodaj_zlecenie()
{
    //
    //
    //
    //
    //
    //

    //
    //
    //
    Wyswietl_Zlecenia();
}
void MainWindow::usun_zlecenie()
{
    QSqlQuery q_rec(QSqlDatabase::database("MyConnect"));
    q_rec.prepare("DELETE FROM Zlecenie WHERE Id_Zlecenia='"+zarzZlc.Id_Zlecenia+"';");
    q_rec.exec();
    Wyswietl_Zlecenia();
}

void MainWindow::do_harmonogramu()
{
    currentWidget = ui->kontroler->currentIndex();
    ui->kontroler->setCurrentIndex(14);
}

void MainWindow::Panel_Czesci()
{
    currentWidget = ui->kontroler->currentIndex();
    ui->kontroler->setCurrentIndex(15);
}

void MainWindow::Panel_Klientow()
{
    currentWidget = ui->kontroler->currentIndex();
    ui->kontroler->setCurrentIndex(16);
}

void MainWindow::Wyswietl_Klientow()
{
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery* query  = new QSqlQuery(mydb);
    query->prepare("SELECT * FROM klient;");
    query->exec();
    model->setQuery(*query);
    zarzKlient.ustawModel(model);
}

void MainWindow::dodaj_klienta()
{
    QSqlQuery q_rec(QSqlDatabase::database("MyConnect"));

    q_rec.prepare("INSERT INTO Klient(Id_Klienta,Imie,Nazwisko,Telefon)"
                   "VALUES(:Id_Klienta,:Imie,:Nazwisko,:Telefon )");
    q_rec.bindValue(":Id_Klienta",zarzKlient.Id_Klienta);
    q_rec.bindValue(":Imie",zarzKlient.Imie);
    q_rec.bindValue(":Nazwisko",zarzKlient.Nazwisko);
    q_rec.bindValue(":Telefon",zarzKlient.Telefon);
    q_rec.exec();

    Wyswietl_Klientow();
}

void MainWindow::usun_klienta()
{
    QSqlQuery query(QSqlDatabase::database("MyConnect"));
    query.prepare("DELETE FROM zlecenie WHERE Id_Klienta='"+zarzKlient.Id_Klienta+"';");
    query.exec();

    QSqlQuery q_rec(QSqlDatabase::database("MyConnect"));
    q_rec.prepare("DELETE FROM klient WHERE Id_Klienta='"+zarzKlient.Id_Klienta+"';");
    q_rec.exec();
    qDebug()<<zarzKlient.Id_Klienta;
    Wyswietl_Klientow();
}

void MainWindow::edytuj_klienta()
{
    QSqlQuery q_rec(QSqlDatabase::database("MyConnect"));
    q_rec.prepare("Update Klient SET Imie='"+zarzKlient.Imie+"', Nazwisko='"+zarzKlient.Nazwisko+"', Telefon='"+zarzKlient.Telefon+"' WHERE Id_Klienta='"+zarzKlient.Id_Klienta+"' ;");
    q_rec.exec();
    Wyswietl_Klientow();
}

void MainWindow::Panel_Samochodow()
{
    currentWidget = ui->kontroler->currentIndex();
    ui->kontroler->setCurrentIndex(17);
}

void MainWindow::Wyswietl_Samochody()
{
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery* query  = new QSqlQuery(mydb);
    query->prepare("SELECT * FROM samochod;");
    query->exec();
    model->setQuery(*query);
    zarzSamoch.ustawModel(model);
}

void MainWindow::dodaj_samochod()
{
    zarzSamoch.Id_Klienta = zarzSamoch.Id_Klienta.split(QRegularExpression("\\s+"))[0];

    QStringList tempList = zarzSamoch.Id_Modelu.split(QRegularExpression("\\s+"));

    QString temp1 = tempList[0];
    QString temp2 = tempList[1];

    qDebug()<<temp1<<temp2;

    QSqlQuery querys(QSqlDatabase::database("MyConnect"));
    querys.prepare("SELECT * FROM model WHERE Nazwa_Modelu='"+temp2+"' AND Nazwa_Marki='"+temp1+"';");
    querys.exec();
    qDebug()<<zarzSamoch.Id_Modelu;

    if(querys.next())
    {
        zarzSamoch.Id_Modelu = querys.value(0).toString();
    }

    qDebug()<<zarzSamoch.Id_Modelu;

    QSqlQuery q_rec(QSqlDatabase::database("MyConnect"));

    q_rec.prepare("INSERT INTO samochod(Id_Samochodu,Typ_Nadwozia,Rejestracja,Rok_Produkcji,Id_Modelu,Id_Klienta)"
                   "VALUES(:Id_Samochodu,:Typ_Nadwozia,:Rejestracja,:Rok_Produkcji,:Id_Modelu,:Id_Klienta)");
    q_rec.bindValue(":Id_Samochodu",zarzSamoch.Id_Samochodu);
    q_rec.bindValue(":Typ_Nadwozia",zarzSamoch.Typ);
    q_rec.bindValue(":Rejestracja",zarzSamoch.Rejestracja);
    q_rec.bindValue(":Rok_Produkcji",zarzSamoch.Rok);
    q_rec.bindValue(":Id_Modelu",zarzSamoch.Id_Modelu);
    q_rec.bindValue(":Id_Klienta",zarzSamoch.Id_Klienta);
    q_rec.exec();

    Wyswietl_Samochody();
}

void MainWindow::usun_samochod()
{
    QSqlQuery query(QSqlDatabase::database("MyConnect"));
    query.prepare("DELETE FROM zlecenie WHERE Id_Samochod='"+zarzSamoch.Id_Samochodu+"';");
    query.exec();

    QSqlQuery q_rec(QSqlDatabase::database("MyConnect"));
    q_rec.prepare("DELETE FROM samochod WHERE Id_Samochodu='"+zarzSamoch.Id_Samochodu+"';");
    q_rec.exec();
    qDebug()<<"usunieto";
    Wyswietl_Samochody();
}

void MainWindow::edytuj_samochod()
{

    QSqlQuery q_rec(QSqlDatabase::database("MyConnect"));
    q_rec.prepare("Update samochod SET Typ_Nadwozia='"+zarzSamoch.Typ+"', Rejestracja='"+zarzSamoch.Rejestracja+"' WHERE Id_Samochodu='"+zarzSamoch.Id_Samochodu+"' ;");
    q_rec.exec();

    Wyswietl_Samochody();
}

void MainWindow::Panel_Modeli()
{
    currentWidget = ui->kontroler->currentIndex();
    ui->kontroler->setCurrentIndex(18);
}

void MainWindow::Wyswietl_Modele()
{

    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery* query  = new QSqlQuery(mydb);
    query->prepare("SELECT * FROM model;");
    query->exec();
    model->setQuery(*query);
    zarzModel.ustawModel(model);
}

void MainWindow::dodaj_model()
{
    QSqlQuery q_rec(QSqlDatabase::database("MyConnect"));

    q_rec.prepare("INSERT INTO Model(Id_Modelu,Nazwa_Marki,Nazwa_Modelu,Typ)"
                   "VALUES(:Id_Modelu,:Marka,:Model,:Typ )");
    q_rec.bindValue(":Id_Modelu",zarzModel.Id_Modelu);
    q_rec.bindValue(":Marka",zarzModel.Marka);
    q_rec.bindValue(":Model",zarzModel.Model);
    q_rec.bindValue(":Typ",zarzModel.Typ);
    q_rec.exec();

    Wyswietl_Modele();
}

void MainWindow::usun_model()
{
    QSqlQuery query(QSqlDatabase::database("MyConnect"));
    query.prepare("DELETE FROM samochod WHERE Id_Modelu='"+zarzModel.Id_Modelu+"';");
    query.exec();

    QSqlQuery query2(QSqlDatabase::database("MyConnect"));
    query2.prepare("DELETE FROM Wycena WHERE Id_Modelu='"+zarzModel.Id_Modelu+"';");
    query2.exec();

    QSqlQuery q_rec(QSqlDatabase::database("MyConnect"));
    q_rec.prepare("DELETE FROM model WHERE Id_Modelu='"+zarzModel.Id_Modelu+"';");
    q_rec.exec();

    Wyswietl_Modele();
}

void MainWindow::Panel_Przegladow()
{
    currentWidget = ui->kontroler->currentIndex();
    ui->kontroler->setCurrentIndex(19);
}

void MainWindow::Wyswietl_Przeglady()
{
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery* query  = new QSqlQuery(mydb);
    query->prepare("SELECT * FROM przeglad;");
    query->exec();
    model->setQuery(*query);
    zarzPrzeg.ustawModel(model);
}

void MainWindow::dodaj_przeglad()
{
    zarzPrzeg.Id_Samochodu = zarzPrzeg.Id_Samochodu.split(QRegularExpression("\\s+"))[0];
    QSqlQuery q_rec(QSqlDatabase::database("MyConnect"));

    q_rec.prepare("INSERT INTO Przeglad(Id_Przegladu,Do_daty,Data_wykonania,Id_Samochodu)"
                   "VALUES(:Id_Przegladu,:Do_daty,:Data_wykonania,:Id_Samochodu)");
    q_rec.bindValue(":Id_Przegladu",zarzPrzeg.Id_Przegladu);
    q_rec.bindValue(":Do_daty",zarzPrzeg.Do_daty);
    q_rec.bindValue(":Data_wykonania",zarzPrzeg.Od_Daty);
    q_rec.bindValue(":Id_Samochodu",zarzPrzeg.Id_Samochodu);
    q_rec.exec();

    Wyswietl_Przeglady();
}

void MainWindow::usun_przeglad()
{
    QSqlQuery q_rec(QSqlDatabase::database("MyConnect"));
    q_rec.prepare("DELETE FROM przeglad WHERE Id_przegladu='"+zarzPrzeg.Id_Przegladu+"';");
    q_rec.exec();
    Wyswietl_Przeglady();
}

void MainWindow::Panel_Uslug()
{
    currentWidget = ui->kontroler->currentIndex();
    ui->kontroler->setCurrentIndex(20);
}

void MainWindow::Wyswietl_Uslugi()
{
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery* query  = new QSqlQuery(mydb);
    query->prepare("SELECT * FROM Typ_Uslugi;");
    query->exec();
    model->setQuery(*query);
    zarzUslug.ustawModel(model);
}

void MainWindow::dodaj_usluge()
{
    QSqlQuery q_rec(QSqlDatabase::database("MyConnect"));

    q_rec.prepare("INSERT INTO Typ_Uslugi(Id_Uslugi,Nazwa)"
                   "VALUES(:Id_Uslugi,:Nazwa)");
    q_rec.bindValue(":Id_Uslugi",zarzUslug.Id_Uslugi);
    q_rec.bindValue(":Nazwa",zarzUslug.Nazwa);
    q_rec.exec();
    Wyswietl_Uslugi();
}

void MainWindow::usun_usluge()
{
    QSqlQuery q_rec(QSqlDatabase::database("MyConnect"));
    q_rec.prepare("DELETE FROM Typ_Uslugi WHERE Id_Uslugi='"+zarzUslug.Id_Uslugi+"';");
    q_rec.exec();
    Wyswietl_Uslugi();
}

void MainWindow::Panel_Wycen()
{
    currentWidget = ui->kontroler->currentIndex();
    ui->kontroler->setCurrentIndex(21);
}

void MainWindow::dodaj_wycene_recep()
{
    QStringList tempList = zarzWycen.Id_Modelu.split(QRegularExpression("\\s+"));
    QString temp1 = tempList[0];
    QString temp2 = tempList[1];
    QSqlQuery querys(QSqlDatabase::database("MyConnect"));
    querys.prepare("SELECT * FROM model WHERE Nazwa_Modelu='"+temp2+"' AND Nazwa_Marki='"+temp1+"';");
    querys.exec();

    if(querys.next())
    {
        zarzWycen.Id_Modelu = querys.value(0).toString();
    }

    zarzWycen.Id_Uslugi = zarzWycen.Id_Uslugi.split(QRegularExpression("\\s+"))[0];

    QSqlQuery q_rec(QSqlDatabase::database("MyConnect"));

    q_rec.prepare("INSERT INTO Wycena(Id_Wyceny,Cena,Id_Modelu,Id_Uslugi)"
                   "VALUES(:Id_Wyceny,:Cena,:Id_Modelu,:Id_Uslugi)");
    q_rec.bindValue(":Id_Wyceny",zarzWycen.Id_Wyceny);
    q_rec.bindValue(":Cena",zarzWycen.Cena);
    q_rec.bindValue(":Id_Modelu",zarzWycen.Id_Modelu);
    q_rec.bindValue(":Id_Uslugi",zarzWycen.Id_Uslugi);
    q_rec.exec();

    Wyswietl_Wyceny();
}

void MainWindow::edytuj_wycene_recep()
{
    QSqlQuery q_rec(QSqlDatabase::database("MyConnect"));
    q_rec.prepare("Update wycena SET Cena='"+zarzWycen.Cena+" WHERE Id_Wyceny='"+zarzWycen.Id_Wyceny+"' ;");
    q_rec.exec();
    Wyswietl_Wyceny();
}

void MainWindow::usun_wycene_recep()
{
    QSqlQuery q_rec(QSqlDatabase::database("MyConnect"));
    q_rec.prepare("DELETE FROM Wycena WHERE Id_Wyceny='"+zarzWycen.Id_Wyceny+"';");
    q_rec.exec();
    Wyswietl_Wyceny();
}


void MainWindow::Panel_Typow_Pracownikow()
{
    currentWidget = ui->kontroler->currentIndex();
    ui->kontroler->setCurrentIndex(11);
}
