void H_dR_tags_17()
{
//=========Macro generated from canvas: H_dR_tags_17/H_dR_tags_17
//=========  (Thu Aug  3 12:23:07 2023) by ROOT version 6.14/09
   TCanvas *H_dR_tags_17 = new TCanvas("H_dR_tags_17", "H_dR_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_tags_17->SetHighLightColor(2);
   H_dR_tags_17->Range(0,0,1,1);
   H_dR_tags_17->SetFillColor(0);
   H_dR_tags_17->SetFillStyle(4000);
   H_dR_tags_17->SetBorderMode(0);
   H_dR_tags_17->SetBorderSize(2);
   H_dR_tags_17->SetFrameFillStyle(1000);
   H_dR_tags_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9499975,-72.19666,6.525,72134.46);
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
   st->SetMaximum(61822.66);
   
   TH1F *st_stack_22 = new TH1F("st_stack_22","",30,0,6);
   st_stack_22->SetMinimum(0.01);
   st_stack_22->SetMaximum(64913.79);
   st_stack_22->SetDirectory(0);
   st_stack_22->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_22->SetLineColor(ci);
   st_stack_22->GetXaxis()->SetRange(1,31);
   st_stack_22->GetXaxis()->SetLabelFont(42);
   st_stack_22->GetXaxis()->SetLabelSize(0.035);
   st_stack_22->GetXaxis()->SetTitleSize(0.035);
   st_stack_22->GetXaxis()->SetTitleFont(42);
   st_stack_22->GetYaxis()->SetTitle("Events/0.2");
   st_stack_22->GetYaxis()->SetLabelFont(42);
   st_stack_22->GetYaxis()->SetLabelSize(0.05);
   st_stack_22->GetYaxis()->SetTitleSize(0.057);
   st_stack_22->GetYaxis()->SetTitleOffset(1.2);
   st_stack_22->GetYaxis()->SetTitleFont(42);
   st_stack_22->GetZaxis()->SetLabelFont(42);
   st_stack_22->GetZaxis()->SetLabelSize(0.035);
   st_stack_22->GetZaxis()->SetTitleSize(0.035);
   st_stack_22->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_22);
   
   
   TH1D *VbbHcc_tags_H_dR_stack_1 = new TH1D("VbbHcc_tags_H_dR_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(3,8363.126);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(4,11005.38);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(5,6917.96);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(6,5989.775);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(7,5247.954);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(8,5102.468);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(9,4033.669);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(10,7270.623);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(11,7122.482);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(12,7360.163);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(13,8847.579);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(14,12331.31);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(15,9151.834);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(16,26427.48);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(17,12592.24);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(18,12285.64);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(19,9507.806);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(20,7178.46);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(21,5785.589);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(22,3321.265);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(23,3184.273);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(24,18449.23);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(25,2380.512);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(26,1607.662);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(27,1656.856);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(28,1380.425);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(29,1336.45);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(30,661.1365);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(31,1101.323);
   VbbHcc_tags_H_dR_stack_1->SetBinError(3,1039.696);
   VbbHcc_tags_H_dR_stack_1->SetBinError(4,1343.139);
   VbbHcc_tags_H_dR_stack_1->SetBinError(5,1030.142);
   VbbHcc_tags_H_dR_stack_1->SetBinError(6,953.8818);
   VbbHcc_tags_H_dR_stack_1->SetBinError(7,910.7271);
   VbbHcc_tags_H_dR_stack_1->SetBinError(8,871.2944);
   VbbHcc_tags_H_dR_stack_1->SetBinError(9,636.4552);
   VbbHcc_tags_H_dR_stack_1->SetBinError(10,1155.388);
   VbbHcc_tags_H_dR_stack_1->SetBinError(11,1497.713);
   VbbHcc_tags_H_dR_stack_1->SetBinError(12,1033.869);
   VbbHcc_tags_H_dR_stack_1->SetBinError(13,1196.295);
   VbbHcc_tags_H_dR_stack_1->SetBinError(14,1470.986);
   VbbHcc_tags_H_dR_stack_1->SetBinError(15,1139.517);
   VbbHcc_tags_H_dR_stack_1->SetBinError(16,14875.57);
   VbbHcc_tags_H_dR_stack_1->SetBinError(17,1425.525);
   VbbHcc_tags_H_dR_stack_1->SetBinError(18,1447.373);
   VbbHcc_tags_H_dR_stack_1->SetBinError(19,1228.199);
   VbbHcc_tags_H_dR_stack_1->SetBinError(20,1452.237);
   VbbHcc_tags_H_dR_stack_1->SetBinError(21,915.1952);
   VbbHcc_tags_H_dR_stack_1->SetBinError(22,624.498);
   VbbHcc_tags_H_dR_stack_1->SetBinError(23,677.2728);
   VbbHcc_tags_H_dR_stack_1->SetBinError(24,14832.51);
   VbbHcc_tags_H_dR_stack_1->SetBinError(25,613.8303);
   VbbHcc_tags_H_dR_stack_1->SetBinError(26,478.1684);
   VbbHcc_tags_H_dR_stack_1->SetBinError(27,480.6511);
   VbbHcc_tags_H_dR_stack_1->SetBinError(28,474.3898);
   VbbHcc_tags_H_dR_stack_1->SetBinError(29,397.473);
   VbbHcc_tags_H_dR_stack_1->SetBinError(30,279.7718);
   VbbHcc_tags_H_dR_stack_1->SetBinError(31,470.0127);
   VbbHcc_tags_H_dR_stack_1->SetEntries(10314);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_2 = new TH1D("VbbHcc_tags_H_dR_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(2,0.04712387);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(3,29.89177);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(4,43.31495);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(5,35.91924);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(6,35.98947);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(7,34.76388);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(8,35.29418);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(9,41.02263);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(10,42.93076);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(11,38.75671);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(12,46.9009);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(13,49.65292);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(14,49.11805);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(15,54.23091);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(16,64.66284);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(17,57.78201);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(18,47.57284);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(19,46.32658);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(20,40.13677);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(21,35.19191);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(22,28.18806);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(23,22.64977);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(24,20.1673);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(25,16.5643);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(26,12.97649);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(27,11.1572);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(28,9.199369);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(29,5.774992);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(30,5.786794);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(31,4.370485);
   VbbHcc_tags_H_dR_stack_2->SetBinError(2,0.04712387);
   VbbHcc_tags_H_dR_stack_2->SetBinError(3,2.199429);
   VbbHcc_tags_H_dR_stack_2->SetBinError(4,2.647594);
   VbbHcc_tags_H_dR_stack_2->SetBinError(5,2.338481);
   VbbHcc_tags_H_dR_stack_2->SetBinError(6,2.327852);
   VbbHcc_tags_H_dR_stack_2->SetBinError(7,2.338457);
   VbbHcc_tags_H_dR_stack_2->SetBinError(8,2.283756);
   VbbHcc_tags_H_dR_stack_2->SetBinError(9,2.551868);
   VbbHcc_tags_H_dR_stack_2->SetBinError(10,2.644289);
   VbbHcc_tags_H_dR_stack_2->SetBinError(11,2.485903);
   VbbHcc_tags_H_dR_stack_2->SetBinError(12,2.712841);
   VbbHcc_tags_H_dR_stack_2->SetBinError(13,2.809365);
   VbbHcc_tags_H_dR_stack_2->SetBinError(14,2.732233);
   VbbHcc_tags_H_dR_stack_2->SetBinError(15,2.869241);
   VbbHcc_tags_H_dR_stack_2->SetBinError(16,3.210232);
   VbbHcc_tags_H_dR_stack_2->SetBinError(17,2.964276);
   VbbHcc_tags_H_dR_stack_2->SetBinError(18,2.536135);
   VbbHcc_tags_H_dR_stack_2->SetBinError(19,2.602906);
   VbbHcc_tags_H_dR_stack_2->SetBinError(20,2.44154);
   VbbHcc_tags_H_dR_stack_2->SetBinError(21,2.295835);
   VbbHcc_tags_H_dR_stack_2->SetBinError(22,2.074661);
   VbbHcc_tags_H_dR_stack_2->SetBinError(23,1.863684);
   VbbHcc_tags_H_dR_stack_2->SetBinError(24,1.669571);
   VbbHcc_tags_H_dR_stack_2->SetBinError(25,1.5451);
   VbbHcc_tags_H_dR_stack_2->SetBinError(26,1.327011);
   VbbHcc_tags_H_dR_stack_2->SetBinError(27,1.336202);
   VbbHcc_tags_H_dR_stack_2->SetBinError(28,1.186176);
   VbbHcc_tags_H_dR_stack_2->SetBinError(29,0.8560942);
   VbbHcc_tags_H_dR_stack_2->SetBinError(30,0.9201887);
   VbbHcc_tags_H_dR_stack_2->SetBinError(31,0.7789109);
   VbbHcc_tags_H_dR_stack_2->SetEntries(11980);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_2,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_3 = new TH1D("VbbHcc_tags_H_dR_stack_3","",30,0,6);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(2,0.6261937);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(3,531.0392);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(4,762.0246);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(5,759.8905);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(6,798.2557);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(7,776.8303);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(8,761.4028);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(9,754.6504);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(10,771.8178);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(11,834.2331);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(12,886.8253);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(13,956.9606);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(14,1025.366);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(15,1115.581);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(16,1159.546);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(17,1091.514);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(18,1008.73);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(19,906.7031);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(20,785.7546);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(21,654.5192);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(22,538.817);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(23,439.8428);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(24,363.1625);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(25,289.6583);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(26,238.8105);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(27,198.178);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(28,158.9764);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(29,129.878);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(30,89.3139);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(31,78.73919);
   VbbHcc_tags_H_dR_stack_3->SetBinError(2,0.2015158);
   VbbHcc_tags_H_dR_stack_3->SetBinError(3,5.708933);
   VbbHcc_tags_H_dR_stack_3->SetBinError(4,6.873795);
   VbbHcc_tags_H_dR_stack_3->SetBinError(5,6.891121);
   VbbHcc_tags_H_dR_stack_3->SetBinError(6,7.064348);
   VbbHcc_tags_H_dR_stack_3->SetBinError(7,6.973366);
   VbbHcc_tags_H_dR_stack_3->SetBinError(8,6.889091);
   VbbHcc_tags_H_dR_stack_3->SetBinError(9,6.855983);
   VbbHcc_tags_H_dR_stack_3->SetBinError(10,6.920669);
   VbbHcc_tags_H_dR_stack_3->SetBinError(11,7.208525);
   VbbHcc_tags_H_dR_stack_3->SetBinError(12,7.433385);
   VbbHcc_tags_H_dR_stack_3->SetBinError(13,7.727469);
   VbbHcc_tags_H_dR_stack_3->SetBinError(14,8.0078);
   VbbHcc_tags_H_dR_stack_3->SetBinError(15,8.367054);
   VbbHcc_tags_H_dR_stack_3->SetBinError(16,8.536487);
   VbbHcc_tags_H_dR_stack_3->SetBinError(17,8.285827);
   VbbHcc_tags_H_dR_stack_3->SetBinError(18,7.977328);
   VbbHcc_tags_H_dR_stack_3->SetBinError(19,7.545204);
   VbbHcc_tags_H_dR_stack_3->SetBinError(20,7.0191);
   VbbHcc_tags_H_dR_stack_3->SetBinError(21,6.397568);
   VbbHcc_tags_H_dR_stack_3->SetBinError(22,5.796917);
   VbbHcc_tags_H_dR_stack_3->SetBinError(23,5.232614);
   VbbHcc_tags_H_dR_stack_3->SetBinError(24,4.748524);
   VbbHcc_tags_H_dR_stack_3->SetBinError(25,4.240109);
   VbbHcc_tags_H_dR_stack_3->SetBinError(26,3.840438);
   VbbHcc_tags_H_dR_stack_3->SetBinError(27,3.502617);
   VbbHcc_tags_H_dR_stack_3->SetBinError(28,3.138247);
   VbbHcc_tags_H_dR_stack_3->SetBinError(29,2.812942);
   VbbHcc_tags_H_dR_stack_3->SetBinError(30,2.345349);
   VbbHcc_tags_H_dR_stack_3->SetBinError(31,2.196067);
   VbbHcc_tags_H_dR_stack_3->SetEntries(317372);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_3,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_4 = new TH1D("VbbHcc_tags_H_dR_stack_4","",30,0,6);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(3,97.769);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(4,131.1291);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(5,111.0566);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(6,92.73877);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(7,87.88544);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(8,84.60869);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(9,91.99457);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(10,79.65991);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(11,90.80965);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(12,108.7277);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(13,113.7134);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(14,128.398);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(15,146.6311);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(16,148.6986);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(17,147.2681);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(18,128.5071);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(19,121.9705);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(20,104.997);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(21,75.14258);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(22,59.22149);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(23,53.90261);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(24,41.87129);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(25,33.86857);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(26,27.11921);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(27,19.02072);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(28,23.32326);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(29,15.42596);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(30,11.08262);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(31,7.881824);
   VbbHcc_tags_H_dR_stack_4->SetBinError(3,5.983981);
   VbbHcc_tags_H_dR_stack_4->SetBinError(4,6.321477);
   VbbHcc_tags_H_dR_stack_4->SetBinError(5,6.703975);
   VbbHcc_tags_H_dR_stack_4->SetBinError(6,5.812845);
   VbbHcc_tags_H_dR_stack_4->SetBinError(7,6.358617);
   VbbHcc_tags_H_dR_stack_4->SetBinError(8,5.614717);
   VbbHcc_tags_H_dR_stack_4->SetBinError(9,7.835351);
   VbbHcc_tags_H_dR_stack_4->SetBinError(10,5.572783);
   VbbHcc_tags_H_dR_stack_4->SetBinError(11,5.781563);
   VbbHcc_tags_H_dR_stack_4->SetBinError(12,8.448224);
   VbbHcc_tags_H_dR_stack_4->SetBinError(13,6.719809);
   VbbHcc_tags_H_dR_stack_4->SetBinError(14,8.261119);
   VbbHcc_tags_H_dR_stack_4->SetBinError(15,7.675628);
   VbbHcc_tags_H_dR_stack_4->SetBinError(16,7.114047);
   VbbHcc_tags_H_dR_stack_4->SetBinError(17,7.665746);
   VbbHcc_tags_H_dR_stack_4->SetBinError(18,7.378689);
   VbbHcc_tags_H_dR_stack_4->SetBinError(19,8.173165);
   VbbHcc_tags_H_dR_stack_4->SetBinError(20,7.087268);
   VbbHcc_tags_H_dR_stack_4->SetBinError(21,5.43286);
   VbbHcc_tags_H_dR_stack_4->SetBinError(22,5.145346);
   VbbHcc_tags_H_dR_stack_4->SetBinError(23,4.380336);
   VbbHcc_tags_H_dR_stack_4->SetBinError(24,4.782617);
   VbbHcc_tags_H_dR_stack_4->SetBinError(25,4.576219);
   VbbHcc_tags_H_dR_stack_4->SetBinError(26,3.575513);
   VbbHcc_tags_H_dR_stack_4->SetBinError(27,1.983195);
   VbbHcc_tags_H_dR_stack_4->SetBinError(28,3.451761);
   VbbHcc_tags_H_dR_stack_4->SetBinError(29,1.739754);
   VbbHcc_tags_H_dR_stack_4->SetBinError(30,2.998852);
   VbbHcc_tags_H_dR_stack_4->SetBinError(31,1.281389);
   VbbHcc_tags_H_dR_stack_4->SetEntries(17051);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_4,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_5 = new TH1D("VbbHcc_tags_H_dR_stack_5","",30,0,6);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(3,10.91654);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(4,13.85447);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(5,12.78684);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(6,5.104);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(7,9.146314);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(8,14.75163);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(9,15.42772);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(10,10.64049);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(11,8.229059);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(12,8.136099);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(13,12.61289);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(14,12.10985);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(15,15.4156);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(16,9.865825);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(17,12.12975);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(18,12.9333);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(19,15.68982);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(20,10.76061);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(21,7.053865);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(22,4.838895);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(23,5.884103);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(24,3.862066);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(25,1.982487);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(26,1.856885);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(27,4.082375);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(28,2.787481);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(29,1.928541);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(30,1.1718);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(31,1.709298);
   VbbHcc_tags_H_dR_stack_5->SetBinError(3,1.564354);
   VbbHcc_tags_H_dR_stack_5->SetBinError(4,2.543383);
   VbbHcc_tags_H_dR_stack_5->SetBinError(5,2.573697);
   VbbHcc_tags_H_dR_stack_5->SetBinError(6,0.7399048);
   VbbHcc_tags_H_dR_stack_5->SetBinError(7,2.254262);
   VbbHcc_tags_H_dR_stack_5->SetBinError(8,6.881267);
   VbbHcc_tags_H_dR_stack_5->SetBinError(9,6.978044);
   VbbHcc_tags_H_dR_stack_5->SetBinError(10,2.012923);
   VbbHcc_tags_H_dR_stack_5->SetBinError(11,1.63117);
   VbbHcc_tags_H_dR_stack_5->SetBinError(12,1.555759);
   VbbHcc_tags_H_dR_stack_5->SetBinError(13,2.53797);
   VbbHcc_tags_H_dR_stack_5->SetBinError(14,1.677278);
   VbbHcc_tags_H_dR_stack_5->SetBinError(15,2.641788);
   VbbHcc_tags_H_dR_stack_5->SetBinError(16,1.904756);
   VbbHcc_tags_H_dR_stack_5->SetBinError(17,2.036165);
   VbbHcc_tags_H_dR_stack_5->SetBinError(18,2.559703);
   VbbHcc_tags_H_dR_stack_5->SetBinError(19,2.704496);
   VbbHcc_tags_H_dR_stack_5->SetBinError(20,2.012528);
   VbbHcc_tags_H_dR_stack_5->SetBinError(21,1.036814);
   VbbHcc_tags_H_dR_stack_5->SetBinError(22,1.721956);
   VbbHcc_tags_H_dR_stack_5->SetBinError(23,1.831491);
   VbbHcc_tags_H_dR_stack_5->SetBinError(24,1.272882);
   VbbHcc_tags_H_dR_stack_5->SetBinError(25,0.5597862);
   VbbHcc_tags_H_dR_stack_5->SetBinError(26,0.6252634);
   VbbHcc_tags_H_dR_stack_5->SetBinError(27,1.717292);
   VbbHcc_tags_H_dR_stack_5->SetBinError(28,1.277023);
   VbbHcc_tags_H_dR_stack_5->SetBinError(29,1.241163);
   VbbHcc_tags_H_dR_stack_5->SetBinError(30,0.3304859);
   VbbHcc_tags_H_dR_stack_5->SetBinError(31,1.182223);
   VbbHcc_tags_H_dR_stack_5->SetEntries(2254);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_5,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_6 = new TH1D("VbbHcc_tags_H_dR_stack_6","",30,0,6);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(3,0.6306118);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(4,0.3153059);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(5,0.3153059);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(24,0.3153059);
   VbbHcc_tags_H_dR_stack_6->SetBinError(3,0.4459099);
   VbbHcc_tags_H_dR_stack_6->SetBinError(4,0.3153059);
   VbbHcc_tags_H_dR_stack_6->SetBinError(5,0.3153059);
   VbbHcc_tags_H_dR_stack_6->SetBinError(24,0.3153059);
   VbbHcc_tags_H_dR_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_6,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_7 = new TH1D("VbbHcc_tags_H_dR_stack_7","",30,0,6);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(5,0.2479422);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(7,0.2479422);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(8,0.2479422);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(12,0.4958844);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(13,0.4958844);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(15,0.2479422);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(16,0.2479422);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(17,1.239711);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(18,0.2479422);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(19,0.7438266);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(20,0.2479422);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(21,0.9917687);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(22,0.2479422);
   VbbHcc_tags_H_dR_stack_7->SetBinError(5,0.2479422);
   VbbHcc_tags_H_dR_stack_7->SetBinError(7,0.2479422);
   VbbHcc_tags_H_dR_stack_7->SetBinError(8,0.2479422);
   VbbHcc_tags_H_dR_stack_7->SetBinError(12,0.3506432);
   VbbHcc_tags_H_dR_stack_7->SetBinError(13,0.3506432);
   VbbHcc_tags_H_dR_stack_7->SetBinError(15,0.2479422);
   VbbHcc_tags_H_dR_stack_7->SetBinError(16,0.2479422);
   VbbHcc_tags_H_dR_stack_7->SetBinError(17,0.5544156);
   VbbHcc_tags_H_dR_stack_7->SetBinError(18,0.2479422);
   VbbHcc_tags_H_dR_stack_7->SetBinError(19,0.4294485);
   VbbHcc_tags_H_dR_stack_7->SetBinError(20,0.2479422);
   VbbHcc_tags_H_dR_stack_7->SetBinError(21,0.4958844);
   VbbHcc_tags_H_dR_stack_7->SetBinError(22,0.2479422);
   VbbHcc_tags_H_dR_stack_7->SetEntries(24);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_7,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_8 = new TH1D("VbbHcc_tags_H_dR_stack_8","",30,0,6);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(3,4.05161);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(4,2.785482);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(5,3.291933);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(6,1.519354);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(7,1.266128);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(8,0.7596768);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(9,0.5064512);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(10,0.2532256);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(11,1.266128);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(12,1.266128);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(13,1.012902);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(14,2.532256);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(15,3.038707);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(16,4.558061);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(17,1.772579);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(18,4.304835);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(19,4.05161);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(20,1.519354);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(21,0.5064512);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(22,1.519354);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(23,0.2532256);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(24,0.7596768);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(26,0.5064512);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(27,0.2532256);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(28,0.7596768);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(29,0.2532256);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(30,0.2532256);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(31,0.2532256);
   VbbHcc_tags_H_dR_stack_8->SetBinError(3,1.012902);
   VbbHcc_tags_H_dR_stack_8->SetBinError(4,0.8398543);
   VbbHcc_tags_H_dR_stack_8->SetBinError(5,0.9130179);
   VbbHcc_tags_H_dR_stack_8->SetBinError(6,0.6202735);
   VbbHcc_tags_H_dR_stack_8->SetBinError(7,0.5662297);
   VbbHcc_tags_H_dR_stack_8->SetBinError(8,0.4385996);
   VbbHcc_tags_H_dR_stack_8->SetBinError(9,0.3581151);
   VbbHcc_tags_H_dR_stack_8->SetBinError(10,0.2532256);
   VbbHcc_tags_H_dR_stack_8->SetBinError(11,0.5662297);
   VbbHcc_tags_H_dR_stack_8->SetBinError(12,0.5662297);
   VbbHcc_tags_H_dR_stack_8->SetBinError(13,0.5064512);
   VbbHcc_tags_H_dR_stack_8->SetBinError(14,0.8007697);
   VbbHcc_tags_H_dR_stack_8->SetBinError(15,0.8771992);
   VbbHcc_tags_H_dR_stack_8->SetBinError(16,1.074345);
   VbbHcc_tags_H_dR_stack_8->SetBinError(17,0.669972);
   VbbHcc_tags_H_dR_stack_8->SetBinError(18,1.044076);
   VbbHcc_tags_H_dR_stack_8->SetBinError(19,1.012902);
   VbbHcc_tags_H_dR_stack_8->SetBinError(20,0.6202735);
   VbbHcc_tags_H_dR_stack_8->SetBinError(21,0.3581151);
   VbbHcc_tags_H_dR_stack_8->SetBinError(22,0.6202735);
   VbbHcc_tags_H_dR_stack_8->SetBinError(23,0.2532256);
   VbbHcc_tags_H_dR_stack_8->SetBinError(24,0.4385996);
   VbbHcc_tags_H_dR_stack_8->SetBinError(26,0.3581151);
   VbbHcc_tags_H_dR_stack_8->SetBinError(27,0.2532256);
   VbbHcc_tags_H_dR_stack_8->SetBinError(28,0.4385996);
   VbbHcc_tags_H_dR_stack_8->SetBinError(29,0.2532256);
   VbbHcc_tags_H_dR_stack_8->SetBinError(30,0.2532256);
   VbbHcc_tags_H_dR_stack_8->SetBinError(31,0.2532256);
   VbbHcc_tags_H_dR_stack_8->SetEntries(178);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_8,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_9 = new TH1D("VbbHcc_tags_H_dR_stack_9","",30,0,6);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(3,1.847694);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(4,3.359443);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(5,3.330371);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(6,2.569651);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(7,1.786319);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(8,1.095049);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(9,0.9545341);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(10,0.9577643);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(11,1.145118);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(12,1.642574);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(13,2.156181);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(14,2.773156);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(15,3.424048);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(16,3.826212);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(17,3.717999);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(18,3.057416);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(19,2.325768);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(20,1.684567);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(21,1.229104);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(22,0.8107887);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(23,0.5184525);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(24,0.3779373);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(25,0.2874908);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(26,0.3698618);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(27,0.3424048);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(28,0.4118548);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(29,0.2648792);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(30,0.1776629);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(31,0.1017524);
   VbbHcc_tags_H_dR_stack_9->SetBinError(3,0.05462821);
   VbbHcc_tags_H_dR_stack_9->SetBinError(4,0.07366066);
   VbbHcc_tags_H_dR_stack_9->SetBinError(5,0.07334125);
   VbbHcc_tags_H_dR_stack_9->SetBinError(6,0.06442272);
   VbbHcc_tags_H_dR_stack_9->SetBinError(7,0.05371326);
   VbbHcc_tags_H_dR_stack_9->SetBinError(8,0.04205511);
   VbbHcc_tags_H_dR_stack_9->SetBinError(9,0.03926429);
   VbbHcc_tags_H_dR_stack_9->SetBinError(10,0.03933067);
   VbbHcc_tags_H_dR_stack_9->SetBinError(11,0.0430058);
   VbbHcc_tags_H_dR_stack_9->SetBinError(12,0.05150678);
   VbbHcc_tags_H_dR_stack_9->SetBinError(13,0.05901258);
   VbbHcc_tags_H_dR_stack_9->SetBinError(14,0.06692511);
   VbbHcc_tags_H_dR_stack_9->SetBinError(15,0.07436557);
   VbbHcc_tags_H_dR_stack_9->SetBinError(16,0.07861157);
   VbbHcc_tags_H_dR_stack_9->SetBinError(17,0.07749195);
   VbbHcc_tags_H_dR_stack_9->SetBinError(18,0.07027151);
   VbbHcc_tags_H_dR_stack_9->SetBinError(19,0.06128938);
   VbbHcc_tags_H_dR_stack_9->SetBinError(20,0.05216102);
   VbbHcc_tags_H_dR_stack_9->SetBinError(21,0.04455498);
   VbbHcc_tags_H_dR_stack_9->SetBinError(22,0.03618727);
   VbbHcc_tags_H_dR_stack_9->SetBinError(23,0.0289372);
   VbbHcc_tags_H_dR_stack_9->SetBinError(24,0.02470654);
   VbbHcc_tags_H_dR_stack_9->SetBinError(25,0.02154835);
   VbbHcc_tags_H_dR_stack_9->SetBinError(26,0.02444115);
   VbbHcc_tags_H_dR_stack_9->SetBinError(27,0.02351646);
   VbbHcc_tags_H_dR_stack_9->SetBinError(28,0.02579135);
   VbbHcc_tags_H_dR_stack_9->SetBinError(29,0.02068359);
   VbbHcc_tags_H_dR_stack_9->SetBinError(30,0.01693949);
   VbbHcc_tags_H_dR_stack_9->SetBinError(31,0.01281959);
   VbbHcc_tags_H_dR_stack_9->SetEntries(28819);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_9,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_10 = new TH1D("VbbHcc_tags_H_dR_stack_10","",30,0,6);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(3,0.6161335);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(4,1.193707);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(5,1.368679);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(6,1.291559);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(7,1.000906);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(8,0.779496);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(9,0.6439135);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(10,0.6132312);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(11,0.6683764);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(12,0.8101783);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(13,0.9905404);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(14,1.130269);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(15,1.24512);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(16,1.308558);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(17,1.285754);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(18,1.168415);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(19,0.8943473);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(20,0.7624964);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(21,0.5643054);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(22,0.4079915);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(23,0.2960426);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(24,0.2678481);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(25,0.2160199);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(26,0.218093);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(27,0.2019226);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(28,0.1592162);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(29,0.1214853);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(30,0.08168123);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(31,0.04768194);
   VbbHcc_tags_H_dR_stack_10->SetBinError(3,0.01598326);
   VbbHcc_tags_H_dR_stack_10->SetBinError(4,0.02224728);
   VbbHcc_tags_H_dR_stack_10->SetBinError(5,0.02382203);
   VbbHcc_tags_H_dR_stack_10->SetBinError(6,0.02314116);
   VbbHcc_tags_H_dR_stack_10->SetBinError(7,0.02037158);
   VbbHcc_tags_H_dR_stack_10->SetBinError(8,0.01797773);
   VbbHcc_tags_H_dR_stack_10->SetBinError(9,0.01633961);
   VbbHcc_tags_H_dR_stack_10->SetBinError(10,0.01594557);
   VbbHcc_tags_H_dR_stack_10->SetBinError(11,0.0166471);
   VbbHcc_tags_H_dR_stack_10->SetBinError(12,0.01832814);
   VbbHcc_tags_H_dR_stack_10->SetBinError(13,0.02026582);
   VbbHcc_tags_H_dR_stack_10->SetBinError(14,0.02164806);
   VbbHcc_tags_H_dR_stack_10->SetBinError(15,0.02272133);
   VbbHcc_tags_H_dR_stack_10->SetBinError(16,0.02329295);
   VbbHcc_tags_H_dR_stack_10->SetBinError(17,0.0230891);
   VbbHcc_tags_H_dR_stack_10->SetBinError(18,0.02201033);
   VbbHcc_tags_H_dR_stack_10->SetBinError(19,0.01925667);
   VbbHcc_tags_H_dR_stack_10->SetBinError(20,0.01778062);
   VbbHcc_tags_H_dR_stack_10->SetBinError(21,0.01529625);
   VbbHcc_tags_H_dR_stack_10->SetBinError(22,0.01300629);
   VbbHcc_tags_H_dR_stack_10->SetBinError(23,0.01107912);
   VbbHcc_tags_H_dR_stack_10->SetBinError(24,0.01053834);
   VbbHcc_tags_H_dR_stack_10->SetBinError(25,0.009464004);
   VbbHcc_tags_H_dR_stack_10->SetBinError(26,0.009509308);
   VbbHcc_tags_H_dR_stack_10->SetBinError(27,0.009149988);
   VbbHcc_tags_H_dR_stack_10->SetBinError(28,0.008124968);
   VbbHcc_tags_H_dR_stack_10->SetBinError(29,0.007097246);
   VbbHcc_tags_H_dR_stack_10->SetBinError(30,0.005819547);
   VbbHcc_tags_H_dR_stack_10->SetBinError(31,0.004446364);
   VbbHcc_tags_H_dR_stack_10->SetEntries(49090);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_10,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_11 = new TH1D("VbbHcc_tags_H_dR_stack_11","",30,0,6);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(3,0.003160502);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(4,0.01896301);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(5,0.01106176);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(6,0.009481507);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(7,0.01738276);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(8,0.004740753);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(9,0.007901256);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(10,0.001580251);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(11,0.003160502);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(12,0.006321005);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(13,0.003160502);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(14,0.003160502);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(15,0.001580251);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(16,0.003160502);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(17,0.009481507);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(18,0.003160502);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(19,0.004740753);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(20,0.001580251);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(21,0.001580251);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(22,0.004740753);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(23,0.003160502);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(24,0.001580251);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(25,0.003160502);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(26,0.001580251);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(27,0.001580251);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(28,0.001580251);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(29,0.003160502);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(31,0.001580251);
   VbbHcc_tags_H_dR_stack_11->SetBinError(3,0.002234813);
   VbbHcc_tags_H_dR_stack_11->SetBinError(4,0.005474151);
   VbbHcc_tags_H_dR_stack_11->SetBinError(5,0.004180952);
   VbbHcc_tags_H_dR_stack_11->SetBinError(6,0.003870809);
   VbbHcc_tags_H_dR_stack_11->SetBinError(7,0.0052411);
   VbbHcc_tags_H_dR_stack_11->SetBinError(8,0.002737075);
   VbbHcc_tags_H_dR_stack_11->SetBinError(9,0.003533549);
   VbbHcc_tags_H_dR_stack_11->SetBinError(10,0.001580251);
   VbbHcc_tags_H_dR_stack_11->SetBinError(11,0.002234813);
   VbbHcc_tags_H_dR_stack_11->SetBinError(12,0.003160502);
   VbbHcc_tags_H_dR_stack_11->SetBinError(13,0.002234813);
   VbbHcc_tags_H_dR_stack_11->SetBinError(14,0.002234813);
   VbbHcc_tags_H_dR_stack_11->SetBinError(15,0.001580251);
   VbbHcc_tags_H_dR_stack_11->SetBinError(16,0.002234813);
   VbbHcc_tags_H_dR_stack_11->SetBinError(17,0.003870809);
   VbbHcc_tags_H_dR_stack_11->SetBinError(18,0.002234813);
   VbbHcc_tags_H_dR_stack_11->SetBinError(19,0.002737075);
   VbbHcc_tags_H_dR_stack_11->SetBinError(20,0.001580251);
   VbbHcc_tags_H_dR_stack_11->SetBinError(21,0.001580251);
   VbbHcc_tags_H_dR_stack_11->SetBinError(22,0.002737075);
   VbbHcc_tags_H_dR_stack_11->SetBinError(23,0.002234813);
   VbbHcc_tags_H_dR_stack_11->SetBinError(24,0.001580251);
   VbbHcc_tags_H_dR_stack_11->SetBinError(25,0.002234813);
   VbbHcc_tags_H_dR_stack_11->SetBinError(26,0.001580251);
   VbbHcc_tags_H_dR_stack_11->SetBinError(27,0.001580251);
   VbbHcc_tags_H_dR_stack_11->SetBinError(28,0.001580251);
   VbbHcc_tags_H_dR_stack_11->SetBinError(29,0.002234813);
   VbbHcc_tags_H_dR_stack_11->SetBinError(31,0.001580251);
   VbbHcc_tags_H_dR_stack_11->SetEntries(87);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_11,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_12 = new TH1D("VbbHcc_tags_H_dR_stack_12","",30,0,6);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(3,0.001038028);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(4,0.001868451);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(5,0.00477493);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(6,0.003944507);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(7,0.005190141);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(8,0.00332169);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(9,0.002491268);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(10,0.002698874);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(11,0.002491268);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(12,0.002283662);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(13,0.002283662);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(14,0.002076057);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(15,0.00332169);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(16,0.002491268);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(17,0.001660845);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(18,0.002698874);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(19,0.001660845);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(20,0.001038028);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(21,0.000622817);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(22,0.001245634);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(23,0.001038028);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(24,0.00145324);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(25,0.001245634);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(26,0.0008304226);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(27,0.001245634);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(28,0.0008304226);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(29,0.0004152113);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(30,0.000622817);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(31,0.000622817);
   VbbHcc_tags_H_dR_stack_12->SetBinError(3,0.0004642204);
   VbbHcc_tags_H_dR_stack_12->SetBinError(4,0.000622817);
   VbbHcc_tags_H_dR_stack_12->SetBinError(5,0.0009956417);
   VbbHcc_tags_H_dR_stack_12->SetBinError(6,0.0009049321);
   VbbHcc_tags_H_dR_stack_12->SetBinError(7,0.001038028);
   VbbHcc_tags_H_dR_stack_12->SetBinError(8,0.0008304226);
   VbbHcc_tags_H_dR_stack_12->SetBinError(9,0.0007191671);
   VbbHcc_tags_H_dR_stack_12->SetBinError(10,0.0007485328);
   VbbHcc_tags_H_dR_stack_12->SetBinError(11,0.0007191671);
   VbbHcc_tags_H_dR_stack_12->SetBinError(12,0.0006885501);
   VbbHcc_tags_H_dR_stack_12->SetBinError(13,0.0006885501);
   VbbHcc_tags_H_dR_stack_12->SetBinError(14,0.0006565067);
   VbbHcc_tags_H_dR_stack_12->SetBinError(15,0.0008304226);
   VbbHcc_tags_H_dR_stack_12->SetBinError(16,0.0007191671);
   VbbHcc_tags_H_dR_stack_12->SetBinError(17,0.0005871975);
   VbbHcc_tags_H_dR_stack_12->SetBinError(18,0.0007485328);
   VbbHcc_tags_H_dR_stack_12->SetBinError(19,0.0005871975);
   VbbHcc_tags_H_dR_stack_12->SetBinError(20,0.0004642204);
   VbbHcc_tags_H_dR_stack_12->SetBinError(21,0.0003595835);
   VbbHcc_tags_H_dR_stack_12->SetBinError(22,0.0005085279);
   VbbHcc_tags_H_dR_stack_12->SetBinError(23,0.0004642204);
   VbbHcc_tags_H_dR_stack_12->SetBinError(24,0.0005492729);
   VbbHcc_tags_H_dR_stack_12->SetBinError(25,0.0005085279);
   VbbHcc_tags_H_dR_stack_12->SetBinError(26,0.0004152113);
   VbbHcc_tags_H_dR_stack_12->SetBinError(27,0.0005085279);
   VbbHcc_tags_H_dR_stack_12->SetBinError(28,0.0004152113);
   VbbHcc_tags_H_dR_stack_12->SetBinError(29,0.0002935987);
   VbbHcc_tags_H_dR_stack_12->SetBinError(30,0.0003595835);
   VbbHcc_tags_H_dR_stack_12->SetBinError(31,0.0003595835);
   VbbHcc_tags_H_dR_stack_12->SetEntries(277);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_dR__59 = new TH1D("VbbHcc_tags_H_dR__59","",30,0,6);
   VbbHcc_tags_H_dR__59->SetBinContent(2,4);
   VbbHcc_tags_H_dR__59->SetBinContent(3,3366);
   VbbHcc_tags_H_dR__59->SetBinContent(4,3625);
   VbbHcc_tags_H_dR__59->SetBinContent(5,2759);
   VbbHcc_tags_H_dR__59->SetBinContent(6,2602);
   VbbHcc_tags_H_dR__59->SetBinContent(7,2541);
   VbbHcc_tags_H_dR__59->SetBinContent(8,2500);
   VbbHcc_tags_H_dR__59->SetBinContent(9,2468);
   VbbHcc_tags_H_dR__59->SetBinContent(10,2658);
   VbbHcc_tags_H_dR__59->SetBinContent(11,2779);
   VbbHcc_tags_H_dR__59->SetBinContent(12,3072);
   VbbHcc_tags_H_dR__59->SetBinContent(13,3323);
   VbbHcc_tags_H_dR__59->SetBinContent(14,3555);
   VbbHcc_tags_H_dR__59->SetBinContent(15,3894);
   VbbHcc_tags_H_dR__59->SetBinContent(16,4100);
   VbbHcc_tags_H_dR__59->SetBinContent(17,3856);
   VbbHcc_tags_H_dR__59->SetBinContent(18,3597);
   VbbHcc_tags_H_dR__59->SetBinContent(19,3215);
   VbbHcc_tags_H_dR__59->SetBinContent(20,2748);
   VbbHcc_tags_H_dR__59->SetBinContent(21,2471);
   VbbHcc_tags_H_dR__59->SetBinContent(22,1904);
   VbbHcc_tags_H_dR__59->SetBinContent(23,1626);
   VbbHcc_tags_H_dR__59->SetBinContent(24,1332);
   VbbHcc_tags_H_dR__59->SetBinContent(25,1053);
   VbbHcc_tags_H_dR__59->SetBinContent(26,865);
   VbbHcc_tags_H_dR__59->SetBinContent(27,750);
   VbbHcc_tags_H_dR__59->SetBinContent(28,594);
   VbbHcc_tags_H_dR__59->SetBinContent(29,548);
   VbbHcc_tags_H_dR__59->SetBinContent(30,395);
   VbbHcc_tags_H_dR__59->SetBinContent(31,331);
   VbbHcc_tags_H_dR__59->SetEntries(68560);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR__59->SetLineColor(ci);
   VbbHcc_tags_H_dR__59->SetLineWidth(2);
   VbbHcc_tags_H_dR__59->SetMarkerStyle(20);
   VbbHcc_tags_H_dR__59->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR__59->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR__59->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__59->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR__59->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR__59->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__59->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__59->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR__59->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR__59->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR__59->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__59->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__59->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR__59->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR__59->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__59->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_fx1043[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_fy1043[30] = {
   0,
   0.6733176,
   9039.893,
   11963.38,
   7846.183,
   6927.257,
   6160.904,
   6001.416,
   4938.88,
   8177.501,
   8097.596,
   8414.977,
   9985.18,
   13552.74,
   10491.65,
   27820.2,
   13908.96,
   13492.17,
   10606.52,
   8124.326,
   6560.791,
   3955.323,
   3707.624,
   18880.02,
   2723.093,
   1889.522,
   1890.094,
   1576.045,
   1490.101,
   769.0048};
   Double_t Graph_from_VbbHcc_tags_H_dR_fex1043[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_fey1043[30] = {
   0,
   0.2069524,
   1039.733,
   1343.177,
   1030.193,
   953.929,
   910.782,
   871.37,
   636.5838,
   1155.427,
   1497.744,
   1033.935,
   1196.345,
   1471.035,
   1139.581,
   14875.58,
   1425.574,
   1447.418,
   1228.256,
   1452.275,
   915.2374,
   624.5522,
   677.3123,
   14832.51,
   613.8642,
   478.1995,
   480.673,
   474.4162,
   397.4897,
   279.7995};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_fx1043,Graph_from_VbbHcc_tags_H_dR_fy1043,Graph_from_VbbHcc_tags_H_dR_fex1043,Graph_from_VbbHcc_tags_H_dR_fey1043);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR1043 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR1043","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->SetMaximum(46965.35);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR1043->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR1043);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_dR","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_tags_17->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9499975,-0.2774193,6.525,1.658065);
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
   
   TH1D *data_mc_ratio__60 = new TH1D("data_mc_ratio__60","",30,0,6);
   data_mc_ratio__60->SetBinContent(2,5.940733);
   data_mc_ratio__60->SetBinContent(3,0.3723495);
   data_mc_ratio__60->SetBinContent(4,0.303008);
   data_mc_ratio__60->SetBinContent(5,0.351636);
   data_mc_ratio__60->SetBinContent(6,0.3756176);
   data_mc_ratio__60->SetBinContent(7,0.4124395);
   data_mc_ratio__60->SetBinContent(8,0.4165684);
   data_mc_ratio__60->SetBinContent(9,0.4997084);
   data_mc_ratio__60->SetBinContent(10,0.3250382);
   data_mc_ratio__60->SetBinContent(11,0.3431883);
   data_mc_ratio__60->SetBinContent(12,0.3650634);
   data_mc_ratio__60->SetBinContent(13,0.3327932);
   data_mc_ratio__60->SetBinContent(14,0.2623086);
   data_mc_ratio__60->SetBinContent(15,0.3711522);
   data_mc_ratio__60->SetBinContent(16,0.1473749);
   data_mc_ratio__60->SetBinContent(17,0.2772313);
   data_mc_ratio__60->SetBinContent(18,0.2665991);
   data_mc_ratio__60->SetBinContent(19,0.3031155);
   data_mc_ratio__60->SetBinContent(20,0.3382435);
   data_mc_ratio__60->SetBinContent(21,0.3766314);
   data_mc_ratio__60->SetBinContent(22,0.4813767);
   data_mc_ratio__60->SetBinContent(23,0.4385558);
   data_mc_ratio__60->SetBinContent(24,0.07055079);
   data_mc_ratio__60->SetBinContent(25,0.3866926);
   data_mc_ratio__60->SetBinContent(26,0.4577878);
   data_mc_ratio__60->SetBinContent(27,0.3968056);
   data_mc_ratio__60->SetBinContent(28,0.3768929);
   data_mc_ratio__60->SetBinContent(29,0.3677604);
   data_mc_ratio__60->SetBinContent(30,0.5136509);
   data_mc_ratio__60->SetBinContent(31,0.27712);
   data_mc_ratio__60->SetBinError(2,2.970366);
   data_mc_ratio__60->SetBinError(3,0.006417912);
   data_mc_ratio__60->SetBinError(4,0.005032688);
   data_mc_ratio__60->SetBinError(5,0.006694489);
   data_mc_ratio__60->SetBinError(6,0.007363637);
   data_mc_ratio__60->SetBinError(7,0.00818197);
   data_mc_ratio__60->SetBinError(8,0.008331368);
   data_mc_ratio__60->SetBinError(9,0.01005875);
   data_mc_ratio__60->SetBinError(10,0.006304591);
   data_mc_ratio__60->SetBinError(11,0.006510108);
   data_mc_ratio__60->SetBinError(12,0.006586545);
   data_mc_ratio__60->SetBinError(13,0.005773103);
   data_mc_ratio__60->SetBinError(14,0.004399392);
   data_mc_ratio__60->SetBinError(15,0.005947768);
   data_mc_ratio__60->SetBinError(16,0.00230161);
   data_mc_ratio__60->SetBinError(17,0.00446451);
   data_mc_ratio__60->SetBinError(18,0.004445171);
   data_mc_ratio__60->SetBinError(19,0.005345861);
   data_mc_ratio__60->SetBinError(20,0.006452396);
   data_mc_ratio__60->SetBinError(21,0.007576702);
   data_mc_ratio__60->SetBinError(22,0.01103193);
   data_mc_ratio__60->SetBinError(23,0.01087588);
   data_mc_ratio__60->SetBinError(24,0.00193308);
   data_mc_ratio__60->SetBinError(25,0.01191658);
   data_mc_ratio__60->SetBinError(26,0.01556525);
   data_mc_ratio__60->SetBinError(27,0.01448929);
   data_mc_ratio__60->SetBinError(28,0.0154641);
   data_mc_ratio__60->SetBinError(29,0.01570994);
   data_mc_ratio__60->SetBinError(30,0.02584458);
   data_mc_ratio__60->SetBinError(31,0.1101087);
   data_mc_ratio__60->SetMinimum(0.4);
   data_mc_ratio__60->SetMaximum(1.6);
   data_mc_ratio__60->SetEntries(20.46037);
   data_mc_ratio__60->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__60->SetLineColor(ci);
   data_mc_ratio__60->SetLineWidth(2);
   data_mc_ratio__60->SetMarkerStyle(20);
   data_mc_ratio__60->SetMarkerSize(1.2);
   data_mc_ratio__60->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__60->GetXaxis()->SetRange(1,31);
   data_mc_ratio__60->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__60->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__60->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__60->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__60->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__60->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__60->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__60->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__60->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__60->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__60->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__60->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__60->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__60->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__60->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__60->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__60->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1044[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1044[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1044[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1044[30] = {
   0,
   0.3073622,
   0.115016,
   0.112274,
   0.1312986,
   0.1377066,
   0.1478325,
   0.1451941,
   0.1288923,
   0.1412934,
   0.1849616,
   0.1228685,
   0.119812,
   0.1085415,
   0.1086178,
   0.5347043,
   0.1024932,
   0.1072784,
   0.115802,
   0.1787564,
   0.1395011,
   0.1579017,
   0.1826809,
   0.7856197,
   0.225429,
   0.2530797,
   0.2543116,
   0.3010169,
   0.2667536,
   0.3638462};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1044,Graph_from_mc_statistical_error_fy1044,Graph_from_mc_statistical_error_fex1044,Graph_from_mc_statistical_error_fey1044);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1044 = new TH1F("Graph_Graph_from_mc_statistical_error1044","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1044->SetMinimum(0.0572564);
   Graph_Graph_from_mc_statistical_error1044->SetMaximum(1.942744);
   Graph_Graph_from_mc_statistical_error1044->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1044->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1044->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1044->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1044->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1044->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1044->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1044->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1044->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1044->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1044->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1044->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1044->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1044->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1044->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1044->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1044);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_tags_17->cd();
   H_dR_tags_17->Modified();
   H_dR_tags_17->cd();
   H_dR_tags_17->SetSelected(H_dR_tags_17);
}
