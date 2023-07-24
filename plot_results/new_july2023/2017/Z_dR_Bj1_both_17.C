void Z_dR_Bj1_both_17()
{
//=========Macro generated from canvas: Z_dR_Bj1_both_17/Z_dR_Bj1_both_17
//=========  (Mon Jul 24 10:12:20 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_both_17 = new TCanvas("Z_dR_Bj1_both_17", "Z_dR_Bj1_both_17",0,0,600,600);
   Z_dR_Bj1_both_17->SetHighLightColor(2);
   Z_dR_Bj1_both_17->Range(0,0,1,1);
   Z_dR_Bj1_both_17->SetFillColor(0);
   Z_dR_Bj1_both_17->SetFillStyle(4000);
   Z_dR_Bj1_both_17->SetBorderMode(0);
   Z_dR_Bj1_both_17->SetBorderSize(2);
   Z_dR_Bj1_both_17->SetFrameFillStyle(1000);
   Z_dR_Bj1_both_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-779.7636,6.314516,778993.8);
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
   st->SetMaximum(667634.7);
   
   TH1F *st_stack_246 = new TH1F("st_stack_246","",30,0,6);
   st_stack_246->SetMinimum(0.01);
   st_stack_246->SetMaximum(701016.5);
   st_stack_246->SetDirectory(0);
   st_stack_246->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_246->SetLineColor(ci);
   st_stack_246->GetXaxis()->SetRange(1,30);
   st_stack_246->GetXaxis()->SetLabelFont(42);
   st_stack_246->GetXaxis()->SetLabelSize(0.035);
   st_stack_246->GetXaxis()->SetTitleSize(0.035);
   st_stack_246->GetXaxis()->SetTitleFont(42);
   st_stack_246->GetYaxis()->SetTitle("Events/0.2");
   st_stack_246->GetYaxis()->SetLabelFont(42);
   st_stack_246->GetYaxis()->SetLabelSize(0.05);
   st_stack_246->GetYaxis()->SetTitleSize(0.057);
   st_stack_246->GetYaxis()->SetTitleOffset(1.2);
   st_stack_246->GetYaxis()->SetTitleFont(42);
   st_stack_246->GetZaxis()->SetLabelFont(42);
   st_stack_246->GetZaxis()->SetLabelSize(0.035);
   st_stack_246->GetZaxis()->SetTitleSize(0.035);
   st_stack_246->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_246);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(1,73819.7);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(2,272463.2);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(3,221996);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(4,157705.8);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(5,118788.5);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(6,85422.58);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(7,69673.17);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(8,60040.07);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(9,50747.49);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(10,51965.36);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(11,52076.53);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(12,36551.11);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(13,59632.81);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(14,31693.18);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(15,26588.86);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(16,23301.31);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(17,17639.03);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(18,17920.5);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(19,11991.29);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(20,26061.74);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(21,12214.58);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(22,8640.786);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(23,5469.385);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(24,5860.467);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(25,4011.142);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(26,2562.698);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(27,3285.223);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(28,1230.017);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(29,798.8246);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(30,471.9983);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(31,579.1984);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(1,1908.551);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(2,5414.033);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(3,5157.005);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(4,5145.227);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(5,4633.196);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(6,3821.515);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(7,3380.599);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(8,2902.142);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(9,2915.606);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(10,3420.392);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(11,14662.98);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(12,2773.688);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(13,20523.39);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(14,2257.489);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(15,2338.671);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(16,1980.731);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(17,1432.756);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(18,2129.79);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(19,1020.87);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(20,14481.42);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(21,1685.4);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(22,969.2454);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(23,650.0287);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(24,778.2758);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(25,632.577);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(26,384.69);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(27,672.3471);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(28,269.4649);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(29,260.6831);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(30,253.0373);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(31,257.5441);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetEntries(166831);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(1,323.189);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(2,1695.308);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(3,2191.218);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(4,2078.358);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(5,1774.655);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(6,1494.582);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(7,1215.536);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(8,1024.904);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(9,897.9685);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(10,781.8169);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(11,700.3428);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(12,629.3848);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(13,556.838);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(14,493.5478);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(15,424.1908);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(16,372.0855);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(17,310.0006);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(18,246.2138);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(19,193.8038);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(20,164.2974);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(21,131.1395);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(22,99.9379);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(23,83.96647);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(24,62.00213);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(25,42.85669);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(26,30.62152);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(27,20.02658);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(28,14.21959);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(29,8.28285);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(30,7.046874);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(31,12.44923);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(1,7.505789);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(2,16.48498);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(3,18.54262);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(4,18.03082);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(5,16.60676);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(6,15.34738);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(7,13.79172);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(8,12.68025);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(9,11.85239);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(10,11.00676);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(11,10.44803);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(12,9.895851);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(13,9.358541);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(14,8.883645);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(15,8.124343);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(16,7.707114);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(17,7.052376);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(18,6.215335);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(19,5.554001);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(20,5.157905);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(21,4.628949);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(22,4.058569);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(23,3.787147);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(24,3.310522);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(25,2.68529);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(26,2.306744);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(27,1.812021);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(28,1.579431);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(29,1.191389);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(30,1.164326);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(31,1.514964);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetEntries(217888);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_3 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(1,3367.584);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(2,22702.05);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(3,36092.29);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(4,37045.39);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(5,32421.94);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(6,26349.39);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(7,21256.24);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(8,17771.17);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(9,15454.83);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(10,13839.98);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(11,12752.5);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(12,11666.87);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(13,10431.15);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(14,9035.803);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(15,7723.115);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(16,6486.532);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(17,5185.375);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(18,4126.512);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(19,3260.698);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(20,2530.61);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(21,1947.098);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(22,1456.336);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(23,1092.004);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(24,795.7403);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(25,546.293);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(26,377.5351);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(27,248.9046);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(28,156.276);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(29,101.5023);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(30,64.16496);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(31,108.9833);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(1,14.88544);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(2,38.61587);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(3,48.79731);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(4,49.49663);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(5,46.29902);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(6,41.73328);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(7,37.47654);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(8,34.25453);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(9,31.96264);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(10,30.25611);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(11,29.05282);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(12,27.81433);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(13,26.29836);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(14,24.47578);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(15,22.61423);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(16,20.71951);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(17,18.51378);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(18,16.50244);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(19,14.66127);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(20,12.92029);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(21,11.32564);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(22,9.793353);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(23,8.473472);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(24,7.229903);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(25,5.977698);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(26,4.975182);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(27,4.031756);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(28,3.195545);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(29,2.565361);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(30,2.048231);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(31,2.65904);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetEntries(4843140);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Z_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_4 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(1,674.695);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(2,2215.013);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(3,2247.345);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(4,1504.968);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(5,932.4009);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(6,682.5216);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(7,535.5087);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(8,421.9524);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(9,371.5515);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(10,316.5943);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(11,278.7487);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(12,281.6973);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(13,233.2448);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(14,225.0614);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(15,188.167);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(16,171.2576);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(17,131.8956);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(18,108.9581);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(19,99.83112);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(20,94.26012);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(21,74.91425);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(22,62.00416);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(23,49.94654);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(24,35.12876);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(25,34.48629);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(26,22.15029);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(27,18.72667);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(28,9.826797);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(29,10.32061);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(30,1.769094);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(31,8.457954);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(1,8.444432);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(2,26.21843);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(3,29.14795);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(4,26.62833);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(5,20.91021);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(6,19.68466);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(7,15.82007);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(8,14.28493);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(9,14.58512);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(10,11.4529);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(11,10.82867);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(12,12.38982);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(13,10.02195);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(14,9.730639);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(15,9.255744);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(16,8.756873);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(17,7.303587);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(18,5.320947);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(19,6.327115);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(20,5.724724);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(21,5.361204);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(22,4.369884);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(23,3.116919);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(24,2.451194);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(25,3.589097);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(26,1.900727);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(27,3.16741);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(28,1.113889);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(29,3.942255);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(30,0.4772428);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(31,2.945762);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetEntries(99118);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Z_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_5 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(1,423.8498);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(2,1293.35);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(3,1005.825);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(4,662.5201);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(5,540.5576);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(6,384.7442);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(7,294.51);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(8,281.4673);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(9,214.879);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(10,221.5502);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(11,198.0269);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(12,154.5594);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(13,163.5744);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(14,175.745);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(15,136.3645);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(16,106.5522);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(17,102.293);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(18,62.88668);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(19,59.99464);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(20,50.11158);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(21,52.99926);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(22,47.78687);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(23,24.87672);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(24,30.68096);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(25,16.67782);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(26,13.63097);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(27,11.87942);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(28,5.472635);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(29,2.069733);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(30,3.609411);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(31,1.278285);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(1,15.68337);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(2,34.57386);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(3,29.12828);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(4,26.74306);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(5,28.51464);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(6,20.26782);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(7,15.53595);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(8,22.43337);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(9,15.40344);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(10,19.94433);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(11,18.68401);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(12,11.05197);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(13,17.08785);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(14,20.43018);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(15,12.73136);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(16,11.65881);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(17,14.6053);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(18,5.585727);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(19,5.661323);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(20,7.939073);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(21,8.577606);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(22,10.22302);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(23,3.376587);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(24,4.141436);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(25,2.195689);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(26,2.350341);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(27,2.251447);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(28,1.392319);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(29,0.3903071);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(30,1.681131);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(31,0.3422913);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetEntries(45557);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_6 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(1,2.620997);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(2,6.250069);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(3,5.241994);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(4,5.443609);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(5,2.419382);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(6,2.419382);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(7,4.233918);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(8,1.814536);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(9,1.814536);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(10,1.612921);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(11,0.4032303);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(12,2.620997);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(13,1.209691);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(14,0.6048454);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(15,0.2016151);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(17,0.2016151);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(18,0.4032303);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(19,0.4032303);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(20,0.2016151);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(22,0.4032303);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(24,0.2016151);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(26,0.2016151);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(31,0.2016151);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(1,0.7269337);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(2,1.122546);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(3,1.02804);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(4,1.047623);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(5,0.6984153);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(6,0.6984153);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(7,0.9239166);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(8,0.6048454);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(9,0.6048454);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(10,0.5702537);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(11,0.2851269);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(12,0.7269337);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(13,0.4938542);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(14,0.3492077);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(15,0.2016151);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(17,0.2016151);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(18,0.2851269);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(19,0.2851269);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(20,0.2016151);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(22,0.2851269);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(24,0.2016151);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(26,0.2016151);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(31,0.2016151);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetEntries(204);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_7 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(1,6.67612);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(2,21.33456);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(3,22.20535);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(4,10.59471);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(5,6.530987);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(6,2.612395);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(7,2.467262);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(8,2.467262);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(9,2.322129);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(10,0.8707982);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(11,1.596463);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(12,1.306197);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(13,0.5805321);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(14,1.015931);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(15,0.7256652);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(16,1.741596);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(17,0.8707982);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(18,0.5805321);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(19,0.8707982);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(20,0.2902661);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(21,0.7256652);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(22,0.4353991);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(23,0.145133);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(24,0.5805321);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(26,0.2902661);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(27,0.145133);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(1,0.9843401);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(2,1.759645);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(3,1.795197);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(4,1.240017);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(5,0.973582);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(6,0.6157473);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(7,0.5983988);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(8,0.5983988);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(9,0.5805321);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(10,0.3555019);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(11,0.4813518);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(12,0.4353991);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(13,0.2902661);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(14,0.3839859);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(15,0.3245273);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(16,0.5027556);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(17,0.3555019);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(18,0.2902661);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(19,0.3555019);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(20,0.2052491);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(21,0.3245273);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(22,0.2513778);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(23,0.145133);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(24,0.2902661);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(26,0.2052491);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(27,0.145133);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetEntries(620);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_8 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(1,6.723831);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(2,19.4244);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(3,18.49053);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(4,8.404788);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(5,6.537057);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(6,5.789965);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(7,3.175142);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(8,2.054504);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(9,1.680958);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(10,3.175142);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(11,1.494185);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(12,2.614823);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(13,1.867731);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(14,1.494185);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(15,1.867731);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(16,0.9338654);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(17,0.5603192);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(18,1.494185);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(20,0.3735461);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(21,0.1867731);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(22,0.7470923);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(23,0.3735461);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(24,0.1867731);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(29,0.1867731);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(1,1.120638);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(2,1.904719);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(3,1.858369);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(4,1.252912);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(5,1.104964);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(6,1.039908);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(7,0.7700851);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(8,0.6194562);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(9,0.5603192);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(10,0.7700851);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(11,0.528274);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(12,0.6988408);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(13,0.5906283);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(14,0.528274);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(15,0.5906283);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(16,0.4176373);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(17,0.3235004);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(18,0.528274);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(20,0.264137);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(21,0.1867731);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(22,0.3735461);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(23,0.264137);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(24,0.1867731);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(29,0.1867731);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetEntries(481);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_9 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(1,2.259549);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(2,9.865134);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(3,11.71444);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(4,9.836062);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(5,6.516997);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(6,4.086246);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(7,2.921746);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(8,2.301542);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(9,1.930065);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(10,1.721715);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(11,1.626423);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(12,1.458451);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(13,1.345392);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(14,1.125736);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(15,0.9609945);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(16,0.8301701);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(17,0.6379712);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(18,0.5184525);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(19,0.4102397);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(20,0.3860129);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(21,0.331099);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(22,0.2745699);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(23,0.2293466);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(24,0.1550512);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(25,0.1340547);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(26,0.09206166);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(27,0.04845351);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(28,0.03230234);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(29,0.008075584);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(30,0.004845351);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(31,0.004845351);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(1,0.06041055);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(2,0.1262274);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(3,0.1375507);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(4,0.1260412);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(5,0.1025949);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(6,0.08123893);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(7,0.0686947);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(8,0.06096933);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(9,0.05583261);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(10,0.05273301);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(11,0.05125293);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(12,0.0485342);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(13,0.04661508);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(14,0.04264031);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(15,0.03939694);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(16,0.03661723);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(17,0.03209981);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(18,0.0289372);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(19,0.02574073);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(20,0.0249691);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(21,0.02312495);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(22,0.02105855);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(23,0.01924634);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(24,0.01582485);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(25,0.01471442);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(26,0.01219387);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(27,0.008846359);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(28,0.007223022);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(29,0.003611511);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(30,0.002797464);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(31,0.002797464);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetEntries(39482);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Z_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_10 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(1,2.425974);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(2,9.143737);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(3,10.65588);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(4,8.656137);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(5,5.83005);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(6,3.717118);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(7,2.536679);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(8,1.911009);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(9,1.607918);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(10,1.404337);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(11,1.224804);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(12,1.111611);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(13,1.021637);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(14,0.9109323);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(15,0.7421797);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(16,0.6323039);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(17,0.5705247);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(18,0.4900874);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(19,0.4482102);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(20,0.3851871);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(21,0.3445538);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(22,0.2869209);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(23,0.2425559);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(24,0.1952886);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(25,0.1612893);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(26,0.09453462);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(27,0.06841321);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(28,0.03068229);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(29,0.01285339);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(30,0.00746326);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(31,0.005390132);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(1,0.03171547);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(2,0.06157294);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(3,0.06646953);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(4,0.05990873);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(5,0.04916592);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(6,0.03925827);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(7,0.03243103);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(8,0.02814877);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(9,0.02582022);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(10,0.02413035);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(11,0.02253519);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(12,0.02146864);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(13,0.02058147);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(14,0.0194344);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(15,0.01754214);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(16,0.01619164);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(17,0.01538032);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(18,0.01425492);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(19,0.01363229);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(20,0.01263758);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(21,0.01195244);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(22,0.01090709);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(23,0.01002845);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(24,0.008998425);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(25,0.008177694);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(26,0.006260708);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(27,0.005325961);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(28,0.003566744);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(29,0.002308537);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(30,0.001759107);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(31,0.001494954);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetEntries(137175);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Z_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_11 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(1,0.1232596);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(2,0.4314086);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(3,0.3887418);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(4,0.2180747);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(5,0.1374818);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(6,0.06637055);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(7,0.05846929);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(8,0.03160502);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(9,0.03950628);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(10,0.03792603);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(11,0.03002477);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(12,0.03160502);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(13,0.02844452);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(14,0.03002477);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(15,0.01896301);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(16,0.02370377);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(17,0.003160502);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(18,0.009481507);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(19,0.02370377);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(20,0.007901256);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(21,0.006321005);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(22,0.006321005);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(23,0.007901256);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(24,0.006321005);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(25,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(26,0.003160502);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(27,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(29,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(1,0.0139564);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(2,0.02611003);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(3,0.02478527);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(4,0.01856375);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(5,0.0147396);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(6,0.0102412);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(7,0.009612292);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(8,0.007067098);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(9,0.007901256);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(10,0.007741618);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(11,0.006888155);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(12,0.007067098);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(13,0.006704438);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(14,0.006888155);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(15,0.005474151);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(16,0.006120286);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(17,0.002234813);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(18,0.003870809);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(19,0.006120286);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(20,0.003533549);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(21,0.003160502);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(22,0.003160502);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(23,0.003533549);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(24,0.003160502);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(25,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(26,0.002234813);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(27,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(29,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetEntries(1123);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_12 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(1,0.04712648);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(2,0.2223457);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(3,0.2094741);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(4,0.1150135);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(5,0.05397747);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(6,0.03114085);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(7,0.02512028);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(8,0.01972254);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(9,0.02117578);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(10,0.01702366);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(11,0.01432479);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(12,0.01058789);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(13,0.01328676);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(14,0.01204113);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(15,0.008927043);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(16,0.006435775);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(17,0.007681409);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(18,0.005397747);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(19,0.007889015);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(20,0.00622817);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(21,0.003944507);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(22,0.004567324);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(23,0.003944507);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(24,0.002906479);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(25,0.002698874);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(26,0.001245634);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(27,0.001038028);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(28,0.0008304226);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(29,0.0004152113);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(31,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(1,0.003127895);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(2,0.006794131);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(3,0.006594544);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(4,0.004886457);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(5,0.003347541);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(6,0.00254264);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(7,0.002283662);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(8,0.00202349);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(9,0.002096714);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(10,0.001879949);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(11,0.001724502);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(12,0.001482601);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(13,0.001660845);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(14,0.001581078);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(15,0.001361361);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(16,0.001155899);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(17,0.001262816);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(18,0.001058585);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(19,0.001279767);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(20,0.001137103);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(21,0.0009049321);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(22,0.0009737568);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(23,0.0009049321);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(24,0.0007767892);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(25,0.0007485328);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(26,0.0005085279);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(27,0.0004642204);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(28,0.0004152113);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(29,0.0002935987);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(31,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetEntries(4223);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Z_dR_Bj1__491 = new TH1D("VbbHcc_both_Z_dR_Bj1__491","",30,0,6);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(1,26354);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(2,91701);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(3,82620);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(4,60988);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(5,47602);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(6,37606);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(7,30590);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(8,25265);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(9,21505);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(10,18664);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(11,16785);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(12,15453);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(13,13474);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(14,12165);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(15,10788);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(16,9388);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(17,7788);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(18,6577);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(19,5578);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(20,4525);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(21,3781);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(22,3205);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(23,2486);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(24,2052);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(25,1601);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(26,1176);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(27,843);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(28,540);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(29,344);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(30,221);
   VbbHcc_both_Z_dR_Bj1__491->SetBinContent(31,351);
   VbbHcc_both_Z_dR_Bj1__491->SetEntries(562045);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1__491->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1__491->SetLineWidth(2);
   VbbHcc_both_Z_dR_Bj1__491->SetMarkerStyle(20);
   VbbHcc_both_Z_dR_Bj1__491->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR_Bj1__491->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1__491->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1__491->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1__491->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1__491->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1__491->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1__491->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1__491->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1__491->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1__491->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1__491->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1__491->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1__491->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1__491->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1__491->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_fx1491[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_fy1491[30] = {
   78629.89,
   300435.6,
   263601.6,
   199040.3,
   154486.1,
   114352.5,
   92990.37,
   79550.16,
   67696.14,
   67134.15,
   66012.54,
   49292.78,
   71023.68,
   41628.53,
   35065.23,
   30441.9,
   23371.45,
   22468.57,
   15607.78,
   28902.67,
   14422.33,
   10309.01,
   6721.181,
   6785.348,
   4651.755,
   3007.318,
   3585.025,
   1415.875,
   921.2098,
   548.601};
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_fex1491[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_fey1491[30] = {
   1908.708,
   5414.37,
   5157.435,
   5145.636,
   4633.592,
   3821.878,
   3380.908,
   2902.494,
   2915.883,
   3420.621,
   14663.03,
   2773.895,
   20523.42,
   2257.753,
   2338.848,
   1980.908,
   1432.986,
   2129.877,
   1021.026,
   14481.43,
   1685.475,
   969.3672,
   650.1112,
   778.3314,
   632.6249,
   384.7411,
   672.3729,
   269.4944,
   260.7286,
   253.0543};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_Bj1_fx1491,Graph_from_VbbHcc_both_Z_dR_Bj1_fy1491,Graph_from_VbbHcc_both_Z_dR_Bj1_fex1491,Graph_from_VbbHcc_both_Z_dR_Bj1_fey1491);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->SetMinimum(265.992);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->SetMaximum(336405.4);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Z_dR_Bj1","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_Bj1_both_17->cd();
  
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
   
   TH1D *data_mc_ratio__492 = new TH1D("data_mc_ratio__492","",30,0,6);
   data_mc_ratio__492->SetBinContent(1,0.3351652);
   data_mc_ratio__492->SetBinContent(2,0.3052268);
   data_mc_ratio__492->SetBinContent(3,0.3134275);
   data_mc_ratio__492->SetBinContent(4,0.3064103);
   data_mc_ratio__492->SetBinContent(5,0.3081312);
   data_mc_ratio__492->SetBinContent(6,0.3288602);
   data_mc_ratio__492->SetBinContent(7,0.3289588);
   data_mc_ratio__492->SetBinContent(8,0.3175983);
   data_mc_ratio__492->SetBinContent(9,0.3176695);
   data_mc_ratio__492->SetBinContent(10,0.2780105);
   data_mc_ratio__492->SetBinContent(11,0.2542699);
   data_mc_ratio__492->SetBinContent(12,0.3134942);
   data_mc_ratio__492->SetBinContent(13,0.1897114);
   data_mc_ratio__492->SetBinContent(14,0.2922275);
   data_mc_ratio__492->SetBinContent(15,0.3076552);
   data_mc_ratio__492->SetBinContent(16,0.3083907);
   data_mc_ratio__492->SetBinContent(17,0.3332271);
   data_mc_ratio__492->SetBinContent(18,0.29272);
   data_mc_ratio__492->SetBinContent(19,0.3573859);
   data_mc_ratio__492->SetBinContent(20,0.1565599);
   data_mc_ratio__492->SetBinContent(21,0.2621629);
   data_mc_ratio__492->SetBinContent(22,0.3108931);
   data_mc_ratio__492->SetBinContent(23,0.3698755);
   data_mc_ratio__492->SetBinContent(24,0.3024163);
   data_mc_ratio__492->SetBinContent(25,0.3441712);
   data_mc_ratio__492->SetBinContent(26,0.3910461);
   data_mc_ratio__492->SetBinContent(27,0.2351448);
   data_mc_ratio__492->SetBinContent(28,0.3813895);
   data_mc_ratio__492->SetBinContent(29,0.373422);
   data_mc_ratio__492->SetBinContent(30,0.4028429);
   data_mc_ratio__492->SetBinContent(31,0.4939632);
   data_mc_ratio__492->SetBinError(1,0.002064598);
   data_mc_ratio__492->SetBinError(2,0.001007942);
   data_mc_ratio__492->SetBinError(3,0.001090422);
   data_mc_ratio__492->SetBinError(4,0.001240741);
   data_mc_ratio__492->SetBinError(5,0.001412287);
   data_mc_ratio__492->SetBinError(6,0.001695832);
   data_mc_ratio__492->SetBinError(7,0.00188084);
   data_mc_ratio__492->SetBinError(8,0.001998106);
   data_mc_ratio__492->SetBinError(9,0.002166236);
   data_mc_ratio__492->SetBinError(10,0.002034974);
   data_mc_ratio__492->SetBinError(11,0.001962611);
   data_mc_ratio__492->SetBinError(12,0.002521872);
   data_mc_ratio__492->SetBinError(13,0.00163435);
   data_mc_ratio__492->SetBinError(14,0.002649506);
   data_mc_ratio__492->SetBinError(15,0.00296206);
   data_mc_ratio__492->SetBinError(16,0.00318284);
   data_mc_ratio__492->SetBinError(17,0.00377596);
   data_mc_ratio__492->SetBinError(18,0.003609429);
   data_mc_ratio__492->SetBinError(19,0.004785179);
   data_mc_ratio__492->SetBinError(20,0.002327402);
   data_mc_ratio__492->SetBinError(21,0.004263516);
   data_mc_ratio__492->SetBinError(22,0.005491577);
   data_mc_ratio__492->SetBinError(23,0.00741831);
   data_mc_ratio__492->SetBinError(24,0.006676003);
   data_mc_ratio__492->SetBinError(25,0.008601591);
   data_mc_ratio__492->SetBinError(26,0.01140313);
   data_mc_ratio__492->SetBinError(27,0.008098818);
   data_mc_ratio__492->SetBinError(28,0.01641239);
   data_mc_ratio__492->SetBinError(29,0.02013356);
   data_mc_ratio__492->SetBinError(30,0.02709815);
   data_mc_ratio__492->SetBinError(31,0.1809886);
   data_mc_ratio__492->SetMinimum(0.4);
   data_mc_ratio__492->SetMaximum(1.6);
   data_mc_ratio__492->SetEntries(1080.407);
   data_mc_ratio__492->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__492->SetLineColor(ci);
   data_mc_ratio__492->SetLineWidth(2);
   data_mc_ratio__492->SetMarkerStyle(20);
   data_mc_ratio__492->SetMarkerSize(1.2);
   data_mc_ratio__492->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   data_mc_ratio__492->GetXaxis()->SetRange(1,30);
   data_mc_ratio__492->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__492->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__492->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__492->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__492->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__492->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__492->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__492->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__492->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__492->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__492->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__492->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__492->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__492->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__492->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__492->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__492->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1492[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1492[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1492[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1492[30] = {
   0.02427458,
   0.01802173,
   0.01956527,
   0.02585223,
   0.02999358,
   0.03342189,
   0.03635761,
   0.03648634,
   0.04307311,
   0.05095203,
   0.2221249,
   0.05627386,
   0.2889659,
   0.05423571,
   0.06669992,
   0.06507174,
   0.06131354,
   0.09479362,
   0.06541777,
   0.5010412,
   0.1168657,
   0.09403108,
   0.09672574,
   0.1147077,
   0.135997,
   0.1279349,
   0.1875504,
   0.1903377,
   0.2830285,
   0.461272};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1492,Graph_from_mc_statistical_error_fy1492,Graph_from_mc_statistical_error_fex1492,Graph_from_mc_statistical_error_fey1492);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1492 = new TH1F("Graph_Graph_from_mc_statistical_error1492","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1492->SetMinimum(0.3987505);
   Graph_Graph_from_mc_statistical_error1492->SetMaximum(1.601249);
   Graph_Graph_from_mc_statistical_error1492->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1492->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1492->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1492->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1492->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1492->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1492->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1492->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1492->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1492->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1492->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1492->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1492->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1492->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1492->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1492->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1492);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj1_both_17->cd();
   Z_dR_Bj1_both_17->Modified();
   Z_dR_Bj1_both_17->cd();
   Z_dR_Bj1_both_17->SetSelected(Z_dR_Bj1_both_17);
}
