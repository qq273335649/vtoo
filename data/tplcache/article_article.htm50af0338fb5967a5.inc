<?php
$z[0]=Array("field","",253,272);
$z[0][4]['name']="title";
$z[1]=Array("global","",273,299);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",339,361);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",400,451);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",992,1027);
$z[4][4]['filename']="head.htm";
$z[5]=Array("channel","\n<li><a href=\"[field:typeurl/]\" title=\"[field:typename/]\" >[field:typename/]</a></li>\n",1997,2220);
$z[5][4]['type']="son";
$z[5][4]['row']="8";
$z[5][4]['currentstyle']="<li><a href='~typelink~' title='~typename~' class='a'>~typename~</a></li>";
$z[6]=Array("field","",2301,2320);
$z[6][4]['name']="title";
$z[7]=Array("field","",2343,2399);
$z[7][4]['name']="pubdate";
$z[7][4]['function']="MyDate('Y-m-d H:i',@me)";
$z[8]=Array("field","",2438,2457);
$z[8][4]['name']="autor";
$z[9]=Array("field","",2524,2551);
$z[9][4]['name']="phpurl";
$z[10]=Array("field","",2575,2598);
$z[10][4]['name']="id";
$z[11]=Array("field","",2603,2627);
$z[11][4]['name']="mid";
$z[12]=Array("field","",3378,3396);
$z[12][4]['name']="body";
$z[13]=Array("prenext","preg_match_all('/<a.*?(?: |\\\\t|\\\\r|\\\\n)?href=[\\'\"]?(.+?)[\\'\"]?(?:(?: |\\\\t|\\\\r|\\\\n)+.*?)?>(.+?)<\\/a.*?>/sim', @me, \$strResult, PREG_PATTERN_ORDER);@me=\$strResult[1][0];",5140,5359);
$z[13][4]['get']="pro";
$z[13][4]['runphp']="yes";
$z[14]=Array("prenext","preg_match_all('/<a.*?(?: |\\\\t|\\\\r|\\\\n)?href=[\\'\"]?(.+?)[\\'\"]?(?:(?: |\\\\t|\\\\r|\\\\n)+.*?)?>(.+?)<\\/a.*?>/sim', @me, \$strResult, PREG_PATTERN_ORDER);@me=\$strResult[1][0];",5431,5651);
$z[14][4]['get']="next";
$z[14][4]['runphp']="yes";
$z[15]=Array("include","",6544,6581);
$z[15][4]['filename']="footer.htm";

?>