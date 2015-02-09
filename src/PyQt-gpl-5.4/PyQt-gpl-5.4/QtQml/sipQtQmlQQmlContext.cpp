/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.5 on Thu Feb 05 16:17:44 2015
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

#include "sipAPIQtQml.h"

#line 26 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtQml/qqmlcontext.sip"
#include <qqmlcontext.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtQml/sipQtQmlQQmlContext.cpp"

#line 60 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtQml/qqmlengine.sip"
#include <qqmlengine.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtQml/sipQtQmlQQmlContext.cpp"
#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtQml/sipQtQmlQQmlContext.cpp"
#line 100 "sip/QtCore/qurl.sip"
#include <qurl.h>
#line 39 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtQml/sipQtQmlQQmlContext.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 42 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtQml/sipQtQmlQQmlContext.cpp"
#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 45 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtQml/sipQtQmlQQmlContext.cpp"
#line 30 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 48 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtQml/sipQtQmlQQmlContext.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 51 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtQml/sipQtQmlQQmlContext.cpp"
#line 234 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 54 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtQml/sipQtQmlQQmlContext.cpp"
#line 222 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 57 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtQml/sipQtQmlQQmlContext.cpp"
#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 60 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtQml/sipQtQmlQQmlContext.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 63 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtQml/sipQtQmlQQmlContext.cpp"
#line 144 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 66 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtQml/sipQtQmlQQmlContext.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 69 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtQml/sipQtQmlQQmlContext.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 72 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtQml/sipQtQmlQQmlContext.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 75 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtQml/sipQtQmlQQmlContext.cpp"
#line 30 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 78 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtQml/sipQtQmlQQmlContext.cpp"
#line 30 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 81 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtQml/sipQtQmlQQmlContext.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 84 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtQml/sipQtQmlQQmlContext.cpp"


class sipQQmlContext : public QQmlContext
{
public:
    sipQQmlContext(QQmlEngine*,QObject*);
    sipQQmlContext(QQmlContext*,QObject*);
    virtual ~sipQQmlContext();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    QObject* sipProtect_sender() const;
    int sipProtect_receivers(const char*) const;
    void sipProtectVirt_timerEvent(bool,QTimerEvent*);
    void sipProtectVirt_childEvent(bool,QChildEvent*);
    void sipProtectVirt_customEvent(bool,QEvent*);
    void sipProtectVirt_connectNotify(bool,const QMetaMethod&);
    void sipProtectVirt_disconnectNotify(bool,const QMetaMethod&);
    int sipProtect_senderSignalIndex() const;
    bool sipProtect_isSignalConnected(const QMetaMethod&) const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void disconnectNotify(const QMetaMethod&);
    void connectNotify(const QMetaMethod&);
    void customEvent(QEvent*);
    void childEvent(QChildEvent*);
    void timerEvent(QTimerEvent*);
    bool eventFilter(QObject*,QEvent*);
    bool event(QEvent*);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQQmlContext(const sipQQmlContext &);
    sipQQmlContext &operator = (const sipQQmlContext &);

    char sipPyMethods[7];
};

sipQQmlContext::sipQQmlContext(QQmlEngine*a0,QObject*a1): QQmlContext(a0,a1), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQQmlContext::sipQQmlContext(QQmlContext*a0,QObject*a1): QQmlContext(a0,a1), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQQmlContext::~sipQQmlContext()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQQmlContext::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : sip_QtQml_qt_metaobject(sipPySelf,sipType_QQmlContext);
}

int sipQQmlContext::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QQmlContext::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtQml_qt_metacall(sipPySelf,sipType_QQmlContext,_c,_id,_a);

    return _id;
}

void *sipQQmlContext::qt_metacast(const char *_clname)
{
    void *sipCpp;

    return (sip_QtQml_qt_metacast(sipPySelf, sipType_QQmlContext, _clname, &sipCpp) ? sipCpp : QQmlContext::qt_metacast(_clname));
}

