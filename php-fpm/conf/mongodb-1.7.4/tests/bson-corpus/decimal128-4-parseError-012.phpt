--TEST--
Decimal128: [dqbsr533] negatives (Rounded & Inexact)
--DESCRIPTION--
Generated by scripts/convert-bson-corpus-tests.php

DO NOT EDIT THIS FILE
--FILE--
<?php

require_once __DIR__ . '/../utils/tools.php';

throws(function() {
    new MongoDB\BSON\Decimal128('-1.11111111111111111111111111111234550');
}, 'MongoDB\Driver\Exception\InvalidArgumentException');

?>
===DONE===
<?php exit(0); ?>
--EXPECT--
OK: Got MongoDB\Driver\Exception\InvalidArgumentException
===DONE===