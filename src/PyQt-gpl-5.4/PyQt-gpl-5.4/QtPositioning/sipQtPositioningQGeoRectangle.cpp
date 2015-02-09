/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.5 on Thu Feb 05 16:18:23 2015
 *
 * Copyright (c) 2014 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt5.
 * 
 * This file may be used under the terms of the GNU General Public License
 * version 3.0 as published by the Free Software Foundation and appearing in
 * the file LICENSE included in the packaging of this file.  Please review the
 * following information to ensure the GNU General Public License version 3.0
 * requirements will be met: http://www.gnu.org/copyleft/gpl.html.
 * 
 * If you do not wish to use this file under the terms of the GPL version 3.0
 * then you may purchase a commercial license.  For more information contact
 * info@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtPositioning.h"

#line 28 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtPositioning/qgeorectangle.sip"
#include <qgeorectangle.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtPositioning/sipQtPositioningQGeoRectangle.cpp"

#line 34 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtPositioning/qgeocoordinate.sip"
#include <qgeocoordinate.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtPositioning/sipQtPositioningQGeoRectangle.cpp"
#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtPositioning/sipQtPositioningQGeoRectangle.cpp"
#line 34 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtPositioning/qgeoshape.sip"
#include <qgeoshape.h>
#line 39 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtPositioning/sipQtPositioningQGeoRectangle.cpp"


PyDoc_STRVAR(doc_QGeoRectangle_setTopLeft, "QGeoRectangle.setTopLeft(QGeoCoordinate)");

extern "C" {static PyObject *meth_QGeoRectangle_setTopLeft(PyObject *, PyObject *);}
static PyObject *meth_QGeoRectangle_setTopLeft(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoCoordinate* a0;
        QGeoRectangle *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QGeoRectangle, &sipCpp, sipType_QGeoCoordinate, &a0))
        {
            sipCpp->setTopLeft(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoRectangle, sipName_setTopLeft, doc_QGeoRectangle_setTopLeft);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoRectangle_topLeft, "QGeoRectangle.topLeft() -> QGeoCoordinate");

extern "C" {static PyObject *meth_QGeoRectangle_topLeft(PyObject *, PyObject *);}
static PyObject *meth_QGeoRectangle_topLeft(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoRectangle *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoRectangle, &sipCpp))
        {
            QGeoCoordinate*sipRes;

            sipRes = new QGeoCoordinate(sipCpp->topLeft());

            return sipConvertFromNewType(sipRes,sipType_QGeoCoordinate,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoRectangle, sipName_topLeft, doc_QGeoRectangle_topLeft);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoRectangle_setTopRight, "QGeoRectangle.setTopRight(QGeoCoordinate)");

extern "C" {static PyObject *meth_QGeoRectangle_setTopRight(PyObject *, PyObject *);}
static PyObject *meth_QGeoRectangle_setTopRight(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoCoordinate* a0;
        QGeoRectangle *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QGeoRectangle, &sipCpp, sipType_QGeoCoordinate, &a0))
        {
            sipCpp->setTopRight(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoRectangle, sipName_setTopRight, doc_QGeoRectangle_setTopRight);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoRectangle_topRight, "QGeoRectangle.topRight() -> QGeoCoordinate");

extern "C" {static PyObject *meth_QGeoRectangle_topRight(PyObject *, PyObject *);}
static PyObject *meth_QGeoRectangle_topRight(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoRectangle *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoRectangle, &sipCpp))
        {
            QGeoCoordinate*sipRes;

            sipRes = new QGeoCoordinate(sipCpp->topRight());

            return sipConvertFromNewType(sipRes,sipType_QGeoCoordinate,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoRectangle, sipName_topRight, doc_QGeoRectangle_topRight);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoRectangle_setBottomLeft, "QGeoRectangle.setBottomLeft(QGeoCoordinate)");

