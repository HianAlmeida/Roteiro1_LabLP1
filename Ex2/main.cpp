
#include"invoice.cpp"
#include<iostream>
int main (){
    Invoice produto1 = Invoice(70, "Teclado", 5, 25.00);
    Invoice produto2;

    cout <<"Numero do item: "<<produto1.getNumeroItem()<<endl;
    cout<<"Descricao do item: "<<produto1.getDescricao()<<endl;
    cout<<"Quantidade comprada: "<<produto1.getQuantidade()<<endl;
    cout<<"Preco unitario: "<<produto1.getPreco()<<endl;
    cout<<"Valor da fatura: "<<produto1.getInvoiceAmount()<<endl;

    produto2.setDescricao("mouse");
    produto2.setQuantidade(3);
    produto2.setNumeroItem(1);
    produto2.setPreco(90);

    cout <<"Numero do item: "<<produto2.getNumeroItem()<<endl;
    cout<<"Descricao do item: "<<produto2.getDescricao()<<endl;
    cout<<"Quantidade comprada: "<<produto2.getQuantidade()<<endl;
    cout<<"Preco unitario: "<<produto2.getPreco()<<endl;
    cout<<"Valor da fatura: "<<produto2.getInvoiceAmount()<<endl;

    return 0;


}
