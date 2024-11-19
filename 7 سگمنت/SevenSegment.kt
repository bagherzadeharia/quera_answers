fun main() {
    val sevenSegment = mapOf(
        0 to 6,
        1 to 2,
        2 to 5,
        3 to 5,
        4 to 4,
        5 to 5,
        6 to 6,
        7 to 3,
        8 to 7,
        9 to 6
    )

    val num = readLine()!!

    var flag = false
    var leftPart = ""
    var rightPart = ""

    for (char in num) {
        if (char == 'e') {
            flag = true
        } else if (flag) {
            rightPart += char
        } else {
            leftPart += char
        }
    }

    if (leftPart.contains('.')) {
        val dotIndex = leftPart.indexOf('.')
        val decimalPlaces = leftPart.length - dotIndex - 1
        rightPart = (rightPart.toInt() - decimalPlaces).toString()
    }

    var ans = 0
    if (rightPart != "0") {
        ans += rightPart.toInt() * sevenSegment[0]!!
    }

    for (char in leftPart) {
        if (char != '.') {
            ans += sevenSegment[char.digitToInt()]!!
        }
    }

    print(ans)
}
