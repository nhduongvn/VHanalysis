void Z_dR_both_17()
{
//=========Macro generated from canvas: Z_dR_both_17/Z_dR_both_17
//=========  (Thu Aug  3 12:25:44 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_both_17 = new TCanvas("Z_dR_both_17", "Z_dR_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_both_17->SetHighLightColor(2);
   Z_dR_both_17->Range(0,0,1,1);
   Z_dR_both_17->SetFillColor(0);
   Z_dR_both_17->SetFillStyle(4000);
   Z_dR_both_17->SetBorderMode(0);
   Z_dR_both_17->SetBorderSize(2);
   Z_dR_both_17->SetFrameFillStyle(1000);
   Z_dR_both_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-71.10437,6.314516,71043.27);
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
   st->SetMaximum(60887.46);
   
   TH1F *st_stack_210 = new TH1F("st_stack_210","",30,0,6);
   st_stack_210->SetMinimum(0.01);
   st_stack_210->SetMaximum(63931.83);
   st_stack_210->SetDirectory(0);
   st_stack_210->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_210->SetLineColor(ci);
   st_stack_210->GetXaxis()->SetRange(1,30);
   st_stack_210->GetXaxis()->SetLabelFont(42);
   st_stack_210->GetXaxis()->SetLabelSize(0.035);
   st_stack_210->GetXaxis()->SetTitleSize(0.035);
   st_stack_210->GetXaxis()->SetTitleFont(42);
   st_stack_210->GetYaxis()->SetTitle("Events/0.2");
   st_stack_210->GetYaxis()->SetLabelFont(42);
   st_stack_210->GetYaxis()->SetLabelSize(0.05);
   st_stack_210->GetYaxis()->SetTitleSize(0.057);
   st_stack_210->GetYaxis()->SetTitleOffset(1.2);
   st_stack_210->GetYaxis()->SetTitleFont(42);
   st_stack_210->GetZaxis()->SetLabelFont(42);
   st_stack_210->GetZaxis()->SetLabelSize(0.035);
   st_stack_210->GetZaxis()->SetTitleSize(0.035);
   st_stack_210->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_210);
   
   
   TH1D *VbbHcc_both_Z_dR_stack_1 = new TH1D("VbbHcc_both_Z_dR_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(3,12931.86);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(4,14554.19);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(5,26020.95);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(6,8019.619);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(7,8486.159);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(8,7110.575);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(9,5984.514);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(10,7104.86);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(11,9268.45);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(12,8421.746);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(13,10433.91);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(14,7956.023);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(15,9678.048);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(16,8588.933);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(17,7994.93);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(18,20627.56);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(19,6076.833);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(20,4599.712);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(21,3417.894);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(22,3932.159);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(23,3586.24);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(24,3564.756);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(25,2753.682);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(26,2650.666);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(27,1908.381);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(28,1771.17);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(29,1835.801);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(30,493.3782);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(31,1151.413);
   VbbHcc_both_Z_dR_stack_1->SetBinError(3,1247.861);
   VbbHcc_both_Z_dR_stack_1->SetBinError(4,1481.038);
   VbbHcc_both_Z_dR_stack_1->SetBinError(5,14873.05);
   VbbHcc_both_Z_dR_stack_1->SetBinError(6,1070.578);
   VbbHcc_both_Z_dR_stack_1->SetBinError(7,1192.766);
   VbbHcc_both_Z_dR_stack_1->SetBinError(8,996.5025);
   VbbHcc_both_Z_dR_stack_1->SetBinError(9,880.1695);
   VbbHcc_both_Z_dR_stack_1->SetBinError(10,1063.584);
   VbbHcc_both_Z_dR_stack_1->SetBinError(11,1638.728);
   VbbHcc_both_Z_dR_stack_1->SetBinError(12,1193.249);
   VbbHcc_both_Z_dR_stack_1->SetBinError(13,1743.712);
   VbbHcc_both_Z_dR_stack_1->SetBinError(14,1131.497);
   VbbHcc_both_Z_dR_stack_1->SetBinError(15,1308.68);
   VbbHcc_both_Z_dR_stack_1->SetBinError(16,1136.781);
   VbbHcc_both_Z_dR_stack_1->SetBinError(17,1132.171);
   VbbHcc_both_Z_dR_stack_1->SetBinError(18,14838.36);
   VbbHcc_both_Z_dR_stack_1->SetBinError(19,919.8127);
   VbbHcc_both_Z_dR_stack_1->SetBinError(20,784.9555);
   VbbHcc_both_Z_dR_stack_1->SetBinError(21,627.9654);
   VbbHcc_both_Z_dR_stack_1->SetBinError(22,734.3472);
   VbbHcc_both_Z_dR_stack_1->SetBinError(23,774.6634);
   VbbHcc_both_Z_dR_stack_1->SetBinError(24,816.2217);
   VbbHcc_both_Z_dR_stack_1->SetBinError(25,671.5062);
   VbbHcc_both_Z_dR_stack_1->SetBinError(26,718.123);
   VbbHcc_both_Z_dR_stack_1->SetBinError(27,484.4404);
   VbbHcc_both_Z_dR_stack_1->SetBinError(28,483.0788);
   VbbHcc_both_Z_dR_stack_1->SetBinError(29,547.6435);
   VbbHcc_both_Z_dR_stack_1->SetBinError(30,88.82776);
   VbbHcc_both_Z_dR_stack_1->SetBinError(31,470.6983);
   VbbHcc_both_Z_dR_stack_1->SetEntries(10822);

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
   VbbHcc_both_Z_dR_stack_2->SetBinContent(2,0.04712387);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(3,38.91843);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(4,56.9496);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(5,49.70058);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(6,51.23584);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(7,50.6536);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(8,56.04384);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(9,56.03543);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(10,52.42428);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(11,45.92787);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(12,54.14139);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(13,54.12175);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(14,51.09449);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(15,58.04289);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(16,50.3322);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(17,37.5267);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(18,46.49393);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(19,36.48757);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(20,31.02442);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(21,30.31211);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(22,25.73486);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(23,25.38528);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(24,17.6125);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(25,16.19139);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(26,15.3487);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(27,11.39285);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(28,9.966462);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(29,7.81449);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(30,5.722659);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(31,3.375595);
   VbbHcc_both_Z_dR_stack_2->SetBinError(2,0.04712387);
   VbbHcc_both_Z_dR_stack_2->SetBinError(3,2.428624);
   VbbHcc_both_Z_dR_stack_2->SetBinError(4,2.986506);
   VbbHcc_both_Z_dR_stack_2->SetBinError(5,2.727864);
   VbbHcc_both_Z_dR_stack_2->SetBinError(6,2.833046);
   VbbHcc_both_Z_dR_stack_2->SetBinError(7,2.796908);
   VbbHcc_both_Z_dR_stack_2->SetBinError(8,3.017168);
   VbbHcc_both_Z_dR_stack_2->SetBinError(9,2.989515);
   VbbHcc_both_Z_dR_stack_2->SetBinError(10,2.822676);
   VbbHcc_both_Z_dR_stack_2->SetBinError(11,2.608802);
   VbbHcc_both_Z_dR_stack_2->SetBinError(12,2.895776);
   VbbHcc_both_Z_dR_stack_2->SetBinError(13,2.856871);
   VbbHcc_both_Z_dR_stack_2->SetBinError(14,2.770487);
   VbbHcc_both_Z_dR_stack_2->SetBinError(15,3.124152);
   VbbHcc_both_Z_dR_stack_2->SetBinError(16,2.793834);
   VbbHcc_both_Z_dR_stack_2->SetBinError(17,2.206706);
   VbbHcc_both_Z_dR_stack_2->SetBinError(18,2.780615);
   VbbHcc_both_Z_dR_stack_2->SetBinError(19,2.370431);
   VbbHcc_both_Z_dR_stack_2->SetBinError(20,2.161137);
   VbbHcc_both_Z_dR_stack_2->SetBinError(21,2.229731);
   VbbHcc_both_Z_dR_stack_2->SetBinError(22,1.962528);
   VbbHcc_both_Z_dR_stack_2->SetBinError(23,2.095444);
   VbbHcc_both_Z_dR_stack_2->SetBinError(24,1.649894);
   VbbHcc_both_Z_dR_stack_2->SetBinError(25,1.521795);
   VbbHcc_both_Z_dR_stack_2->SetBinError(26,1.544084);
   VbbHcc_both_Z_dR_stack_2->SetBinError(27,1.298018);
   VbbHcc_both_Z_dR_stack_2->SetBinError(28,1.201393);
   VbbHcc_both_Z_dR_stack_2->SetBinError(29,1.107774);
   VbbHcc_both_Z_dR_stack_2->SetBinError(30,0.8530627);
   VbbHcc_both_Z_dR_stack_2->SetBinError(31,0.6688737);
   VbbHcc_both_Z_dR_stack_2->SetEntries(12820);

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
   VbbHcc_both_Z_dR_stack_3->SetBinContent(2,0.989662);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(3,713.8931);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(4,1062.934);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(5,1113.381);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(6,1150.829);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(7,1150.405);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(8,1110.01);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(9,1074.841);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(10,1029.586);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(11,1036.736);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(12,1002.266);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(13,1026.192);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(14,994.3192);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(15,958.7452);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(16,935.4581);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(17,864.8108);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(18,786.9344);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(19,717.1758);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(20,639.9547);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(21,571.0132);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(22,486.5293);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(23,435.0931);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(24,382.8374);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(25,312.3895);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(26,274.7735);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(27,237.3671);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(28,195.3473);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(29,155.6743);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(30,100.6989);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(31,76.18029);
   VbbHcc_both_Z_dR_stack_3->SetBinError(2,0.2407469);
   VbbHcc_both_Z_dR_stack_3->SetBinError(3,6.661685);
   VbbHcc_both_Z_dR_stack_3->SetBinError(4,8.162545);
   VbbHcc_both_Z_dR_stack_3->SetBinError(5,8.381859);
   VbbHcc_both_Z_dR_stack_3->SetBinError(6,8.517927);
   VbbHcc_both_Z_dR_stack_3->SetBinError(7,8.511894);
   VbbHcc_both_Z_dR_stack_3->SetBinError(8,8.341196);
   VbbHcc_both_Z_dR_stack_3->SetBinError(9,8.189199);
   VbbHcc_both_Z_dR_stack_3->SetBinError(10,8.001475);
   VbbHcc_both_Z_dR_stack_3->SetBinError(11,8.029467);
   VbbHcc_both_Z_dR_stack_3->SetBinError(12,7.901023);
   VbbHcc_both_Z_dR_stack_3->SetBinError(13,8.001186);
   VbbHcc_both_Z_dR_stack_3->SetBinError(14,7.878433);
   VbbHcc_both_Z_dR_stack_3->SetBinError(15,7.744818);
   VbbHcc_both_Z_dR_stack_3->SetBinError(16,7.657738);
   VbbHcc_both_Z_dR_stack_3->SetBinError(17,7.368279);
   VbbHcc_both_Z_dR_stack_3->SetBinError(18,7.025287);
   VbbHcc_both_Z_dR_stack_3->SetBinError(19,6.708115);
   VbbHcc_both_Z_dR_stack_3->SetBinError(20,6.328469);
   VbbHcc_both_Z_dR_stack_3->SetBinError(21,5.98231);
   VbbHcc_both_Z_dR_stack_3->SetBinError(22,5.503836);
   VbbHcc_both_Z_dR_stack_3->SetBinError(23,5.218675);
   VbbHcc_both_Z_dR_stack_3->SetBinError(24,4.888602);
   VbbHcc_both_Z_dR_stack_3->SetBinError(25,4.414459);
   VbbHcc_both_Z_dR_stack_3->SetBinError(26,4.147358);
   VbbHcc_both_Z_dR_stack_3->SetBinError(27,3.849328);
   VbbHcc_both_Z_dR_stack_3->SetBinError(28,3.500602);
   VbbHcc_both_Z_dR_stack_3->SetBinError(29,3.105283);
   VbbHcc_both_Z_dR_stack_3->SetBinError(30,2.504794);
   VbbHcc_both_Z_dR_stack_3->SetBinError(31,2.181133);
   VbbHcc_both_Z_dR_stack_3->SetEntries(345543);

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
   VbbHcc_both_Z_dR_stack_4->SetBinContent(2,0.06630981);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(3,133.8093);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(4,190.6234);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(5,186.8198);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(6,182.2769);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(7,126.8244);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(8,116.6835);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(9,104.6367);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(10,93.4764);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(11,106.642);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(12,102.1307);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(13,106.4361);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(14,115.7285);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(15,104.1683);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(16,105.2923);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(17,101.8625);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(18,93.16902);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(19,87.08572);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(20,70.02282);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(21,50.98004);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(22,47.27541);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(23,43.87957);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(24,36.66455);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(25,25.92946);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(26,30.81958);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(27,27.9049);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(28,23.25984);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(29,17.78478);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(30,13.88053);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(31,9.020119);
   VbbHcc_both_Z_dR_stack_4->SetBinError(2,0.06630981);
   VbbHcc_both_Z_dR_stack_4->SetBinError(3,4.276861);
   VbbHcc_both_Z_dR_stack_4->SetBinError(4,5.941852);
   VbbHcc_both_Z_dR_stack_4->SetBinError(5,8.698476);
   VbbHcc_both_Z_dR_stack_4->SetBinError(6,9.906114);
   VbbHcc_both_Z_dR_stack_4->SetBinError(7,8.25196);
   VbbHcc_both_Z_dR_stack_4->SetBinError(8,7.749587);
   VbbHcc_both_Z_dR_stack_4->SetBinError(9,7.577298);
   VbbHcc_both_Z_dR_stack_4->SetBinError(10,5.837707);
   VbbHcc_both_Z_dR_stack_4->SetBinError(11,7.981613);
   VbbHcc_both_Z_dR_stack_4->SetBinError(12,7.486946);
   VbbHcc_both_Z_dR_stack_4->SetBinError(13,7.092935);
   VbbHcc_both_Z_dR_stack_4->SetBinError(14,8.522707);
   VbbHcc_both_Z_dR_stack_4->SetBinError(15,6.476511);
   VbbHcc_both_Z_dR_stack_4->SetBinError(16,6.51814);
   VbbHcc_both_Z_dR_stack_4->SetBinError(17,5.97468);
   VbbHcc_both_Z_dR_stack_4->SetBinError(18,5.847249);
   VbbHcc_both_Z_dR_stack_4->SetBinError(19,6.745188);
   VbbHcc_both_Z_dR_stack_4->SetBinError(20,4.710195);
   VbbHcc_both_Z_dR_stack_4->SetBinError(21,4.15773);
   VbbHcc_both_Z_dR_stack_4->SetBinError(22,4.127153);
   VbbHcc_both_Z_dR_stack_4->SetBinError(23,5.45244);
   VbbHcc_both_Z_dR_stack_4->SetBinError(24,3.857891);
   VbbHcc_both_Z_dR_stack_4->SetBinError(25,3.462737);
   VbbHcc_both_Z_dR_stack_4->SetBinError(26,5.231881);
   VbbHcc_both_Z_dR_stack_4->SetBinError(27,2.655158);
   VbbHcc_both_Z_dR_stack_4->SetBinError(28,2.090503);
   VbbHcc_both_Z_dR_stack_4->SetBinError(29,1.743369);
   VbbHcc_both_Z_dR_stack_4->SetBinError(30,1.754191);
   VbbHcc_both_Z_dR_stack_4->SetBinError(31,1.319157);
   VbbHcc_both_Z_dR_stack_4->SetEntries(17765);

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
   VbbHcc_both_Z_dR_stack_5->SetBinContent(3,28.2685);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(4,28.33583);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(5,13.81026);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(6,15.3492);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(7,11.32897);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(8,10.87805);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(9,17.59349);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(10,6.256424);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(11,10.34645);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(12,8.003841);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(13,10.62916);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(14,12.10168);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(15,9.752723);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(16,6.113355);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(17,9.38898);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(18,10.28475);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(19,4.868507);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(20,3.623301);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(21,3.827757);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(22,4.049882);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(23,4.870129);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(24,2.943405);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(25,9.922524);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(26,5.740041);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(27,4.042057);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(28,1.974529);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(29,2.850517);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(30,1.734543);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(31,2.118533);
   VbbHcc_both_Z_dR_stack_5->SetBinError(3,3.506984);
   VbbHcc_both_Z_dR_stack_5->SetBinError(4,3.963885);
   VbbHcc_both_Z_dR_stack_5->SetBinError(5,2.085653);
   VbbHcc_both_Z_dR_stack_5->SetBinError(6,2.37947);
   VbbHcc_both_Z_dR_stack_5->SetBinError(7,2.000006);
   VbbHcc_both_Z_dR_stack_5->SetBinError(8,2.24628);
   VbbHcc_both_Z_dR_stack_5->SetBinError(9,6.993863);
   VbbHcc_both_Z_dR_stack_5->SetBinError(10,0.9676912);
   VbbHcc_both_Z_dR_stack_5->SetBinError(11,1.972793);
   VbbHcc_both_Z_dR_stack_5->SetBinError(12,1.548983);
   VbbHcc_both_Z_dR_stack_5->SetBinError(13,2.019831);
   VbbHcc_both_Z_dR_stack_5->SetBinError(14,2.29542);
   VbbHcc_both_Z_dR_stack_5->SetBinError(15,1.685622);
   VbbHcc_both_Z_dR_stack_5->SetBinError(16,0.9051274);
   VbbHcc_both_Z_dR_stack_5->SetBinError(17,2.199853);
   VbbHcc_both_Z_dR_stack_5->SetBinError(18,2.501355);
   VbbHcc_both_Z_dR_stack_5->SetBinError(19,0.7521546);
   VbbHcc_both_Z_dR_stack_5->SetBinError(20,0.7005056);
   VbbHcc_both_Z_dR_stack_5->SetBinError(21,0.8486196);
   VbbHcc_both_Z_dR_stack_5->SetBinError(22,0.6703196);
   VbbHcc_both_Z_dR_stack_5->SetBinError(23,1.731238);
   VbbHcc_both_Z_dR_stack_5->SetBinError(24,1.240563);
   VbbHcc_both_Z_dR_stack_5->SetBinError(25,6.675999);
   VbbHcc_both_Z_dR_stack_5->SetBinError(26,2.080116);
   VbbHcc_both_Z_dR_stack_5->SetBinError(27,1.345336);
   VbbHcc_both_Z_dR_stack_5->SetBinError(28,0.4661173);
   VbbHcc_both_Z_dR_stack_5->SetBinError(29,0.6587489);
   VbbHcc_both_Z_dR_stack_5->SetBinError(30,0.5294388);
   VbbHcc_both_Z_dR_stack_5->SetBinError(31,1.209136);
   VbbHcc_both_Z_dR_stack_5->SetEntries(2446);

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
   VbbHcc_both_Z_dR_stack_6->SetBinContent(5,0.3153059);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(9,0.3153059);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(14,0.6306118);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(17,0.3153059);
   VbbHcc_both_Z_dR_stack_6->SetBinError(5,0.3153059);
   VbbHcc_both_Z_dR_stack_6->SetBinError(9,0.3153059);
   VbbHcc_both_Z_dR_stack_6->SetBinError(14,0.4459099);
   VbbHcc_both_Z_dR_stack_6->SetBinError(17,0.3153059);
   VbbHcc_both_Z_dR_stack_6->SetEntries(5);

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
   VbbHcc_both_Z_dR_stack_7->SetBinContent(3,1.239711);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(4,0.7438266);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(5,0.2479422);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(6,0.4958844);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(7,0.7438266);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(8,0.2479422);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(10,0.2479422);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(14,0.4958844);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(15,0.2479422);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(16,0.2479422);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(17,0.2479422);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(19,0.4958844);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(23,0.2479422);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(24,0.2479422);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(28,0.2479422);
   VbbHcc_both_Z_dR_stack_7->SetBinError(3,0.5544156);
   VbbHcc_both_Z_dR_stack_7->SetBinError(4,0.4294485);
   VbbHcc_both_Z_dR_stack_7->SetBinError(5,0.2479422);
   VbbHcc_both_Z_dR_stack_7->SetBinError(6,0.3506432);
   VbbHcc_both_Z_dR_stack_7->SetBinError(7,0.4294485);
   VbbHcc_both_Z_dR_stack_7->SetBinError(8,0.2479422);
   VbbHcc_both_Z_dR_stack_7->SetBinError(10,0.2479422);
   VbbHcc_both_Z_dR_stack_7->SetBinError(14,0.3506432);
   VbbHcc_both_Z_dR_stack_7->SetBinError(15,0.2479422);
   VbbHcc_both_Z_dR_stack_7->SetBinError(16,0.2479422);
   VbbHcc_both_Z_dR_stack_7->SetBinError(17,0.2479422);
   VbbHcc_both_Z_dR_stack_7->SetBinError(19,0.3506432);
   VbbHcc_both_Z_dR_stack_7->SetBinError(23,0.2479422);
   VbbHcc_both_Z_dR_stack_7->SetBinError(24,0.2479422);
   VbbHcc_both_Z_dR_stack_7->SetBinError(28,0.2479422);
   VbbHcc_both_Z_dR_stack_7->SetEntries(26);

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
   VbbHcc_both_Z_dR_stack_8->SetBinContent(3,4.05161);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(4,6.837091);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(5,6.837091);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(6,3.038707);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(7,1.012902);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(8,1.266128);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(9,1.012902);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(10,1.012902);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(11,1.012902);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(12,1.012902);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(13,2.27903);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(14,1.266128);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(15,2.785482);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(16,1.772579);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(17,0.7596768);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(18,1.772579);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(19,2.27903);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(20,2.025805);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(21,0.7596768);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(22,0.5064512);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(23,0.7596768);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(24,0.5064512);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(25,0.2532256);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(27,0.2532256);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(28,0.7596768);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(29,0.5064512);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(30,0.2532256);
   VbbHcc_both_Z_dR_stack_8->SetBinError(3,1.012902);
   VbbHcc_both_Z_dR_stack_8->SetBinError(4,1.315799);
   VbbHcc_both_Z_dR_stack_8->SetBinError(5,1.315799);
   VbbHcc_both_Z_dR_stack_8->SetBinError(6,0.8771992);
   VbbHcc_both_Z_dR_stack_8->SetBinError(7,0.5064512);
   VbbHcc_both_Z_dR_stack_8->SetBinError(8,0.5662297);
   VbbHcc_both_Z_dR_stack_8->SetBinError(9,0.5064512);
   VbbHcc_both_Z_dR_stack_8->SetBinError(10,0.5064512);
   VbbHcc_both_Z_dR_stack_8->SetBinError(11,0.5064512);
   VbbHcc_both_Z_dR_stack_8->SetBinError(12,0.5064512);
   VbbHcc_both_Z_dR_stack_8->SetBinError(13,0.7596768);
   VbbHcc_both_Z_dR_stack_8->SetBinError(14,0.5662297);
   VbbHcc_both_Z_dR_stack_8->SetBinError(15,0.8398543);
   VbbHcc_both_Z_dR_stack_8->SetBinError(16,0.669972);
   VbbHcc_both_Z_dR_stack_8->SetBinError(17,0.4385996);
   VbbHcc_both_Z_dR_stack_8->SetBinError(18,0.669972);
   VbbHcc_both_Z_dR_stack_8->SetBinError(19,0.7596768);
   VbbHcc_both_Z_dR_stack_8->SetBinError(20,0.7162302);
   VbbHcc_both_Z_dR_stack_8->SetBinError(21,0.4385996);
   VbbHcc_both_Z_dR_stack_8->SetBinError(22,0.3581151);
   VbbHcc_both_Z_dR_stack_8->SetBinError(23,0.4385996);
   VbbHcc_both_Z_dR_stack_8->SetBinError(24,0.3581151);
   VbbHcc_both_Z_dR_stack_8->SetBinError(25,0.2532256);
   VbbHcc_both_Z_dR_stack_8->SetBinError(27,0.2532256);
   VbbHcc_both_Z_dR_stack_8->SetBinError(28,0.4385996);
   VbbHcc_both_Z_dR_stack_8->SetBinError(29,0.3581151);
   VbbHcc_both_Z_dR_stack_8->SetBinError(30,0.2532256);
   VbbHcc_both_Z_dR_stack_8->SetEntries(184);

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
   VbbHcc_both_Z_dR_stack_9->SetBinContent(3,2.5535);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(4,5.208752);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(5,5.086003);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(6,4.037792);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(7,2.640716);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(8,1.568278);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(9,1.135427);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(10,1.10797);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(11,1.264637);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(12,1.558588);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(13,1.847694);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(14,2.086731);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(15,2.443672);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(16,2.370992);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(17,2.280545);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(18,2.099652);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(19,1.742711);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(20,1.330856);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(21,0.8899294);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(22,0.649277);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(23,0.415085);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(24,0.3779373);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(25,0.3440199);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(26,0.4441571);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(27,0.4780746);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(28,0.5604456);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(29,0.4732292);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(30,0.2341919);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(31,0.1389001);
   VbbHcc_both_Z_dR_stack_9->SetBinError(3,0.06421994);
   VbbHcc_both_Z_dR_stack_9->SetBinError(4,0.09172101);
   VbbHcc_both_Z_dR_stack_9->SetBinError(5,0.09063382);
   VbbHcc_both_Z_dR_stack_9->SetBinError(6,0.08075584);
   VbbHcc_both_Z_dR_stack_9->SetBinError(7,0.06530747);
   VbbHcc_both_Z_dR_stack_9->SetBinError(8,0.05032845);
   VbbHcc_both_Z_dR_stack_9->SetBinError(9,0.04282345);
   VbbHcc_both_Z_dR_stack_9->SetBinError(10,0.0423025);
   VbbHcc_both_Z_dR_stack_9->SetBinError(11,0.04519442);
   VbbHcc_both_Z_dR_stack_9->SetBinError(12,0.05017272);
   VbbHcc_both_Z_dR_stack_9->SetBinError(13,0.05462821);
   VbbHcc_both_Z_dR_stack_9->SetBinError(14,0.05805441);
   VbbHcc_both_Z_dR_stack_9->SetBinError(15,0.06282369);
   VbbHcc_both_Z_dR_stack_9->SetBinError(16,0.06188238);
   VbbHcc_both_Z_dR_stack_9->SetBinError(17,0.06069058);
   VbbHcc_both_Z_dR_stack_9->SetBinError(18,0.05823387);
   VbbHcc_both_Z_dR_stack_9->SetBinError(19,0.05305358);
   VbbHcc_both_Z_dR_stack_9->SetBinError(20,0.04636258);
   VbbHcc_both_Z_dR_stack_9->SetBinError(21,0.03791227);
   VbbHcc_both_Z_dR_stack_9->SetBinError(22,0.03238299);
   VbbHcc_both_Z_dR_stack_9->SetBinError(23,0.02589229);
   VbbHcc_both_Z_dR_stack_9->SetBinError(24,0.02470654);
   VbbHcc_both_Z_dR_stack_9->SetBinError(25,0.02357185);
   VbbHcc_both_Z_dR_stack_9->SetBinError(26,0.02678368);
   VbbHcc_both_Z_dR_stack_9->SetBinError(27,0.02778752);
   VbbHcc_both_Z_dR_stack_9->SetBinError(28,0.03008629);
   VbbHcc_both_Z_dR_stack_9->SetBinError(29,0.02764635);
   VbbHcc_both_Z_dR_stack_9->SetBinError(30,0.01944858);
   VbbHcc_both_Z_dR_stack_9->SetBinError(31,0.01497798);
   VbbHcc_both_Z_dR_stack_9->SetEntries(29329);

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
   VbbHcc_both_Z_dR_stack_10->SetBinContent(3,0.8628357);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(4,1.804036);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(5,2.168492);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(6,1.95413);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(7,1.46114);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(8,1.028686);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(9,0.7633256);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(10,0.6866199);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(11,0.6696202);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(12,0.743009);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(13,0.8035443);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(14,0.8180562);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(15,0.8275926);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(16,0.8251048);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(17,0.7832276);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(18,0.7289117);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(19,0.6119873);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(20,0.5410863);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(21,0.4341129);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(22,0.3648705);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(23,0.279043);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(24,0.2545801);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(25,0.2446291);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(26,0.2699212);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(27,0.2798722);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(28,0.2334342);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(29,0.1919716);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(30,0.1198268);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(31,0.06053533);
   VbbHcc_both_Z_dR_stack_10->SetBinError(3,0.01891438);
   VbbHcc_both_Z_dR_stack_10->SetBinError(4,0.02734958);
   VbbHcc_both_Z_dR_stack_10->SetBinError(5,0.0299852);
   VbbHcc_both_Z_dR_stack_10->SetBinError(6,0.02846458);
   VbbHcc_both_Z_dR_stack_10->SetBinError(7,0.02461354);
   VbbHcc_both_Z_dR_stack_10->SetBinError(8,0.02065235);
   VbbHcc_both_Z_dR_stack_10->SetBinError(9,0.01779029);
   VbbHcc_both_Z_dR_stack_10->SetBinError(10,0.01687276);
   VbbHcc_both_Z_dR_stack_10->SetBinError(11,0.01666258);
   VbbHcc_both_Z_dR_stack_10->SetBinError(12,0.01755194);
   VbbHcc_both_Z_dR_stack_10->SetBinError(13,0.01825294);
   VbbHcc_both_Z_dR_stack_10->SetBinError(14,0.01841703);
   VbbHcc_both_Z_dR_stack_10->SetBinError(15,0.01852407);
   VbbHcc_both_Z_dR_stack_10->SetBinError(16,0.0184962);
   VbbHcc_both_Z_dR_stack_10->SetBinError(17,0.01802072);
   VbbHcc_both_Z_dR_stack_10->SetBinError(18,0.01738463);
   VbbHcc_both_Z_dR_stack_10->SetBinError(19,0.01592939);
   VbbHcc_both_Z_dR_stack_10->SetBinError(20,0.01497826);
   VbbHcc_both_Z_dR_stack_10->SetBinError(21,0.0134162);
   VbbHcc_both_Z_dR_stack_10->SetBinError(22,0.01229978);
   VbbHcc_both_Z_dR_stack_10->SetBinError(23,0.01075632);
   VbbHcc_both_Z_dR_stack_10->SetBinError(24,0.01027402);
   VbbHcc_both_Z_dR_stack_10->SetBinError(25,0.01007122);
   VbbHcc_both_Z_dR_stack_10->SetBinError(26,0.01057905);
   VbbHcc_both_Z_dR_stack_10->SetBinError(27,0.01077229);
   VbbHcc_both_Z_dR_stack_10->SetBinError(28,0.009838078);
   VbbHcc_both_Z_dR_stack_10->SetBinError(29,0.008921678);
   VbbHcc_both_Z_dR_stack_10->SetBinError(30,0.007048634);
   VbbHcc_both_Z_dR_stack_10->SetBinError(31,0.005009939);
   VbbHcc_both_Z_dR_stack_10->SetEntries(50200);

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
   VbbHcc_both_Z_dR_stack_11->SetBinContent(3,0.02054326);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(4,0.01264201);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(5,0.03318527);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(6,0.01580251);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(7,0.006321005);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(8,0.006321005);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(9,0.004740753);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(10,0.003160502);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(11,0.001580251);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(12,0.009481507);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(13,0.001580251);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(14,0.001580251);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(15,0.006321005);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(16,0.003160502);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(19,0.001580251);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(20,0.003160502);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(22,0.003160502);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(23,0.003160502);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(25,0.003160502);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(26,0.003160502);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(27,0.001580251);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(28,0.003160502);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(31,0.001580251);
   VbbHcc_both_Z_dR_stack_11->SetBinError(3,0.005697677);
   VbbHcc_both_Z_dR_stack_11->SetBinError(4,0.004469625);
   VbbHcc_both_Z_dR_stack_11->SetBinError(5,0.00724162);
   VbbHcc_both_Z_dR_stack_11->SetBinError(6,0.004997193);
   VbbHcc_both_Z_dR_stack_11->SetBinError(7,0.003160502);
   VbbHcc_both_Z_dR_stack_11->SetBinError(8,0.003160502);
   VbbHcc_both_Z_dR_stack_11->SetBinError(9,0.002737075);
   VbbHcc_both_Z_dR_stack_11->SetBinError(10,0.002234813);
   VbbHcc_both_Z_dR_stack_11->SetBinError(11,0.001580251);
   VbbHcc_both_Z_dR_stack_11->SetBinError(12,0.003870809);
   VbbHcc_both_Z_dR_stack_11->SetBinError(13,0.001580251);
   VbbHcc_both_Z_dR_stack_11->SetBinError(14,0.001580251);
   VbbHcc_both_Z_dR_stack_11->SetBinError(15,0.003160502);
   VbbHcc_both_Z_dR_stack_11->SetBinError(16,0.002234813);
   VbbHcc_both_Z_dR_stack_11->SetBinError(19,0.001580251);
   VbbHcc_both_Z_dR_stack_11->SetBinError(20,0.002234813);
   VbbHcc_both_Z_dR_stack_11->SetBinError(22,0.002234813);
   VbbHcc_both_Z_dR_stack_11->SetBinError(23,0.002234813);
   VbbHcc_both_Z_dR_stack_11->SetBinError(25,0.002234813);
   VbbHcc_both_Z_dR_stack_11->SetBinError(26,0.002234813);
   VbbHcc_both_Z_dR_stack_11->SetBinError(27,0.001580251);
   VbbHcc_both_Z_dR_stack_11->SetBinError(28,0.002234813);
   VbbHcc_both_Z_dR_stack_11->SetBinError(31,0.001580251);
   VbbHcc_both_Z_dR_stack_11->SetEntries(95);

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
   VbbHcc_both_Z_dR_stack_12->SetBinContent(3,0.004567324);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(4,0.009757466);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(5,0.00954986);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(6,0.005397747);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(7,0.00477493);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(8,0.00332169);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(9,0.001245634);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(10,0.001868451);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(11,0.002076057);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(12,0.00145324);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(13,0.002283662);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(14,0.001660845);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(15,0.001245634);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(16,0.002076057);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(17,0.001038028);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(18,0.001660845);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(19,0.001660845);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(20,0.000622817);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(21,0.001038028);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(22,0.000622817);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(23,0.001038028);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(24,0.000622817);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(25,0.00145324);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(27,0.0008304226);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(28,0.000622817);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(29,0.0004152113);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(30,0.0004152113);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(31,0.000622817);
   VbbHcc_both_Z_dR_stack_12->SetBinError(3,0.0009737568);
   VbbHcc_both_Z_dR_stack_12->SetBinError(4,0.001423273);
   VbbHcc_both_Z_dR_stack_12->SetBinError(5,0.00140805);
   VbbHcc_both_Z_dR_stack_12->SetBinError(6,0.001058585);
   VbbHcc_both_Z_dR_stack_12->SetBinError(7,0.0009956417);
   VbbHcc_both_Z_dR_stack_12->SetBinError(8,0.0008304226);
   VbbHcc_both_Z_dR_stack_12->SetBinError(9,0.0005085279);
   VbbHcc_both_Z_dR_stack_12->SetBinError(10,0.000622817);
   VbbHcc_both_Z_dR_stack_12->SetBinError(11,0.0006565067);
   VbbHcc_both_Z_dR_stack_12->SetBinError(12,0.0005492729);
   VbbHcc_both_Z_dR_stack_12->SetBinError(13,0.0006885501);
   VbbHcc_both_Z_dR_stack_12->SetBinError(14,0.0005871975);
   VbbHcc_both_Z_dR_stack_12->SetBinError(15,0.0005085279);
   VbbHcc_both_Z_dR_stack_12->SetBinError(16,0.0006565067);
   VbbHcc_both_Z_dR_stack_12->SetBinError(17,0.0004642204);
   VbbHcc_both_Z_dR_stack_12->SetBinError(18,0.0005871975);
   VbbHcc_both_Z_dR_stack_12->SetBinError(19,0.0005871975);
   VbbHcc_both_Z_dR_stack_12->SetBinError(20,0.0003595835);
   VbbHcc_both_Z_dR_stack_12->SetBinError(21,0.0004642204);
   VbbHcc_both_Z_dR_stack_12->SetBinError(22,0.0003595835);
   VbbHcc_both_Z_dR_stack_12->SetBinError(23,0.0004642204);
   VbbHcc_both_Z_dR_stack_12->SetBinError(24,0.0003595835);
   VbbHcc_both_Z_dR_stack_12->SetBinError(25,0.0005492729);
   VbbHcc_both_Z_dR_stack_12->SetBinError(27,0.0004152113);
   VbbHcc_both_Z_dR_stack_12->SetBinError(28,0.0003595835);
   VbbHcc_both_Z_dR_stack_12->SetBinError(29,0.0002935987);
   VbbHcc_both_Z_dR_stack_12->SetBinError(30,0.0002935987);
   VbbHcc_both_Z_dR_stack_12->SetBinError(31,0.0003595835);
   VbbHcc_both_Z_dR_stack_12->SetEntries(308);

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
   
   TH1D *VbbHcc_both_Z_dR__576 = new TH1D("VbbHcc_both_Z_dR__576","",30,0,6);
   VbbHcc_both_Z_dR__576->SetBinContent(2,2);
   VbbHcc_both_Z_dR__576->SetBinContent(3,5330);
   VbbHcc_both_Z_dR__576->SetBinContent(4,6077);
   VbbHcc_both_Z_dR__576->SetBinContent(5,4455);
   VbbHcc_both_Z_dR__576->SetBinContent(6,3888);
   VbbHcc_both_Z_dR__576->SetBinContent(7,3674);
   VbbHcc_both_Z_dR__576->SetBinContent(8,3506);
   VbbHcc_both_Z_dR__576->SetBinContent(9,3286);
   VbbHcc_both_Z_dR__576->SetBinContent(10,3093);
   VbbHcc_both_Z_dR__576->SetBinContent(11,3164);
   VbbHcc_both_Z_dR__576->SetBinContent(12,3087);
   VbbHcc_both_Z_dR__576->SetBinContent(13,3172);
   VbbHcc_both_Z_dR__576->SetBinContent(14,3160);
   VbbHcc_both_Z_dR__576->SetBinContent(15,3168);
   VbbHcc_both_Z_dR__576->SetBinContent(16,3096);
   VbbHcc_both_Z_dR__576->SetBinContent(17,2865);
   VbbHcc_both_Z_dR__576->SetBinContent(18,2632);
   VbbHcc_both_Z_dR__576->SetBinContent(19,2378);
   VbbHcc_both_Z_dR__576->SetBinContent(20,2077);
   VbbHcc_both_Z_dR__576->SetBinContent(21,1793);
   VbbHcc_both_Z_dR__576->SetBinContent(22,1612);
   VbbHcc_both_Z_dR__576->SetBinContent(23,1370);
   VbbHcc_both_Z_dR__576->SetBinContent(24,1147);
   VbbHcc_both_Z_dR__576->SetBinContent(25,967);
   VbbHcc_both_Z_dR__576->SetBinContent(26,847);
   VbbHcc_both_Z_dR__576->SetBinContent(27,819);
   VbbHcc_both_Z_dR__576->SetBinContent(28,675);
   VbbHcc_both_Z_dR__576->SetBinContent(29,665);
   VbbHcc_both_Z_dR__576->SetBinContent(30,470);
   VbbHcc_both_Z_dR__576->SetBinContent(31,304);
   VbbHcc_both_Z_dR__576->SetEntries(72808);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR__576->SetLineColor(ci);
   VbbHcc_both_Z_dR__576->SetLineWidth(2);
   VbbHcc_both_Z_dR__576->SetMarkerStyle(20);
   VbbHcc_both_Z_dR__576->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR__576->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR__576->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__576->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR__576->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR__576->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__576->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__576->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR__576->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR__576->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR__576->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__576->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__576->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR__576->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR__576->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__576->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_dR_fx1419[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_fy1419[30] = {
   0,
   1.103096,
   13855.48,
   15907.65,
   27399.36,
   9428.857,
   9831.241,
   8408.311,
   7240.853,
   8289.664,
   10471.05,
   9591.614,
   11636.23,
   9134.568,
   10815.07,
   9691.35,
   9012.906,
   21569.04,
   6927.583,
   5348.239,
   4076.112,
   4497.273,
   4097.174,
   4006.202,
   3118.961,
   2978.065,
   2190.101,
   2003.524,
   2021.098,
   616.0225};
   Double_t Graph_from_VbbHcc_both_Z_dR_fex1419[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_fey1419[30] = {
   0,
   0.2541195,
   1247.894,
   1481.082,
   14873.06,
   1070.664,
   1192.83,
   996.5749,
   880.2733,
   1063.635,
   1638.77,
   1193.303,
   1743.748,
   1131.563,
   1308.724,
   1136.829,
   1132.216,
   14838.36,
   919.8657,
   784.9987,
   628.0123,
   734.3825,
   774.7051,
   816.2481,
   671.5646,
   718.1588,
   484.4667,
   483.098,
   547.6567,
   88.88641};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_fx1419,Graph_from_VbbHcc_both_Z_dR_fy1419,Graph_from_VbbHcc_both_Z_dR_fex1419,Graph_from_VbbHcc_both_Z_dR_fey1419);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR1419 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR1419","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->SetMinimum(0);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->SetMaximum(46499.66);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_dR1419->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_dR1419);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR","Data (JetHT, 2017)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_both_17->cd();
  
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
   
   TH1D *data_mc_ratio__577 = new TH1D("data_mc_ratio__577","",30,0,6);
   data_mc_ratio__577->SetBinContent(2,1.813079);
   data_mc_ratio__577->SetBinContent(3,0.3846854);
   data_mc_ratio__577->SetBinContent(4,0.3820174);
   data_mc_ratio__577->SetBinContent(5,0.1625951);
   data_mc_ratio__577->SetBinContent(6,0.4123511);
   data_mc_ratio__577->SetBinContent(7,0.3737066);
   data_mc_ratio__577->SetBinContent(8,0.4169684);
   data_mc_ratio__577->SetBinContent(9,0.4538139);
   data_mc_ratio__577->SetBinContent(10,0.3731152);
   data_mc_ratio__577->SetBinContent(11,0.3021664);
   data_mc_ratio__577->SetBinContent(12,0.3218437);
   data_mc_ratio__577->SetBinContent(13,0.272597);
   data_mc_ratio__577->SetBinContent(14,0.3459387);
   data_mc_ratio__577->SetBinContent(15,0.2929246);
   data_mc_ratio__577->SetBinContent(16,0.3194601);
   data_mc_ratio__577->SetBinContent(17,0.3178775);
   data_mc_ratio__577->SetBinContent(18,0.1220267);
   data_mc_ratio__577->SetBinContent(19,0.3432655);
   data_mc_ratio__577->SetBinContent(20,0.3883521);
   data_mc_ratio__577->SetBinContent(21,0.43988);
   data_mc_ratio__577->SetBinContent(22,0.3584395);
   data_mc_ratio__577->SetBinContent(23,0.3343768);
   data_mc_ratio__577->SetBinContent(24,0.2863061);
   data_mc_ratio__577->SetBinContent(25,0.3100391);
   data_mc_ratio__577->SetBinContent(26,0.2844129);
   data_mc_ratio__577->SetBinContent(27,0.3739554);
   data_mc_ratio__577->SetBinContent(28,0.3369064);
   data_mc_ratio__577->SetBinContent(29,0.3290291);
   data_mc_ratio__577->SetBinContent(30,0.7629592);
   data_mc_ratio__577->SetBinContent(31,0.2447055);
   data_mc_ratio__577->SetBinError(2,1.282041);
   data_mc_ratio__577->SetBinError(3,0.005269168);
   data_mc_ratio__577->SetBinError(4,0.004900479);
   data_mc_ratio__577->SetBinError(5,0.002436035);
   data_mc_ratio__577->SetBinError(6,0.006613085);
   data_mc_ratio__577->SetBinError(7,0.0061654);
   data_mc_ratio__577->SetBinError(8,0.007042019);
   data_mc_ratio__577->SetBinError(9,0.007916697);
   data_mc_ratio__577->SetBinError(10,0.006708927);
   data_mc_ratio__577->SetBinError(11,0.0053719);
   data_mc_ratio__577->SetBinError(12,0.005792641);
   data_mc_ratio__577->SetBinError(13,0.004840101);
   data_mc_ratio__577->SetBinError(14,0.006153973);
   data_mc_ratio__577->SetBinError(15,0.005204311);
   data_mc_ratio__577->SetBinError(16,0.005741378);
   data_mc_ratio__577->SetBinError(17,0.005938783);
   data_mc_ratio__577->SetBinError(18,0.002378549);
   data_mc_ratio__577->SetBinError(19,0.007039214);
   data_mc_ratio__577->SetBinError(20,0.008521332);
   data_mc_ratio__577->SetBinError(21,0.01038829);
   data_mc_ratio__577->SetBinError(22,0.00892757);
   data_mc_ratio__577->SetBinError(23,0.009033913);
   data_mc_ratio__577->SetBinError(24,0.00845374);
   data_mc_ratio__577->SetBinError(25,0.009970187);
   data_mc_ratio__577->SetBinError(26,0.009772543);
   data_mc_ratio__577->SetBinError(27,0.01306706);
   data_mc_ratio__577->SetBinError(28,0.01296753);
   data_mc_ratio__577->SetBinError(29,0.0127592);
   data_mc_ratio__577->SetBinError(30,0.03519268);
   data_mc_ratio__577->SetBinError(31,0.09377436);
   data_mc_ratio__577->SetMinimum(0.4);
   data_mc_ratio__577->SetMaximum(1.6);
   data_mc_ratio__577->SetEntries(70.07057);
   data_mc_ratio__577->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__577->SetLineColor(ci);
   data_mc_ratio__577->SetLineWidth(2);
   data_mc_ratio__577->SetMarkerStyle(20);
   data_mc_ratio__577->SetMarkerSize(1.2);
   data_mc_ratio__577->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__577->GetXaxis()->SetRange(1,30);
   data_mc_ratio__577->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__577->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__577->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__577->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__577->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__577->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__577->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__577->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__577->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__577->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__577->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__577->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__577->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__577->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__577->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__577->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__577->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1420[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1420[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1420[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1420[30] = {
   0,
   0.2303694,
   0.09006501,
   0.09310498,
   0.5428252,
   0.1135519,
   0.1213306,
   0.1185226,
   0.1215704,
   0.1283086,
   0.1565048,
   0.1244111,
   0.1498552,
   0.123877,
   0.1210093,
   0.1173035,
   0.1256216,
   0.687947,
   0.1327831,
   0.1467771,
   0.1540714,
   0.1632951,
   0.1890828,
   0.2037461,
   0.2153168,
   0.2411495,
   0.2212075,
   0.2411242,
   0.2709699,
   0.1442909};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1420,Graph_from_mc_statistical_error_fy1420,Graph_from_mc_statistical_error_fex1420,Graph_from_mc_statistical_error_fey1420);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1420 = new TH1F("Graph_Graph_from_mc_statistical_error1420","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1420->SetMinimum(0.1744636);
   Graph_Graph_from_mc_statistical_error1420->SetMaximum(1.825536);
   Graph_Graph_from_mc_statistical_error1420->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1420->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1420->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1420->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1420->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1420->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1420->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1420->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1420->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1420->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1420->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1420->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1420->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1420->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1420->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1420->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1420);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_both_17->cd();
   Z_dR_both_17->Modified();
   Z_dR_both_17->cd();
   Z_dR_both_17->SetSelected(Z_dR_both_17);
}
