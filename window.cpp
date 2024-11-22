#include "window.h"

#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>

Window::Window(QWidget *parent) :
    QWidget(parent),
    num1("")
{
    // Set up the layout for the main window
    QVBoxLayout *layout = new QVBoxLayout(this);

    // Create and configure the label
    displayNum = new QLabel("");
    displayNum->setAlignment(Qt::AlignCenter);

    // Add the label to the layout
    layout->addWidget(displayNum);

    // Create and configure button 1
    button_1 = new QPushButton("1");
    button_1->setCheckable(true);
    connect(button_1, &QPushButton::clicked, this, &Window::slotButtonClicked);

    // Create and configure button 2
    button_2 = new QPushButton("2");
    button_2->setCheckable(true);
    connect(button_2, &QPushButton::clicked, this, &Window::slotButtonClicked);

    button_plus = new QPushButton("3");
    button_plus->setCheckable(true);
    connect(button_plus, &QPushButton::clicked, this, &Window::slotButtonClicked);

    // Add buttons to the layout
    layout->addWidget(button_1);
    layout->addWidget(button_2);

    // Set the layout for the main window
    setLayout(layout);

    // Optional: Set a fixed size for the window
    setFixedSize(200, 100);
}

void Window::slotButtonClicked()
{
    // Use sender() to determine which button was clicked
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if (button) {
        // Append button text to num1 and update the label
        num1.append(button->text());
        displayNum->setText(num1);
    }
}
