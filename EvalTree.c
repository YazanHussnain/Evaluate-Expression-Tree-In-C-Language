double Process(char Oper_ator, double Operand1, double Operand2){
    if (Oper_ator == '/')
        return Operand1 / Operand2;
    else if (Oper_ator == '*')
        return Operand1 * Operand2;
    else if (Oper_ator == '+')
        return Operand1 + Operand2;
    else if (Oper_ator == '-')
        return Operand1 - Operand2;
    else if (Oper_ator == '^')
        return pow(Operand1, Operand2);
    return 0;
}

double evalExpressionTree(SearchTree T)
{
    double Right_Value;
    double Left_Value;
    double result;
    if (T == NULL)
    {
        return 0;
    }
    if ((T->Left == NULL) && (T->Right == NULL))
    {
        return (double)(T->Element - '0');
    }
    Left_Value = evalExpressionTree(T->Left);
    Right_Value = evalExpressionTree(T->Right);

    result = Process(T->Element, Left_Value, Right_Value);

    return result;
}
