#include "shared_funcs.h"

void clearLayout(QLayout *layout){
    QLayoutItem *item;
    while((item = layout->takeAt(0))) {
        item->widget()->hide();
        delete item;
    }
}
