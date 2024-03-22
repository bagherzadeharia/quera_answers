fun main(){
    val amount: Int = readln().toInt()
    var echo: String = "W"
    for (i: Int in 1..amount step 1){
        echo += "o"
    }
    echo += "w!"
    print(echo)
}