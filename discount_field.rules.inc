<?php

/**
 * Implementation of hook_rules_action_info()
 */
function discount_field_rules_action_info(){
  return array(
    'discount_field_calculate' => array( // This is the name of the callback function
      'label' => t('Caculate price per amount'),
      'group' => t('Commerce Discount per amount'),
      'parameter' => array(
       'line_item' => array(
          'type' => 'commerce_line_item',
          'label' => t('Line Item'),
          'description' => t('The line item on which to apply the per amount discount.'),
          'wrapped' => true, // This is nice, it will be wrapped for us
          'save' => true,    // And saved too!
        ),
      /*'commerce_order' => array(
        'type' => 'commerce_order',
        'label' => t('The order to recalculate'),
         ),*/
      ),
    
    ),
  );
}

