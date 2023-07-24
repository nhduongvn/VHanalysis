void Z_dR_both_18()
{
//=========Macro generated from canvas: Z_dR_both_18/Z_dR_both_18
//=========  (Mon Jul 24 10:12:09 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_both_18 = new TCanvas("Z_dR_both_18", "Z_dR_both_18",0,0,600,600);
   Z_dR_both_18->SetHighLightColor(2);
   Z_dR_both_18->Range(0,0,1,1);
   Z_dR_both_18->SetFillColor(0);
   Z_dR_both_18->SetFillStyle(4000);
   Z_dR_both_18->SetBorderMode(0);
   Z_dR_both_18->SetBorderSize(2);
   Z_dR_both_18->SetFrameFillStyle(1000);
   Z_dR_both_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-657.201,6.314516,656553.8);
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
   st->SetMaximum(562697.8);
   
   TH1F *st_stack_211 = new TH1F("st_stack_211","",30,0,6);
   st_stack_211->SetMinimum(0.01);
   st_stack_211->SetMaximum(590832.7);
   st_stack_211->SetDirectory(0);
   st_stack_211->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_211->SetLineColor(ci);
   st_stack_211->GetXaxis()->SetRange(1,30);
   st_stack_211->GetXaxis()->SetLabelFont(42);
   st_stack_211->GetXaxis()->SetLabelSize(0.035);
   st_stack_211->GetXaxis()->SetTitleSize(0.035);
   st_stack_211->GetXaxis()->SetTitleFont(42);
   st_stack_211->GetYaxis()->SetTitle("Events/0.2");
   st_stack_211->GetYaxis()->SetLabelFont(42);
   st_stack_211->GetYaxis()->SetLabelSize(0.05);
   st_stack_211->GetYaxis()->SetTitleSize(0.057);
   st_stack_211->GetYaxis()->SetTitleOffset(1.2);
   st_stack_211->GetYaxis()->SetTitleFont(42);
   st_stack_211->GetZaxis()->SetLabelFont(42);
   st_stack_211->GetZaxis()->SetLabelSize(0.035);
   st_stack_211->GetZaxis()->SetTitleSize(0.035);
   st_stack_211->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_211);
   
   
   TH1D *VbbHcc_both_Z_dR_stack_1 = new TH1D("VbbHcc_both_Z_dR_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(2,56.49559);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(3,182073.4);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(4,177378.1);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(5,126664.2);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(6,100491.8);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(7,87207.36);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(8,75282.92);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(9,70353.39);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(10,64280.18);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(11,64741.49);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(12,62194.04);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(13,63451.26);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(14,71749.58);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(15,81107.99);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(16,80872.22);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(17,75392.13);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(18,75346.98);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(19,56980.7);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(20,62247.26);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(21,47845.37);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(22,44522.41);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(23,32675.97);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(24,28106.13);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(25,24432.59);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(26,23057.05);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(27,19139.83);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(28,19269.64);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(29,19907.09);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(30,11857);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(31,11869.33);
   VbbHcc_both_Z_dR_stack_1->SetBinError(2,20.07906);
   VbbHcc_both_Z_dR_stack_1->SetBinError(3,4546.646);
   VbbHcc_both_Z_dR_stack_1->SetBinError(4,5674.416);
   VbbHcc_both_Z_dR_stack_1->SetBinError(5,5283.206);
   VbbHcc_both_Z_dR_stack_1->SetBinError(6,3849.063);
   VbbHcc_both_Z_dR_stack_1->SetBinError(7,3801.372);
   VbbHcc_both_Z_dR_stack_1->SetBinError(8,3708.669);
   VbbHcc_both_Z_dR_stack_1->SetBinError(9,3375.062);
   VbbHcc_both_Z_dR_stack_1->SetBinError(10,3657.27);
   VbbHcc_both_Z_dR_stack_1->SetBinError(11,3821.311);
   VbbHcc_both_Z_dR_stack_1->SetBinError(12,3943.785);
   VbbHcc_both_Z_dR_stack_1->SetBinError(13,3067.576);
   VbbHcc_both_Z_dR_stack_1->SetBinError(14,3695.283);
   VbbHcc_both_Z_dR_stack_1->SetBinError(15,3821.415);
   VbbHcc_both_Z_dR_stack_1->SetBinError(16,4133.562);
   VbbHcc_both_Z_dR_stack_1->SetBinError(17,3900.07);
   VbbHcc_both_Z_dR_stack_1->SetBinError(18,4377.62);
   VbbHcc_both_Z_dR_stack_1->SetBinError(19,2777.768);
   VbbHcc_both_Z_dR_stack_1->SetBinError(20,3762.904);
   VbbHcc_both_Z_dR_stack_1->SetBinError(21,3583.079);
   VbbHcc_both_Z_dR_stack_1->SetBinError(22,3987.547);
   VbbHcc_both_Z_dR_stack_1->SetBinError(23,2303.81);
   VbbHcc_both_Z_dR_stack_1->SetBinError(24,2617.18);
   VbbHcc_both_Z_dR_stack_1->SetBinError(25,2657.838);
   VbbHcc_both_Z_dR_stack_1->SetBinError(26,2117.395);
   VbbHcc_both_Z_dR_stack_1->SetBinError(27,1643.677);
   VbbHcc_both_Z_dR_stack_1->SetBinError(28,1767.28);
   VbbHcc_both_Z_dR_stack_1->SetBinError(29,1733.017);
   VbbHcc_both_Z_dR_stack_1->SetBinError(30,940.5805);
   VbbHcc_both_Z_dR_stack_1->SetBinError(31,2483.499);
   VbbHcc_both_Z_dR_stack_1->SetEntries(164216);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_2 = new TH1D("VbbHcc_both_Z_dR_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(2,0.06390553);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(3,363.9026);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(4,619.5077);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(5,701.366);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(6,777.5386);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(7,858.1916);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(8,926.8138);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(9,1012.566);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(10,1028.07);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(11,1117.643);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(12,1167.14);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(13,1257.555);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(14,1303.174);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(15,1338.734);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(16,1304.355);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(17,1230.616);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(18,1140.987);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(19,997.5683);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(20,915.8333);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(21,782.7825);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(22,630.818);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(23,537.5888);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(24,424.0978);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(25,363.0443);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(26,316.0885);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(27,225.8171);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(28,192.2561);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(29,146.8441);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(30,92.23212);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(31,96.85816);
   VbbHcc_both_Z_dR_stack_2->SetBinError(2,0.06390553);
   VbbHcc_both_Z_dR_stack_2->SetBinError(3,9.951221);
   VbbHcc_both_Z_dR_stack_2->SetBinError(4,11.78624);
   VbbHcc_both_Z_dR_stack_2->SetBinError(5,12.50203);
   VbbHcc_both_Z_dR_stack_2->SetBinError(6,13.60574);
   VbbHcc_both_Z_dR_stack_2->SetBinError(7,13.84385);
   VbbHcc_both_Z_dR_stack_2->SetBinError(8,15.13665);
   VbbHcc_both_Z_dR_stack_2->SetBinError(9,19.9508);
   VbbHcc_both_Z_dR_stack_2->SetBinError(10,15.65512);
   VbbHcc_both_Z_dR_stack_2->SetBinError(11,20.29344);
   VbbHcc_both_Z_dR_stack_2->SetBinError(12,16.20792);
   VbbHcc_both_Z_dR_stack_2->SetBinError(13,16.85055);
   VbbHcc_both_Z_dR_stack_2->SetBinError(14,16.7247);
   VbbHcc_both_Z_dR_stack_2->SetBinError(15,17.48732);
   VbbHcc_both_Z_dR_stack_2->SetBinError(16,17.02769);
   VbbHcc_both_Z_dR_stack_2->SetBinError(17,16.6566);
   VbbHcc_both_Z_dR_stack_2->SetBinError(18,17.28923);
   VbbHcc_both_Z_dR_stack_2->SetBinError(19,14.84746);
   VbbHcc_both_Z_dR_stack_2->SetBinError(20,14.86566);
   VbbHcc_both_Z_dR_stack_2->SetBinError(21,13.27048);
   VbbHcc_both_Z_dR_stack_2->SetBinError(22,12.0251);
   VbbHcc_both_Z_dR_stack_2->SetBinError(23,11.13021);
   VbbHcc_both_Z_dR_stack_2->SetBinError(24,9.772548);
   VbbHcc_both_Z_dR_stack_2->SetBinError(25,9.177407);
   VbbHcc_both_Z_dR_stack_2->SetBinError(26,8.622547);
   VbbHcc_both_Z_dR_stack_2->SetBinError(27,7.441932);
   VbbHcc_both_Z_dR_stack_2->SetBinError(28,7.253161);
   VbbHcc_both_Z_dR_stack_2->SetBinError(29,6.199579);
   VbbHcc_both_Z_dR_stack_2->SetBinError(30,4.425613);
   VbbHcc_both_Z_dR_stack_2->SetBinError(31,4.744016);
   VbbHcc_both_Z_dR_stack_2->SetEntries(233695);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_2,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_3 = new TH1D("VbbHcc_both_Z_dR_stack_3","",30,0,6);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(2,2.572088);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(3,5623.013);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(4,10384.32);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(5,12011.29);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(6,13629.69);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(7,14585.43);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(8,15399.56);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(9,16420.37);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(10,17554.87);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(11,19349.68);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(12,21292.13);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(13,23595.9);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(14,25736.31);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(15,27332.74);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(16,27954.37);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(17,26950.44);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(18,24850.45);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(19,22131.83);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(20,19005.21);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(21,15753.65);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(22,12639.69);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(23,9961.206);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(24,7755.771);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(25,6013.012);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(26,4699.076);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(27,3638.157);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(28,2738.238);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(29,2034.982);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(30,1246.632);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(31,1064.771);
   VbbHcc_both_Z_dR_stack_3->SetBinError(2,0.4355242);
   VbbHcc_both_Z_dR_stack_3->SetBinError(3,21.53663);
   VbbHcc_both_Z_dR_stack_3->SetBinError(4,28.99964);
   VbbHcc_both_Z_dR_stack_3->SetBinError(5,31.70215);
   VbbHcc_both_Z_dR_stack_3->SetBinError(6,34.14183);
   VbbHcc_both_Z_dR_stack_3->SetBinError(7,34.82333);
   VbbHcc_both_Z_dR_stack_3->SetBinError(8,35.75839);
   VbbHcc_both_Z_dR_stack_3->SetBinError(9,36.97368);
   VbbHcc_both_Z_dR_stack_3->SetBinError(10,38.43199);
   VbbHcc_both_Z_dR_stack_3->SetBinError(11,40.26142);
   VbbHcc_both_Z_dR_stack_3->SetBinError(12,42.12354);
   VbbHcc_both_Z_dR_stack_3->SetBinError(13,45.18822);
   VbbHcc_both_Z_dR_stack_3->SetBinError(14,46.36693);
   VbbHcc_both_Z_dR_stack_3->SetBinError(15,47.59595);
   VbbHcc_both_Z_dR_stack_3->SetBinError(16,48.16473);
   VbbHcc_both_Z_dR_stack_3->SetBinError(17,48.61892);
   VbbHcc_both_Z_dR_stack_3->SetBinError(18,46.30942);
   VbbHcc_both_Z_dR_stack_3->SetBinError(19,43.98413);
   VbbHcc_both_Z_dR_stack_3->SetBinError(20,40.25944);
   VbbHcc_both_Z_dR_stack_3->SetBinError(21,36.16892);
   VbbHcc_both_Z_dR_stack_3->SetBinError(22,32.42643);
   VbbHcc_both_Z_dR_stack_3->SetBinError(23,28.87339);
   VbbHcc_both_Z_dR_stack_3->SetBinError(24,24.92502);
   VbbHcc_both_Z_dR_stack_3->SetBinError(25,21.92678);
   VbbHcc_both_Z_dR_stack_3->SetBinError(26,19.76899);
   VbbHcc_both_Z_dR_stack_3->SetBinError(27,17.71876);
   VbbHcc_both_Z_dR_stack_3->SetBinError(28,14.66635);
   VbbHcc_both_Z_dR_stack_3->SetBinError(29,12.66187);
   VbbHcc_both_Z_dR_stack_3->SetBinError(30,10.34468);
   VbbHcc_both_Z_dR_stack_3->SetBinError(31,10.12236);
   VbbHcc_both_Z_dR_stack_3->SetEntries(6104032);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Z_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_3->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_3,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_4 = new TH1D("VbbHcc_both_Z_dR_stack_4","",30,0,6);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(2,0.3234844);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(3,1316.132);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(4,1883.659);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(5,1615.534);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(6,1266.185);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(7,904.1714);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(8,654.4779);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(9,545.2696);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(10,508.3007);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(11,491.5994);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(12,472.9162);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(13,505.9901);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(14,563.5698);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(15,597.869);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(16,612.956);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(17,601.6624);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(18,546.4302);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(19,506.0791);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(20,461.8756);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(21,361.1589);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(22,302.4779);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(23,262.4716);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(24,225.6174);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(25,206.7879);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(26,220.4997);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(27,212.9315);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(28,227.9149);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(29,201.5802);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(30,133.9872);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(31,76.41844);
   VbbHcc_both_Z_dR_stack_4->SetBinError(2,0.1870826);
   VbbHcc_both_Z_dR_stack_4->SetBinError(3,19.94609);
   VbbHcc_both_Z_dR_stack_4->SetBinError(4,23.56421);
   VbbHcc_both_Z_dR_stack_4->SetBinError(5,26.38441);
   VbbHcc_both_Z_dR_stack_4->SetBinError(6,29.27863);
   VbbHcc_both_Z_dR_stack_4->SetBinError(7,22.84605);
   VbbHcc_both_Z_dR_stack_4->SetBinError(8,20.19697);
   VbbHcc_both_Z_dR_stack_4->SetBinError(9,18.49246);
   VbbHcc_both_Z_dR_stack_4->SetBinError(10,19.58696);
   VbbHcc_both_Z_dR_stack_4->SetBinError(11,16.64988);
   VbbHcc_both_Z_dR_stack_4->SetBinError(12,13.69977);
   VbbHcc_both_Z_dR_stack_4->SetBinError(13,15.34256);
   VbbHcc_both_Z_dR_stack_4->SetBinError(14,15.40102);
   VbbHcc_both_Z_dR_stack_4->SetBinError(15,18.76205);
   VbbHcc_both_Z_dR_stack_4->SetBinError(16,17.10516);
   VbbHcc_both_Z_dR_stack_4->SetBinError(17,22.38268);
   VbbHcc_both_Z_dR_stack_4->SetBinError(18,18.23304);
   VbbHcc_both_Z_dR_stack_4->SetBinError(19,17.59088);
   VbbHcc_both_Z_dR_stack_4->SetBinError(20,19.90155);
   VbbHcc_both_Z_dR_stack_4->SetBinError(21,16.08744);
   VbbHcc_both_Z_dR_stack_4->SetBinError(22,10.6966);
   VbbHcc_both_Z_dR_stack_4->SetBinError(23,11.98631);
   VbbHcc_both_Z_dR_stack_4->SetBinError(24,9.476335);
   VbbHcc_both_Z_dR_stack_4->SetBinError(25,10.76079);
   VbbHcc_both_Z_dR_stack_4->SetBinError(26,10.34096);
   VbbHcc_both_Z_dR_stack_4->SetBinError(27,14.3857);
   VbbHcc_both_Z_dR_stack_4->SetBinError(28,12.97607);
   VbbHcc_both_Z_dR_stack_4->SetBinError(29,8.705718);
   VbbHcc_both_Z_dR_stack_4->SetBinError(30,6.295059);
   VbbHcc_both_Z_dR_stack_4->SetBinError(31,4.576929);
   VbbHcc_both_Z_dR_stack_4->SetEntries(94684);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Z_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_4->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_4,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_5 = new TH1D("VbbHcc_both_Z_dR_stack_5","",30,0,6);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(2,0.139138);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(3,906.4597);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(4,857.878);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(5,594.5976);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(6,439.9872);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(7,356.1959);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(8,332.0969);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(9,285.4593);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(10,281.5147);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(11,270.3563);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(12,283.1187);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(13,311.8711);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(14,291.6685);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(15,345.247);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(16,324.1631);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(17,319.0339);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(18,290.5402);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(19,274.092);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(20,239.1999);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(21,189.0886);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(22,164.3162);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(23,165.4317);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(24,121.8775);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(25,96.88968);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(26,107.5607);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(27,113.6913);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(28,87.58857);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(29,118.0639);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(30,78.13835);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(31,35.48916);
   VbbHcc_both_Z_dR_stack_5->SetBinError(2,0.125004);
   VbbHcc_both_Z_dR_stack_5->SetBinError(3,34.80363);
   VbbHcc_both_Z_dR_stack_5->SetBinError(4,32.59244);
   VbbHcc_both_Z_dR_stack_5->SetBinError(5,30.22124);
   VbbHcc_both_Z_dR_stack_5->SetBinError(6,25.32136);
   VbbHcc_both_Z_dR_stack_5->SetBinError(7,20.74277);
   VbbHcc_both_Z_dR_stack_5->SetBinError(8,21.03137);
   VbbHcc_both_Z_dR_stack_5->SetBinError(9,18.9894);
   VbbHcc_both_Z_dR_stack_5->SetBinError(10,21.91157);
   VbbHcc_both_Z_dR_stack_5->SetBinError(11,17.76082);
   VbbHcc_both_Z_dR_stack_5->SetBinError(12,19.6366);
   VbbHcc_both_Z_dR_stack_5->SetBinError(13,23.63631);
   VbbHcc_both_Z_dR_stack_5->SetBinError(14,19.30358);
   VbbHcc_both_Z_dR_stack_5->SetBinError(15,24.04262);
   VbbHcc_both_Z_dR_stack_5->SetBinError(16,21.92916);
   VbbHcc_both_Z_dR_stack_5->SetBinError(17,29.73089);
   VbbHcc_both_Z_dR_stack_5->SetBinError(18,23.32627);
   VbbHcc_both_Z_dR_stack_5->SetBinError(19,27.04512);
   VbbHcc_both_Z_dR_stack_5->SetBinError(20,21.04915);
   VbbHcc_both_Z_dR_stack_5->SetBinError(21,13.3356);
   VbbHcc_both_Z_dR_stack_5->SetBinError(22,12.69522);
   VbbHcc_both_Z_dR_stack_5->SetBinError(23,23.54897);
   VbbHcc_both_Z_dR_stack_5->SetBinError(24,10.53067);
   VbbHcc_both_Z_dR_stack_5->SetBinError(25,8.918483);
   VbbHcc_both_Z_dR_stack_5->SetBinError(26,9.461722);
   VbbHcc_both_Z_dR_stack_5->SetBinError(27,13.76385);
   VbbHcc_both_Z_dR_stack_5->SetBinError(28,9.180957);
   VbbHcc_both_Z_dR_stack_5->SetBinError(29,27.01587);
   VbbHcc_both_Z_dR_stack_5->SetBinError(30,14.23204);
   VbbHcc_both_Z_dR_stack_5->SetBinError(31,4.874625);
   VbbHcc_both_Z_dR_stack_5->SetEntries(40778);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_5->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_5,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_6 = new TH1D("VbbHcc_both_Z_dR_stack_6","",30,0,6);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(3,3.717392);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(4,3.052617);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(5,2.179333);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(6,1.027032);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(7,1.408295);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(8,1.783064);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(9,2.534786);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(10,2.154017);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(11,1.302149);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(12,1.949113);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(13,2.103157);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(14,2.642199);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(15,2.5704);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(16,1.309544);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(17,2.190676);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(18,2.340134);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(19,1.852626);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(20,2.705113);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(21,0.6868056);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(22,1.18256);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(23,0.9154341);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(24,0.7612098);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(25,1.06872);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(26,0.9366801);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(27,0.538866);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(29,0.3105298);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(30,1.139981);
   VbbHcc_both_Z_dR_stack_6->SetBinError(3,1.140289);
   VbbHcc_both_Z_dR_stack_6->SetBinError(4,0.9847495);
   VbbHcc_both_Z_dR_stack_6->SetBinError(5,0.8454296);
   VbbHcc_both_Z_dR_stack_6->SetBinError(6,0.5979102);
   VbbHcc_both_Z_dR_stack_6->SetBinError(7,0.7062588);
   VbbHcc_both_Z_dR_stack_6->SetBinError(8,0.7360318);
   VbbHcc_both_Z_dR_stack_6->SetBinError(9,0.8685573);
   VbbHcc_both_Z_dR_stack_6->SetBinError(10,0.8293592);
   VbbHcc_both_Z_dR_stack_6->SetBinError(11,0.6519672);
   VbbHcc_both_Z_dR_stack_6->SetBinError(12,0.8004002);
   VbbHcc_both_Z_dR_stack_6->SetBinError(13,0.8666908);
   VbbHcc_both_Z_dR_stack_6->SetBinError(14,0.9381974);
   VbbHcc_both_Z_dR_stack_6->SetBinError(15,0.9250932);
   VbbHcc_both_Z_dR_stack_6->SetBinError(16,0.6681786);
   VbbHcc_both_Z_dR_stack_6->SetBinError(17,0.7732058);
   VbbHcc_both_Z_dR_stack_6->SetBinError(18,0.8958007);
   VbbHcc_both_Z_dR_stack_6->SetBinError(19,0.7245303);
   VbbHcc_both_Z_dR_stack_6->SetBinError(20,0.9706015);
   VbbHcc_both_Z_dR_stack_6->SetBinError(21,0.4056959);
   VbbHcc_both_Z_dR_stack_6->SetBinError(22,0.5982393);
   VbbHcc_both_Z_dR_stack_6->SetBinError(23,0.5285942);
   VbbHcc_both_Z_dR_stack_6->SetBinError(24,0.4456288);
   VbbHcc_both_Z_dR_stack_6->SetBinError(25,0.5381366);
   VbbHcc_both_Z_dR_stack_6->SetBinError(26,0.5408014);
   VbbHcc_both_Z_dR_stack_6->SetBinError(27,0.3834035);
   VbbHcc_both_Z_dR_stack_6->SetBinError(29,0.3105298);
   VbbHcc_both_Z_dR_stack_6->SetBinError(30,0.6646432);
   VbbHcc_both_Z_dR_stack_6->SetEntries(150);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_6->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_6,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_7 = new TH1D("VbbHcc_both_Z_dR_stack_7","",30,0,6);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(3,14.31271);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(4,23.11006);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(5,18.60704);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(6,10.36608);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(7,6.478858);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(8,2.988502);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(9,3.358275);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(10,2.016111);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(11,1.767584);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(12,2.699187);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(13,2.64995);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(14,2.634597);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(15,3.358381);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(16,3.114355);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(17,3.524735);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(18,1.927965);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(19,2.852623);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(20,0.6732093);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(21,1.497554);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(22,1.115953);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(23,1.621294);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(24,0.6997464);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(25,0.6742128);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(26,1.209343);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(27,2.605551);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(28,2.355201);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(29,1.485139);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(30,1.313883);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(31,0.2148387);
   VbbHcc_both_Z_dR_stack_7->SetBinError(3,1.9081);
   VbbHcc_both_Z_dR_stack_7->SetBinError(4,2.387216);
   VbbHcc_both_Z_dR_stack_7->SetBinError(5,2.144941);
   VbbHcc_both_Z_dR_stack_7->SetBinError(6,1.580275);
   VbbHcc_both_Z_dR_stack_7->SetBinError(7,1.224475);
   VbbHcc_both_Z_dR_stack_7->SetBinError(8,0.863735);
   VbbHcc_both_Z_dR_stack_7->SetBinError(9,0.8937033);
   VbbHcc_both_Z_dR_stack_7->SetBinError(10,0.6814237);
   VbbHcc_both_Z_dR_stack_7->SetBinError(11,0.7168393);
   VbbHcc_both_Z_dR_stack_7->SetBinError(12,0.8933769);
   VbbHcc_both_Z_dR_stack_7->SetBinError(13,0.8218998);
   VbbHcc_both_Z_dR_stack_7->SetBinError(14,0.8111574);
   VbbHcc_both_Z_dR_stack_7->SetBinError(15,0.91103);
   VbbHcc_both_Z_dR_stack_7->SetBinError(16,0.8388095);
   VbbHcc_both_Z_dR_stack_7->SetBinError(17,0.9571477);
   VbbHcc_both_Z_dR_stack_7->SetBinError(18,0.666222);
   VbbHcc_both_Z_dR_stack_7->SetBinError(19,0.7900844);
   VbbHcc_both_Z_dR_stack_7->SetBinError(20,0.3888599);
   VbbHcc_both_Z_dR_stack_7->SetBinError(21,0.5794854);
   VbbHcc_both_Z_dR_stack_7->SetBinError(22,0.5790526);
   VbbHcc_both_Z_dR_stack_7->SetBinError(23,0.6670199);
   VbbHcc_both_Z_dR_stack_7->SetBinError(24,0.4044937);
   VbbHcc_both_Z_dR_stack_7->SetBinError(25,0.3898976);
   VbbHcc_both_Z_dR_stack_7->SetBinError(26,0.5308372);
   VbbHcc_both_Z_dR_stack_7->SetBinError(27,0.8353377);
   VbbHcc_both_Z_dR_stack_7->SetBinError(28,0.7513666);
   VbbHcc_both_Z_dR_stack_7->SetBinError(29,0.6135944);
   VbbHcc_both_Z_dR_stack_7->SetBinError(30,0.5718468);
   VbbHcc_both_Z_dR_stack_7->SetBinError(31,0.2148387);
   VbbHcc_both_Z_dR_stack_7->SetEntries(523);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_7->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_7,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_8 = new TH1D("VbbHcc_both_Z_dR_stack_8","",30,0,6);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(3,11.64747);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(4,18.22754);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(5,16.02769);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(6,9.25186);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(7,5.327394);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(8,5.391159);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(9,4.356945);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(10,3.694917);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(11,2.353089);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(12,4.084048);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(13,5.398038);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(14,2.924811);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(15,4.697545);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(16,4.756231);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(17,4.631011);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(18,3.526922);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(19,2.915563);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(20,2.351454);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(21,2.03116);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(22,1.357575);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(23,1.622009);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(24,0.8971579);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(25,1.695066);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(26,1.167706);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(27,1.898208);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(28,1.407041);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(29,1.787208);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(30,0.2204648);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(31,0.1931734);
   VbbHcc_both_Z_dR_stack_8->SetBinError(3,1.623024);
   VbbHcc_both_Z_dR_stack_8->SetBinError(4,2.124009);
   VbbHcc_both_Z_dR_stack_8->SetBinError(5,1.943037);
   VbbHcc_both_Z_dR_stack_8->SetBinError(6,1.508908);
   VbbHcc_both_Z_dR_stack_8->SetBinError(7,1.127973);
   VbbHcc_both_Z_dR_stack_8->SetBinError(8,1.131706);
   VbbHcc_both_Z_dR_stack_8->SetBinError(9,1.04105);
   VbbHcc_both_Z_dR_stack_8->SetBinError(10,0.9441605);
   VbbHcc_both_Z_dR_stack_8->SetBinError(11,0.7647219);
   VbbHcc_both_Z_dR_stack_8->SetBinError(12,0.9827545);
   VbbHcc_both_Z_dR_stack_8->SetBinError(13,1.435178);
   VbbHcc_both_Z_dR_stack_8->SetBinError(14,0.845893);
   VbbHcc_both_Z_dR_stack_8->SetBinError(15,1.04374);
   VbbHcc_both_Z_dR_stack_8->SetBinError(16,1.047573);
   VbbHcc_both_Z_dR_stack_8->SetBinError(17,1.009177);
   VbbHcc_both_Z_dR_stack_8->SetBinError(18,0.9262629);
   VbbHcc_both_Z_dR_stack_8->SetBinError(19,0.8493548);
   VbbHcc_both_Z_dR_stack_8->SetBinError(20,0.7493006);
   VbbHcc_both_Z_dR_stack_8->SetBinError(21,0.6960913);
   VbbHcc_both_Z_dR_stack_8->SetBinError(22,0.5578601);
   VbbHcc_both_Z_dR_stack_8->SetBinError(23,0.6668551);
   VbbHcc_both_Z_dR_stack_8->SetBinError(24,0.4486219);
   VbbHcc_both_Z_dR_stack_8->SetBinError(25,0.6648304);
   VbbHcc_both_Z_dR_stack_8->SetBinError(26,0.5246766);
   VbbHcc_both_Z_dR_stack_8->SetBinError(27,0.6817176);
   VbbHcc_both_Z_dR_stack_8->SetBinError(28,0.5780414);
   VbbHcc_both_Z_dR_stack_8->SetBinError(29,0.6822556);
   VbbHcc_both_Z_dR_stack_8->SetBinError(30,0.2204648);
   VbbHcc_both_Z_dR_stack_8->SetBinError(31,0.1931734);
   VbbHcc_both_Z_dR_stack_8->SetEntries(548);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_8->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_8,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_9 = new TH1D("VbbHcc_both_Z_dR_stack_9","",30,0,6);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(2,0.002368554);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(3,3.792276);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(4,8.223007);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(5,9.777661);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(6,9.307481);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(7,7.414708);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(8,4.667031);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(9,3.342257);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(10,2.640338);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(11,2.684121);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(12,2.910679);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(13,3.077114);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(14,3.71887);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(15,3.882654);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(16,4.167116);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(17,3.955968);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(18,3.362534);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(19,3.026625);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(20,2.203893);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(21,1.742849);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(22,1.380002);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(23,1.317826);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(24,1.126851);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(25,1.206558);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(26,1.416867);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(27,1.312363);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(28,1.255016);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(29,0.8558061);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(30,0.5165999);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(31,0.3372589);
   VbbHcc_both_Z_dR_stack_9->SetBinError(2,0.002368554);
   VbbHcc_both_Z_dR_stack_9->SetBinError(3,0.10638);
   VbbHcc_both_Z_dR_stack_9->SetBinError(4,0.150567);
   VbbHcc_both_Z_dR_stack_9->SetBinError(5,0.1748972);
   VbbHcc_both_Z_dR_stack_9->SetBinError(6,0.1714522);
   VbbHcc_both_Z_dR_stack_9->SetBinError(7,0.1554834);
   VbbHcc_both_Z_dR_stack_9->SetBinError(8,0.1540975);
   VbbHcc_both_Z_dR_stack_9->SetBinError(9,0.09961732);
   VbbHcc_both_Z_dR_stack_9->SetBinError(10,0.08471718);
   VbbHcc_both_Z_dR_stack_9->SetBinError(11,0.08831498);
   VbbHcc_both_Z_dR_stack_9->SetBinError(12,0.09771778);
   VbbHcc_both_Z_dR_stack_9->SetBinError(13,0.1007876);
   VbbHcc_both_Z_dR_stack_9->SetBinError(14,0.1154842);
   VbbHcc_both_Z_dR_stack_9->SetBinError(15,0.1078532);
   VbbHcc_both_Z_dR_stack_9->SetBinError(16,0.106269);
   VbbHcc_both_Z_dR_stack_9->SetBinError(17,0.1194395);
   VbbHcc_both_Z_dR_stack_9->SetBinError(18,0.09824212);
   VbbHcc_both_Z_dR_stack_9->SetBinError(19,0.1008629);
   VbbHcc_both_Z_dR_stack_9->SetBinError(20,0.07838667);
   VbbHcc_both_Z_dR_stack_9->SetBinError(21,0.06995846);
   VbbHcc_both_Z_dR_stack_9->SetBinError(22,0.06099537);
   VbbHcc_both_Z_dR_stack_9->SetBinError(23,0.1196768);
   VbbHcc_both_Z_dR_stack_9->SetBinError(24,0.06402673);
   VbbHcc_both_Z_dR_stack_9->SetBinError(25,0.05787167);
   VbbHcc_both_Z_dR_stack_9->SetBinError(26,0.06326597);
   VbbHcc_both_Z_dR_stack_9->SetBinError(27,0.05997347);
   VbbHcc_both_Z_dR_stack_9->SetBinError(28,0.05924552);
   VbbHcc_both_Z_dR_stack_9->SetBinError(29,0.04865082);
   VbbHcc_both_Z_dR_stack_9->SetBinError(30,0.05420368);
   VbbHcc_both_Z_dR_stack_9->SetBinError(31,0.0305507);
   VbbHcc_both_Z_dR_stack_9->SetEntries(37266);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Z_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_9->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_9,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_10 = new TH1D("VbbHcc_both_Z_dR_stack_10","",30,0,6);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(2,0.001905841);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(3,3.601133);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(4,7.199783);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(5,8.720538);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(6,8.996554);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(7,7.895728);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(8,5.772855);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(9,3.994036);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(10,2.904217);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(11,2.589176);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(12,2.549557);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(13,2.576453);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(14,2.635238);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(15,2.82508);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(16,2.882636);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(17,2.692667);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(18,2.372306);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(19,2.102824);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(20,1.772729);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(21,1.499659);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(22,1.281813);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(23,1.137175);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(24,1.239665);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(25,1.246725);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(26,1.299626);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(27,1.255996);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(28,1.061415);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(29,0.8176994);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(30,0.4929873);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(31,0.3024174);
   VbbHcc_both_Z_dR_stack_10->SetBinError(2,0.001106506);
   VbbHcc_both_Z_dR_stack_10->SetBinError(3,0.0477617);
   VbbHcc_both_Z_dR_stack_10->SetBinError(4,0.06755242);
   VbbHcc_both_Z_dR_stack_10->SetBinError(5,0.07443906);
   VbbHcc_both_Z_dR_stack_10->SetBinError(6,0.07567826);
   VbbHcc_both_Z_dR_stack_10->SetBinError(7,0.07097793);
   VbbHcc_both_Z_dR_stack_10->SetBinError(8,0.06070181);
   VbbHcc_both_Z_dR_stack_10->SetBinError(9,0.05042837);
   VbbHcc_both_Z_dR_stack_10->SetBinError(10,0.0429558);
   VbbHcc_both_Z_dR_stack_10->SetBinError(11,0.04061465);
   VbbHcc_both_Z_dR_stack_10->SetBinError(12,0.04028944);
   VbbHcc_both_Z_dR_stack_10->SetBinError(13,0.0404903);
   VbbHcc_both_Z_dR_stack_10->SetBinError(14,0.04096706);
   VbbHcc_both_Z_dR_stack_10->SetBinError(15,0.04239704);
   VbbHcc_both_Z_dR_stack_10->SetBinError(16,0.04289318);
   VbbHcc_both_Z_dR_stack_10->SetBinError(17,0.0414788);
   VbbHcc_both_Z_dR_stack_10->SetBinError(18,0.03890809);
   VbbHcc_both_Z_dR_stack_10->SetBinError(19,0.03664725);
   VbbHcc_both_Z_dR_stack_10->SetBinError(20,0.03362431);
   VbbHcc_both_Z_dR_stack_10->SetBinError(21,0.03082911);
   VbbHcc_both_Z_dR_stack_10->SetBinError(22,0.02853249);
   VbbHcc_both_Z_dR_stack_10->SetBinError(23,0.02691481);
   VbbHcc_both_Z_dR_stack_10->SetBinError(24,0.02811639);
   VbbHcc_both_Z_dR_stack_10->SetBinError(25,0.02819876);
   VbbHcc_both_Z_dR_stack_10->SetBinError(26,0.02877984);
   VbbHcc_both_Z_dR_stack_10->SetBinError(27,0.02827177);
   VbbHcc_both_Z_dR_stack_10->SetBinError(28,0.02600544);
   VbbHcc_both_Z_dR_stack_10->SetBinError(29,0.02282751);
   VbbHcc_both_Z_dR_stack_10->SetBinError(30,0.01765167);
   VbbHcc_both_Z_dR_stack_10->SetBinError(31,0.01386178);
   VbbHcc_both_Z_dR_stack_10->SetEntries(137175);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Z_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_10->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_10,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_11 = new TH1D("VbbHcc_both_Z_dR_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(3,0.3310629);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(4,0.412701);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(5,0.3204387);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(6,0.1953772);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(7,0.09882556);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(8,0.05618268);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(9,0.0446955);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(10,0.06253709);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(11,0.03760173);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(12,0.04682565);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(13,0.05734214);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(14,0.05641907);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(15,0.08297289);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(16,0.06680354);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(17,0.07508508);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(18,0.06548409);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(19,0.04055429);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(20,0.02943235);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(21,0.03305388);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(22,0.02573337);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(23,0.02210952);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(24,0.01613176);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(25,0.02593174);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(26,0.01252346);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(27,0.04853734);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(28,0.03427183);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(29,0.01423958);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(30,0.01167169);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(31,0.02146668);
   VbbHcc_both_Z_dR_stack_11->SetBinError(3,0.03553246);
   VbbHcc_both_Z_dR_stack_11->SetBinError(4,0.03436227);
   VbbHcc_both_Z_dR_stack_11->SetBinError(5,0.0298639);
   VbbHcc_both_Z_dR_stack_11->SetBinError(6,0.02302682);
   VbbHcc_both_Z_dR_stack_11->SetBinError(7,0.01617715);
   VbbHcc_both_Z_dR_stack_11->SetBinError(8,0.01190668);
   VbbHcc_both_Z_dR_stack_11->SetBinError(9,0.01079655);
   VbbHcc_both_Z_dR_stack_11->SetBinError(10,0.0232308);
   VbbHcc_both_Z_dR_stack_11->SetBinError(11,0.01071103);
   VbbHcc_both_Z_dR_stack_11->SetBinError(12,0.0106074);
   VbbHcc_both_Z_dR_stack_11->SetBinError(13,0.01214921);
   VbbHcc_both_Z_dR_stack_11->SetBinError(14,0.01257748);
   VbbHcc_both_Z_dR_stack_11->SetBinError(15,0.01555334);
   VbbHcc_both_Z_dR_stack_11->SetBinError(16,0.01368623);
   VbbHcc_both_Z_dR_stack_11->SetBinError(17,0.01450668);
   VbbHcc_both_Z_dR_stack_11->SetBinError(18,0.01321261);
   VbbHcc_both_Z_dR_stack_11->SetBinError(19,0.01057645);
   VbbHcc_both_Z_dR_stack_11->SetBinError(20,0.008295125);
   VbbHcc_both_Z_dR_stack_11->SetBinError(21,0.009612858);
   VbbHcc_both_Z_dR_stack_11->SetBinError(22,0.009306027);
   VbbHcc_both_Z_dR_stack_11->SetBinError(23,0.007596512);
   VbbHcc_both_Z_dR_stack_11->SetBinError(24,0.006702055);
   VbbHcc_both_Z_dR_stack_11->SetBinError(25,0.008091924);
   VbbHcc_both_Z_dR_stack_11->SetBinError(26,0.005753127);
   VbbHcc_both_Z_dR_stack_11->SetBinError(27,0.02235413);
   VbbHcc_both_Z_dR_stack_11->SetBinError(28,0.00958931);
   VbbHcc_both_Z_dR_stack_11->SetBinError(29,0.006416393);
   VbbHcc_both_Z_dR_stack_11->SetBinError(30,0.00621024);
   VbbHcc_both_Z_dR_stack_11->SetBinError(31,0.008209124);
   VbbHcc_both_Z_dR_stack_11->SetEntries(939);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_11->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_11,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_12 = new TH1D("VbbHcc_both_Z_dR_stack_12","",30,0,6);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(3,0.1016274);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(4,0.2244501);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(5,0.1927126);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(6,0.1103757);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(7,0.061236);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(8,0.03687442);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(9,0.02387999);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(10,0.02006524);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(11,0.01970439);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(12,0.02314819);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(13,0.02618562);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(14,0.02315762);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(15,0.0320112);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(16,0.03176998);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(17,0.03550488);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(18,0.02310319);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(19,0.02307635);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(20,0.01687685);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(21,0.01668135);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(22,0.01341613);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(23,0.009842902);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(24,0.008321299);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(25,0.01015835);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(26,0.009077457);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(27,0.017411);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(28,0.02163168);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(29,0.01649514);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(30,0.01030787);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(31,0.005476197);
   VbbHcc_both_Z_dR_stack_12->SetBinError(3,0.006003741);
   VbbHcc_both_Z_dR_stack_12->SetBinError(4,0.009416089);
   VbbHcc_both_Z_dR_stack_12->SetBinError(5,0.008254083);
   VbbHcc_both_Z_dR_stack_12->SetBinError(6,0.00607457);
   VbbHcc_both_Z_dR_stack_12->SetBinError(7,0.004630834);
   VbbHcc_both_Z_dR_stack_12->SetBinError(8,0.003608965);
   VbbHcc_both_Z_dR_stack_12->SetBinError(9,0.003032077);
   VbbHcc_both_Z_dR_stack_12->SetBinError(10,0.002665104);
   VbbHcc_both_Z_dR_stack_12->SetBinError(11,0.002641268);
   VbbHcc_both_Z_dR_stack_12->SetBinError(12,0.002876177);
   VbbHcc_both_Z_dR_stack_12->SetBinError(13,0.003012637);
   VbbHcc_both_Z_dR_stack_12->SetBinError(14,0.002801889);
   VbbHcc_both_Z_dR_stack_12->SetBinError(15,0.003332877);
   VbbHcc_both_Z_dR_stack_12->SetBinError(16,0.003331648);
   VbbHcc_both_Z_dR_stack_12->SetBinError(17,0.004966439);
   VbbHcc_both_Z_dR_stack_12->SetBinError(18,0.002783731);
   VbbHcc_both_Z_dR_stack_12->SetBinError(19,0.002877081);
   VbbHcc_both_Z_dR_stack_12->SetBinError(20,0.002407836);
   VbbHcc_both_Z_dR_stack_12->SetBinError(21,0.00238786);
   VbbHcc_both_Z_dR_stack_12->SetBinError(22,0.002113233);
   VbbHcc_both_Z_dR_stack_12->SetBinError(23,0.001810705);
   VbbHcc_both_Z_dR_stack_12->SetBinError(24,0.001746536);
   VbbHcc_both_Z_dR_stack_12->SetBinError(25,0.001868895);
   VbbHcc_both_Z_dR_stack_12->SetBinError(26,0.001739107);
   VbbHcc_both_Z_dR_stack_12->SetBinError(27,0.002438093);
   VbbHcc_both_Z_dR_stack_12->SetBinError(28,0.00274346);
   VbbHcc_both_Z_dR_stack_12->SetBinError(29,0.002383499);
   VbbHcc_both_Z_dR_stack_12->SetBinError(30,0.001872193);
   VbbHcc_both_Z_dR_stack_12->SetBinError(31,0.001439375);
   VbbHcc_both_Z_dR_stack_12->SetEntries(3484);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_12->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Z_dR__421 = new TH1D("VbbHcc_both_Z_dR__421","",30,0,6);
   VbbHcc_both_Z_dR__421->SetBinContent(2,100);
   VbbHcc_both_Z_dR__421->SetBinContent(3,226114);
   VbbHcc_both_Z_dR__421->SetBinContent(4,253214);
   VbbHcc_both_Z_dR__421->SetBinContent(5,184953);
   VbbHcc_both_Z_dR__421->SetBinContent(6,157052);
   VbbHcc_both_Z_dR__421->SetBinContent(7,139179);
   VbbHcc_both_Z_dR__421->SetBinContent(8,128565);
   VbbHcc_both_Z_dR__421->SetBinContent(9,122795);
   VbbHcc_both_Z_dR__421->SetBinContent(10,120351);
   VbbHcc_both_Z_dR__421->SetBinContent(11,120502);
   VbbHcc_both_Z_dR__421->SetBinContent(12,123987);
   VbbHcc_both_Z_dR__421->SetBinContent(13,130877);
   VbbHcc_both_Z_dR__421->SetBinContent(14,138469);
   VbbHcc_both_Z_dR__421->SetBinContent(15,146528);
   VbbHcc_both_Z_dR__421->SetBinContent(16,150902);
   VbbHcc_both_Z_dR__421->SetBinContent(17,143637);
   VbbHcc_both_Z_dR__421->SetBinContent(18,133431);
   VbbHcc_both_Z_dR__421->SetBinContent(19,120522);
   VbbHcc_both_Z_dR__421->SetBinContent(20,106205);
   VbbHcc_both_Z_dR__421->SetBinContent(21,91710);
   VbbHcc_both_Z_dR__421->SetBinContent(22,77058);
   VbbHcc_both_Z_dR__421->SetBinContent(23,63967);
   VbbHcc_both_Z_dR__421->SetBinContent(24,53442);
   VbbHcc_both_Z_dR__421->SetBinContent(25,45848);
   VbbHcc_both_Z_dR__421->SetBinContent(26,39611);
   VbbHcc_both_Z_dR__421->SetBinContent(27,35459);
   VbbHcc_both_Z_dR__421->SetBinContent(28,33338);
   VbbHcc_both_Z_dR__421->SetBinContent(29,32332);
   VbbHcc_both_Z_dR__421->SetBinContent(30,21430);
   VbbHcc_both_Z_dR__421->SetBinContent(31,15596);
   VbbHcc_both_Z_dR__421->SetEntries(3157203);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR__421->SetLineColor(ci);
   VbbHcc_both_Z_dR__421->SetLineWidth(2);
   VbbHcc_both_Z_dR__421->SetMarkerStyle(20);
   VbbHcc_both_Z_dR__421->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR__421->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR__421->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__421->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR__421->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR__421->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__421->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__421->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR__421->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR__421->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR__421->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__421->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__421->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR__421->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR__421->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__421->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_dR_fx1421[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_fy1421[30] = {
   0,
   59.59848,
   190320.4,
   191183.9,
   141642.8,
   116644.5,
   103940,
   92616.56,
   88634.72,
   83666.43,
   85981.53,
   85423.6,
   89138.46,
   99658.94,
   110740,
   111084.4,
   104511,
   102189,
   80903.08,
   82879.14,
   64939.56,
   58266.07,
   43609.32,
   36638.24,
   31118.25,
   28406.32,
   23338.1,
   22521.78,
   22413.84,
   13411.7};
   Double_t Graph_from_VbbHcc_both_Z_dR_fex1421[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_fey1421[30] = {
   0,
   20.08514,
   4546.886,
   5674.646,
   5283.469,
   3849.433,
   3801.682,
   3708.987,
   3375.428,
   3657.624,
   3821.655,
   3944.116,
   3068.085,
   3695.695,
   3821.874,
   4133.972,
   3900.587,
   4378,
   2778.344,
   3763.261,
   3583.347,
   3987.732,
   2304.17,
   2617.356,
   2657.981,
   2117.552,
   1643.91,
   1767.428,
   1733.307,
   940.777};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_fx1421,Graph_from_VbbHcc_both_Z_dR_fy1421,Graph_from_VbbHcc_both_Z_dR_fex1421,Graph_from_VbbHcc_both_Z_dR_fey1421);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR1421 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR1421","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->SetMinimum(0);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->SetMaximum(216544.4);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_dR1421->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_dR1421);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Z_dR","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_both_18->cd();
  
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
   
   TH1D *data_mc_ratio__422 = new TH1D("data_mc_ratio__422","",30,0,6);
   data_mc_ratio__422->SetBinContent(2,1.677895);
   data_mc_ratio__422->SetBinContent(3,1.18807);
   data_mc_ratio__422->SetBinContent(4,1.324452);
   data_mc_ratio__422->SetBinContent(5,1.305771);
   data_mc_ratio__422->SetBinContent(6,1.346416);
   data_mc_ratio__422->SetBinContent(7,1.339032);
   data_mc_ratio__422->SetBinContent(8,1.388143);
   data_mc_ratio__422->SetBinContent(9,1.385405);
   data_mc_ratio__422->SetBinContent(10,1.438462);
   data_mc_ratio__422->SetBinContent(11,1.401487);
   data_mc_ratio__422->SetBinContent(12,1.451437);
   data_mc_ratio__422->SetBinContent(13,1.468244);
   data_mc_ratio__422->SetBinContent(14,1.389429);
   data_mc_ratio__422->SetBinContent(15,1.323171);
   data_mc_ratio__422->SetBinContent(16,1.358445);
   data_mc_ratio__422->SetBinContent(17,1.374372);
   data_mc_ratio__422->SetBinContent(18,1.305728);
   data_mc_ratio__422->SetBinContent(19,1.489708);
   data_mc_ratio__422->SetBinContent(20,1.281444);
   data_mc_ratio__422->SetBinContent(21,1.412236);
   data_mc_ratio__422->SetBinContent(22,1.322519);
   data_mc_ratio__422->SetBinContent(23,1.46682);
   data_mc_ratio__422->SetBinContent(24,1.45864);
   data_mc_ratio__422->SetBinContent(25,1.473348);
   data_mc_ratio__422->SetBinContent(26,1.394443);
   data_mc_ratio__422->SetBinContent(27,1.519361);
   data_mc_ratio__422->SetBinContent(28,1.480256);
   data_mc_ratio__422->SetBinContent(29,1.442501);
   data_mc_ratio__422->SetBinContent(30,1.597859);
   data_mc_ratio__422->SetBinContent(31,1.186554);
   data_mc_ratio__422->SetBinError(2,0.1677895);
   data_mc_ratio__422->SetBinError(3,0.002498494);
   data_mc_ratio__422->SetBinError(4,0.00263204);
   data_mc_ratio__422->SetBinError(5,0.003036241);
   data_mc_ratio__422->SetBinError(6,0.003397485);
   data_mc_ratio__422->SetBinError(7,0.003589252);
   data_mc_ratio__422->SetBinError(8,0.003871442);
   data_mc_ratio__422->SetBinError(9,0.003953543);
   data_mc_ratio__422->SetBinError(10,0.004146423);
   data_mc_ratio__422->SetBinError(11,0.004037309);
   data_mc_ratio__422->SetBinError(12,0.004122021);
   data_mc_ratio__422->SetBinError(13,0.004058509);
   data_mc_ratio__422->SetBinError(14,0.003733877);
   data_mc_ratio__422->SetBinError(15,0.003456652);
   data_mc_ratio__422->SetBinError(16,0.003496991);
   data_mc_ratio__422->SetBinError(17,0.003626362);
   data_mc_ratio__422->SetBinError(18,0.003574573);
   data_mc_ratio__422->SetBinError(19,0.004291095);
   data_mc_ratio__422->SetBinError(20,0.003932124);
   data_mc_ratio__422->SetBinError(21,0.00466336);
   data_mc_ratio__422->SetBinError(22,0.004764235);
   data_mc_ratio__422->SetBinError(23,0.005799609);
   data_mc_ratio__422->SetBinError(24,0.006309671);
   data_mc_ratio__422->SetBinError(25,0.006880896);
   data_mc_ratio__422->SetBinError(26,0.007006367);
   data_mc_ratio__422->SetBinError(27,0.008068591);
   data_mc_ratio__422->SetBinError(28,0.00810713);
   data_mc_ratio__422->SetBinError(29,0.008022319);
   data_mc_ratio__422->SetBinError(30,0.01091509);
   data_mc_ratio__422->SetBinError(31,0.2243994);
   data_mc_ratio__422->SetMinimum(0.4);
   data_mc_ratio__422->SetMaximum(1.6);
   data_mc_ratio__422->SetEntries(3295.121);
   data_mc_ratio__422->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__422->SetLineColor(ci);
   data_mc_ratio__422->SetLineWidth(2);
   data_mc_ratio__422->SetMarkerStyle(20);
   data_mc_ratio__422->SetMarkerSize(1.2);
   data_mc_ratio__422->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__422->GetXaxis()->SetRange(1,30);
   data_mc_ratio__422->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__422->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__422->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__422->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__422->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__422->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__422->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__422->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__422->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__422->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__422->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__422->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__422->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__422->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__422->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__422->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__422->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1422[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1422[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1422[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1422[30] = {
   0,
   0.3370076,
   0.02389069,
   0.0296816,
   0.03730137,
   0.03300142,
   0.03657573,
   0.04004669,
   0.03808245,
   0.04371674,
   0.04444739,
   0.04617127,
   0.03441932,
   0.03708343,
   0.03451212,
   0.03721469,
   0.03732226,
   0.04284218,
   0.03434163,
   0.04540661,
   0.05517973,
   0.06844004,
   0.05283664,
   0.07143781,
   0.08541551,
   0.07454509,
   0.07043889,
   0.07847638,
   0.077332,
   0.07014601};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1422,Graph_from_mc_statistical_error_fy1422,Graph_from_mc_statistical_error_fex1422,Graph_from_mc_statistical_error_fey1422);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1422 = new TH1F("Graph_Graph_from_mc_statistical_error1422","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1422->SetMinimum(0.5955909);
   Graph_Graph_from_mc_statistical_error1422->SetMaximum(1.404409);
   Graph_Graph_from_mc_statistical_error1422->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1422->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1422->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1422->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1422->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1422->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1422->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1422->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1422->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1422->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1422->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1422->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1422->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1422->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1422->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1422->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1422);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_both_18->cd();
   Z_dR_both_18->Modified();
   Z_dR_both_18->cd();
   Z_dR_both_18->SetSelected(Z_dR_both_18);
}