extern "C" {static PyObject *meth_QGeoRectangle_setBottomLeft(PyObject *, PyObject *);}
static PyObject *meth_QGeoRectangle_setBottomLeft(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoCoordinate* a0;
        QGeoRectangle *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QGeoRectangle, &sipCpp, sipType_QGeoCoordinate, &a0))
        {
            sipCpp->setBottomLeft(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoRectangle, sipName_setBottomLeft, doc_QGeoRectangle_setBottomLeft);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoRectangle_bottomLeft, "QGeoRectangle.bottomLeft() -> QGeoCoordinate");

extern "C" {static PyObject *meth_QGeoRectangle_bottomLeft(PyObject *, PyObject *);}
static PyObject *meth_QGeoRectangle_bottomLeft(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoRectangle *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoRectangle, &sipCpp))
        {
            QGeoCoordinate*sipRes;

            sipRes = new QGeoCoordinate(sipCpp->bottomLeft());

            return sipConvertFromNewType(sipRes,sipType_QGeoCoordinate,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoRectangle, sipName_bottomLeft, doc_QGeoRectangle_bottomLeft);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoRectangle_setBottomRight, "QGeoRectangle.setBottomRight(QGeoCoordinate)");

extern "C" {static PyObject *meth_QGeoRectangle_setBottomRight(PyObject *, PyObject *);}
static PyObject *meth_QGeoRectangle_setBottomRight(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoCoordinate* a0;
        QGeoRectangle *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QGeoRectangle, &sipCpp, sipType_QGeoCoordinate, &a0))
        {
            sipCpp->setBottomRight(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoRectangle, sipName_setBottomRight, doc_QGeoRectangle_setBottomRight);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoRectangle_bottomRight, "QGeoRectangle.bottomRight() -> QGeoCoordinate");

extern "C" {static PyObject *meth_QGeoRectangle_bottomRight(PyObject *, PyObject *);}
static PyObject *meth_QGeoRectangle_bottomRight(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoRectangle *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoRectangle, &sipCpp))
        {
            QGeoCoordinate*sipRes;

            sipRes = new QGeoCoordinate(sipCpp->bottomRight());

            return sipConvertFromNewType(sipRes,sipType_QGeoCoordinate,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoRectangle, sipName_bottomRight, doc_QGeoRectangle_bottomRight);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoRectangle_setCenter, "QGeoRectangle.setCenter(QGeoCoordinate)");

extern "C" {static PyObject *meth_QGeoRectangle_setCenter(PyObject *, PyObject *);}
static PyObject *meth_QGeoRectangle_setCenter(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoCoordinate* a0;
        QGeoRectangle *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QGeoRectangle, &sipCpp, sipType_QGeoCoordinate, &a0))
        {
            sipCpp->setCenter(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoRectangle, sipName_setCenter, doc_QGeoRectangle_setCenter);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoRectangle_center, "QGeoRectangle.center() -> QGeoCoordinate");

extern "C" {static PyObject *meth_QGeoRectangle_center(PyObject *, PyObject *);}
static PyObject *meth_QGeoRectangle_center(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoRectangle *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoRectangle, &sipCpp))
        {
            QGeoCoordinate*sipRes;

            sipRes = new QGeoCoordinate(sipCpp->center());

            return sipConvertFromNewType(sipRes,sipType_QGeoCoordinate,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoRectangle, sipName_center, doc_QGeoRectangle_center);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoRectangle_setWidth, "QGeoRectangle.setWidth(float)");

extern "C" {static PyObject *meth_QGeoRectangle_setWidth(PyObject *, PyObject *);}
static PyObject *meth_QGeoRectangle_setWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        double a0;
        QGeoRectangle *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QGeoRectangle, &sipCpp, &a0))
        {
            sipCpp->setWidth(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoRectangle, sipName_setWidth, doc_QGeoRectangle_setWidth);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoRectangle_width, "QGeoRectangle.width() -> float");

extern "C" {static PyObject *meth_QGeoRectangle_width(PyObject *, PyObject *);}
static PyObject *meth_QGeoRectangle_width(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoRectangle *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoRectangle, &sipCpp))
        {
            double sipRes;

            sipRes = sipCpp->width();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoRectangle, sipName_width, doc_QGeoRectangle_width);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoRectangle_setHeight, "QGeoRectangle.setHeight(float)");

