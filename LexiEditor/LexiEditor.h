#pragma once

#include <QtWidgets/QMainWindow>
#include "glyph.h"
#include "ui_LexiEditor.h"

class LexiEditor : public QMainWindow
{
	Q_OBJECT

public:
	LexiEditor(QWidget *parent = Q_NULLPTR);
protected:
	void paintEvent(QPaintEvent *event);
private:
	Ui::LexiEditorClass ui;
	QVector<Glyph*> m_glyphs;
};
