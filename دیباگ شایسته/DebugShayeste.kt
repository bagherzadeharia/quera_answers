fun main(){
    val mainStr: String = "queraisagreatplatformforlearninghowtocodequeraisagreatplatformforlearninghowtocodequeraisthegreatest"
    val index: Int = readln().toInt()
    var answerString: String = ""
    for(i: Int in 0 until index){
        answerString += mainStr[i]
    }
    print(answerString)
}
