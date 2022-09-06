// Copyright (C) 2020 UOS Technology Co., Ltd.
// SPDX-FileCopyrightText: 2022 UnionTech Software Technology Co., Ltd.
//
// SPDX-License-Identifier: GPL-3.0-or-later

#ifndef DDE_FILE_MANAGER_ACCESSIBLE_LIST_H
#define DDE_FILE_MANAGER_ACCESSIBLE_LIST_H

#include "accessiblefunctions.h"

#include <QWidget>


// 添加accessible
SET_FORM_ACCESSIBLE(QWidget,m_w->objectName())

QAccessibleInterface *accessibleFactory(const QString &classname, QObject *object)
{
    QAccessibleInterface *interface = nullptr;

    USE_ACCESSIBLE(classname, QWidget);

    return interface;
}

#endif // DDE_FILE_MANAGER_ACCESSIBLE_LIST_H
