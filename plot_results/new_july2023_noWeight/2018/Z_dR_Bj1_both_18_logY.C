void Z_dR_Bj1_both_18_logY()
{
//=========Macro generated from canvas: Z_dR_Bj1_both_18/Z_dR_Bj1_both_18
//=========  (Thu Aug 10 12:33:04 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_both_18 = new TCanvas("Z_dR_Bj1_both_18", "Z_dR_Bj1_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_both_18->SetHighLightColor(2);
   Z_dR_Bj1_both_18->Range(0,0,1,1);
   Z_dR_Bj1_both_18->SetFillColor(0);
   Z_dR_Bj1_both_18->SetFillStyle(4000);
   Z_dR_Bj1_both_18->SetBorderMode(0);
   Z_dR_Bj1_both_18->SetBorderSize(2);
   Z_dR_Bj1_both_18->SetFrameFillStyle(1000);
   Z_dR_Bj1_both_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.873948,6.314516,12.52273);
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
   st->SetMaximum(2.757242e+10);
   
   TH1F *st_stack_247 = new TH1F("st_stack_247","",30,0,6);
   st_stack_247->SetMinimum(0.001384996);
   st_stack_247->SetMaximum(9.617521e+10);
   st_stack_247->SetDirectory(0);
   st_stack_247->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_247->SetLineColor(ci);
   st_stack_247->GetXaxis()->SetRange(1,30);
   st_stack_247->GetXaxis()->SetLabelFont(42);
   st_stack_247->GetXaxis()->SetLabelSize(0.035);
   st_stack_247->GetXaxis()->SetTitleSize(0.035);
   st_stack_247->GetXaxis()->SetTitleFont(42);
   st_stack_247->GetYaxis()->SetTitle("Events/0.2");
   st_stack_247->GetYaxis()->SetLabelFont(42);
   st_stack_247->GetYaxis()->SetLabelSize(0.05);
   st_stack_247->GetYaxis()->SetTitleSize(0.057);
   st_stack_247->GetYaxis()->SetTitleOffset(1.2);
   st_stack_247->GetYaxis()->SetTitleFont(42);
   st_stack_247->GetZaxis()->SetLabelFont(42);
   st_stack_247->GetZaxis()->SetLabelSize(0.035);
   st_stack_247->GetZaxis()->SetTitleSize(0.035);
   st_stack_247->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_247);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(1,8422.398);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(2,35006.99);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(3,32730);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(4,25887.53);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(5,13004.85);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(6,13684.09);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(7,10156.98);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(8,10487.15);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(9,10134.39);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(10,7565.063);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(11,9337.042);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(12,6030.833);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(13,5540.326);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(14,6996.444);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(15,5280.891);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(16,4014.552);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(17,2799.36);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(18,3072.995);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(19,1831.558);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(20,1376.502);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(21,887.8661);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(22,1631.556);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(23,1941.774);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(24,582.8414);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(25,602.3877);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(26,342.789);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(27,301.4767);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(28,100.2529);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(29,66.3153);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(30,87.86327);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(31,40.09946);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(1,969.2213);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(2,2790.746);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(3,2434.266);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(4,2320.323);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(5,1312.445);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(6,2609.324);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(7,1288.975);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(8,1518.433);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(9,1429.085);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(10,1263.31);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(11,2057.98);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(12,1084.074);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(13,1016.31);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(14,1258.5);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(15,1073.459);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(16,931.6215);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(17,673.404);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(18,846.9475);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(19,415.0726);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(20,402.1666);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(21,384.4999);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(22,650.5008);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(23,657.707);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(24,121.3947);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(25,377.1714);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(26,90.38803);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(27,88.07376);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(28,47.98864);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(29,35.41541);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(30,46.95987);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(31,32.49183);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetEntries(10726);

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
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(1,44.88445);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(2,163.3316);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(3,186.7538);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(4,154.6278);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(5,131.7738);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(6,107.0826);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(7,83.85574);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(8,68.48047);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(9,64.45681);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(10,55.19906);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(11,44.08641);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(12,44.19348);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(13,32.67402);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(14,33.00828);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(15,26.69252);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(16,24.68085);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(17,20.39825);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(18,18.31225);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(19,17.63766);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(20,14.77104);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(21,10.84487);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(22,9.060169);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(23,8.857109);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(24,7.249382);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(25,4.814724);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(26,3.553022);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(27,1.554711);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(28,2.331292);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(29,0.6687994);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(30,0.4758012);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(31,0.4134657);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(1,2.939713);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(2,5.284967);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(3,5.630501);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(4,5.117346);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(5,4.609748);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(6,4.299003);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(7,3.783159);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(8,3.415273);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(9,3.258786);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(10,3.104558);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(11,2.705102);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(12,2.770561);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(13,2.296821);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(14,2.391943);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(15,2.111334);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(16,2.054806);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(17,1.822972);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(18,1.72622);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(19,1.752213);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(20,1.704332);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(21,1.37829);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(22,1.299967);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(23,1.222078);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(24,1.180771);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(25,0.9401113);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(26,0.8375468);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(27,0.5045151);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(28,0.7106679);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(29,0.1858223);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(30,0.288306);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(31,0.146442);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetEntries(15898);

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
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(1,648.8043);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(2,3057.73);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(3,3817.431);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(4,3363.441);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(5,2750.424);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(6,2178.576);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(7,1718.009);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(8,1411.086);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(9,1177.354);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(10,997.3649);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(11,882.5278);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(12,795.7053);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(13,706.3173);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(14,631.9496);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(15,559.2053);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(16,498.9506);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(17,414.5907);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(18,352.1041);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(19,301.4281);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(20,257.6103);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(21,209.4214);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(22,169.7312);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(23,129.8143);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(24,101.9199);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(25,75.68724);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(26,53.08327);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(27,35.1652);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(28,19.26172);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(29,13.64602);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(30,7.943179);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(31,11.88188);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(1,6.346436);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(2,13.74715);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(3,15.39495);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(4,14.44201);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(5,13.04482);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(6,11.60118);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(7,10.2953);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(8,9.328331);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(9,8.517994);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(10,7.842283);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(11,7.375516);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(12,7.010843);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(13,6.607947);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(14,6.243904);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(15,5.880007);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(16,5.549638);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(17,5.05645);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(18,4.651279);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(19,4.31308);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(20,3.990073);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(21,3.586928);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(22,3.237065);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(23,2.82028);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(24,2.506367);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(25,2.151949);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(26,1.802743);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(27,1.471662);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(28,1.076677);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(29,0.9104394);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(30,0.6937793);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(31,0.8539482);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetEntries(458232);

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
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(1,147.924);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(2,508.2569);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(3,536.4988);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(4,386.5605);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(5,284.4695);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(6,232.0894);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(7,157.4188);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(8,136.7157);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(9,126.1962);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(10,112.904);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(11,107.054);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(12,85.14393);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(13,84.52868);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(14,83.19774);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(15,56.27194);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(16,60.18446);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(17,53.36294);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(18,39.33854);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(19,40.08434);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(20,40.29633);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(21,27.53984);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(22,20.89151);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(23,13.244);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(24,10.96148);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(25,11.20754);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(26,5.563755);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(27,5.3656);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(28,2.295205);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(29,2.883705);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(30,0.2777189);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(31,1.852393);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(1,4.810873);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(2,14.26272);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(3,14.62275);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(4,13.84484);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(5,12.67899);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(6,13.15921);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(7,6.77872);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(8,7.351663);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(9,8.108463);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(10,7.994169);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(11,8.829803);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(12,7.36848);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(13,4.975665);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(14,7.40324);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(15,3.955289);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(16,7.889156);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(17,5.59088);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(18,5.005226);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(19,5.175155);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(20,6.460525);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(21,2.962616);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(22,2.524963);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(23,1.96479);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(24,1.745092);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(25,1.708736);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(26,1.24129);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(27,1.072652);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(28,0.4830699);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(29,1.021819);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(30,0.1603411);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(31,0.7594526);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetEntries(19394);

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
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(1,25.53948);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(2,53.60809);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(3,44.90775);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(4,45.33289);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(5,43.80705);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(6,20.76325);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(7,11.8418);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(8,12.89028);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(9,13.57297);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(10,9.642711);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(11,8.008922);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(12,10.35719);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(13,5.492217);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(14,9.502481);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(15,3.168157);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(16,6.218427);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(17,3.369507);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(18,2.163175);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(19,4.818156);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(20,2.198413);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(21,2.270064);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(22,1.430817);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(23,0.7920824);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(24,0.970347);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(25,0.4173441);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(26,0.7844891);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(27,0.7495903);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(28,0.4237111);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(29,1.221649);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(1,3.472371);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(2,5.022321);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(3,5.314305);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(4,11.84095);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(5,7.197144);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(6,3.470111);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(7,2.468721);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(8,3.220821);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(9,3.240833);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(10,2.421724);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(11,1.284773);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(12,2.8778);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(13,1.111366);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(14,3.152595);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(15,0.7449121);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(16,2.248607);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(17,0.9194058);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(18,0.5584052);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(19,2.18342);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(20,0.6875392);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(21,0.6330857);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(22,0.5842022);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(23,0.3629293);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(24,0.5392264);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(25,0.2202445);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(26,0.4436974);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(27,0.4431923);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(28,0.2894989);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(29,0.5681563);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetEntries(2575);

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
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(3,0.9040853);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(4,0.4520427);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(6,0.4520427);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(10,0.4520427);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(3,0.6392849);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(4,0.4520427);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(6,0.4520427);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(10,0.4520427);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetEntries(5);

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
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(1,1.416796);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(2,3.187792);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(3,1.770996);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(4,0.7083982);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(5,1.416796);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(6,1.416796);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(8,0.3541991);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(9,0.7083982);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(20,0.3541991);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(21,0.3541991);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(1,0.7083982);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(2,1.062597);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(3,0.7920133);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(4,0.5009132);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(5,0.7083982);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(6,0.7083982);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(8,0.3541991);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(9,0.5009132);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(20,0.3541991);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(21,0.3541991);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetEntries(33);

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
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(1,3.073558);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(2,10.05892);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(3,11.17657);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(4,8.941259);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(5,5.308873);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(6,2.235315);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(7,2.514729);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(8,2.794144);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(9,2.794144);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(10,2.235315);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(11,2.235315);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(12,1.397072);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(13,1.117657);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(14,1.397072);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(15,1.117657);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(16,1.397072);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(17,1.397072);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(18,0.8382431);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(19,0.8382431);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(20,0.5588287);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(21,0.2794144);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(22,0.5588287);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(23,0.2794144);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(25,0.2794144);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(1,0.9267126);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(2,1.676486);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(3,1.767172);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(4,1.580606);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(5,1.217939);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(6,0.7903031);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(7,0.8382431);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(8,0.8835858);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(9,0.8835858);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(10,0.7903031);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(11,0.7903031);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(12,0.6247895);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(13,0.5588287);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(14,0.6247895);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(15,0.5588287);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(16,0.6247895);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(17,0.6247895);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(18,0.4839599);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(19,0.4839599);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(20,0.3951516);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(21,0.2794144);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(22,0.3951516);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(23,0.2794144);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(25,0.2794144);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetEntries(232);

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
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(1,2.605788);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(2,11.39689);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(3,11.20946);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(4,7.577356);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(5,5.275577);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(6,3.602387);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(7,2.928082);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(8,2.331494);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(9,2.139489);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(10,2.157775);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(11,1.906339);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(12,1.837766);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(13,1.561187);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(14,1.435469);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(15,1.209177);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(16,0.9508839);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(17,0.7108772);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(18,0.5028713);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(19,0.4297264);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(20,0.3428668);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(21,0.2720077);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(22,0.2354352);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(23,0.1874338);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(24,0.2102916);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(25,0.1302894);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(26,0.0960027);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(27,0.05485869);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(28,0.0320009);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(29,0.01371467);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(30,0.002285779);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(31,0.002285779);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(1,0.07717677);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(2,0.1614025);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(3,0.1600698);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(4,0.1316061);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(5,0.1098126);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(6,0.09074282);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(7,0.08181044);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(8,0.07300192);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(9,0.06993138);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(10,0.0702296);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(11,0.06601113);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(12,0.06481301);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(13,0.05973715);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(14,0.05728145);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(15,0.05257291);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(16,0.04662092);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(17,0.04031015);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(18,0.03390358);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(19,0.03134102);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(20,0.02799496);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(21,0.0249349);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(22,0.02319812);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(23,0.02069861);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(24,0.02192442);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(25,0.01725725);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(26,0.01481354);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(27,0.01119798);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(28,0.008552601);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(29,0.005598991);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(30,0.002285779);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(31,0.002285779);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetEntries(27714);

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
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(1,0.9872155);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(2,4.538449);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(3,5.494069);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(4,4.2368);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(5,2.847187);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(6,1.975027);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(7,1.428363);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(8,1.152348);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(9,0.9901962);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(10,0.8536791);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(11,0.8214873);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(12,0.7356425);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(13,0.6396632);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(14,0.5937601);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(15,0.4888386);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(16,0.3839171);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(17,0.3517253);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(18,0.2658805);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(19,0.2491885);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(20,0.2068622);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(21,0.1740742);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(22,0.1406901);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(23,0.1186328);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(24,0.09836387);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(25,0.05961446);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(26,0.05663374);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(27,0.02384579);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(28,0.008346025);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(29,0.004769157);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(30,0.0005961446);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(31,0.0005961446);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(1,0.0242595);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(2,0.05201511);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(3,0.05722989);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(4,0.0502568);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(5,0.04119873);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(6,0.03431329);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(7,0.02918066);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(8,0.02621003);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(9,0.02429609);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(10,0.02255917);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(11,0.02212974);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(12,0.02094157);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(13,0.01952772);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(14,0.01881401);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(15,0.01707098);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(16,0.01512845);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(17,0.0144803);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(18,0.01258981);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(19,0.01218821);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(20,0.01110494);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(21,0.01018692);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(22,0.009158148);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(23,0.008409655);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(24,0.007657617);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(25,0.005961446);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(26,0.005810499);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(27,0.00377035);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(28,0.002230569);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(29,0.001686152);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(30,0.0005961446);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(31,0.0005961446);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetEntries(50200);

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
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(1,0.02048186);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(2,0.05461829);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(3,0.03868795);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(4,0.02503338);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(5,0.004551524);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(6,0.006827286);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(7,0.006827286);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(8,0.01365457);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(9,0.002275762);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(10,0.002275762);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(11,0.006827286);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(17,0.002275762);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(20,0.002275762);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(23,0.002275762);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(27,0.002275762);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(1,0.006827286);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(2,0.01114891);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(3,0.009383207);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(4,0.007547848);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(5,0.003218413);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(6,0.003941735);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(7,0.003941735);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(8,0.005574455);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(9,0.002275762);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(10,0.002275762);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(11,0.003941735);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(17,0.002275762);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(20,0.002275762);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(23,0.002275762);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(27,0.002275762);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetEntries(84);

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
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(1,0.003895538);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(2,0.02067632);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(3,0.02487151);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(4,0.01378421);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(5,0.008090734);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(6,0.002397254);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(7,0.003296225);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(8,0.004195195);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(9,0.002696911);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(10,0.002097598);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(11,0.002097598);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(12,0.001498284);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(13,0.0008989704);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(15,0.002097598);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(16,0.0008989704);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(18,0.0008989704);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(19,0.001198627);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(20,0.001498284);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(21,0.0002996568);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(22,0.0005993136);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(23,0.0005993136);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(24,0.0002996568);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(1,0.001080428);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(2,0.002489136);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(3,0.002730003);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(4,0.002032371);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(5,0.001557062);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(6,0.0008475574);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(7,0.0009938492);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(8,0.001121213);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(9,0.0008989704);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(10,0.0007928174);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(11,0.0007928174);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(12,0.000670053);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(13,0.0005190208);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(15,0.0007928174);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(16,0.0005190208);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(18,0.0005190208);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(19,0.0005993136);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(20,0.000670053);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(21,0.0002996568);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(22,0.0004237787);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(23,0.0004237787);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(24,0.0002996568);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetEntries(330);

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
   
   TH1D *VbbHcc_both_Z_dR_Bj1__678 = new TH1D("VbbHcc_both_Z_dR_Bj1__678","",30,0,6);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(1,12540);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(2,49913);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(3,46896);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(4,35685);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(5,28542);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(6,22459);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(7,18317);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(8,15232);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(9,12971);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(10,11182);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(11,9977);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(12,8994);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(13,8198);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(14,7280);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(15,6366);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(16,5683);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(17,4880);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(18,4119);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(19,3534);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(20,2944);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(21,2489);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(22,2075);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(23,1710);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(24,1395);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(25,999);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(26,734);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(27,519);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(28,309);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(29,168);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(30,92);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(31,166);
   VbbHcc_both_Z_dR_Bj1__678->SetEntries(326397);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1__678->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1__678->SetLineWidth(2);
   VbbHcc_both_Z_dR_Bj1__678->SetMarkerStyle(20);
   VbbHcc_both_Z_dR_Bj1__678->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR_Bj1__678->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1__678->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1__678->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1__678->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1__678->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1__678->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1__678->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1__678->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1__678->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1__678->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1__678->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1__678->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1__678->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1__678->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1__678->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_fx1493[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_fy1493[30] = {
   9297.658,
   38819.17,
   37346.21,
   29859.45,
   16230.18,
   16232.29,
   12134.98,
   12122.97,
   11522.61,
   8745.877,
   10383.69,
   6970.205,
   6372.658,
   7757.529,
   5929.047,
   4607.319,
   3293.544,
   3486.521,
   2197.045,
   1692.844,
   1139.022,
   1833.605,
   2095.07,
   704.2515,
   694.9839,
   405.9262,
   344.3927,
   124.6052,
   84.75396,
   96.56285};
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_fex1493[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_fey1493[30] = {
   969.2654,
   2790.827,
   2434.372,
   2320.445,
   1312.599,
   2609.389,
   1289.042,
   1518.487,
   1429.141,
   1263.366,
   2058.015,
   1084.129,
   1016.347,
   1258.543,
   1073.485,
   931.6766,
   673.4496,
   846.9771,
   415.137,
   402.2428,
   384.5313,
   650.5155,
   657.7173,
   121.44,
   377.1827,
   90.4195,
   88.09515,
   48.00928,
   35.44688,
   46.96615};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_Bj1_fx1493,Graph_from_VbbHcc_both_Z_dR_Bj1_fy1493,Graph_from_VbbHcc_both_Z_dR_Bj1_fex1493,Graph_from_VbbHcc_both_Z_dR_Bj1_fey1493);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->SetMinimum(44.37637);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->SetMaximum(45766.07);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1","Data (JetHT, 2018)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_Bj1_both_18->cd();
  
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
   
   TH1D *data_mc_ratio__679 = new TH1D("data_mc_ratio__679","",30,0,6);
   data_mc_ratio__679->SetBinContent(1,1.348727);
   data_mc_ratio__679->SetBinContent(2,1.285782);
   data_mc_ratio__679->SetBinContent(3,1.25571);
   data_mc_ratio__679->SetBinContent(4,1.195099);
   data_mc_ratio__679->SetBinContent(5,1.758576);
   data_mc_ratio__679->SetBinContent(6,1.3836);
   data_mc_ratio__679->SetBinContent(7,1.509438);
   data_mc_ratio__679->SetBinContent(8,1.256458);
   data_mc_ratio__679->SetBinContent(9,1.1257);
   data_mc_ratio__679->SetBinContent(10,1.278545);
   data_mc_ratio__679->SetBinContent(11,0.9608336);
   data_mc_ratio__679->SetBinContent(12,1.290349);
   data_mc_ratio__679->SetBinContent(13,1.286433);
   data_mc_ratio__679->SetBinContent(14,0.9384432);
   data_mc_ratio__679->SetBinContent(15,1.073697);
   data_mc_ratio__679->SetBinContent(16,1.233472);
   data_mc_ratio__679->SetBinContent(17,1.481687);
   data_mc_ratio__679->SetBinContent(18,1.181407);
   data_mc_ratio__679->SetBinContent(19,1.608524);
   data_mc_ratio__679->SetBinContent(20,1.739085);
   data_mc_ratio__679->SetBinContent(21,2.185208);
   data_mc_ratio__679->SetBinContent(22,1.13165);
   data_mc_ratio__679->SetBinContent(23,0.8162019);
   data_mc_ratio__679->SetBinContent(24,1.980826);
   data_mc_ratio__679->SetBinContent(25,1.437443);
   data_mc_ratio__679->SetBinContent(26,1.808211);
   data_mc_ratio__679->SetBinContent(27,1.507);
   data_mc_ratio__679->SetBinContent(28,2.479833);
   data_mc_ratio__679->SetBinContent(29,1.982208);
   data_mc_ratio__679->SetBinContent(30,0.9527474);
   data_mc_ratio__679->SetBinContent(31,3.059904);
   data_mc_ratio__679->SetBinError(1,0.01204412);
   data_mc_ratio__679->SetBinError(2,0.005755202);
   data_mc_ratio__679->SetBinError(3,0.005798577);
   data_mc_ratio__679->SetBinError(4,0.006326464);
   data_mc_ratio__679->SetBinError(5,0.01040924);
   data_mc_ratio__679->SetBinError(6,0.009232414);
   data_mc_ratio__679->SetBinError(7,0.01115291);
   data_mc_ratio__679->SetBinError(8,0.01018051);
   data_mc_ratio__679->SetBinError(9,0.00988407);
   data_mc_ratio__679->SetBinError(10,0.01209084);
   data_mc_ratio__679->SetBinError(11,0.009619405);
   data_mc_ratio__679->SetBinError(12,0.01360601);
   data_mc_ratio__679->SetBinError(13,0.01420801);
   data_mc_ratio__679->SetBinError(14,0.01099872);
   data_mc_ratio__679->SetBinError(15,0.01345701);
   data_mc_ratio__679->SetBinError(16,0.01636216);
   data_mc_ratio__679->SetBinError(17,0.02121028);
   data_mc_ratio__679->SetBinError(18,0.01840787);
   data_mc_ratio__679->SetBinError(19,0.02705792);
   data_mc_ratio__679->SetBinError(20,0.03205176);
   data_mc_ratio__679->SetBinError(21,0.04380062);
   data_mc_ratio__679->SetBinError(22,0.02484295);
   data_mc_ratio__679->SetBinError(23,0.01973784);
   data_mc_ratio__679->SetBinError(24,0.0530346);
   data_mc_ratio__679->SetBinError(25,0.0454787);
   data_mc_ratio__679->SetBinError(26,0.06674227);
   data_mc_ratio__679->SetBinError(27,0.06614998);
   data_mc_ratio__679->SetBinError(28,0.1410728);
   data_mc_ratio__679->SetBinError(29,0.1529307);
   data_mc_ratio__679->SetBinError(30,0.09933078);
   data_mc_ratio__679->SetBinError(31,1.849126);
   data_mc_ratio__679->SetMinimum(0.4);
   data_mc_ratio__679->SetMaximum(1.6);
   data_mc_ratio__679->SetEntries(392.7651);
   data_mc_ratio__679->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__679->SetLineColor(ci);
   data_mc_ratio__679->SetLineWidth(2);
   data_mc_ratio__679->SetMarkerStyle(20);
   data_mc_ratio__679->SetMarkerSize(1.2);
   data_mc_ratio__679->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   data_mc_ratio__679->GetXaxis()->SetRange(1,30);
   data_mc_ratio__679->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__679->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__679->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__679->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__679->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__679->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__679->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__679->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__679->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__679->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__679->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__679->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__679->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__679->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__679->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__679->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__679->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1494[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1494[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1494[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1494[30] = {
   0.1042483,
   0.071893,
   0.06518391,
   0.07771226,
   0.08087398,
   0.1607529,
   0.1062253,
   0.125257,
   0.1240293,
   0.1444528,
   0.1981968,
   0.1555376,
   0.1594855,
   0.1622351,
   0.1810552,
   0.2022167,
   0.2044757,
   0.242929,
   0.1889524,
   0.2376136,
   0.3375977,
   0.354774,
   0.3139357,
   0.1724384,
   0.5427215,
   0.2227486,
   0.2557985,
   0.3852913,
   0.4182328,
   0.4863791};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1494,Graph_from_mc_statistical_error_fy1494,Graph_from_mc_statistical_error_fex1494,Graph_from_mc_statistical_error_fey1494);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1494 = new TH1F("Graph_Graph_from_mc_statistical_error1494","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1494->SetMinimum(0.3487342);
   Graph_Graph_from_mc_statistical_error1494->SetMaximum(1.651266);
   Graph_Graph_from_mc_statistical_error1494->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1494->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1494->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1494->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1494->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1494->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1494->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1494->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1494->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1494->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1494->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1494->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1494->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1494->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1494->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1494->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1494);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj1_both_18->cd();
   Z_dR_Bj1_both_18->Modified();
   Z_dR_Bj1_both_18->cd();
   Z_dR_Bj1_both_18->SetSelected(Z_dR_Bj1_both_18);
}
