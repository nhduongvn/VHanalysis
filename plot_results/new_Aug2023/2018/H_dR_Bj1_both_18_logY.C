void H_dR_Bj1_both_18_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_both_18/H_dR_Bj1_both_18
//=========  (Tue Aug 22 09:18:38 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_both_18 = new TCanvas("H_dR_Bj1_both_18", "H_dR_Bj1_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_both_18->SetHighLightColor(2);
   H_dR_Bj1_both_18->Range(0,0,1,1);
   H_dR_Bj1_both_18->SetFillColor(0);
   H_dR_Bj1_both_18->SetFillStyle(4000);
   H_dR_Bj1_both_18->SetBorderMode(0);
   H_dR_Bj1_both_18->SetBorderSize(2);
   H_dR_Bj1_both_18->SetFrameFillStyle(1000);
   H_dR_Bj1_both_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.872908,6.314516,12.48474);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLogy();
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(2.553945e+10);
   
   TH1F *st_stack_239 = new TH1F("st_stack_239","",30,0,6);
   st_stack_239->SetMinimum(0.001388194);
   st_stack_239->SetMaximum(8.891413e+10);
   st_stack_239->SetDirectory(0);
   st_stack_239->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_239->SetLineColor(ci);
   st_stack_239->GetXaxis()->SetRange(1,30);
   st_stack_239->GetXaxis()->SetLabelFont(42);
   st_stack_239->GetXaxis()->SetLabelSize(0.035);
   st_stack_239->GetXaxis()->SetTitleSize(0.035);
   st_stack_239->GetXaxis()->SetTitleFont(42);
   st_stack_239->GetYaxis()->SetTitle("Events/0.2");
   st_stack_239->GetYaxis()->SetLabelFont(42);
   st_stack_239->GetYaxis()->SetLabelSize(0.05);
   st_stack_239->GetYaxis()->SetTitleSize(0.057);
   st_stack_239->GetYaxis()->SetTitleOffset(1.2);
   st_stack_239->GetYaxis()->SetTitleFont(42);
   st_stack_239->GetZaxis()->SetLabelFont(42);
   st_stack_239->GetZaxis()->SetLabelSize(0.035);
   st_stack_239->GetZaxis()->SetTitleSize(0.035);
   st_stack_239->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_239);
   
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(1,12888.05);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(2,33048.53);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(3,28535.68);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(4,25698.91);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(5,17739.43);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(6,17101.93);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(7,12491.79);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(8,6687.282);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(9,8693.406);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(10,7168.322);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(11,9101.862);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(12,7055.847);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(13,5729.425);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(14,7955.327);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(15,6511.775);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(16,4116.866);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(17,2000.33);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(18,2512.088);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(19,529.6925);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(20,793.1013);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(21,1112.298);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(22,203.8073);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(23,219.1498);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(24,90.84862);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(25,126.6077);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(26,5.881228);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(27,377.3191);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(28,11.21743);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(29,10.40239);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(1,1247.018);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(2,2328.504);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(3,2195.126);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(4,2803.094);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(5,1808.139);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(6,2522.822);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(7,1579.429);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(8,900.3445);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(9,1275.781);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(10,1208.887);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(11,1423.778);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(12,1207.456);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(13,955.2358);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(14,2141.864);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(15,1146.395);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(16,783.8797);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(17,231.1086);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(18,758.2008);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(19,109.3382);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(20,384.0946);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(21,532.716);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(22,58.96064);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(23,77.31642);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(24,48.96584);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(25,59.82579);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(26,5.881228);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(27,370.6704);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(28,10.43427);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(29,10.40239);
   VbbHcc_both_H_dR_Bj1_stack_1->SetEntries(9895);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(1,82.36933);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(2,184.242);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(3,195.7027);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(4,160.5646);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(5,123.3286);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(6,106.7018);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(7,85.67457);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(8,70.17071);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(9,59.56731);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(10,50.33051);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(11,46.0637);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(12,38.12107);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(13,38.41129);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(14,37.93542);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(15,32.84897);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(16,24.73519);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(17,14.33625);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(18,11.60662);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(19,6.350919);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(20,4.702275);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(21,4.546124);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(22,3.029686);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(23,1.450738);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(24,0.5884874);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(25,0.851876);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(26,0.5478124);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(27,0.4311253);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(29,0.5969458);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(30,0.05162389);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(31,0.1135601);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(1,3.911167);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(2,5.46705);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(3,5.662781);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(4,5.220252);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(5,4.471045);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(6,4.263269);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(7,3.774838);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(8,3.423982);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(9,3.170975);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(10,2.860999);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(11,2.812676);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(12,2.495188);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(13,2.491369);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(14,2.543186);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(15,2.356143);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(16,1.903539);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(17,1.493669);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(18,1.281372);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(19,1.002569);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(20,0.7823687);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(21,0.8852953);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(22,0.7242084);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(23,0.4475262);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(24,0.1779253);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(25,0.4130878);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(26,0.2967575);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(27,0.2903638);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(29,0.3890743);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(30,0.05162389);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(31,0.08062953);
   VbbHcc_both_H_dR_Bj1_stack_2->SetEntries(14948);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_3 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(1,1217.758);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(2,3669.12);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(3,4022.636);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(4,3386.172);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(5,2735.01);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(6,2144.752);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(7,1719.073);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(8,1401.243);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(9,1160.128);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(10,1006.25);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(11,860.8862);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(12,766.3635);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(13,695.948);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(14,617.9238);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(15,571.3048);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(16,514.8702);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(17,295.7069);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(18,188.5566);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(19,133.5213);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(20,86.90012);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(21,58.20377);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(22,36.40368);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(23,24.6145);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(24,15.99685);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(25,9.303129);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(26,4.589597);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(27,3.692277);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(28,1.427166);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(29,1.703917);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(30,0.6572232);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(31,1.711837);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(1,9.116088);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(2,15.8125);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(3,16.58105);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(4,15.21234);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(5,13.66094);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(6,12.07643);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(7,10.80915);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(8,9.747669);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(9,8.869491);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(10,8.264836);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(11,7.639525);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(12,7.210819);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(13,6.880355);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(14,6.477295);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(15,6.229197);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(16,5.915909);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(17,4.476713);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(18,3.575231);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(19,3.005431);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(20,2.419996);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(21,1.983965);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(22,1.553959);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(23,1.282154);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(24,1.040425);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(25,0.7885533);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(26,0.5465619);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(27,0.4951936);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(28,0.3059714);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(29,0.3395944);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(30,0.2202406);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(31,0.3474156);
   VbbHcc_both_H_dR_Bj1_stack_3->SetEntries(416844);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_4 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(1,228.3899);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(2,542.9321);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(3,501.8798);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(4,397.0639);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(5,276.1579);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(6,216.2191);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(7,186.5341);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(8,128.0728);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(9,124.6653);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(10,123.2574);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(11,106.6763);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(12,100.7773);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(13,89.81323);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(14,83.80082);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(15,83.1873);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(16,72.09277);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(17,44.14415);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(18,29.23496);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(19,12.41488);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(20,10.35401);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(21,6.092225);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(22,4.661915);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(23,3.420168);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(24,1.385407);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(25,0.3296332);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(26,0.8191271);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(27,0.2366465);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(28,0.1436599);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(30,0.09298663);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(31,0.2366465);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(1,7.387344);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(2,14.22363);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(3,12.73361);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(4,15.54705);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(5,11.40818);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(6,11.11736);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(7,12.18699);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(8,7.382085);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(9,8.27574);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(10,10.55346);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(11,6.995304);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(12,6.78329);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(13,7.552451);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(14,7.26987);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(15,5.106784);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(16,7.060318);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(17,5.273135);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(18,6.153169);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(19,1.962721);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(20,1.802949);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(21,1.055853);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(22,1.20619);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(23,1.063381);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(24,0.5871553);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(25,0.1947593);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(26,0.5268164);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(27,0.1711277);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(28,0.1436599);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(30,0.09298663);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(31,0.1711277);
   VbbHcc_both_H_dR_Bj1_stack_4->SetEntries(18425);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_5 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(1,32.84905);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(2,55.05079);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(3,51.43099);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(4,47.32249);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(5,34.61975);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(6,17.82121);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(7,19.8526);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(8,8.603684);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(9,16.97929);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(10,5.830256);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(11,6.291723);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(12,6.507792);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(13,5.534332);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(14,5.74591);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(15,13.26178);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(16,6.130498);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(17,2.126119);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(18,2.04125);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(19,1.533883);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(20,0.9589329);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(21,3.16752);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(22,0.6635438);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(24,0.1265664);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(27,0.1265664);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(1,3.69168);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(2,5.290783);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(3,6.955681);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(4,12.03202);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(5,6.077389);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(6,3.445589);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(7,4.141672);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(8,2.435489);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(9,4.50235);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(10,1.089952);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(11,1.110749);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(12,1.221844);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(13,1.048191);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(14,1.15828);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(15,4.20575);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(16,1.146659);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(17,0.6436416);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(18,0.5856658);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(19,0.4738923);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(20,0.4608058);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(21,2.20036);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(22,0.4234771);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(24,0.1265664);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(27,0.1265664);
   VbbHcc_both_H_dR_Bj1_stack_5->SetEntries(2210);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_6 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(3,1.141868);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(3,0.8074229);
   VbbHcc_both_H_dR_Bj1_stack_6->SetEntries(2);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_7 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(2,2.479394);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(3,2.833593);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(4,2.125195);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(5,0.7083982);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(6,0.7083982);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(7,0.3541991);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(8,0.3541991);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(9,0.7083982);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(11,0.7083982);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(15,0.3541991);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(18,0.3541991);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(2,0.9371228);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(3,1.001826);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(4,0.8676071);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(5,0.5009132);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(6,0.5009132);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(7,0.3541991);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(8,0.3541991);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(9,0.5009132);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(11,0.5009132);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(15,0.3541991);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(18,0.3541991);
   VbbHcc_both_H_dR_Bj1_stack_7->SetEntries(33);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_8 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(1,6.985359);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(2,14.25013);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(3,9.500088);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(4,6.985359);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(5,3.632387);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(6,3.632387);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(7,2.514729);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(8,1.9559);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(9,2.514729);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(10,0.8382431);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(11,2.235315);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(12,2.514729);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(13,1.397072);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(14,1.117657);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(15,0.2794144);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(16,2.514729);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(17,1.397072);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(19,0.2794144);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(23,0.2794144);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(1,1.397072);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(2,1.995418);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(3,1.629252);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(4,1.397072);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(5,1.007443);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(6,1.007443);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(7,0.8382431);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(8,0.7392609);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(9,0.8382431);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(10,0.4839599);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(11,0.7903031);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(12,0.8382431);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(13,0.6247895);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(14,0.5588287);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(15,0.2794144);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(16,0.8382431);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(17,0.6247895);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(19,0.2794144);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(23,0.2794144);
   VbbHcc_both_H_dR_Bj1_stack_8->SetEntries(232);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_9 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(1,3.984492);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(2,12.73336);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(3,11.33808);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(4,7.640015);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(5,4.889156);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(6,3.369093);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(7,2.713992);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(8,2.26875);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(9,2.016351);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(10,1.82918);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(11,1.610812);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(12,1.639172);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(13,1.52857);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(14,1.449164);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(15,1.415133);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(16,1.208109);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(17,0.6494296);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(18,0.3970312);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(19,0.27225);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(20,0.1389609);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(21,0.1049297);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(22,0.05104687);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(23,0.02552344);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(24,0.01701562);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(25,0.01701562);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(26,0.008507812);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(27,0.002835937);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(29,0.002835937);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(30,0.002835937);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(31,0.005671875);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(1,0.1063004);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(2,0.190029);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(3,0.1793156);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(4,0.1471958);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(5,0.1177512);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(6,0.09774732);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(7,0.0877309);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(8,0.08021242);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(9,0.07561909);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(10,0.07202387);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(11,0.06758819);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(12,0.06818056);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(13,0.06584018);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(14,0.06410724);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(15,0.06335004);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(16,0.05853309);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(17,0.04291552);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(18,0.03355526);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(19,0.0277864);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(20,0.01985156);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(21,0.01725033);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(22,0.01203186);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(23,0.008507812);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(24,0.006946599);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(25,0.006946599);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(26,0.004911987);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(27,0.002835937);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(29,0.002835937);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(30,0.002835937);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(31,0.004010621);
   VbbHcc_both_H_dR_Bj1_stack_9->SetEntries(22331);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_10 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(1,1.473394);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(2,4.989318);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(3,5.608652);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(4,4.167074);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(5,2.839323);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(6,1.862245);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(7,1.414005);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(8,1.177866);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(9,1.033638);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(10,0.8363841);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(11,0.78548);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(12,0.7084167);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(13,0.5776212);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(14,0.5620671);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(15,0.5083349);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(16,0.4779338);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(17,0.2502789);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(18,0.1428145);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(19,0.07706329);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(20,0.04454117);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(21,0.03676414);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(22,0.01626106);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(23,0.009898037);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(24,0.008484032);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(25,0.002121008);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(26,0.001414005);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(27,0.003535013);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(28,0.0007070027);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(31,0.001414005);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(1,0.03227527);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(2,0.05939243);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(3,0.06297088);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(4,0.05427828);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(5,0.04480411);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(6,0.03628515);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(7,0.03161812);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(8,0.02885749);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(9,0.02703303);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(10,0.02431719);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(11,0.02356558);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(12,0.02237973);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(13,0.02020841);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(14,0.01993447);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(15,0.01895769);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(16,0.01838207);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(17,0.01330218);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(18,0.0100484);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(19,0.007381324);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(20,0.00561166);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(21,0.005098269);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(22,0.003390666);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(23,0.002645362);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(24,0.002449129);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(25,0.001224565);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(26,0.0009998527);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(27,0.001580906);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(28,0.0007070027);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(31,0.0009998527);
   VbbHcc_both_H_dR_Bj1_stack_10->SetEntries(41891);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_11 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(1,0.006827286);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(2,0.05689405);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(3,0.04323948);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(4,0.02275762);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(5,0.01137881);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(6,0.01593033);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(7,0.009103048);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(8,0.002275762);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(9,0.002275762);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(10,0.006827286);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(11,0.002275762);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(12,0.002275762);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(13,0.002275762);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(14,0.002275762);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(16,0.002275762);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(17,0.002275762);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(1,0.003941735);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(2,0.01137881);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(3,0.009919816);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(4,0.007196591);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(5,0.005088758);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(6,0.0060211);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(7,0.004551524);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(8,0.002275762);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(9,0.002275762);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(10,0.003941735);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(11,0.002275762);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(12,0.002275762);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(13,0.002275762);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(14,0.002275762);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(16,0.002275762);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(17,0.002275762);
   VbbHcc_both_H_dR_Bj1_stack_11->SetEntries(84);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_12 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(1,0.003895538);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(2,0.01887838);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(3,0.01708044);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(4,0.01648112);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(5,0.00839039);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(6,0.009888674);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(7,0.002996568);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(8,0.001797941);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(9,0.003895538);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(10,0.002097598);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(11,0.002397254);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(12,0.002397254);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(13,0.0002996568);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(14,0.001797941);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(15,0.001797941);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(16,0.001198627);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(17,0.0008989704);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(18,0.0005993136);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(19,0.0005993136);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(20,0.0008989704);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(21,0.0002996568);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(23,0.0002996568);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(1,0.001080428);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(2,0.002378452);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(3,0.002262359);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(4,0.002222314);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(5,0.001585635);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(6,0.001721397);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(7,0.000947598);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(8,0.0007340063);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(9,0.001080428);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(10,0.0007928174);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(11,0.0008475574);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(12,0.0008475574);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(13,0.0002996568);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(14,0.0007340063);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(15,0.0007340063);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(16,0.0005993136);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(17,0.0005190208);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(18,0.0004237787);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(19,0.0004237787);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(20,0.0005190208);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(21,0.0002996568);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(23,0.0002996568);
   VbbHcc_both_H_dR_Bj1_stack_12->SetEntries(330);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_H_dR_Bj1__656 = new TH1D("VbbHcc_both_H_dR_Bj1__656","",30,0,6);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(1,17263);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(2,48222);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(3,45522);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(4,35564);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(5,27991);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(6,22415);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(7,18250);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(8,15105);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(9,13104);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(10,11654);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(11,10348);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(12,9538);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(13,8578);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(14,7976);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(15,7779);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(16,7211);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(17,4146);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(18,2767);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(19,1964);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(20,1347);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(21,916);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(22,648);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(23,414);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(24,280);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(25,172);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(26,114);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(27,52);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(28,28);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(29,14);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(30,18);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(31,22);
   VbbHcc_both_H_dR_Bj1__656->SetEntries(319451);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1__656->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1__656->SetLineWidth(2);
   VbbHcc_both_H_dR_Bj1__656->SetMarkerStyle(20);
   VbbHcc_both_H_dR_Bj1__656->SetMarkerSize(1.2);
   VbbHcc_both_H_dR_Bj1__656->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1__656->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1__656->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1__656->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1__656->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1__656->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1__656->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1__656->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1__656->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1__656->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1__656->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1__656->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1__656->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1__656->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1__656->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fx1477[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fy1477[30] = {
   14461.87,
   37534.4,
   33337.81,
   29710.99,
   20920.63,
   19597.02,
   14509.93,
   8301.133,
   10061.03,
   8357.503,
   10127.12,
   7972.484,
   6562.638,
   8703.866,
   7214.937,
   4738.898,
   2358.944,
   2744.422,
   684.1429,
   896.2011,
   1184.45,
   248.6334,
   248.9503,
   108.9714,
   137.1115,
   11.84769,
   381.8121,
   12.78896,
   12.70609,
   0.8046697};
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fex1477[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fey1477[30] = {
   1247.086,
   2328.614,
   2195.245,
   2803.209,
   1808.242,
   2522.881,
   1579.523,
   900.4378,
   1275.851,
   1208.965,
   1423.819,
   1207.5,
   955.2945,
   2141.888,
   1146.434,
   783.9374,
   231.2186,
   758.2356,
   109.4031,
   384.1075,
   532.726,
   58.99942,
   77.33616,
   48.9809,
   59.83273,
   5.937441,
   370.6709,
   10.43974,
   10.4152,
   0.2445925};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_H_dR_Bj1_fx1477,Graph_from_VbbHcc_both_H_dR_Bj1_fy1477,Graph_from_VbbHcc_both_H_dR_Bj1_fex1477,Graph_from_VbbHcc_both_H_dR_Bj1_fey1477);
   gre->SetName("Graph_from_VbbHcc_both_H_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_dR_Bj11477 = new TH1F("Graph_Graph_from_VbbHcc_both_H_dR_Bj11477","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->SetMinimum(0.5040695);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->SetMaximum(43849.26);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_H_dR_Bj11477);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_H_dR_Bj1","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_Bj1_both_18->cd();
  
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
   
   TH1D *data_mc_ratio__657 = new TH1D("data_mc_ratio__657","",30,0,6);
   data_mc_ratio__657->SetBinContent(1,1.193691);
   data_mc_ratio__657->SetBinContent(2,1.284741);
   data_mc_ratio__657->SetBinContent(3,1.365477);
   data_mc_ratio__657->SetBinContent(4,1.196998);
   data_mc_ratio__657->SetBinContent(5,1.337961);
   data_mc_ratio__657->SetBinContent(6,1.143796);
   data_mc_ratio__657->SetBinContent(7,1.257759);
   data_mc_ratio__657->SetBinContent(8,1.819631);
   data_mc_ratio__657->SetBinContent(9,1.302452);
   data_mc_ratio__657->SetBinContent(10,1.394436);
   data_mc_ratio__657->SetBinContent(11,1.02181);
   data_mc_ratio__657->SetBinContent(12,1.196365);
   data_mc_ratio__657->SetBinContent(13,1.307096);
   data_mc_ratio__657->SetBinContent(14,0.9163744);
   data_mc_ratio__657->SetBinContent(15,1.07818);
   data_mc_ratio__657->SetBinContent(16,1.521662);
   data_mc_ratio__657->SetBinContent(17,1.757566);
   data_mc_ratio__657->SetBinContent(18,1.008227);
   data_mc_ratio__657->SetBinContent(19,2.870745);
   data_mc_ratio__657->SetBinContent(20,1.503011);
   data_mc_ratio__657->SetBinContent(21,0.7733548);
   data_mc_ratio__657->SetBinContent(22,2.606247);
   data_mc_ratio__657->SetBinContent(23,1.662982);
   data_mc_ratio__657->SetBinContent(24,2.569481);
   data_mc_ratio__657->SetBinContent(25,1.254453);
   data_mc_ratio__657->SetBinContent(26,9.622132);
   data_mc_ratio__657->SetBinContent(27,0.1361927);
   data_mc_ratio__657->SetBinContent(28,2.189388);
   data_mc_ratio__657->SetBinContent(29,1.101834);
   data_mc_ratio__657->SetBinContent(30,22.36943);
   data_mc_ratio__657->SetBinContent(31,10.63249);
   data_mc_ratio__657->SetBinError(1,0.009085182);
   data_mc_ratio__657->SetBinError(2,0.005850502);
   data_mc_ratio__657->SetBinError(3,0.006399906);
   data_mc_ratio__657->SetBinError(4,0.006347288);
   data_mc_ratio__657->SetBinError(5,0.007997134);
   data_mc_ratio__657->SetBinError(6,0.007639752);
   data_mc_ratio__657->SetBinError(7,0.009310353);
   data_mc_ratio__657->SetBinError(8,0.0148055);
   data_mc_ratio__657->SetBinError(9,0.01137784);
   data_mc_ratio__657->SetBinError(10,0.01291698);
   data_mc_ratio__657->SetBinError(11,0.01004482);
   data_mc_ratio__657->SetBinError(12,0.01224997);
   data_mc_ratio__657->SetBinError(13,0.01411285);
   data_mc_ratio__657->SetBinError(14,0.01026078);
   data_mc_ratio__657->SetBinError(15,0.01222445);
   data_mc_ratio__657->SetBinError(16,0.01791927);
   data_mc_ratio__657->SetBinError(17,0.02729588);
   data_mc_ratio__657->SetBinError(18,0.01916698);
   data_mc_ratio__657->SetBinError(19,0.06477746);
   data_mc_ratio__657->SetBinError(20,0.0409523);
   data_mc_ratio__657->SetBinError(21,0.02555236);
   data_mc_ratio__657->SetBinError(22,0.102383);
   data_mc_ratio__657->SetBinError(23,0.08173112);
   data_mc_ratio__657->SetBinError(24,0.1535559);
   data_mc_ratio__657->SetBinError(25,0.09565118);
   data_mc_ratio__657->SetBinError(26,0.9011952);
   data_mc_ratio__657->SetBinError(27,0.01888652);
   data_mc_ratio__657->SetBinError(28,0.4137554);
   data_mc_ratio__657->SetBinError(29,0.2944775);
   data_mc_ratio__657->SetBinError(30,5.272524);
   data_mc_ratio__657->SetBinError(31,3.04485);
   data_mc_ratio__657->SetMinimum(0.4);
   data_mc_ratio__657->SetMaximum(1.6);
   data_mc_ratio__657->SetEntries(48.57934);
   data_mc_ratio__657->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__657->SetLineColor(ci);
   data_mc_ratio__657->SetLineWidth(2);
   data_mc_ratio__657->SetMarkerStyle(20);
   data_mc_ratio__657->SetMarkerSize(1.2);
   data_mc_ratio__657->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__657->GetXaxis()->SetRange(1,30);
   data_mc_ratio__657->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__657->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__657->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__657->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__657->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__657->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__657->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__657->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__657->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__657->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__657->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__657->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__657->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__657->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__657->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__657->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__657->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1478[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1478[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1478[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1478[30] = {
   0.08623265,
   0.06203947,
   0.0658485,
   0.09434924,
   0.08643344,
   0.128738,
   0.1088581,
   0.1084717,
   0.1268112,
   0.1446562,
   0.1405946,
   0.1514584,
   0.1455656,
   0.2460847,
   0.1588972,
   0.1654261,
   0.09801788,
   0.2762825,
   0.1599126,
   0.4285952,
   0.4497666,
   0.2372948,
   0.3106489,
   0.4494839,
   0.4363801,
   0.5011477,
   0.9708202,
   0.8163088,
   0.8197016,
   0.3039664};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1478,Graph_from_mc_statistical_error_fy1478,Graph_from_mc_statistical_error_fex1478,Graph_from_mc_statistical_error_fey1478);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1478 = new TH1F("Graph_Graph_from_mc_statistical_error1478","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1478->SetMinimum(0.02626181);
   Graph_Graph_from_mc_statistical_error1478->SetMaximum(2.164984);
   Graph_Graph_from_mc_statistical_error1478->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1478->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1478->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1478->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1478->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1478->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1478->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1478->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1478->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1478->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1478->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1478->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1478->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1478->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1478->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1478->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1478);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj1_both_18->cd();
   H_dR_Bj1_both_18->Modified();
   H_dR_Bj1_both_18->cd();
   H_dR_Bj1_both_18->SetSelected(H_dR_Bj1_both_18);
}
