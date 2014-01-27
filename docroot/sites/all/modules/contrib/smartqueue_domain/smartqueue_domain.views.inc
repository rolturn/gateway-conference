<?php

function smartqueue_domain_views_data() {
  $data = array();
  $data['nodequeue_nodes']['in_domian'] = array(
    'title' => t('In Domian'),
    'help' => t('Filter to ensure a node IS or IS NOT in the current Domian'),
    'filter' => array(
    'handler' => 'smartqueue_domain_handler_filter_in_domain',
    'label' => t('In Domain'),
    ),
  );
  return $data;
}
