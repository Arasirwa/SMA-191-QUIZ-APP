//No comments around these areas, its code what do you expect
#include <QApplication>
#include <QMessageBox>
#include <QInputDialog>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget window;
    window.setWindowTitle("Quiz App");
    window.setStyleSheet("background-color: deepskyblue;");
    QVBoxLayout layout(&window);
    QLabel welcomeLabel("Welcome to the Quiz App!");
    welcomeLabel.setStyleSheet("color: white; font-size: 20px;");
    layout.addWidget(&welcomeLabel);
    QString name = QInputDialog::getText(&window, "Quiz App", "Please enter your name:");
    QLabel nameLabel("Name: " + name);
    nameLabel.setStyleSheet("color: white; font-size: 16px;");
    layout.addWidget(&nameLabel);
    QLabel categoryLabel("Choose a category:");
    categoryLabel.setStyleSheet("color: white; font-size: 16px;");
    layout.addWidget(&categoryLabel);

    QHBoxLayout categoryLayout;
    layout.addLayout(&categoryLayout);

    QPushButton countriesButton("Countries");
    countriesButton.setStyleSheet("background-color: deepadmiralblue; color: white; font-size: 14px;");
    categoryLayout.addWidget(&countriesButton);

    QPushButton capitalCitiesButton("Capital Cities");
    capitalCitiesButton.setStyleSheet("background-color: deepadmiralblue; color: white; font-size: 14px;");
    categoryLayout.addWidget(&capitalCitiesButton);

    QPushButton kenyanHistoryButton("General Kenyan History");
    kenyanHistoryButton.setStyleSheet("background-color: deepadmiralblue; color: white; font-size: 14px;");
    categoryLayout.addWidget(&kenyanHistoryButton);

    
    QObject::connect(&countriesButton, &QPushButton::clicked, [&]() {
        // Questions about countries
        QMessageBox::information(&window, "Quiz App", "What is the capital of France?\n\nParis");
        QMessageBox::information(&window, "Quiz App", "What is the capital of Japan?\n\nTokyo");
    });

    QObject::connect(&capitalCitiesButton, &QPushButton::clicked, [&]() {
        // Questions about capital cities
        QMessageBox::information(&window, "Quiz App", "Which country does Canberra belong to?\n\nAustralia");
        QMessageBox::information(&window, "Quiz App", "What is the capital of Brazil?\n\nBrasilia");
    });

    QObject::connect(&kenyanHistoryButton, &QPushButton::clicked, [&]() {
        // Questions about Kenyan history
        QMessageBox::information(&window, "Quiz App", "Who was the first president of Kenya?\n\nJomo Kenyatta");
        QMessageBox::information(&window, "Quiz App", "When did Kenya gain independence?\n\n1963");
    });
    window.show();
p
    return app.exec();
}


