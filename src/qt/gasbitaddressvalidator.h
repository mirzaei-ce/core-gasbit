// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef GASBIT_QT_GASBITADDRESSVALIDATOR_H
#define GASBIT_QT_GASBITADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class GasbitAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit GasbitAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Gasbit address widget validator, checks for a valid gasbit address.
 */
class GasbitAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit GasbitAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // GASBIT_QT_GASBITADDRESSVALIDATOR_H
