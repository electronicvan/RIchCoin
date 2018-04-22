from jsonrpc import ServiceProxy
<<<<<<< HEAD
access = ServiceProxy("http://127.0.0.1:7343")
=======
access = ServiceProxy("http://127.0.0.1:20103")
>>>>>>> 9e838dcb5d959712eba2265497e273c660893440
pwd = raw_input("Enter wallet passphrase: ")
access.walletpassphrase(pwd, 60)