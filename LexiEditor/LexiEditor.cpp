#include "LexiEditor.h"
#include <QFont>
#include <QPushButton>
#include <QWidget>
#include <QPainter>
#include "Items/character.h"

LexiEditor::LexiEditor(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	QFont font = QFont("Times", 18, QFont::Bold);

	m_glyphs.push_back(new Character('S', font));
	m_glyphs.push_back(new Character('e', font));
	m_glyphs.push_back(new Character('r', font));
	m_glyphs.push_back(new Character('g', font));
	m_glyphs.push_back(new Character('e', font));
	m_glyphs.push_back(new Character(' ', font));
	m_glyphs.push_back(new Character('7', font));
	m_glyphs.push_back(new Character('8', font));
}

void LexiEditor::paintEvent(QPaintEvent * /* event */)
{
	QPainter painter(this);

	int currentLeft = 10;
	for (Glyph* glyph : m_glyphs) {
		glyph->Draw(currentLeft, 40, painter);
		currentLeft += glyph->GetBound().width;
	}
}
