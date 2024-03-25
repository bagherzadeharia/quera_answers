fun main(){
    var n: Int = readln().toInt()
    var powOf2: Int = 1
    do{
        powOf2 *= 2
    }while(n > powOf2)
    if(n == powOf2){
        powOf2 *= 2
    }
    print(powOf2)
}
