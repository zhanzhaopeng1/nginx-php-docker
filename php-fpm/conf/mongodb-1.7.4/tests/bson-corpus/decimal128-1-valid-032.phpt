--TEST--
Decimal128: Scientific - With Decimal
--DESCRIPTION--
Generated by scripts/convert-bson-corpus-tests.php

DO NOT EDIT THIS FILE
--FILE--
<?php

require_once __DIR__ . '/../utils/tools.php';

$canonicalBson = hex2bin('180000001364006900000000000000000000000000423000');
$canonicalExtJson = '{"d" : {"$numberDecimal" : "1.05E+3"}}';

// Canonical BSON -> Native -> Canonical BSON 
echo bin2hex(fromPHP(toPHP($canonicalBson))), "\n";

// Canonical BSON -> Canonical extJSON 
echo json_canonicalize(toCanonicalExtendedJSON($canonicalBson)), "\n";

// Canonical extJSON -> Canonical BSON 
echo bin2hex(fromJSON($canonicalExtJson)), "\n";

?>
===DONE===
<?php exit(0); ?>
--EXPECT--
180000001364006900000000000000000000000000423000
{"d":{"$numberDecimal":"1.05E+3"}}
180000001364006900000000000000000000000000423000
===DONE===