extern "C" {static PyObject *meth_QGeoRectangle_setHeight(PyObject *, PyObject *);}
static PyObject *meth_QGeoRectangle_setHeight(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        double a0;
        QGeoRectangle *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QGeoRectangle, &sipCpp, &a0))
        {
            sipCpp->setHeight(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoRectangle, sipName_setHeight, doc_QGeoRectangle_setHeight);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoRectangle_height, "QGeoRectangle.height() -> float");

extern "C" {static PyObject *meth_QGeoRectangle_height(PyObject *, PyObject *);}
static PyObject *meth_QGeoRectangle_height(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoRectangle *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoRectangle, &sipCpp))
        {
            double sipRes;

            sipRes = sipCpp->height();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoRectangle, sipName_height, doc_QGeoRectangle_height);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoRectangle_contains, "QGeoRectangle.contains(QGeoCoordinate) -> bool\n"
    "QGeoRectangle.contains(QGeoRectangle) -> bool");

extern "C" {static PyObject *meth_QGeoRectangle_contains(PyObject *, PyObject *);}
static PyObject *meth_QGeoRectangle_contains(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoCoordinate* a0;
        const QGeoRectangle *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QGeoRectangle, &sipCpp, sipType_QGeoCoordinate, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->contains(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const QGeoRectangle* a0;
        const QGeoRectangle *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QGeoRectangle, &sipCpp, sipType_QGeoRectangle, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->contains(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoRectangle, sipName_contains, doc_QGeoRectangle_contains);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoRectangle_intersects, "QGeoRectangle.intersects(QGeoRectangle) -> bool");

extern "C" {static PyObject *meth_QGeoRectangle_intersects(PyObject *, PyObject *);}
static PyObject *meth_QGeoRectangle_intersects(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoRectangle* a0;
        const QGeoRectangle *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QGeoRectangle, &sipCpp, sipType_QGeoRectangle, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->intersects(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoRectangle, sipName_intersects, doc_QGeoRectangle_intersects);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoRectangle_translate, "QGeoRectangle.translate(float, float)");

extern "C" {static PyObject *meth_QGeoRectangle_translate(PyObject *, PyObject *);}
static PyObject *meth_QGeoRectangle_translate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        double a0;
        double a1;
        QGeoRectangle *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bdd", &sipSelf, sipType_QGeoRectangle, &sipCpp, &a0, &a1))
        {
            sipCpp->translate(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoRectangle, sipName_translate, doc_QGeoRectangle_translate);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoRectangle_translated, "QGeoRectangle.translated(float, float) -> QGeoRectangle");

extern "C" {static PyObject *meth_QGeoRectangle_translated(PyObject *, PyObject *);}
static PyObject *meth_QGeoRectangle_translated(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        double a0;
        double a1;
        const QGeoRectangle *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bdd", &sipSelf, sipType_QGeoRectangle, &sipCpp, &a0, &a1))
        {
            QGeoRectangle*sipRes;

            sipRes = new QGeoRectangle(sipCpp->translated(a0,a1));

            return sipConvertFromNewType(sipRes,sipType_QGeoRectangle,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoRectangle, sipName_translated, doc_QGeoRectangle_translated);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoRectangle_united, "QGeoRectangle.united(QGeoRectangle) -> QGeoRectangle");

extern "C" {static PyObject *meth_QGeoRectangle_united(PyObject *, PyObject *);}
static PyObject *meth_QGeoRectangle_united(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoRectangle* a0;
        const QGeoRectangle *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QGeoRectangle, &sipCpp, sipType_QGeoRectangle, &a0))
        {
            QGeoRectangle*sipRes;

            sipRes = new QGeoRectangle(sipCpp->united(*a0));

            return sipConvertFromNewType(sipRes,sipType_QGeoRectangle,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoRectangle, sipName_united, doc_QGeoRectangle_united);

    return NULL;
}


extern "C" {static PyObject *slot_QGeoRectangle___or__(PyObject *,PyObject *);}
static PyObject *slot_QGeoRectangle___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGeoRectangle* a0;
        const QGeoRectangle* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_QGeoRectangle, &a0, sipType_QGeoRectangle, &a1))
        {
            QGeoRectangle*sipRes;

            sipRes = new QGeoRectangle((*a0 | *a1));

            return sipConvertFromNewType(sipRes,sipType_QGeoRectangle,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtPositioning,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGeoRectangle___ior__(PyObject *,PyObject *);}
static PyObject *slot_QGeoRectangle___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGeoRectangle)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGeoRectangle *sipCpp = reinterpret_cast<QGeoRectangle *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGeoRectangle));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGeoRectangle* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QGeoRectangle, &a0))
        {
            sipCpp->QGeoRectangle::operator|=(*a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QGeoRectangle___ne__(PyObject *,PyObject *);}
static PyObject *slot_QGeoRectangle___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QGeoRectangle *sipCpp = reinterpret_cast<QGeoRectangle *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGeoRectangle));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGeoShape* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QGeoShape, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QGeoRectangle::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const QGeoRectangle* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QGeoRectangle, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QGeoRectangle::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtPositioning,ne_slot,sipType_QGeoRectangle,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGeoRectangle___eq__(PyObject *,PyObject *);}
static PyObject *slot_QGeoRectangle___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QGeoRectangle *sipCpp = reinterpret_cast<QGeoRectangle *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGeoRectangle));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGeoShape* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QGeoShape, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QGeoRectangle::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const QGeoRectangle* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QGeoRectangle, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QGeoRectangle::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtPositioning,eq_slot,sipType_QGeoRectangle,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QGeoRectangle(void *, const sipTypeDef *);}
static void *cast_QGeoRectangle(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QGeoRectangle)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QGeoShape)->ctd_cast((QGeoShape *)(QGeoRectangle *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGeoRectangle(void *, int);}
static void release_QGeoRectangle(void *sipCppV,int)
{
    delete reinterpret_cast<QGeoRectangle *>(sipCppV);
}


extern "C" {static void assign_QGeoRectangle(void *, SIP_SSIZE_T, const void *);}
static void assign_QGeoRectangle(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QGeoRectangle *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QGeoRectangle *>(sipSrc);
}


extern "C" {static void *array_QGeoRectangle(SIP_SSIZE_T);}
static void *array_QGeoRectangle(SIP_SSIZE_T sipNrElem)
{
    return new QGeoRectangle[sipNrElem];
}


extern "C" {static void *copy_QGeoRectangle(const void *, SIP_SSIZE_T);}
static void *copy_QGeoRectangle(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QGeoRectangle(reinterpret_cast<const QGeoRectangle *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QGeoRectangle(sipSimpleWrapper *);}
static void dealloc_QGeoRectangle(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QGeoRectangle(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QGeoRectangle(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGeoRectangle(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QGeoRectangle *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QGeoRectangle();

            return sipCpp;
        }
    }

    {
        const QGeoCoordinate* a0;
        double a1;
        double a2;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9dd", sipType_QGeoCoordinate, &a0, &a1, &a2))
        {
            sipCpp = new QGeoRectangle(*a0,a1,a2);

            return sipCpp;
        }
    }

    {
        const QGeoCoordinate* a0;
        const QGeoCoordinate* a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9J9", sipType_QGeoCoordinate, &a0, sipType_QGeoCoordinate, &a1))
        {
            sipCpp = new QGeoRectangle(*a0,*a1);

            return sipCpp;
        }
    }

    {
        const QList<QGeoCoordinate>* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QList_0100QGeoCoordinate,&a0, &a0State))
        {
            sipCpp = new QGeoRectangle(*a0);
            sipReleaseType(const_cast<QList<QGeoCoordinate> *>(a0),sipType_QList_0100QGeoCoordinate,a0State);

            return sipCpp;
        }
    }

    {
        const QGeoRectangle* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QGeoRectangle, &a0))
        {
            sipCpp = new QGeoRectangle(*a0);

            return sipCpp;
        }
    }

    {
        const QGeoShape* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QGeoShape, &a0))
        {
            sipCpp = new QGeoRectangle(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QGeoRectangle[] = {{23, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_QGeoRectangle[] = {
    {(void *)slot_QGeoRectangle___or__, or_slot},
    {(void *)slot_QGeoRectangle___ior__, ior_slot},
    {(void *)slot_QGeoRectangle___ne__, ne_slot},
    {(void *)slot_QGeoRectangle___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QGeoRectangle[] = {
    {SIP_MLNAME_CAST(sipName_bottomLeft), meth_QGeoRectangle_bottomLeft, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoRectangle_bottomLeft)},
    {SIP_MLNAME_CAST(sipName_bottomRight), meth_QGeoRectangle_bottomRight, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoRectangle_bottomRight)},
    {SIP_MLNAME_CAST(sipName_center), meth_QGeoRectangle_center, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoRectangle_center)},
    {SIP_MLNAME_CAST(sipName_contains), meth_QGeoRectangle_contains, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoRectangle_contains)},
    {SIP_MLNAME_CAST(sipName_height), meth_QGeoRectangle_height, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoRectangle_height)},
    {SIP_MLNAME_CAST(sipName_intersects), meth_QGeoRectangle_intersects, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoRectangle_intersects)},
    {SIP_MLNAME_CAST(sipName_setBottomLeft), meth_QGeoRectangle_setBottomLeft, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoRectangle_setBottomLeft)},
    {SIP_MLNAME_CAST(sipName_setBottomRight), meth_QGeoRectangle_setBottomRight, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoRectangle_setBottomRight)},
    {SIP_MLNAME_CAST(sipName_setCenter), meth_QGeoRectangle_setCenter, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoRectangle_setCenter)},
    {SIP_MLNAME_CAST(sipName_setHeight), meth_QGeoRectangle_setHeight, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoRectangle_setHeight)},
    {SIP_MLNAME_CAST(sipName_setTopLeft), meth_QGeoRectangle_setTopLeft, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoRectangle_setTopLeft)},
    {SIP_MLNAME_CAST(sipName_setTopRight), meth_QGeoRectangle_setTopRight, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoRectangle_setTopRight)},
    {SIP_MLNAME_CAST(sipName_setWidth), meth_QGeoRectangle_setWidth, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoRectangle_setWidth)},
    {SIP_MLNAME_CAST(sipName_topLeft), meth_QGeoRectangle_topLeft, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoRectangle_topLeft)},
    {SIP_MLNAME_CAST(sipName_topRight), meth_QGeoRectangle_topRight, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoRectangle_topRight)},
    {SIP_MLNAME_CAST(sipName_translate), meth_QGeoRectangle_translate, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoRectangle_translate)},
    {SIP_MLNAME_CAST(sipName_translated), meth_QGeoRectangle_translated, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoRectangle_translated)},
    {SIP_MLNAME_CAST(sipName_united), meth_QGeoRectangle_united, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoRectangle_united)},
    {SIP_MLNAME_CAST(sipName_width), meth_QGeoRectangle_width, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoRectangle_width)}
};

PyDoc_STRVAR(doc_QGeoRectangle, "\1QGeoRectangle()\n"
    "QGeoRectangle(QGeoCoordinate, float, float)\n"
    "QGeoRectangle(QGeoCoordinate, QGeoCoordinate)\n"
    "QGeoRectangle(list-of-QGeoCoordinate)\n"
    "QGeoRectangle(QGeoRectangle)\n"
    "QGeoRectangle(QGeoShape)");


pyqt5ClassTypeDef sipTypeDef_QtPositioning_QGeoRectangle = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QGeoRectangle,
        {0}
    },
    {
        sipNameNr_QGeoRectangle,
        {0, 0, 1},
        19, methods_QGeoRectangle,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGeoRectangle,
    -1,
    -1,
    supers_QGeoRectangle,
    slots_QGeoRectangle,
    init_type_QGeoRectangle,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QGeoRectangle,
    assign_QGeoRectangle,
    array_QGeoRectangle,
    copy_QGeoRectangle,
    release_QGeoRectangle,
    cast_QGeoRectangle,
    0,
    0,
    0,
    0,
    0,
    0
},
    0,
    0,
    0,
    0
};