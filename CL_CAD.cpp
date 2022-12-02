#include "CL_CAD.h"

void NS_Composants::CL_CAD::setSQL(String^ rq_sql)
{
	if (rq_sql == "" || rq_sql == "Rien")
	{
		this->rq_sql = "Rien";
	}
	else
	{
		this->rq_sql = rq_sql;
	}
}

NS_Composants::CL_CAD::CL_CAD(void)
{
	this->rq_sql = "Rien";
	this->cnx = "Data Source=HP_SENY\\SQLEXPRESS;Initial Catalog=POO;Integrated Security=True;Connect Timeout=30;Encrypt=False;TrustServerCertificate=False;ApplicationIntent=ReadWrite;MultiSubnetFailover=False";
	this->CNX = gcnew System::Data::SqlClient::SqlConnection(this->cnx);
	this->CMD = gcnew System::Data::SqlClient::SqlCommand(this->rq_sql, this->CNX);
	this->CMD->CommandType = System::Data::CommandType::Text;
}

void NS_Composants::CL_CAD::actionRows(String^ rq_sql)
{
	this->setSQL(rq_sql);
	this->CMD->CommandText = this->rq_sql;
	this->CNX->Open();
	this->CMD->ExecuteNonQuery();
	this->CNX->Close();
}

DataSet^ NS_Composants::CL_CAD::getRows(String^ rq_sql, String^ dataTableName)
{
	this->setSQL(rq_sql);
	this->DA = gcnew System::Data::SqlClient::SqlDataAdapter(this->CMD);
	this->CMD->CommandText = this->rq_sql;
	this->DS = gcnew System::Data::DataSet();
	this->DA->Fill(this->DS, dataTableName);
	return this->DS;
}