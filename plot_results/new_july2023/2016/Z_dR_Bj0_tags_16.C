void Z_dR_Bj0_tags_16()
{
//=========Macro generated from canvas: Z_dR_Bj0_tags_16/Z_dR_Bj0_tags_16
//=========  (Fri Jul 14 13:38:02 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_tags_16 = new TCanvas("Z_dR_Bj0_tags_16", "Z_dR_Bj0_tags_16",0,0,600,600);
   Z_dR_Bj0_tags_16->SetHighLightColor(2);
   Z_dR_Bj0_tags_16->Range(0,0,1,1);
   Z_dR_Bj0_tags_16->SetFillColor(0);
   Z_dR_Bj0_tags_16->SetFillStyle(4000);
   Z_dR_Bj0_tags_16->SetBorderMode(0);
   Z_dR_Bj0_tags_16->SetBorderSize(2);
   Z_dR_Bj0_tags_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_tags_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1322.545,6.314516,1321233);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(1132359);
   
   TH1F *st_stack_49 = new TH1F("st_stack_49","",30,0,6);
   st_stack_49->SetMinimum(0.01);
   st_stack_49->SetMaximum(1188977);
   st_stack_49->SetDirectory(0);
   st_stack_49->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_49->SetLineColor(ci);
   st_stack_49->GetXaxis()->SetRange(1,30);
   st_stack_49->GetXaxis()->SetLabelFont(42);
   st_stack_49->GetXaxis()->SetLabelSize(0.035);
   st_stack_49->GetXaxis()->SetTitleSize(0.035);
   st_stack_49->GetXaxis()->SetTitleFont(42);
   st_stack_49->GetYaxis()->SetTitle("Events/0.2");
   st_stack_49->GetYaxis()->SetLabelFont(42);
   st_stack_49->GetYaxis()->SetLabelSize(0.05);
   st_stack_49->GetYaxis()->SetTitleSize(0.057);
   st_stack_49->GetYaxis()->SetTitleOffset(1.2);
   st_stack_49->GetYaxis()->SetTitleFont(42);
   st_stack_49->GetZaxis()->SetLabelFont(42);
   st_stack_49->GetZaxis()->SetLabelSize(0.035);
   st_stack_49->GetZaxis()->SetTitleSize(0.035);
   st_stack_49->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_49);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(1,94712.78);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(2,468835);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(3,443727.6);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(4,293300.9);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(5,217659.2);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(6,174606.1);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(7,129481.5);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(8,111789.4);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(9,89638.26);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(10,79994.21);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(11,81487.75);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(12,65009.55);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(13,80299);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(14,53779.02);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(15,75452.55);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(16,35243.03);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(17,32861.81);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(18,31268.02);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(19,24233.44);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(20,21523.89);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(21,23073.1);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(22,14646.39);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(23,12357.56);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(24,11306.73);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(25,7590.99);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(26,5217.648);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(27,2721.859);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(28,1842.068);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(29,2523.484);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(30,1218.068);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(31,1176.595);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(1,2941.874);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(2,9589.166);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(3,23249.36);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(4,9466.18);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(5,8211.269);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(6,7811.976);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(7,6230.116);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(8,5856.989);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(9,5018.798);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(10,4844.343);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(11,5730.071);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(12,4037.268);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(13,20797.21);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(14,3967.291);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(15,20863.4);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(16,2638.292);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(17,2645.081);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(18,3214.939);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(19,2029.97);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(20,1932.563);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(21,2720.46);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(22,1572.486);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(23,1470.838);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(24,1877.124);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(25,1648.404);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(26,790.3035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(27,492.5714);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(28,403.7704);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(29,1470.961);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(30,472.1356);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(31,394.438);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetEntries(174298);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(1,472.4226);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(2,2561.174);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(3,3581.108);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(4,3454.886);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(5,2946.179);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(6,2403.905);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(7,2047.256);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(8,1683.515);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(9,1445.225);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(10,1287.76);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(11,1155.678);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(12,1051.426);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(13,941.3645);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(14,834.1009);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(15,728.3215);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(16,633.1495);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(17,509.544);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(18,426.6798);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(19,347.5762);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(20,284.5427);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(21,232.578);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(22,172.2648);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(23,130.3159);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(24,98.65535);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(25,71.00469);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(26,53.46606);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(27,35.83309);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(28,26.37039);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(29,20.18588);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(30,10.88967);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(31,18.28944);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(1,9.005696);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(2,19.75012);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(3,23.16637);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(4,22.70037);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(5,20.94376);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(6,18.89991);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(7,17.58798);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(8,15.82342);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(9,14.64376);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(10,13.88941);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(11,13.03541);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(12,12.46195);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(13,11.76151);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(14,11.16313);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(15,10.51357);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(16,9.810663);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(17,8.815843);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(18,8.105418);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(19,7.331417);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(20,6.663274);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(21,6.166305);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(22,5.220437);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(23,4.653637);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(24,3.970133);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(25,3.41915);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(26,3.026546);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(27,2.47635);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(28,2.205402);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(29,1.965652);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(30,1.382838);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(31,1.769886);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetEntries(391454);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_3 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(1,4245.766);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(2,32355.25);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(3,54356.03);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(4,57570.87);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(5,50008.09);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(6,39936.11);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(7,32290.29);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(8,27084.29);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(9,23629.04);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(10,21496.65);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(11,19794.33);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(12,18107.05);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(13,16246.84);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(14,14089.73);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(15,11905.51);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(16,9982.238);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(17,8027.076);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(18,6436.537);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(19,5091.743);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(20,3946.768);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(21,3011.907);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(22,2241.347);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(23,1636.182);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(24,1165.229);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(25,805.7321);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(26,557.5625);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(27,371.6386);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(28,253.4188);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(29,159.4668);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(30,98.02855);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(31,176.3859);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(1,16.23546);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(2,44.82766);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(3,58.17948);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(4,59.94092);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(5,55.87457);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(6,49.9223);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(7,44.87488);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(8,41.09883);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(9,38.39801);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(10,36.63184);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(11,35.17337);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(12,33.64433);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(13,31.87897);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(14,29.68078);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(15,27.26925);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(16,24.97206);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(17,22.38287);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(18,20.04277);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(19,17.81791);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(20,15.68612);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(21,13.69446);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(22,11.80689);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(23,10.0785);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(24,8.504775);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(25,7.06558);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(26,5.87771);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(27,4.798986);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(28,3.95653);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(29,3.142363);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(30,2.463303);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(31,3.307485);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetEntries(7663533);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_4 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(1,1015.318);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(2,3535.336);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(3,3788.802);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(4,2726.172);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(5,1665.273);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(6,1140.928);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(7,864.6682);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(8,659.8012);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(9,573.1776);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(10,499.8723);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(11,459.0303);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(12,424.6539);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(13,388.1033);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(14,351.7146);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(15,322.8503);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(16,282.046);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(17,236.4278);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(18,216.5609);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(19,167.5254);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(20,146.0578);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(21,140.0872);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(22,111.2401);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(23,84.87787);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(24,69.42032);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(25,56.19346);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(26,56.1733);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(27,36.26287);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(28,20.50016);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(29,9.291596);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(30,4.367978);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(31,11.36812);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(1,11.94391);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(2,35.44474);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(3,44.7407);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(4,46.39583);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(5,36.72495);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(6,29.17469);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(7,24.60189);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(8,20.18105);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(9,19.56365);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(10,17.05115);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(11,15.80913);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(12,14.28334);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(13,14.81647);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(14,14.54291);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(15,13.94232);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(16,13.17765);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(17,11.2562);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(18,10.7919);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(19,8.595597);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(20,6.656604);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(21,9.837121);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(22,7.17323);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(23,5.770102);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(24,4.077026);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(25,4.602989);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(26,5.92719);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(27,3.387174);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(28,3.051152);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(29,1.163879);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(30,0.8448642);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(31,3.893432);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetEntries(163132);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_5 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(1,653.4262);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(2,2177.217);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(3,1753.465);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(4,1268.205);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(5,928.5386);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(6,703.256);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(7,549.3005);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(8,474.3364);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(9,438.2447);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(10,366.6731);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(11,364.8998);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(12,308.1916);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(13,329.8312);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(14,249.601);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(15,218.5271);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(16,213.6771);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(17,152.3087);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(18,143.9276);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(19,105.484);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(20,94.55233);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(21,79.39872);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(22,59.04614);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(23,72.78425);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(24,45.8493);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(25,34.38905);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(26,21.74572);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(27,23.34168);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(28,11.04885);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(29,7.50796);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(30,4.950099);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(31,9.578563);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(1,18.29136);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(2,51.29582);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(3,48.70449);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(4,42.81467);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(5,37.01368);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(6,30.26561);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(7,26.90917);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(8,26.67693);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(9,27.20604);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(10,21.51333);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(11,23.1323);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(12,21.24917);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(13,24.03511);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(14,18.21168);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(15,15.40904);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(16,16.54636);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(17,11.87034);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(18,14.32326);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(19,10.64502);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(20,10.58643);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(21,10.21012);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(22,5.101901);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(23,11.75979);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(24,7.379958);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(25,3.650217);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(26,2.665182);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(27,6.50811);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(28,1.431759);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(29,1.36121);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(30,1.247582);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(31,2.609008);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetEntries(113083);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_6 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(1,3.350856);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(2,8.420099);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(3,8.677857);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(4,7.131308);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(5,5.327001);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(6,4.639646);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(7,3.952291);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(8,3.608614);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(9,2.319823);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(10,2.921259);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(11,2.319823);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(12,2.491662);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(13,1.288791);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(14,0.9451131);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(15,1.804307);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(16,1.288791);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(17,0.687355);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(18,0.7732744);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(19,0.687355);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(20,0.4295969);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(21,0.5155163);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(22,0.7732744);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(23,0.3436775);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(24,0.3436775);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(25,0.08591938);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(26,0.1718388);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(27,0.2577581);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(28,0.08591938);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(30,0.08591938);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(31,0.08591938);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(1,0.5365663);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(2,0.8505584);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(3,0.863479);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(4,0.7827628);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(5,0.6765298);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(6,0.6313759);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(7,0.5827336);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(8,0.5568212);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(9,0.4464502);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(10,0.5009917);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(11,0.4464502);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(12,0.46269);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(13,0.3327643);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(14,0.2849623);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(15,0.393732);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(16,0.3327643);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(17,0.2430167);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(18,0.2577581);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(19,0.2430167);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(20,0.1921216);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(21,0.2104586);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(22,0.2577581);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(23,0.1718388);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(24,0.1718388);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(25,0.08591938);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(26,0.1215083);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(27,0.1488167);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(28,0.08591938);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(30,0.08591938);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(31,0.08591938);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetEntries(766);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_7 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(1,9.111116);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(2,36.38075);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(3,35.87104);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(4,21.02565);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(5,11.65968);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(6,6.498838);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(7,4.905985);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(8,4.268844);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(9,2.867134);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(10,3.121991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(11,3.058277);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(12,2.038851);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(13,3.058277);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(14,1.783995);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(15,2.038851);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(16,1.911423);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(17,1.720281);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(18,1.656566);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(19,0.7645692);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(20,1.146854);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(21,0.637141);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(22,0.8919973);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(23,0.8282832);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(24,0.637141);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(25,0.3185705);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(26,0.1911423);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(27,0.1911423);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(28,0.1274282);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(29,0.0637141);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(30,0.1911423);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(31,0.0637141);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(1,0.7619098);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(2,1.522487);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(3,1.511784);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(4,1.157424);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(5,0.8619083);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(6,0.6434808);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(7,0.5590889);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(8,0.5215224);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(9,0.4274071);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(10,0.4459987);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(11,0.4414242);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(12,0.3604214);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(13,0.4414242);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(14,0.3371433);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(15,0.3604214);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(16,0.3489765);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(17,0.3310682);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(18,0.3248794);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(19,0.2207121);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(20,0.270316);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(21,0.2014817);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(22,0.2383963);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(23,0.2297244);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(24,0.2014817);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(25,0.142469);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(26,0.1103561);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(27,0.1103561);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(28,0.09010534);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(29,0.0637141);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(30,0.1103561);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(31,0.0637141);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetEntries(2496);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_8 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(1,7.892883);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(2,31.57153);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(3,29.95708);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(4,22.42296);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(5,11.48056);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(6,6.816581);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(7,4.305209);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(8,5.202127);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(9,3.228907);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(10,4.125825);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(11,3.767058);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(12,2.870139);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(13,2.690755);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(14,1.793837);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(15,2.331988);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(16,1.614453);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(17,1.793837);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(18,1.076302);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(19,0.5381511);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(20,1.255686);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(21,1.255686);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(22,0.3587674);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(23,0.3587674);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(24,0.5381511);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(27,0.1793837);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(28,0.1793837);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(1,1.189897);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(2,2.379794);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(3,2.318148);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(4,2.005571);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(5,1.43507);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(6,1.105795);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(7,0.8787971);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(8,0.9660108);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(9,0.7610606);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(10,0.860294);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(11,0.8220394);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(12,0.7175348);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(13,0.6947501);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(14,0.5672611);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(15,0.6467771);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(16,0.5381511);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(17,0.5672611);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(18,0.4393985);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(19,0.3107017);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(20,0.4746047);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(21,0.4746047);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(22,0.2536869);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(23,0.2536869);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(24,0.3107017);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(27,0.1793837);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(28,0.1793837);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetEntries(834);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_9 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(1,2.753257);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(2,13.54007);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(3,17.10027);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(4,14.38839);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(5,9.806065);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(6,6.463809);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(7,4.419557);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(8,3.380879);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(9,2.845676);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(10,2.671873);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(11,2.440136);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(12,2.291162);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(13,2.027699);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(14,1.702164);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(15,1.401458);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(16,1.154547);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(17,0.9600536);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(18,0.8345294);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(19,0.6014129);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(20,0.5062352);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(21,0.4634742);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(22,0.3655377);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(23,0.373814);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(24,0.2620836);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(25,0.2165638);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(26,0.1448357);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(27,0.07724569);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(28,0.04000223);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(29,0.01793204);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(30,0.01379387);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(31,0.0110351);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(1,0.06162636);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(2,0.1366638);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(3,0.1535835);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(4,0.14088);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(5,0.1163029);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(6,0.09442509);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(7,0.07807869);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(8,0.06829013);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(9,0.06265213);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(10,0.06070872);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(11,0.05801632);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(12,0.05621744);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(13,0.05288651);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(14,0.04845558);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(15,0.04396764);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(16,0.03990699);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(17,0.03639074);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(18,0.03392844);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(19,0.02880245);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(20,0.02642526);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(21,0.02528459);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(22,0.0224548);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(23,0.02270758);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(24,0.01901354);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(25,0.01728367);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(26,0.01413451);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(27,0.01032239);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(28,0.007428228);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(29,0.004973452);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(30,0.004362006);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(31,0.003901497);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetEntries(67621);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_10 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(1,1.677446);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(2,7.098624);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(3,8.586664);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(4,6.914946);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(5,4.643143);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(6,2.962116);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(7,1.931301);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(8,1.48983);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(9,1.25173);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(10,1.058027);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(11,0.9989489);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(12,0.8815098);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(13,0.7766022);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(14,0.7325625);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(15,0.5986533);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(16,0.519167);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(17,0.4475578);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(18,0.3927767);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(19,0.3379956);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(20,0.2900174);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(21,0.2681766);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(22,0.2144697);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(23,0.2058766);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(24,0.1435765);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(25,0.1138587);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(26,0.08270867);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(27,0.04762015);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(28,0.02470519);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(29,0.01288966);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(30,0.00751897);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(31,0.003580462);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(1,0.02450721);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(2,0.05041464);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(3,0.05544748);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(4,0.04975812);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(5,0.04077327);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(6,0.03256646);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(7,0.02629629);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(8,0.02309606);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(9,0.02117019);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(10,0.01946336);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(11,0.01891216);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(12,0.01776573);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(13,0.01667512);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(14,0.01619541);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(15,0.01464054);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(16,0.01363399);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(17,0.01265885);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(18,0.01185884);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(19,0.01100082);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(20,0.01019017);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(21,0.00979896);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(22,0.008762994);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(23,0.008585646);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(24,0.00716987);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(25,0.006384879);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(26,0.005441831);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(27,0.00412919);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(28,0.002974155);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(29,0.002148277);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(30,0.001640774);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(31,0.001132242);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetEntries(124885);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_11 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(1,0.1586304);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(2,0.5005064);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(3,0.5169164);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(4,0.3418759);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(5,0.1859805);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(6,0.09299025);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(7,0.09025525);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(8,0.07931522);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(9,0.05196514);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(10,0.04649513);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(11,0.0382901);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(12,0.06017016);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(13,0.05743516);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(14,0.02735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(15,0.02188006);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(16,0.03008508);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(17,0.0382901);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(18,0.01094003);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(19,0.01094003);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(20,0.01914505);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(21,0.008205022);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(22,0.008205022);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(23,0.005470015);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(24,0.008205022);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(25,0.01094003);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(26,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(27,0.005470015);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(1,0.0208292);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(2,0.0369985);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(3,0.03760014);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(4,0.03057831);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(5,0.02255345);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(6,0.0159477);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(7,0.01571142);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(8,0.01472847);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(9,0.01192162);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(10,0.01127672);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(11,0.01023346);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(12,0.01282832);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(13,0.01253338);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(14,0.008648853);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(15,0.007735769);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(16,0.009070994);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(17,0.01023346);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(18,0.005470015);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(19,0.005470015);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(20,0.00723615);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(21,0.004737172);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(22,0.004737172);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(23,0.003867885);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(24,0.004737172);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(25,0.005470015);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(26,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(27,0.003867885);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetEntries(888);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_12 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(1,0.04322917);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(2,0.2482998);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(3,0.2611613);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(4,0.151838);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(5,0.07181044);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(6,0.05251808);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(7,0.03894198);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(8,0.03286846);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(9,0.02965307);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(10,0.02036415);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(11,0.02107868);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(12,0.01929236);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(13,0.01536243);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(14,0.01607696);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(15,0.01178977);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(16,0.0146479);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(17,0.006788051);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(18,0.007859849);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(19,0.007502583);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(20,0.007145317);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(21,0.005001722);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(22,0.005001722);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(23,0.002500861);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(24,0.003929924);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(25,0.002858127);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(26,0.001786329);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(27,0.0003572658);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(29,0.001071798);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(1,0.003929924);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(2,0.009418547);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(3,0.009659401);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(4,0.007365224);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(5,0.005065118);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(6,0.004331618);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(7,0.003729965);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(8,0.003426774);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(9,0.003254847);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(10,0.002697298);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(11,0.002744211);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(12,0.002625357);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(13,0.002342749);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(14,0.002396612);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(15,0.002052336);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(16,0.002287618);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(17,0.001557286);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(18,0.001675725);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(19,0.001637198);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(20,0.001597741);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(21,0.001336766);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(22,0.001336766);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(23,0.0009452366);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(24,0.001184917);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(25,0.0010105);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(26,0.0007988707);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(27,0.0003572658);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(29,0.0006188026);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetEntries(3081);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0__97 = new TH1D("VbbHcc_tags_Z_dR_Bj0__97","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0__97->SetBinContent(1,69438);
   VbbHcc_tags_Z_dR_Bj0__97->SetBinContent(2,242527);
   VbbHcc_tags_Z_dR_Bj0__97->SetBinContent(3,218921);
   VbbHcc_tags_Z_dR_Bj0__97->SetBinContent(4,162198);
   VbbHcc_tags_Z_dR_Bj0__97->SetBinContent(5,125472);
   VbbHcc_tags_Z_dR_Bj0__97->SetBinContent(6,99088);
   VbbHcc_tags_Z_dR_Bj0__97->SetBinContent(7,79961);
   VbbHcc_tags_Z_dR_Bj0__97->SetBinContent(8,66535);
   VbbHcc_tags_Z_dR_Bj0__97->SetBinContent(9,57274);
   VbbHcc_tags_Z_dR_Bj0__97->SetBinContent(10,50526);
   VbbHcc_tags_Z_dR_Bj0__97->SetBinContent(11,46214);
   VbbHcc_tags_Z_dR_Bj0__97->SetBinContent(12,42293);
   VbbHcc_tags_Z_dR_Bj0__97->SetBinContent(13,38358);
   VbbHcc_tags_Z_dR_Bj0__97->SetBinContent(14,34153);
   VbbHcc_tags_Z_dR_Bj0__97->SetBinContent(15,30590);
   VbbHcc_tags_Z_dR_Bj0__97->SetBinContent(16,26631);
   VbbHcc_tags_Z_dR_Bj0__97->SetBinContent(17,22196);
   VbbHcc_tags_Z_dR_Bj0__97->SetBinContent(18,18549);
   VbbHcc_tags_Z_dR_Bj0__97->SetBinContent(19,15847);
   VbbHcc_tags_Z_dR_Bj0__97->SetBinContent(20,13035);
   VbbHcc_tags_Z_dR_Bj0__97->SetBinContent(21,11250);
   VbbHcc_tags_Z_dR_Bj0__97->SetBinContent(22,9159);
   VbbHcc_tags_Z_dR_Bj0__97->SetBinContent(23,7525);
   VbbHcc_tags_Z_dR_Bj0__97->SetBinContent(24,6070);
   VbbHcc_tags_Z_dR_Bj0__97->SetBinContent(25,4704);
   VbbHcc_tags_Z_dR_Bj0__97->SetBinContent(26,3683);
   VbbHcc_tags_Z_dR_Bj0__97->SetBinContent(27,2414);
   VbbHcc_tags_Z_dR_Bj0__97->SetBinContent(28,1606);
   VbbHcc_tags_Z_dR_Bj0__97->SetBinContent(29,1018);
   VbbHcc_tags_Z_dR_Bj0__97->SetBinContent(30,553);
   VbbHcc_tags_Z_dR_Bj0__97->SetBinContent(31,887);
   VbbHcc_tags_Z_dR_Bj0__97->SetEntries(1508675);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0__97->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0__97->SetLineWidth(2);
   VbbHcc_tags_Z_dR_Bj0__97->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR_Bj0__97->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR_Bj0__97->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0__97->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__97->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__97->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__97->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__97->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__97->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__97->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__97->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0__97->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__97->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__97->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__97->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__97->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__97->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fx1097[30] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9};
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fy1097[30] = {
   101124.7,
   509561.7,
   507308,
   358393.5,
   273250.5,
   218817.9,
   165252.7,
   141709.4,
   115736.5,
   103659.1,
   103274.3,
   84911.52,
   98215.06,
   69311.16,
   88635.96,
   46360.67,
   41792.82,
   38496.48,
   29948.71,
   25999.47,
   26540.22,
   17232.9,
   14283.84,
   12687.82,
   8559.058,
   5907.191,
   3189.694,
   2153.863,
   2720.032,
   1336.603};
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fex1097[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fey1097[30] = {
   2942.014,
   9589.495,
   23249.54,
   9466.608,
   8211.652,
   7812.271,
   6230.41,
   5857.25,
   5019.078,
   4844.579,
   5730.263,
   4037.509,
   20797.25,
   3967.487,
   20863.43,
   2638.514,
   2645.241,
   3215.062,
   2030.107,
   1932.679,
   2720.538,
   1572.564,
   1470.938,
   1877.166,
   1648.434,
   790.3579,
   492.6557,
   403.8099,
   1470.966,
   472.1465};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_Z_dR_Bj0_fx1097,Graph_from_VbbHcc_tags_Z_dR_Bj0_fy1097,Graph_from_VbbHcc_tags_Z_dR_Bj0_fex1097,Graph_from_VbbHcc_tags_Z_dR_Bj0_fey1097);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->SetMinimum(778.0105);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->SetMaximum(583526.8);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_12","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_11","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_10","ggZHbb","F");

   ci = TColor::GetColor("#0000cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_9","ZHbb","F");

   ci = TColor::GetColor("#cccc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_8","ZZ","F");

   ci = TColor::GetColor("#33ff99");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_7","WZ","F");

   ci = TColor::GetColor("#3399ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_6","WW","F");

   ci = TColor::GetColor("#9933ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_5","W + jets","F");

   ci = TColor::GetColor("#ff99cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_4","Z + jets","F");

   ci = TColor::GetColor("#00cccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_3","t#bar{t}","F");

   ci = TColor::GetColor("#cc00cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_2","Single top","F");

   ci = TColor::GetColor("#660066");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_dR_Bj0","MC unc. (stat.)","fl");

   ci = TColor::GetColor("#333333");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_Bj0_tags_16->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9193524,-0.2774193,6.314516,1.658065);
   bottomPad->SetFillColor(0);
   bottomPad->SetBorderMode(0);
   bottomPad->SetBorderSize(2);
   bottomPad->SetTickx(1);
   bottomPad->SetTicky(1);
   bottomPad->SetLeftMargin(0.12709);
   bottomPad->SetRightMargin(0.0434783);
   bottomPad->SetTopMargin(0.03);
   bottomPad->SetBottomMargin(0.35);
   bottomPad->SetFrameBorderMode(0);
   bottomPad->SetFrameBorderMode(0);
   
   TH1D *data_mc_ratio__98 = new TH1D("data_mc_ratio__98","",30,0,6);
   data_mc_ratio__98->SetBinContent(1,0.6866572);
   data_mc_ratio__98->SetBinContent(2,0.4759522);
   data_mc_ratio__98->SetBinContent(3,0.4315347);
   data_mc_ratio__98->SetBinContent(4,0.4525696);
   data_mc_ratio__98->SetBinContent(5,0.4591831);
   data_mc_ratio__98->SetBinContent(6,0.4528333);
   data_mc_ratio__98->SetBinContent(7,0.4838711);
   data_mc_ratio__98->SetBinContent(8,0.4695173);
   data_mc_ratio__98->SetBinContent(9,0.4948653);
   data_mc_ratio__98->SetBinContent(10,0.4874245);
   data_mc_ratio__98->SetBinContent(11,0.4474878);
   data_mc_ratio__98->SetBinContent(12,0.4980832);
   data_mc_ratio__98->SetBinContent(13,0.3905511);
   data_mc_ratio__98->SetBinContent(14,0.4927489);
   data_mc_ratio__98->SetBinContent(15,0.3451195);
   data_mc_ratio__98->SetBinContent(16,0.5744308);
   data_mc_ratio__98->SetBinContent(17,0.531096);
   data_mc_ratio__98->SetBinContent(18,0.4818363);
   data_mc_ratio__98->SetBinContent(19,0.5291379);
   data_mc_ratio__98->SetBinContent(20,0.5013564);
   data_mc_ratio__98->SetBinContent(21,0.4238849);
   data_mc_ratio__98->SetBinContent(22,0.5314833);
   data_mc_ratio__98->SetBinContent(23,0.5268191);
   data_mc_ratio__98->SetBinContent(24,0.4784114);
   data_mc_ratio__98->SetBinContent(25,0.5495932);
   data_mc_ratio__98->SetBinContent(26,0.6234774);
   data_mc_ratio__98->SetBinContent(27,0.7568125);
   data_mc_ratio__98->SetBinContent(28,0.745637);
   data_mc_ratio__98->SetBinContent(29,0.3742603);
   data_mc_ratio__98->SetBinContent(30,0.4137355);
   data_mc_ratio__98->SetBinContent(31,0.637038);
   data_mc_ratio__98->SetBinError(1,0.002605802);
   data_mc_ratio__98->SetBinError(2,0.0009664586);
   data_mc_ratio__98->SetBinError(3,0.0009222996);
   data_mc_ratio__98->SetBinError(4,0.001123732);
   data_mc_ratio__98->SetBinError(5,0.001296321);
   data_mc_ratio__98->SetBinError(6,0.001438559);
   data_mc_ratio__98->SetBinError(7,0.00171116);
   data_mc_ratio__98->SetBinError(8,0.001820231);
   data_mc_ratio__98->SetBinError(9,0.002067799);
   data_mc_ratio__98->SetBinError(10,0.002168452);
   data_mc_ratio__98->SetBinError(11,0.002081586);
   data_mc_ratio__98->SetBinError(12,0.002421964);
   data_mc_ratio__98->SetBinError(13,0.001994114);
   data_mc_ratio__98->SetBinError(14,0.002666314);
   data_mc_ratio__98->SetBinError(15,0.001973239);
   data_mc_ratio__98->SetBinError(16,0.003520011);
   data_mc_ratio__98->SetBinError(17,0.003564804);
   data_mc_ratio__98->SetBinError(18,0.003537849);
   data_mc_ratio__98->SetBinError(19,0.004203348);
   data_mc_ratio__98->SetBinError(20,0.004391279);
   data_mc_ratio__98->SetBinError(21,0.003996425);
   data_mc_ratio__98->SetBinError(22,0.005553485);
   data_mc_ratio__98->SetBinError(23,0.00607307);
   data_mc_ratio__98->SetBinError(24,0.006140549);
   data_mc_ratio__98->SetBinError(25,0.008013232);
   data_mc_ratio__98->SetBinError(26,0.01027353);
   data_mc_ratio__98->SetBinError(27,0.01540351);
   data_mc_ratio__98->SetBinError(28,0.01860607);
   data_mc_ratio__98->SetBinError(29,0.01173005);
   data_mc_ratio__98->SetBinError(30,0.01759382);
   data_mc_ratio__98->SetBinError(31,0.181746);
   data_mc_ratio__98->SetMinimum(0.4);
   data_mc_ratio__98->SetMaximum(1.6);
   data_mc_ratio__98->SetEntries(1498.232);
   data_mc_ratio__98->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__98->SetLineColor(ci);
   data_mc_ratio__98->SetLineWidth(2);
   data_mc_ratio__98->SetMarkerStyle(20);
   data_mc_ratio__98->SetMarkerSize(1.2);
   data_mc_ratio__98->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   data_mc_ratio__98->GetXaxis()->SetRange(1,30);
   data_mc_ratio__98->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__98->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__98->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__98->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__98->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__98->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__98->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__98->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__98->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__98->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__98->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__98->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__98->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__98->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__98->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__98->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__98->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1098[30] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9};
   Double_t Graph_from_mc_statistical_error_fy1098[30] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_from_mc_statistical_error_fex1098[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_mc_statistical_error_fey1098[30] = {
   0.02909294,
   0.0188191,
   0.04582924,
   0.02641401,
   0.03005174,
   0.03570217,
   0.03770232,
   0.04133284,
   0.04336641,
   0.04673567,
   0.05548584,
   0.0475496,
   0.2117522,
   0.05724167,
   0.2353833,
   0.05691276,
   0.06329414,
   0.08351574,
   0.06778613,
   0.07433531,
   0.1025062,
   0.09125356,
   0.1029792,
   0.1479502,
   0.1925952,
   0.1337959,
   0.1544523,
   0.1874817,
   0.5407902,
   0.3532437};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1098,Graph_from_mc_statistical_error_fy1098,Graph_from_mc_statistical_error_fex1098,Graph_from_mc_statistical_error_fey1098);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1098 = new TH1F("Graph_Graph_from_mc_statistical_error1098","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1098->SetMinimum(0.3510518);
   Graph_Graph_from_mc_statistical_error1098->SetMaximum(1.648948);
   Graph_Graph_from_mc_statistical_error1098->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1098->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1098->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1098->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1098->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1098->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1098->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1098->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1098->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1098->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1098->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1098->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1098->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1098->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1098->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1098->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1098);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj0_tags_16->cd();
   Z_dR_Bj0_tags_16->Modified();
   Z_dR_Bj0_tags_16->cd();
   Z_dR_Bj0_tags_16->SetSelected(Z_dR_Bj0_tags_16);
}
