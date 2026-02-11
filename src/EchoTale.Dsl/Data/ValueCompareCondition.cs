using EchoTale.Dsl.Types.Validation;

namespace EchoTale.Dsl.Data;

public sealed record ValueCompareCondition(string Variable, ComparisonOperator Operator, string Expected) : RuleCondition;
