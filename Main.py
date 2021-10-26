
def FactorialDiff(iNo):

    if iNo < 0:
        iNo = -iNo

    iEven = 1
    iOdd = 1

    while iNo > 0:

        if iNo%2 == 0:
            iEven *= iNo
        else:
            iOdd *= iNo

        iNo -= 1

    return (iEven-iOdd)

def main():
    iValue = int(input("Enter Number\n"))
    iRet = FactorialDiff(iValue)

    print(iRet)

if __name__ == "__main__":
    main()