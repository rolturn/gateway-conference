<?php
class domain_tax_filter_multiple extends views_handler_filter {
  function query() {
    $domain = domain_get_domain();
    $this->ensure_my_table();
    $this->query->add_table('domain_tax');
    $allowed_tids = domain_tax_get_allowed_tids($domain['domain_id']);
    $this->query->add_where($this->options['group'], 'tid', $allowed_tids, 'IN');
  }
}
