<?php
function discount_field_default_rules_configuration() {
  $configs = array();
  $rule = '{ "discount_field_caculate_price" : {
    "LABEL" : "caculate price per disocunt field",
    "PLUGIN" : "reaction rule",
    "OWNER" : "rules",
    "REQUIRES" : [ "discount_field", "entity" ],
    "ON" : { "commerce_line_item_insert" : [], "commerce_line_item_update" : [] },
    "DO" : [
      { "discount_field_calculate" : { "line_item" : [ "commerce-line-item" ] } }
    ]
  }
}';
  $configs['discount_field_caculate_price'] = rules_import($rule);
  return $configs;
}