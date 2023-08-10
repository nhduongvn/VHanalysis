void Z_dR_Bj1_tags_18()
{
//=========Macro generated from canvas: Z_dR_Bj1_tags_18/Z_dR_Bj1_tags_18
//=========  (Thu Aug 10 10:41:08 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_tags_18 = new TCanvas("Z_dR_Bj1_tags_18", "Z_dR_Bj1_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_tags_18->SetHighLightColor(2);
   Z_dR_Bj1_tags_18->Range(0,0,1,1);
   Z_dR_Bj1_tags_18->SetFillColor(0);
   Z_dR_Bj1_tags_18->SetFillStyle(4000);
   Z_dR_Bj1_tags_18->SetBorderMode(0);
   Z_dR_Bj1_tags_18->SetBorderSize(2);
   Z_dR_Bj1_tags_18->SetFrameFillStyle(1000);
   Z_dR_Bj1_tags_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.868381,6.314516,12.32041);
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
   st->SetMaximum(1.833897e+10);
   
   TH1F *st_stack_55 = new TH1F("st_stack_55","",30,0,6);
   st_stack_55->SetMinimum(0.001402193);
   st_stack_55->SetMaximum(6.331852e+10);
   st_stack_55->SetDirectory(0);
   st_stack_55->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_55->SetLineColor(ci);
   st_stack_55->GetXaxis()->SetRange(1,30);
   st_stack_55->GetXaxis()->SetLabelFont(42);
   st_stack_55->GetXaxis()->SetLabelSize(0.035);
   st_stack_55->GetXaxis()->SetTitleSize(0.035);
   st_stack_55->GetXaxis()->SetTitleFont(42);
   st_stack_55->GetYaxis()->SetTitle("Events/0.2");
   st_stack_55->GetYaxis()->SetLabelFont(42);
   st_stack_55->GetYaxis()->SetLabelSize(0.05);
   st_stack_55->GetYaxis()->SetTitleSize(0.057);
   st_stack_55->GetYaxis()->SetTitleOffset(1.2);
   st_stack_55->GetYaxis()->SetTitleFont(42);
   st_stack_55->GetZaxis()->SetLabelFont(42);
   st_stack_55->GetZaxis()->SetLabelSize(0.035);
   st_stack_55->GetZaxis()->SetTitleSize(0.035);
   st_stack_55->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_55);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(1,6571.042);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(2,28525.18);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(3,31756.23);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(4,25321.36);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(5,15267.76);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(6,15735.93);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(7,10760.74);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(8,9502.148);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(9,9342.403);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(10,7968.022);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(11,9421.518);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(12,4360.091);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(13,6163.797);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(14,8091.231);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(15,5487.389);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(16,3375.125);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(17,2581.31);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(18,2532.256);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(19,3157.19);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(20,1446.238);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(21,1430.143);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(22,3185.753);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(23,1314.615);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(24,406.1959);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(25,1024.534);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(26,367.9229);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(27,255.3143);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(28,72.10203);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(29,47.38545);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(30,80.39944);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(31,70.52356);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(1,803.0172);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(2,2575.687);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(3,2481.949);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(4,2290.453);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(5,1634.361);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(6,2726.88);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(7,1342.839);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(8,1376.935);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(9,1328.102);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(10,1216.749);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(11,1379.261);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(12,700.4223);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(13,1141.263);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(14,1319.333);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(15,1074.89);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(16,685.2807);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(17,566.238);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(18,668.1715);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(19,767.8892);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(20,402.7575);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(21,540.0857);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(22,1793.24);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(23,537.7039);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(24,96.42242);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(25,530.0099);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(26,95.04271);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(27,80.59322);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(28,36.74976);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(29,19.16328);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(30,46.24162);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(31,45.10697);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetEntries(10038);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(1,29.20634);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(2,133.9951);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(3,158.1825);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(4,134.05);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(5,114.5236);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(6,102.0191);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(7,84.12564);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(8,62.47224);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(9,64.53332);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(10,55.9256);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(11,49.74794);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(12,44.85635);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(13,38.80532);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(14,37.93139);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(15,31.98984);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(16,27.89209);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(17,24.53288);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(18,16.94005);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(19,14.82738);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(20,14.35133);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(21,9.20641);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(22,7.409127);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(23,8.346393);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(24,5.963059);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(25,4.025726);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(26,2.889171);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(27,1.372891);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(28,1.250569);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(29,0.9349527);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(30,0.3687123);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(31,0.2795276);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(1,2.278304);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(2,4.674857);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(3,5.146792);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(4,4.613835);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(5,4.22347);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(6,4.12833);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(7,3.748616);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(8,3.097448);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(9,3.204064);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(10,3.036347);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(11,2.86138);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(12,2.652538);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(13,2.543704);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(14,2.514822);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(15,2.321068);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(16,2.167625);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(17,2.022719);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(18,1.644971);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(19,1.573959);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(20,1.620023);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(21,1.277014);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(22,1.085708);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(23,1.185079);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(24,1.073156);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(25,0.8631051);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(26,0.7137018);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(27,0.4380902);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(28,0.4983786);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(29,0.3362884);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(30,0.2781406);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(31,0.1261138);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetEntries(14154);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_3 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(1,400.0318);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(2,2198.559);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(3,3002.336);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(4,2861.734);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(5,2474.914);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(6,2032.08);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(7,1681);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(8,1428.506);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(9,1228.697);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(10,1093.145);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(11,1005.183);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(12,918.5342);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(13,823.234);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(14,725.1493);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(15,629.8151);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(16,543.311);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(17,432.7833);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(18,361.539);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(19,290.5758);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(20,243.2867);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(21,188.4778);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(22,148.578);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(23,112.4659);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(24,87.94195);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(25,66.78116);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(26,45.82848);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(27,32.68904);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(28,16.81389);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(29,14.86353);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(30,8.393424);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(31,15.85328);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(1,5.374069);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(2,12.58584);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(3,14.72736);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(4,14.38116);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(5,13.3752);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(6,12.1139);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(7,11.01815);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(8,10.15382);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(9,9.421701);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(10,8.8908);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(11,8.524656);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(12,8.153221);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(13,7.717674);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(14,7.24435);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(15,6.749158);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(16,6.270812);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(17,5.593367);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(18,5.108724);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(19,4.58283);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(20,4.186946);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(21,3.686973);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(22,3.27457);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(23,2.847754);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(24,2.51044);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(25,2.191099);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(26,1.813367);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(27,1.538241);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(28,1.099039);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(29,1.029263);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(30,0.7804892);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(31,1.066526);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetEntries(352917);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_4 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(1,108.5987);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(2,422.3641);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(3,480.8229);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(4,368.838);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(5,297.9334);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(6,215.0582);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(7,170.4404);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(8,160.2066);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(9,131.2259);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(10,118.9569);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(11,117.6883);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(12,108.1934);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(13,96.64188);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(14,88.42885);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(15,72.55669);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(16,64.7243);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(17,49.18318);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(18,42.9828);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(19,38.05374);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(20,35.5659);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(21,26.84382);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(22,19.12484);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(23,13.89702);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(24,10.1877);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(25,9.37933);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(26,5.552279);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(27,5.561151);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(28,2.915225);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(29,1.966538);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(30,0.9832689);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(31,2.284505);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(1,4.073396);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(2,12.36196);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(3,14.7421);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(4,13.79508);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(5,14.65373);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(6,11.11109);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(7,8.327708);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(8,9.826476);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(9,8.352123);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(10,6.106244);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(11,9.061552);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(12,8.930793);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(13,5.600515);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(14,7.599895);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(15,6.134041);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(16,7.118082);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(17,3.962248);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(18,5.249708);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(19,5.135421);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(20,5.171398);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(21,3.091641);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(22,2.486859);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(23,4.335698);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(24,1.738415);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(25,1.590975);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(26,1.288654);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(27,1.202979);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(28,0.7252091);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(29,0.7920469);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(30,0.5600617);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(31,0.820658);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetEntries(18490);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_5 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(1,19.09235);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(2,53.66085);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(3,57.54986);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(4,28.0319);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(5,25.50366);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(6,16.25967);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(7,12.74244);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(8,12.57686);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(9,11.39249);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(10,14.79892);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(11,7.476373);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(12,10.4506);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(13,5.629456);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(14,9.455794);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(15,5.822052);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(16,3.917068);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(17,4.45383);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(18,3.977759);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(19,5.452686);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(20,3.459926);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(21,2.156959);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(22,0.9957791);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(23,3.297688);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(24,1.446844);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(25,0.7787065);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(26,0.8892138);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(27,0.7032294);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(28,0.4444679);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(29,0.702314);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(31,0.260869);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(1,2.663142);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(2,5.427234);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(3,12.10924);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(4,4.974272);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(5,4.558034);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(6,1.78627);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(7,3.180052);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(8,3.207718);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(9,2.490276);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(10,3.667051);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(11,1.265668);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(12,3.156977);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(13,1.094759);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(14,3.157525);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(15,2.23593);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(16,0.8996802);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(17,2.188555);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(18,2.150769);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(19,2.23623);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(20,2.14991);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(21,0.6004252);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(22,0.4320378);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(23,2.124985);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(24,0.6782757);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(25,0.3634679);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(26,0.4591633);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(27,0.4336327);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(28,0.2935988);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(29,0.4336318);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(31,0.260869);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetEntries(2375);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_6 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(3,0.4520427);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(6,0.4520427);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(8,0.4520427);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(15,0.4520427);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(3,0.4520427);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(6,0.4520427);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(8,0.4520427);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(15,0.4520427);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetEntries(4);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_7 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(1,0.7083982);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(2,3.187792);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(3,1.770996);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(4,0.3541991);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(5,1.416796);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(6,1.416796);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(7,0.3541991);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(8,0.3541991);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(9,1.062597);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(14,0.3541991);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(20,0.3541991);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(1,0.5009132);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(2,1.062597);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(3,0.7920133);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(4,0.3541991);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(5,0.7083982);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(6,0.7083982);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(7,0.3541991);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(8,0.3541991);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(9,0.6134909);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(14,0.3541991);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(20,0.3541991);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetEntries(32);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_8 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(1,1.676486);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(2,7.264773);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(3,8.941259);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(4,9.500088);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(5,7.264773);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(6,3.632387);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(7,2.235315);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(8,2.794144);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(9,3.352972);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(10,2.794144);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(11,1.397072);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(12,1.9559);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(13,1.9559);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(14,2.514729);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(15,1.9559);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(16,1.397072);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(17,1.117657);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(18,0.5588287);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(19,0.8382431);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(20,0.2794144);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(22,0.2794144);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(23,0.2794144);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(28,0.2794144);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(1,0.6844226);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(2,1.424739);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(3,1.580606);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(4,1.629252);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(5,1.424739);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(6,1.007443);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(7,0.7903031);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(8,0.8835858);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(9,0.9679197);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(10,0.8835858);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(11,0.6247895);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(12,0.7392609);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(13,0.7392609);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(14,0.8382431);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(15,0.7392609);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(16,0.6247895);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(17,0.5588287);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(18,0.3951516);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(19,0.4839599);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(20,0.2794144);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(22,0.2794144);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(23,0.2794144);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(28,0.2794144);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetEntries(230);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_9 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(1,1.73262);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(2,8.1008);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(3,9.348835);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(4,7.51564);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(5,5.668731);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(6,4.233262);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(7,3.120088);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(8,2.70179);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(9,2.594359);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(10,2.62636);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(11,2.58293);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(12,2.612645);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(13,2.146346);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(14,1.856052);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(15,1.387468);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(16,1.019457);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(17,0.8480239);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(18,0.5234433);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(19,0.4182975);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(20,0.3131517);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(21,0.2080059);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(22,0.1714334);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(23,0.1805765);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(24,0.1417183);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(25,0.08000225);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(26,0.07771647);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(27,0.04114402);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(28,0.0320009);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(29,0.009143115);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(30,0.002285779);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(31,0.002285779);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(1,0.0629316);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(2,0.1360758);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(3,0.1461826);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(4,0.131069);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(5,0.1138309);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(6,0.09836819);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(7,0.08445016);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(8,0.07858559);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(9,0.07700734);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(10,0.07748082);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(11,0.07683753);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(12,0.07727825);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(13,0.07004336);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(14,0.06513467);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(15,0.05631557);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(16,0.0482727);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(17,0.04402721);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(18,0.03459011);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(19,0.03092144);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(20,0.02675435);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(21,0.02180494);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(22,0.01979542);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(23,0.02031644);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(24,0.01799824);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(25,0.01352285);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(26,0.01332827);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(27,0.009697737);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(28,0.008552601);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(29,0.004571557);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(30,0.002285779);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(31,0.002285779);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetEntries(27254);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_10 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(1,0.7272534);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(2,3.501214);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(3,4.660517);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(4,3.941032);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(5,2.972955);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(6,2.148296);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(7,1.563266);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(8,1.323637);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(9,1.202926);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(10,1.090581);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(11,1.046958);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(12,0.9196738);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(13,0.8115121);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(14,0.7338268);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(15,0.5969813);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(16,0.4296592);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(17,0.3824505);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(18,0.2754838);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(19,0.2318606);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(20,0.1637366);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(21,0.1481995);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(22,0.1171255);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(23,0.09202714);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(24,0.06872157);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(25,0.04302568);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(26,0.03764747);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(27,0.01613463);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(28,0.007768525);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(29,0.004183052);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(30,0.002390315);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(31,0.001195158);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(1,0.02084685);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(2,0.04574114);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(3,0.05277335);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(4,0.04852914);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(5,0.04214943);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(6,0.03582982);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(7,0.03056427);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(8,0.02812432);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(9,0.02681125);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(10,0.02552858);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(11,0.0250128);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(12,0.02344307);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(13,0.02202141);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(14,0.02094085);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(15,0.01888765);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(16,0.01602358);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(17,0.01511768);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(18,0.01283056);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(19,0.01177094);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(20,0.00989169);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(21,0.009410681);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(22,0.008366104);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(23,0.007415758);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(24,0.006408319);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(25,0.005070625);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(26,0.004743135);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(27,0.003105111);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(28,0.002154601);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(29,0.001581045);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(30,0.001195158);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(31,0.0008451041);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetEntries(48968);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_11 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(1,0.01839453);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(2,0.04204463);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(3,0.02627789);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(4,0.01576674);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(5,0.005255579);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(6,0.007883368);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(7,0.005255579);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(8,0.01313895);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(9,0.005255579);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(10,0.01051116);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(11,0.007883368);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(16,0.005255579);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(17,0.002627789);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(27,0.002627789);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(1,0.006952477);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(2,0.01051116);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(3,0.0083098);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(4,0.006436743);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(5,0.003716255);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(6,0.004551465);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(7,0.003716255);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(8,0.005875916);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(9,0.003716255);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(10,0.005255579);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(11,0.004551465);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(16,0.003716255);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(17,0.002627789);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(27,0.002627789);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetEntries(64);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_12 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(1,0.002996568);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(2,0.02037666);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(3,0.02097598);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(4,0.01378421);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(5,0.00749142);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(6,0.002097598);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(7,0.002097598);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(8,0.003595882);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(9,0.002097598);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(10,0.002097598);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(11,0.0005993136);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(12,0.002097598);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(13,0.001198627);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(14,0.0005993136);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(15,0.001498284);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(16,0.0008989704);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(17,0.0005993136);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(18,0.0008989704);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(19,0.001498284);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(20,0.0005993136);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(21,0.0002996568);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(22,0.0005993136);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(24,0.0002996568);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(1,0.000947598);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(2,0.002471033);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(3,0.002507109);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(4,0.002032371);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(5,0.001498284);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(6,0.0007928174);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(7,0.0007928174);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(8,0.001038042);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(9,0.0007928174);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(10,0.0007928174);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(11,0.0004237787);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(12,0.0007928174);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(13,0.0005993136);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(14,0.0004237787);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(15,0.000670053);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(16,0.0005190208);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(17,0.0004237787);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(18,0.0005190208);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(19,0.000670053);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(20,0.0004237787);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(21,0.0002996568);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(22,0.0004237787);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(24,0.0002996568);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetEntries(298);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1__150 = new TH1D("VbbHcc_tags_Z_dR_Bj1__150","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(1,9388);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(2,41545);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(3,41155);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(4,33437);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(5,27528);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(6,22055);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(7,18197);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(8,15498);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(9,13514);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(10,12032);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(11,11135);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(12,10230);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(13,9184);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(14,8164);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(15,7289);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(16,6262);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(17,5295);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(18,4488);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(19,3635);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(20,3035);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(21,2512);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(22,2069);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(23,1647);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(24,1326);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(25,949);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(26,718);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(27,522);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(28,302);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(29,213);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(30,105);
   VbbHcc_tags_Z_dR_Bj1__150->SetBinContent(31,216);
   VbbHcc_tags_Z_dR_Bj1__150->SetEntries(313674);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1__150->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1__150->SetLineWidth(2);
   VbbHcc_tags_Z_dR_Bj1__150->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR_Bj1__150->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR_Bj1__150->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1__150->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__150->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__150->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__150->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__150->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__150->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__150->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__150->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1__150->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__150->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__150->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__150->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__150->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__150->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_fx1109[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_fy1109[30] = {
   7132.838,
   31355.87,
   35480.34,
   28735.35,
   18197.97,
   18113.24,
   12716.33,
   11173.55,
   10786.47,
   9257.372,
   10606.65,
   5447.616,
   7133.023,
   8957.656,
   6231.966,
   4017.822,
   3094.615,
   2959.054,
   3507.59,
   1744.013,
   1657.185,
   3362.429,
   1453.174,
   511.9462,
   1105.622,
   423.1974,
   295.7005,
   93.84537,
   65.86611,
   90.14952};
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_fex1109[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_fey1109[30] = {
   803.0536,
   2575.758,
   2482.072,
   2290.551,
   1634.494,
   2726.934,
   1342.92,
   1377.015,
   1328.169,
   1216.806,
   1379.32,
   700.5392,
   1141.306,
   1319.381,
   1074.934,
   685.3506,
   566.2876,
   668.2173,
   767.9251,
   402.8217,
   540.109,
   1793.245,
   537.7345,
   96.47911,
   530.0176,
   95.07253,
   80.61924,
   36.77896,
   19.21508,
   46.25243};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_Z_dR_Bj1_fx1109,Graph_from_VbbHcc_tags_Z_dR_Bj1_fy1109,Graph_from_VbbHcc_tags_Z_dR_Bj1_fex1109,Graph_from_VbbHcc_tags_Z_dR_Bj1_fey1109);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->SetMinimum(39.50738);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->SetMaximum(41754.27);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_dR_Bj1","MC unc. (stat.)","fl");

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
   Z_dR_Bj1_tags_18->cd();
  
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
   
   TH1D *data_mc_ratio__151 = new TH1D("data_mc_ratio__151","",30,0,6);
   data_mc_ratio__151->SetBinContent(1,1.316166);
   data_mc_ratio__151->SetBinContent(2,1.324951);
   data_mc_ratio__151->SetBinContent(3,1.159938);
   data_mc_ratio__151->SetBinContent(4,1.163619);
   data_mc_ratio__151->SetBinContent(5,1.512696);
   data_mc_ratio__151->SetBinContent(6,1.217618);
   data_mc_ratio__151->SetBinContent(7,1.430995);
   data_mc_ratio__151->SetBinContent(8,1.387025);
   data_mc_ratio__151->SetBinContent(9,1.252866);
   data_mc_ratio__151->SetBinContent(10,1.299721);
   data_mc_ratio__151->SetBinContent(11,1.049813);
   data_mc_ratio__151->SetBinContent(12,1.877886);
   data_mc_ratio__151->SetBinContent(13,1.287533);
   data_mc_ratio__151->SetBinContent(14,0.9113991);
   data_mc_ratio__151->SetBinContent(15,1.169615);
   data_mc_ratio__151->SetBinContent(16,1.558556);
   data_mc_ratio__151->SetBinContent(17,1.711037);
   data_mc_ratio__151->SetBinContent(18,1.516701);
   data_mc_ratio__151->SetBinContent(19,1.036324);
   data_mc_ratio__151->SetBinContent(20,1.740239);
   data_mc_ratio__151->SetBinContent(21,1.515824);
   data_mc_ratio__151->SetBinContent(22,0.6153289);
   data_mc_ratio__151->SetBinContent(23,1.133381);
   data_mc_ratio__151->SetBinContent(24,2.590116);
   data_mc_ratio__151->SetBinContent(25,0.8583407);
   data_mc_ratio__151->SetBinContent(26,1.696608);
   data_mc_ratio__151->SetBinContent(27,1.7653);
   data_mc_ratio__151->SetBinContent(28,3.21806);
   data_mc_ratio__151->SetBinContent(29,3.233833);
   data_mc_ratio__151->SetBinContent(30,1.164732);
   data_mc_ratio__151->SetBinContent(31,2.421383);
   data_mc_ratio__151->SetBinError(1,0.01358389);
   data_mc_ratio__151->SetBinError(2,0.006500406);
   data_mc_ratio__151->SetBinError(3,0.005717728);
   data_mc_ratio__151->SetBinError(4,0.006363516);
   data_mc_ratio__151->SetBinError(5,0.009117262);
   data_mc_ratio__151->SetBinError(6,0.008198933);
   data_mc_ratio__151->SetBinError(7,0.01060811);
   data_mc_ratio__151->SetBinError(8,0.01114157);
   data_mc_ratio__151->SetBinError(9,0.01077736);
   data_mc_ratio__151->SetBinError(10,0.01184899);
   data_mc_ratio__151->SetBinError(11,0.009948713);
   data_mc_ratio__151->SetBinError(12,0.01856655);
   data_mc_ratio__151->SetBinError(13,0.01343514);
   data_mc_ratio__151->SetBinError(14,0.01008689);
   data_mc_ratio__151->SetBinError(15,0.01369963);
   data_mc_ratio__151->SetBinError(16,0.01969545);
   data_mc_ratio__151->SetBinError(17,0.02351399);
   data_mc_ratio__151->SetBinError(18,0.02263985);
   data_mc_ratio__151->SetBinError(19,0.01718872);
   data_mc_ratio__151->SetBinError(20,0.03158854);
   data_mc_ratio__151->SetBinError(21,0.03024397);
   data_mc_ratio__151->SetBinError(22,0.0135278);
   data_mc_ratio__151->SetBinError(23,0.02792732);
   data_mc_ratio__151->SetBinError(24,0.07112912);
   data_mc_ratio__151->SetBinError(25,0.02786292);
   data_mc_ratio__151->SetBinError(26,0.06331684);
   data_mc_ratio__151->SetBinError(27,0.07726507);
   data_mc_ratio__151->SetBinError(28,0.1851785);
   data_mc_ratio__151->SetBinError(29,0.2215786);
   data_mc_ratio__151->SetBinError(30,0.1136662);
   data_mc_ratio__151->SetBinError(31,1.235982);
   data_mc_ratio__151->SetMinimum(0.4);
   data_mc_ratio__151->SetMaximum(1.6);
   data_mc_ratio__151->SetEntries(388.1292);
   data_mc_ratio__151->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__151->SetLineColor(ci);
   data_mc_ratio__151->SetLineWidth(2);
   data_mc_ratio__151->SetMarkerStyle(20);
   data_mc_ratio__151->SetMarkerSize(1.2);
   data_mc_ratio__151->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   data_mc_ratio__151->GetXaxis()->SetRange(1,30);
   data_mc_ratio__151->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__151->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__151->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__151->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__151->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__151->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__151->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__151->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__151->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__151->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__151->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__151->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__151->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__151->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__151->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__151->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__151->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1110[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1110[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1110[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1110[30] = {
   0.1125854,
   0.08214593,
   0.06995625,
   0.07971194,
   0.0898174,
   0.1505492,
   0.1056059,
   0.1232388,
   0.1231328,
   0.1314418,
   0.130043,
   0.1285956,
   0.1600032,
   0.1472909,
   0.1724871,
   0.1705776,
   0.1829913,
   0.2258212,
   0.2189324,
   0.230974,
   0.3259195,
   0.5333183,
   0.3700414,
   0.1884556,
   0.4793843,
   0.2246529,
   0.2726382,
   0.3919102,
   0.2917294,
   0.5130635};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1110,Graph_from_mc_statistical_error_fy1110,Graph_from_mc_statistical_error_fex1110,Graph_from_mc_statistical_error_fey1110);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1110 = new TH1F("Graph_Graph_from_mc_statistical_error1110","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1110->SetMinimum(0.3600181);
   Graph_Graph_from_mc_statistical_error1110->SetMaximum(1.639982);
   Graph_Graph_from_mc_statistical_error1110->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1110->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1110->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1110->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1110->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1110->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1110->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1110->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1110->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1110->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1110->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1110->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1110->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1110->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1110->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1110->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1110);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj1_tags_18->cd();
   Z_dR_Bj1_tags_18->Modified();
   Z_dR_Bj1_tags_18->cd();
   Z_dR_Bj1_tags_18->SetSelected(Z_dR_Bj1_tags_18);
}
