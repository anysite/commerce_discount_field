<?php
function discount_field_default_rules_configuration() {
  $configs = array();
  $rule = '{ "wood_price_per_caculate_price by discount field" : {
    "LABEL" : "caculate price per field",
    "PLUGIN" : "reaction rule",
    "OWNER" : "rules",
    "REQUIRES" : [ "discount_field", "commerce_product_reference" ],
    "ON" : { "commerce_product_calculate_sell_price" : [] },
    "DO" : [
      { "discount_field_calculate" : { "line_item" : [ "commerce-line-item" ] } }
    ]
  }
}';
  $configs['wood_price_per_caculate_price'] = rules_import($rule);
  return $configs;
}