void sipQQmlContext::disconnectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QQmlContext::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtQml_QtCore->em_virthandlers[46]))(sipGILState, sipModuleAPI_QtQml_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQQmlContext::connectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QQmlContext::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtQml_QtCore->em_virthandlers[46]))(sipGILState, sipModuleAPI_QtQml_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQQmlContext::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QQmlContext::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtQml_QtCore->em_virthandlers[25]))(sipGILState, sipModuleAPI_QtQml_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQQmlContext::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QQmlContext::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_47)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_47)(sipModuleAPI_QtQml_QtCore->em_virthandlers[47]))(sipGILState, sipModuleAPI_QtQml_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQQmlContext::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QQmlContext::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtQml_QtCore->em_virthandlers[9]))(sipGILState, sipModuleAPI_QtQml_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

bool sipQQmlContext::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QQmlContext::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_26)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_26)(sipModuleAPI_QtQml_QtCore->em_virthandlers[26]))(sipGILState, sipModuleAPI_QtQml_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1);
}

bool sipQQmlContext::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QQmlContext::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtQml_QtCore->em_virthandlers[5]))(sipGILState, sipModuleAPI_QtQml_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

QObject* sipQQmlContext::sipProtect_sender() const
{
    return QObject::sender();
}

int sipQQmlContext::sipProtect_receivers(const char*a0) const
{
    return QObject::receivers(a0);
}

void sipQQmlContext::sipProtectVirt_timerEvent(bool sipSelfWasArg,QTimerEvent*a0)
{
    (sipSelfWasArg ? QObject::timerEvent(a0) : timerEvent(a0));
}

void sipQQmlContext::sipProtectVirt_childEvent(bool sipSelfWasArg,QChildEvent*a0)
{
    (sipSelfWasArg ? QObject::childEvent(a0) : childEvent(a0));
}

void sipQQmlContext::sipProtectVirt_customEvent(bool sipSelfWasArg,QEvent*a0)
{
    (sipSelfWasArg ? QObject::customEvent(a0) : customEvent(a0));
}

void sipQQmlContext::sipProtectVirt_connectNotify(bool sipSelfWasArg,const QMetaMethod& a0)
{
    (sipSelfWasArg ? QObject::connectNotify(a0) : connectNotify(a0));
}

void sipQQmlContext::sipProtectVirt_disconnectNotify(bool sipSelfWasArg,const QMetaMethod& a0)
{
    (sipSelfWasArg ? QObject::disconnectNotify(a0) : disconnectNotify(a0));
}

int sipQQmlContext::sipProtect_senderSignalIndex() const
{
    return QObject::senderSignalIndex();
}

bool sipQQmlContext::sipProtect_isSignalConnected(const QMetaMethod& a0) const
{
    return QObject::isSignalConnected(a0);
}


PyDoc_STRVAR(doc_QQmlContext_sender, "QQmlContext.sender() -> QObject");

extern "C" {static PyObject *meth_QQmlContext_sender(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QQmlContext_sender(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const sipQQmlContext *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "B", &sipSelf, sipType_QQmlContext, &sipCpp))
        {
            QObject*sipRes = 0;

#line 546 "sip/QtCore/qobject.sip"
        // sender() must be called without the GIL to avoid possible deadlocks between
        // the GIL and Qt's internal thread data mutex.
        
        Py_BEGIN_ALLOW_THREADS
        
        #if defined(SIP_PROTECTED_IS_PUBLIC)
        sipRes = sipCpp->sender();
        #else
        sipRes = sipCpp->sipProtect_sender();
        #endif
        
        Py_END_ALLOW_THREADS
        
        if (!sipRes)
        {
            typedef QObject *(*qtcore_qobject_sender_t)();
        
            static qtcore_qobject_sender_t qtcore_qobject_sender = 0;
        
            if (!qtcore_qobject_sender)
                qtcore_qobject_sender = (qtcore_qobject_sender_t)sipImportSymbol("qtcore_qobject_sender");
        
            if (qtcore_qobject_sender)
                sipRes = qtcore_qobject_sender();
        }
#line 378 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtQml/sipQtQmlQQmlContext.cpp"

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlContext, sipName_sender, doc_QQmlContext_sender);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlContext_receivers, "QQmlContext.receivers(signal) -> int");

extern "C" {static PyObject *meth_QQmlContext_receivers(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QQmlContext_receivers(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        PyObject * a0;
        const sipQQmlContext *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BP0", &sipSelf, sipType_QQmlContext, &sipCpp, &a0))
        {
            int sipRes = 0;
            sipErrorState sipError = sipErrorNone;

#line 575 "sip/QtCore/qobject.sip"
        // We need to handle the signal object.  Import the helper if it hasn't already
        // been done.
        typedef sipErrorState (*pyqt5_get_signal_signature_t)(PyObject *, const QObject *, const QByteArray &);
        
        static pyqt5_get_signal_signature_t pyqt5_get_signal_signature = 0;
        
        if (!pyqt5_get_signal_signature)
            pyqt5_get_signal_signature = (pyqt5_get_signal_signature_t)sipImportSymbol("pyqt5_get_signal_signature");
        
        if (pyqt5_get_signal_signature)
        {
            QByteArray signal_signature;
            
        #if defined(SIP_PROTECTED_IS_PUBLIC)
            if ((sipError = pyqt5_get_signal_signature(a0, sipCpp, signal_signature)) == sipErrorNone)
            {
                sipRes = sipCpp->receivers(signal_signature.constData());
            }
        #else
            if ((sipError = pyqt5_get_signal_signature(a0, static_cast<const QObject *>(sipCpp), signal_signature)) == sipErrorNone)
            {
                sipRes = sipCpp->sipProtect_receivers(signal_signature.constData());
            }
        #endif
            else if (sipError == sipErrorContinue)
            {
                sipError = sipBadCallableArg(0, a0);
            }
        }
#line 437 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtQml/sipQtQmlQQmlContext.cpp"

            if (sipError == sipErrorFail)
                return 0;

            if (sipError == sipErrorNone)
            {
            return SIPLong_FromLong(sipRes);
            }

            sipAddException(sipError, &sipParseErr);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlContext, sipName_receivers, doc_QQmlContext_receivers);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlContext_timerEvent, "QQmlContext.timerEvent(QTimerEvent)");

extern "C" {static PyObject *meth_QQmlContext_timerEvent(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QQmlContext_timerEvent(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QTimerEvent* a0;
        sipQQmlContext *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ8", &sipSelf, sipType_QQmlContext, &sipCpp, sipType_QTimerEvent, &a0))
        {
            sipCpp->sipProtectVirt_timerEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlContext, sipName_timerEvent, doc_QQmlContext_timerEvent);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlContext_childEvent, "QQmlContext.childEvent(QChildEvent)");

extern "C" {static PyObject *meth_QQmlContext_childEvent(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QQmlContext_childEvent(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QChildEvent* a0;
        sipQQmlContext *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ8", &sipSelf, sipType_QQmlContext, &sipCpp, sipType_QChildEvent, &a0))
        {
            sipCpp->sipProtectVirt_childEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlContext, sipName_childEvent, doc_QQmlContext_childEvent);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlContext_customEvent, "QQmlContext.customEvent(QEvent)");

extern "C" {static PyObject *meth_QQmlContext_customEvent(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QQmlContext_customEvent(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QEvent* a0;
        sipQQmlContext *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ8", &sipSelf, sipType_QQmlContext, &sipCpp, sipType_QEvent, &a0))
        {
            sipCpp->sipProtectVirt_customEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlContext, sipName_customEvent, doc_QQmlContext_customEvent);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlContext_connectNotify, "QQmlContext.connectNotify(QMetaMethod)");

extern "C" {static PyObject *meth_QQmlContext_connectNotify(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QQmlContext_connectNotify(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QMetaMethod* a0;
        sipQQmlContext *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ9", &sipSelf, sipType_QQmlContext, &sipCpp, sipType_QMetaMethod, &a0))
        {
            sipCpp->sipProtectVirt_connectNotify(sipSelfWasArg,*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlContext, sipName_connectNotify, doc_QQmlContext_connectNotify);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlContext_disconnectNotify, "QQmlContext.disconnectNotify(QMetaMethod)");

extern "C" {static PyObject *meth_QQmlContext_disconnectNotify(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QQmlContext_disconnectNotify(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QMetaMethod* a0;
        sipQQmlContext *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ9", &sipSelf, sipType_QQmlContext, &sipCpp, sipType_QMetaMethod, &a0))
        {
            sipCpp->sipProtectVirt_disconnectNotify(sipSelfWasArg,*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlContext, sipName_disconnectNotify, doc_QQmlContext_disconnectNotify);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlContext_senderSignalIndex, "QQmlContext.senderSignalIndex() -> int");

extern "C" {static PyObject *meth_QQmlContext_senderSignalIndex(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QQmlContext_senderSignalIndex(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const sipQQmlContext *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "B", &sipSelf, sipType_QQmlContext, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->sipProtect_senderSignalIndex();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlContext, sipName_senderSignalIndex, doc_QQmlContext_senderSignalIndex);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlContext_isSignalConnected, "QQmlContext.isSignalConnected(QMetaMethod) -> bool");

extern "C" {static PyObject *meth_QQmlContext_isSignalConnected(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QQmlContext_isSignalConnected(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QMetaMethod* a0;
        const sipQQmlContext *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ9", &sipSelf, sipType_QQmlContext, &sipCpp, sipType_QMetaMethod, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->sipProtect_isSignalConnected(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlContext, sipName_isSignalConnected, doc_QQmlContext_isSignalConnected);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlContext_isValid, "QQmlContext.isValid() -> bool");

extern "C" {static PyObject *meth_QQmlContext_isValid(PyObject *, PyObject *);}
static PyObject *meth_QQmlContext_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlContext *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlContext, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlContext, sipName_isValid, doc_QQmlContext_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlContext_engine, "QQmlContext.engine() -> QQmlEngine");

extern "C" {static PyObject *meth_QQmlContext_engine(PyObject *, PyObject *);}
static PyObject *meth_QQmlContext_engine(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlContext *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlContext, &sipCpp))
        {
            QQmlEngine*sipRes;

            sipRes = sipCpp->engine();

            return sipConvertFromType(sipRes,sipType_QQmlEngine,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlContext, sipName_engine, doc_QQmlContext_engine);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlContext_parentContext, "QQmlContext.parentContext() -> QQmlContext");

extern "C" {static PyObject *meth_QQmlContext_parentContext(PyObject *, PyObject *);}
static PyObject *meth_QQmlContext_parentContext(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlContext *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlContext, &sipCpp))
        {
            QQmlContext*sipRes;

            sipRes = sipCpp->parentContext();

            return sipConvertFromType(sipRes,sipType_QQmlContext,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlContext, sipName_parentContext, doc_QQmlContext_parentContext);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlContext_contextObject, "QQmlContext.contextObject() -> QObject");

extern "C" {static PyObject *meth_QQmlContext_contextObject(PyObject *, PyObject *);}
static PyObject *meth_QQmlContext_contextObject(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlContext *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlContext, &sipCpp))
        {
            QObject*sipRes;

            sipRes = sipCpp->contextObject();

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlContext, sipName_contextObject, doc_QQmlContext_contextObject);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlContext_setContextObject, "QQmlContext.setContextObject(QObject)");

extern "C" {static PyObject *meth_QQmlContext_setContextObject(PyObject *, PyObject *);}
static PyObject *meth_QQmlContext_setContextObject(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QObject* a0;
        QQmlContext *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QQmlContext, &sipCpp, sipType_QObject, &a0))
        {
            sipCpp->setContextObject(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlContext, sipName_setContextObject, doc_QQmlContext_setContextObject);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlContext_contextProperty, "QQmlContext.contextProperty(str) -> QVariant");

extern "C" {static PyObject *meth_QQmlContext_contextProperty(PyObject *, PyObject *);}
static PyObject *meth_QQmlContext_contextProperty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QQmlContext *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QQmlContext, &sipCpp, sipType_QString,&a0, &a0State))
        {
            QVariant*sipRes;

            sipRes = new QVariant(sipCpp->contextProperty(*a0));
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlContext, sipName_contextProperty, doc_QQmlContext_contextProperty);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlContext_setContextProperty, "QQmlContext.setContextProperty(str, QObject)\n"
    "QQmlContext.setContextProperty(str, QVariant)");

extern "C" {static PyObject *meth_QQmlContext_setContextProperty(PyObject *, PyObject *);}
static PyObject *meth_QQmlContext_setContextProperty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QObject* a1;
        QQmlContext *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J8", &sipSelf, sipType_QQmlContext, &sipCpp, sipType_QString,&a0, &a0State, sipType_QObject, &a1))
        {
            sipCpp->setContextProperty(*a0,a1);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        const QVariant* a1;
        int a1State = 0;
        QQmlContext *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QQmlContext, &sipCpp, sipType_QString,&a0, &a0State, sipType_QVariant, &a1, &a1State))
        {
            sipCpp->setContextProperty(*a0,*a1);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QVariant *>(a1),sipType_QVariant,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlContext, sipName_setContextProperty, doc_QQmlContext_setContextProperty);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlContext_nameForObject, "QQmlContext.nameForObject(QObject) -> str");

extern "C" {static PyObject *meth_QQmlContext_nameForObject(PyObject *, PyObject *);}
static PyObject *meth_QQmlContext_nameForObject(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QObject* a0;
        const QQmlContext *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QQmlContext, &sipCpp, sipType_QObject, &a0))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->nameForObject(a0));

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlContext, sipName_nameForObject, doc_QQmlContext_nameForObject);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlContext_resolvedUrl, "QQmlContext.resolvedUrl(QUrl) -> QUrl");

extern "C" {static PyObject *meth_QQmlContext_resolvedUrl(PyObject *, PyObject *);}
static PyObject *meth_QQmlContext_resolvedUrl(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QUrl* a0;
        QQmlContext *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QQmlContext, &sipCpp, sipType_QUrl, &a0))
        {
            QUrl*sipRes;

            sipRes = new QUrl(sipCpp->resolvedUrl(*a0));

            return sipConvertFromNewType(sipRes,sipType_QUrl,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlContext, sipName_resolvedUrl, doc_QQmlContext_resolvedUrl);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlContext_setBaseUrl, "QQmlContext.setBaseUrl(QUrl)");

extern "C" {static PyObject *meth_QQmlContext_setBaseUrl(PyObject *, PyObject *);}
static PyObject *meth_QQmlContext_setBaseUrl(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QUrl* a0;
        QQmlContext *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QQmlContext, &sipCpp, sipType_QUrl, &a0))
        {
            sipCpp->setBaseUrl(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlContext, sipName_setBaseUrl, doc_QQmlContext_setBaseUrl);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlContext_baseUrl, "QQmlContext.baseUrl() -> QUrl");

extern "C" {static PyObject *meth_QQmlContext_baseUrl(PyObject *, PyObject *);}
static PyObject *meth_QQmlContext_baseUrl(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlContext *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlContext, &sipCpp))
        {
            QUrl*sipRes;

            sipRes = new QUrl(sipCpp->baseUrl());

            return sipConvertFromNewType(sipRes,sipType_QUrl,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlContext, sipName_baseUrl, doc_QQmlContext_baseUrl);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QQmlContext(void *, const sipTypeDef *);}
static void *cast_QQmlContext(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QQmlContext)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QQmlContext *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QQmlContext(void *, int);}
static void release_QQmlContext(void *sipCppV,int)
{
    QQmlContext *sipCpp = reinterpret_cast<QQmlContext *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QQmlContext(sipSimpleWrapper *);}
