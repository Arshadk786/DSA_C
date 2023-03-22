import mysql.connector
def store():
    
    mydb = mysql.connector.connect(host="localhost", user="root", password="@rshadK786",
                                   database="currencyconverter")
    cursor = mydb.cursor()

    query = "INSERT INTO conversion(Amount,From_Currency,To_Currency,Converted_Amount) VALUES(%s,%s,%s,%s)"
    vals = ("28","INR","USD","46")
    cursor.execute(query, vals)
    mydb.commit()
    
store()