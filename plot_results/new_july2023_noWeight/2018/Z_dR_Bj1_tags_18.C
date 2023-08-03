void Z_dR_Bj1_tags_18()
{
//=========Macro generated from canvas: Z_dR_Bj1_tags_18/Z_dR_Bj1_tags_18
//=========  (Thu Aug  3 10:21:04 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_tags_18 = new TCanvas("Z_dR_Bj1_tags_18", "Z_dR_Bj1_tags_18",0,0,600,600);
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
   topPad->Range(-0.9193524,-108.0189,6.314516,107920.9);
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
   st->SetMaximum(92493.33);
   
   TH1F *st_stack_55 = new TH1F("st_stack_55","",30,0,6);
   st_stack_55->SetMinimum(0.01);
   st_stack_55->SetMaximum(97118);
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
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(1,6619.087);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(2,28142.04);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(3,31773.41);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(4,25418.71);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(5,15165.9);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(6,16126.87);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(7,10852.88);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(8,9473.43);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(9,9277.782);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(10,7931.947);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(11,9112.598);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(12,4402.096);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(13,6114.655);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(14,8081.499);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(15,5478.242);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(16,3699.407);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(17,2622.842);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(18,2528.952);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(19,3171.873);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(20,1372.518);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(21,1446.114);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(22,3176.03);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(23,1295.168);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(24,402.142);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(25,1042.578);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(26,375.7075);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(27,260.04);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(28,70.85078);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(29,44.94059);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(30,80.28978);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(31,70.80982);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(1,803.8831);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(2,2542.915);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(3,2481.847);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(4,2291.156);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(5,1633.465);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(6,2740.918);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(7,1344.292);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(8,1377.177);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(9,1327.429);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(10,1216.204);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(11,1329.219);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(12,701.8127);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(13,1140.62);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(14,1319.368);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(15,1075.018);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(16,778.323);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(17,567.0369);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(18,668.3815);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(19,768.1857);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(20,400.3818);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(21,540.384);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(22,1784.421);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(23,536.9897);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(24,96.75055);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(25,530.1409);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(26,96.02278);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(27,81.32799);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(28,36.6606);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(29,18.20131);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(30,46.58079);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(31,45.54153);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetEntries(10231);

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
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(1,29.63122);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(2,134.8045);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(3,159.3096);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(4,133.3901);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(5,114.0346);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(6,102.8489);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(7,83.79659);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(8,61.96641);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(9,62.93485);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(10,54.82484);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(11,48.87613);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(12,45.23401);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(13,38.08325);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(14,36.94572);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(15,32.43915);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(16,27.69276);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(17,23.98404);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(18,17.36504);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(19,15.03816);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(20,14.79358);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(21,9.240296);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(22,7.547866);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(23,7.866052);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(24,6.054776);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(25,4.084107);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(26,2.814835);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(27,1.464734);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(28,1.274918);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(29,0.9649916);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(30,0.3662698);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(31,0.3100993);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(1,2.364649);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(2,4.767184);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(3,5.267129);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(4,4.642015);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(5,4.235204);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(6,4.205357);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(7,3.777458);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(8,3.127031);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(9,3.166124);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(10,3.01439);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(11,2.871198);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(12,2.728119);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(13,2.530126);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(14,2.501298);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(15,2.389021);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(16,2.190172);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(17,2.019283);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(18,1.68929);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(19,1.599773);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(20,1.687164);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(21,1.283932);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(22,1.125427);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(23,1.143492);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(24,1.1028);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(25,0.8682361);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(26,0.7161238);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(27,0.4563397);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(28,0.5247935);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(29,0.3539951);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(30,0.2777081);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(31,0.1268225);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetEntries(14890);

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
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(1,401.7058);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(2,2203.696);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(3,3003.851);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(4,2862.513);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(5,2474.825);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(6,2029.967);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(7,1678.868);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(8,1427.693);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(9,1231.951);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(10,1095.082);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(11,1001.367);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(12,917.5762);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(13,822.1463);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(14,725.4405);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(15,627.6449);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(16,544.5177);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(17,435.6284);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(18,363.7347);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(19,295.022);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(20,240.8949);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(21,188.2656);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(22,149.509);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(23,113.0854);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(24,86.48628);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(25,65.868);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(26,44.53252);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(27,32.12743);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(28,17.11616);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(29,14.59162);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(30,8.517559);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(31,15.63076);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(1,4.973224);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(2,11.62689);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(3,13.61737);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(4,13.30129);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(5,12.3691);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(6,11.18778);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(7,10.17693);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(8,9.376679);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(9,8.721221);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(10,8.231264);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(11,7.870245);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(12,7.539215);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(13,7.135189);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(14,6.703667);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(15,6.231375);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(16,5.804398);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(17,5.189753);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(18,4.73485);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(19,4.26945);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(20,3.850809);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(21,3.40228);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(22,3.030748);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(23,2.63153);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(24,2.296788);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(25,2.005878);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(26,1.640445);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(27,1.403515);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(28,1.012192);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(29,0.9362998);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(30,0.7202194);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(31,0.9737177);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetEntries(421807);

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
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(1,108.3154);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(2,420.0977);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(3,481.5829);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(4,372.2512);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(5,295.183);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(6,216.5764);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(7,171.2637);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(8,159.0525);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(9,130.2179);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(10,118.8905);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(11,119.3935);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(12,106.1682);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(13,97.55955);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(14,89.45069);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(15,71.51425);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(16,64.43727);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(17,49.16798);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(18,43.41897);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(19,38.58265);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(20,34.53359);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(21,26.86459);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(22,18.53755);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(23,14.15788);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(24,10.399);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(25,9.162959);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(26,5.397728);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(27,5.43751);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(28,2.884315);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(29,1.904717);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(30,0.9523587);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(31,2.222685);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(1,4.006465);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(2,12.12266);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(3,14.51853);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(4,13.64504);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(5,14.43819);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(6,11.00354);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(7,8.187737);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(8,9.661882);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(9,8.203265);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(10,5.952816);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(11,9.001532);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(12,8.771852);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(13,5.500422);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(14,7.53887);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(15,5.998159);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(16,7.031386);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(17,3.862622);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(18,5.210509);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(19,5.104524);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(20,5.061078);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(21,3.011603);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(22,2.364606);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(23,4.326737);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(24,1.726484);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(25,1.520752);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(26,1.2266);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(27,1.14991);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(28,0.7033577);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(29,0.7516023);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(30,0.5314631);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(31,0.7816952);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetEntries(18660);

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
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(1,19.29391);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(2,53.88273);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(3,57.09282);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(4,28.09043);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(5,25.47003);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(6,16.19349);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(7,12.72038);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(8,12.4223);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(9,11.34813);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(10,14.68006);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(11,7.398587);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(12,10.47165);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(13,5.833471);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(14,9.375432);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(15,5.839643);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(16,3.833967);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(17,4.26156);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(18,4.003648);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(19,5.479623);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(20,3.723717);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(21,2.181478);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(22,0.9935437);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(23,3.297493);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(24,1.444273);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(25,0.7780083);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(26,0.8988122);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(27,0.703565);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(28,0.4432663);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(29,0.7026495);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(31,0.2594997);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(1,2.673969);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(2,5.428645);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(3,12.10235);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(4,4.974175);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(5,4.557189);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(6,1.780803);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(7,3.180144);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(8,3.204967);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(9,2.489057);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(10,3.615947);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(11,1.259198);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(12,3.157166);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(13,1.148609);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(14,3.156209);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(15,2.245901);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(16,0.8942516);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(17,2.183824);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(18,2.151757);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(19,2.236417);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(20,2.165085);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(21,0.6033632);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(22,0.4305332);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(23,2.124887);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(24,0.6772557);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(25,0.3627205);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(26,0.4612337);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(27,0.4337306);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(28,0.2924554);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(29,0.4337296);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(31,0.2594997);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetEntries(2359);

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
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(1,0.7284888);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(2,3.501754);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(3,4.662447);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(4,3.939324);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(5,2.975358);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(6,2.146717);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(7,1.562495);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(8,1.324037);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(9,1.201231);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(10,1.089752);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(11,1.048022);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(12,0.9198512);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(13,0.8107567);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(14,0.7332579);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(15,0.5985292);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(16,0.4298203);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(17,0.3815326);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(18,0.2748227);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(19,0.2319003);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(20,0.1651321);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(21,0.14844);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(22,0.1168443);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(23,0.09240242);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(24,0.06915278);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(25,0.04292241);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(26,0.03815326);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(27,0.01609591);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(28,0.00774988);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(29,0.004173012);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(30,0.002384579);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(31,0.001192289);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(1,0.0208395);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(2,0.04568973);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(3,0.0527209);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(4,0.04846036);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(5,0.04211584);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(6,0.03577365);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(7,0.03052004);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(8,0.0280948);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(9,0.02676019);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(10,0.02548823);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(11,0.02499546);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(12,0.02341718);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(13,0.02198473);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(14,0.0209076);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(15,0.01888941);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(16,0.01600734);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(17,0.0150814);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(18,0.01279977);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(19,0.01175781);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(20,0.009921824);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(21,0.009407004);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(22,0.008346025);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(23,0.007421941);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(24,0.006420674);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(25,0.005058455);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(26,0.004769157);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(27,0.003097658);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(28,0.00214943);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(29,0.00157725);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(30,0.001192289);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(31,0.0008430758);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetEntries(49090);

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
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(1,0.01593033);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(2,0.04551524);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(3,0.03186067);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(4,0.0182061);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(5,0.004551524);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(6,0.006827286);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(7,0.004551524);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(8,0.01365457);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(9,0.004551524);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(10,0.009103048);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(11,0.009103048);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(16,0.004551524);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(17,0.004551524);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(27,0.002275762);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(1,0.0060211);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(2,0.01017752);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(3,0.008515121);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(4,0.006436827);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(5,0.003218413);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(6,0.003941735);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(7,0.003218413);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(8,0.005574455);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(9,0.003218413);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(10,0.004551524);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(11,0.004551524);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(16,0.003218413);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(17,0.003218413);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(27,0.002275762);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetEntries(77);

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
   
   TH1D *VbbHcc_tags_Z_dR_Bj1__109 = new TH1D("VbbHcc_tags_Z_dR_Bj1__109","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(1,9416);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(2,41622);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(3,41220);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(4,33503);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(5,27592);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(6,22123);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(7,18254);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(8,15518);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(9,13548);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(10,12071);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(11,11144);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(12,10252);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(13,9197);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(14,8164);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(15,7273);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(16,6279);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(17,5303);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(18,4486);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(19,3641);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(20,3030);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(21,2517);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(22,2074);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(23,1648);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(24,1330);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(25,948);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(26,721);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(27,524);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(28,304);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(29,212);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(30,105);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(31,216);
   VbbHcc_tags_Z_dR_Bj1__109->SetEntries(314264);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1__109->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1__109->SetLineWidth(2);
   VbbHcc_tags_Z_dR_Bj1__109->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR_Bj1__109->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR_Bj1__109->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1__109->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__109->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__109->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__109->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__109->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__109->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__109->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__109->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1__109->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__109->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__109->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__109->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__109->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__109->Draw("same E");
   
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
   7182.898,
   30976.64,
   35500.47,
   28836.3,
   18092.75,
   18504.35,
   12806.81,
   11142.21,
   10722.45,
   9221.946,
   10294.67,
   5487.037,
   7083.192,
   8948.17,
   6220.076,
   4342.74,
   3138.236,
   2958.833,
   3527.485,
   1667.577,
   1673.023,
   3353.186,
   1434.128,
   506.7375,
   1122.593,
   429.4672,
   299.8328,
   92.8886,
   63.11788,
   90.13064};
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
   803.9168,
   2542.981,
   2481.962,
   2291.246,
   1633.588,
   2740.967,
   1344.365,
   1377.25,
   1327.49,
   1216.256,
   1329.277,
   701.9208,
   1140.659,
   1319.413,
   1075.059,
   778.3802,
   567.0819,
   668.4243,
   768.2196,
   400.442,
   540.4049,
   1784.425,
   537.019,
   96.80186,
   530.1477,
   96.0484,
   81.35067,
   36.6873,
   18.24946,
   46.59022};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_Z_dR_Bj1_fx1109,Graph_from_VbbHcc_tags_Z_dR_Bj1_fy1109,Graph_from_VbbHcc_tags_Z_dR_Bj1_fex1109,Graph_from_VbbHcc_tags_Z_dR_Bj1_fey1109);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->SetMinimum(39.18638);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->SetMaximum(41776.32);
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
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
   
   TH1D *data_mc_ratio__110 = new TH1D("data_mc_ratio__110","",30,0,6);
   data_mc_ratio__110->SetBinContent(1,1.310891);
   data_mc_ratio__110->SetBinContent(2,1.343658);
   data_mc_ratio__110->SetBinContent(3,1.161111);
   data_mc_ratio__110->SetBinContent(4,1.161834);
   data_mc_ratio__110->SetBinContent(5,1.525031);
   data_mc_ratio__110->SetBinContent(6,1.195557);
   data_mc_ratio__110->SetBinContent(7,1.425335);
   data_mc_ratio__110->SetBinContent(8,1.392722);
   data_mc_ratio__110->SetBinContent(9,1.263517);
   data_mc_ratio__110->SetBinContent(10,1.308943);
   data_mc_ratio__110->SetBinContent(11,1.082502);
   data_mc_ratio__110->SetBinContent(12,1.868404);
   data_mc_ratio__110->SetBinContent(13,1.298426);
   data_mc_ratio__110->SetBinContent(14,0.9123654);
   data_mc_ratio__110->SetBinContent(15,1.169278);
   data_mc_ratio__110->SetBinContent(16,1.445861);
   data_mc_ratio__110->SetBinContent(17,1.689803);
   data_mc_ratio__110->SetBinContent(18,1.516139);
   data_mc_ratio__110->SetBinContent(19,1.03218);
   data_mc_ratio__110->SetBinContent(20,1.817008);
   data_mc_ratio__110->SetBinContent(21,1.504462);
   data_mc_ratio__110->SetBinContent(22,0.6185162);
   data_mc_ratio__110->SetBinContent(23,1.149131);
   data_mc_ratio__110->SetBinContent(24,2.624633);
   data_mc_ratio__110->SetBinContent(25,0.8444731);
   data_mc_ratio__110->SetBinContent(26,1.678824);
   data_mc_ratio__110->SetBinContent(27,1.747641);
   data_mc_ratio__110->SetBinContent(28,3.272737);
   data_mc_ratio__110->SetBinContent(29,3.358795);
   data_mc_ratio__110->SetBinContent(30,1.164976);
   data_mc_ratio__110->SetBinContent(31,2.420539);
   data_mc_ratio__110->SetBinError(1,0.01350932);
   data_mc_ratio__110->SetBinError(2,0.006586082);
   data_mc_ratio__110->SetBinError(3,0.005718997);
   data_mc_ratio__110->SetBinError(4,0.006347494);
   data_mc_ratio__110->SetBinError(5,0.009180938);
   data_mc_ratio__110->SetBinError(6,0.008038003);
   data_mc_ratio__110->SetBinError(7,0.01054965);
   data_mc_ratio__110->SetBinError(8,0.01118012);
   data_mc_ratio__110->SetBinError(9,0.01085534);
   data_mc_ratio__110->SetBinError(10,0.01191377);
   data_mc_ratio__110->SetBinError(11,0.01025435);
   data_mc_ratio__110->SetBinError(12,0.01845298);
   data_mc_ratio__110->SetBinError(13,0.01353923);
   data_mc_ratio__110->SetBinError(14,0.01009758);
   data_mc_ratio__110->SetBinError(15,0.01371075);
   data_mc_ratio__110->SetBinError(16,0.01824658);
   data_mc_ratio__110->SetBinError(17,0.02320466);
   data_mc_ratio__110->SetBinError(18,0.0226365);
   data_mc_ratio__110->SetBinError(19,0.01710587);
   data_mc_ratio__110->SetBinError(20,0.03300924);
   data_mc_ratio__110->SetBinError(21,0.02998746);
   data_mc_ratio__110->SetBinError(22,0.01358147);
   data_mc_ratio__110->SetBinError(23,0.0283068);
   data_mc_ratio__110->SetBinError(24,0.07196855);
   data_mc_ratio__110->SetBinError(25,0.02742721);
   data_mc_ratio__110->SetBinError(26,0.06252268);
   data_mc_ratio__110->SetBinError(27,0.07634605);
   data_mc_ratio__110->SetBinError(28,0.1877044);
   data_mc_ratio__110->SetBinError(29,0.230683);
   data_mc_ratio__110->SetBinError(30,0.11369);
   data_mc_ratio__110->SetBinError(31,1.246731);
   data_mc_ratio__110->SetMinimum(0.4);
   data_mc_ratio__110->SetMaximum(1.6);
   data_mc_ratio__110->SetEntries(379.4494);
   data_mc_ratio__110->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__110->SetLineColor(ci);
   data_mc_ratio__110->SetLineWidth(2);
   data_mc_ratio__110->SetMarkerStyle(20);
   data_mc_ratio__110->SetMarkerSize(1.2);
   data_mc_ratio__110->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   data_mc_ratio__110->GetXaxis()->SetRange(1,30);
   data_mc_ratio__110->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__110->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__110->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__110->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__110->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__110->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__110->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__110->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__110->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__110->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__110->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__110->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__110->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__110->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__110->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__110->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__110->Draw("E1");
   
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
   0.111921,
   0.0820935,
   0.0699135,
   0.07945702,
   0.09028968,
   0.1481255,
   0.1049727,
   0.1236066,
   0.1238047,
   0.1318871,
   0.1291228,
   0.1279235,
   0.1610375,
   0.1474506,
   0.1728369,
   0.1792371,
   0.1807008,
   0.2259081,
   0.2177811,
   0.2401341,
   0.3230111,
   0.5321581,
   0.374457,
   0.1910296,
   0.4722526,
   0.2236455,
   0.2713201,
   0.3949602,
   0.2891329,
   0.5169188};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1110,Graph_from_mc_statistical_error_fy1110,Graph_from_mc_statistical_error_fex1110,Graph_from_mc_statistical_error_fey1110);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1110 = new TH1F("Graph_Graph_from_mc_statistical_error1110","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1110->SetMinimum(0.3614103);
   Graph_Graph_from_mc_statistical_error1110->SetMaximum(1.63859);
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
