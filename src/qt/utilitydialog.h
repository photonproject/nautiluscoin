// Copyright (c) 2011-2014 The Nautiluscoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef NAUTILUSCOIN_QT_UTILITYDIALOG_H
#define NAUTILUSCOIN_QT_UTILITYDIALOG_H

#include <QDialog>
#include <QObject>

class NautiluscoinGUI;
class ClientModel;

namespace Ui {
    class HelpMessageDialog;
}

/** "Help message" dialog box */
class HelpMessageDialog : public QDialog
{
    Q_OBJECT

public:
    explicit HelpMessageDialog(QWidget *parent, bool about);
    ~HelpMessageDialog();

    void printToConsole();
    void showOrPrint();

private:
    Ui::HelpMessageDialog *ui;
    QString text;

private slots:
    void on_okButton_accepted();
};


/** "Shutdown" window */
class ShutdownWindow : public QWidget
{
    Q_OBJECT

public:
    ShutdownWindow(QWidget *parent=0, Qt::WindowFlags f=0);
    static void showShutdownWindow(NautiluscoinGUI *window);

protected:
    void closeEvent(QCloseEvent *event);
};

#endif // NAUTILUSCOIN_QT_UTILITYDIALOG_H