static void dealloc_QQmlContext(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQQmlContext *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QQmlContext(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QQmlContext(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QQmlContext(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQQmlContext *sipCpp = 0;

    {
        QQmlEngine* a0;
        QObject* a1 = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J8|JH", sipType_QQmlEngine, &a0, sipType_QObject, &a1, sipOwner))
        {
            sipCpp = new sipQQmlContext(a0,a1);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        QQmlContext* a0;
        QObject* a1 = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J8|JH", sipType_QQmlContext, &a0, sipType_QObject, &a1, sipOwner))
        {
            sipCpp = new sipQQmlContext(a0,a1);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QQmlContext[] = {{162, 0, 1}};


static PyMethodDef methods_QQmlContext[] = {
    {SIP_MLNAME_CAST(sipName_baseUrl), meth_QQmlContext_baseUrl, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlContext_baseUrl)},
    {SIP_MLNAME_CAST(sipName_childEvent), (PyCFunction)meth_QQmlContext_childEvent, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_connectNotify), (PyCFunction)meth_QQmlContext_connectNotify, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_contextObject), meth_QQmlContext_contextObject, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlContext_contextObject)},
    {SIP_MLNAME_CAST(sipName_contextProperty), meth_QQmlContext_contextProperty, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlContext_contextProperty)},
    {SIP_MLNAME_CAST(sipName_customEvent), (PyCFunction)meth_QQmlContext_customEvent, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_disconnectNotify), (PyCFunction)meth_QQmlContext_disconnectNotify, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_engine), meth_QQmlContext_engine, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlContext_engine)},
    {SIP_MLNAME_CAST(sipName_isSignalConnected), (PyCFunction)meth_QQmlContext_isSignalConnected, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QQmlContext_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlContext_isValid)},
    {SIP_MLNAME_CAST(sipName_nameForObject), meth_QQmlContext_nameForObject, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlContext_nameForObject)},
    {SIP_MLNAME_CAST(sipName_parentContext), meth_QQmlContext_parentContext, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlContext_parentContext)},
    {SIP_MLNAME_CAST(sipName_receivers), (PyCFunction)meth_QQmlContext_receivers, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_resolvedUrl), meth_QQmlContext_resolvedUrl, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlContext_resolvedUrl)},
    {SIP_MLNAME_CAST(sipName_sender), (PyCFunction)meth_QQmlContext_sender, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_senderSignalIndex), (PyCFunction)meth_QQmlContext_senderSignalIndex, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_setBaseUrl), meth_QQmlContext_setBaseUrl, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlContext_setBaseUrl)},
    {SIP_MLNAME_CAST(sipName_setContextObject), meth_QQmlContext_setContextObject, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlContext_setContextObject)},
    {SIP_MLNAME_CAST(sipName_setContextProperty), meth_QQmlContext_setContextProperty, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlContext_setContextProperty)},
    {SIP_MLNAME_CAST(sipName_timerEvent), (PyCFunction)meth_QQmlContext_timerEvent, METH_VARARGS|METH_KEYWORDS, NULL}
};

PyDoc_STRVAR(doc_QQmlContext, "\1QQmlContext(QQmlEngine, QObject parent=None)\n"
    "QQmlContext(QQmlContext, QObject parent=None)");


pyqt5ClassTypeDef sipTypeDef_QtQml_QQmlContext = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QQmlContext,
        {0}
    },
    {
        sipNameNr_QQmlContext,
        {0, 0, 1},
        20, methods_QQmlContext,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QQmlContext,
    -1,
    -1,
    supers_QQmlContext,
    0,
    init_type_QQmlContext,
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
    dealloc_QQmlContext,
    0,
    0,
    0,
    release_QQmlContext,
    cast_QQmlContext,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QQmlContext::staticMetaObject,
    0,
    0,
    0
};