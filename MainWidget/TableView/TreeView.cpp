#include <QMouseEvent>
#include <QHeaderView>
#include "TreeView.h"
#include "ProjectorDelegate.h"

TreeView::TreeView(QWidget *parent):Base(parent)
{
	header()->setStyleSheet(R"(QHeaderView::section {
    background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,
                                      stop:0 #616161, stop: 0.5 #505050,
                                      stop: 0.6 #434343, stop:1 #656565);
    color: white;
    padding-left: 4px;
    border: 1px solid #6c6c6c;
})");

//	setHeaderHidden(true);
	setStyleSheet(R"(QToolTip {
    border: 1px solid white;
    padding: 2px;
    border-radius: 3px;
    opacity: 200;
}

QSpinBox {
    border: 1px solid #7a7a7a;
	selection-background-color: darkgray;
}
QDoubleSpinBox {
    border: 1px solid #7a7a7a;
	selection-background-color: darkgray;
}
QLineEdit {
    border: 1px solid #7a7a7a;
    selection-background-color: darkgray;
}


QTreeView::item {
     border: 1px solid #7A7A7A;
	color: #ffffff
}

QTreeView::item:hover {
    border: 1px solid #7A7A7A;
}

QTreeView::item:selected {
    border: 1px solid #7A7A7A;
}



)");
}

TreeView::~TreeView()
{
}

void TreeView::onSetData()
{
	setCurrentIndex(QModelIndex());
}

void TreeView::mousePressEvent(QMouseEvent *event)
{
	QTreeView::mousePressEvent(event);
	if (!m_bInDoubleClick)
	{
		m_bInDoubleClick = true;
		QTreeView::mouseDoubleClickEvent(event);
		m_bInDoubleClick = false;
	}
	else
	{
		QTreeView::mousePressEvent(event);
	}
}

void TreeView::mouseDoubleClickEvent(QMouseEvent *event)
{
	//DO NOTHING, SO THAT BASE CLASS DO NOTHING
}

void TreeView::focusOutEvent(QFocusEvent *event)
{
	QTreeView::focusOutEvent(event);
}

