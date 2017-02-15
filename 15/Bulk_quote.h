#include "Quote.h"

class Bulk_quote : public Quote { // Bulk_quote�̳���Quote
public:
    Bulk_quote() = default;
    Bulk_quote(const std::string &, double, std::size_t, double);

    // ��������������ڲ����������¶�����麯������������
    double net_price(std::size_t) const override;
private:
    std::size_t min_qty = 0; // ʹ���ۿ����ߵ���͹�����
    double discount = 0.0;   // ��С����ʾ���ۿ۶�
};