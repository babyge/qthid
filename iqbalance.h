/***************************************************************************
 *  This file is part of Qthid.
 *
 *  Copyright (C) 2011-2012  Alexandru Csete, OZ9AEC
 *
 *  Qthid is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Qthid is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with Qthid.  If not, see <http://www.gnu.org/licenses/>.
 *
 ***************************************************************************/
#ifndef IQBALANCE_H
#define IQBALANCE_H

#include <QDialog>

namespace Ui {
    class CIqBalance;
}


/*! \brief IQ corrction dialog.
 *
 * This class implements the IQ correction dialog window.
 * This class interfaces directly to the FCD and therefore no
 * signals or public slots are necessary.
 */
class CIqBalance : public QDialog
{
    Q_OBJECT

public:
    explicit CIqBalance(QWidget *parent = 0);
    ~CIqBalance();

private slots:
    void on_doubleSpinBoxDCI_valueChanged(double value);
    void on_doubleSpinBoxDCQ_valueChanged(double value);
    void on_doubleSpinBoxPhase_valueChanged(double value);
    void on_doubleSpinBoxGain_valueChanged(double value);
    void on_revertButton_clicked();
    void on_resetButton_clicked();

private:
    Ui::CIqBalance *ui;  /*! User interface generated by Qt Designer. */
};

#endif // IQBALANCE_H
