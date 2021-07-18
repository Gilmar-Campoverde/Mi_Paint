#ifndef PRINCIPAL_H
#define PRINCIPAL_H
#include <QMainWindow>
#include <QImage>
#include <QPainter>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QDebug>
#include <QInputDialog>
#include <QColorDialog>
#include <QFileDialog>
#include <QMessageBox>
#include <QDialog>
#include <QAbstractButton>
#include <QIcon>
#include <QPixmap>

#define DEFAULT_ANCHO 2

#include <QDir>

QT_BEGIN_NAMESPACE
namespace Ui { class Principal; }
QT_END_NAMESPACE

class Principal : public QMainWindow
{
    Q_OBJECT

public:
    Principal(QWidget *parent = nullptr);
    ~Principal();
protected:
    void paintEvent(QPaintEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
private slots:

    void on_actionGuardar_triggered();
    void on_actionSalir_triggered();
    void on_actionNuevo_triggered();
    void on_actionColor_triggered();
    void on_actionAncho_triggered();
    void on_actionRectangulos_triggered();
    void on_actionLibre_triggered();
    void on_actionLineas_triggered();
    void on_actionCircunferencia_triggered();

private:
    Ui::Principal *ui;
    QImage *m_imagen;       //Es la imagen sobre la cual se va a dibujar
    QPainter *m_painter;    //El objeto painter
    QPoint m_ptInicial;
    QPoint m_ptFinal;
    int m_ancho;
    int m_opcion;
    QColor m_color;
    QPen pincel;
    bool m_toogle = false;
};
#endif // PRINCIPAL_H
