void Z_dR_both_18_logY()
{
//=========Macro generated from canvas: Z_dR_both_18/Z_dR_both_18
//=========  (Thu Aug 10 12:21:33 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_both_18 = new TCanvas("Z_dR_both_18", "Z_dR_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
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
   topPad->Range(-0.9193524,-2.853414,6.314516,11.78797);
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
   st->SetMaximum(6.274194e+09);
   
   TH1F *st_stack_211 = new TH1F("st_stack_211","",30,0,6);
   st_stack_211->SetMinimum(0.001449532);
   st_stack_211->SetMaximum(2.107823e+10);
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
   VbbHcc_both_Z_dR_stack_1->SetBinContent(3,19364.43);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(4,19754.2);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(5,16792.63);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(6,11164);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(7,10229.23);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(8,12517.23);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(9,7697.313);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(10,8450.073);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(11,8168.099);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(12,10475.45);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(13,8974.615);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(14,12125.38);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(15,12328.23);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(16,12084.38);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(17,12689.16);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(18,11261.68);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(19,8944.393);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(20,8553.463);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(21,6500.745);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(22,5768.612);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(23,3287.873);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(24,5142.715);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(25,3950.433);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(26,1659.435);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(27,1537.138);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(28,2392.098);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(29,1576.903);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(30,928.9856);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(31,1020.203);
   VbbHcc_both_Z_dR_stack_1->SetBinError(3,1836.535);
   VbbHcc_both_Z_dR_stack_1->SetBinError(4,2039.331);
   VbbHcc_both_Z_dR_stack_1->SetBinError(5,3018.721);
   VbbHcc_both_Z_dR_stack_1->SetBinError(6,1474.576);
   VbbHcc_both_Z_dR_stack_1->SetBinError(7,1371.198);
   VbbHcc_both_Z_dR_stack_1->SetBinError(8,2458.297);
   VbbHcc_both_Z_dR_stack_1->SetBinError(9,1082.886);
   VbbHcc_both_Z_dR_stack_1->SetBinError(10,1276.434);
   VbbHcc_both_Z_dR_stack_1->SetBinError(11,1114.031);
   VbbHcc_both_Z_dR_stack_1->SetBinError(12,1825.379);
   VbbHcc_both_Z_dR_stack_1->SetBinError(13,1499.65);
   VbbHcc_both_Z_dR_stack_1->SetBinError(14,1816.382);
   VbbHcc_both_Z_dR_stack_1->SetBinError(15,1689.601);
   VbbHcc_both_Z_dR_stack_1->SetBinError(16,2282.204);
   VbbHcc_both_Z_dR_stack_1->SetBinError(17,1802.89);
   VbbHcc_both_Z_dR_stack_1->SetBinError(18,1643.823);
   VbbHcc_both_Z_dR_stack_1->SetBinError(19,1473.87);
   VbbHcc_both_Z_dR_stack_1->SetBinError(20,1495.845);
   VbbHcc_both_Z_dR_stack_1->SetBinError(21,1207.973);
   VbbHcc_both_Z_dR_stack_1->SetBinError(22,1181.044);
   VbbHcc_both_Z_dR_stack_1->SetBinError(23,723.4965);
   VbbHcc_both_Z_dR_stack_1->SetBinError(24,1212.109);
   VbbHcc_both_Z_dR_stack_1->SetBinError(25,1046.65);
   VbbHcc_both_Z_dR_stack_1->SetBinError(26,460.3418);
   VbbHcc_both_Z_dR_stack_1->SetBinError(27,434.5436);
   VbbHcc_both_Z_dR_stack_1->SetBinError(28,653.5863);
   VbbHcc_both_Z_dR_stack_1->SetBinError(29,413.9245);
   VbbHcc_both_Z_dR_stack_1->SetBinError(30,163.5194);
   VbbHcc_both_Z_dR_stack_1->SetBinError(31,413.7374);
   VbbHcc_both_Z_dR_stack_1->SetEntries(10527);

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
   VbbHcc_both_Z_dR_stack_2->SetBinContent(2,0.08117907);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(3,56.67417);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(4,78.52305);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(5,68.96022);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(6,80.76424);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(7,76.58442);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(8,73.32582);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(9,72.72687);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(10,67.88084);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(11,70.54742);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(12,71.00577);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(13,74.90086);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(14,64.86601);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(15,75.43848);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(16,65.21292);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(17,59.55923);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(18,53.45644);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(19,46.38757);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(20,40.7762);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(21,40.54511);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(22,35.1469);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(23,33.30432);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(24,23.81393);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(25,24.28277);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(26,23.08114);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(27,14.65229);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(28,20.57719);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(29,12.26889);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(30,10.19797);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(31,7.619392);
   VbbHcc_both_Z_dR_stack_2->SetBinError(2,0.08117907);
   VbbHcc_both_Z_dR_stack_2->SetBinError(3,3.48654);
   VbbHcc_both_Z_dR_stack_2->SetBinError(4,4.136671);
   VbbHcc_both_Z_dR_stack_2->SetBinError(5,3.83672);
   VbbHcc_both_Z_dR_stack_2->SetBinError(6,4.301223);
   VbbHcc_both_Z_dR_stack_2->SetBinError(7,4.07673);
   VbbHcc_both_Z_dR_stack_2->SetBinError(8,4.026909);
   VbbHcc_both_Z_dR_stack_2->SetBinError(9,3.968001);
   VbbHcc_both_Z_dR_stack_2->SetBinError(10,3.864274);
   VbbHcc_both_Z_dR_stack_2->SetBinError(11,3.805605);
   VbbHcc_both_Z_dR_stack_2->SetBinError(12,3.844079);
   VbbHcc_both_Z_dR_stack_2->SetBinError(13,4.182249);
   VbbHcc_both_Z_dR_stack_2->SetBinError(14,3.689642);
   VbbHcc_both_Z_dR_stack_2->SetBinError(15,4.228799);
   VbbHcc_both_Z_dR_stack_2->SetBinError(16,3.630126);
   VbbHcc_both_Z_dR_stack_2->SetBinError(17,3.572559);
   VbbHcc_both_Z_dR_stack_2->SetBinError(18,3.366908);
   VbbHcc_both_Z_dR_stack_2->SetBinError(19,3.078456);
   VbbHcc_both_Z_dR_stack_2->SetBinError(20,2.910693);
   VbbHcc_both_Z_dR_stack_2->SetBinError(21,2.915772);
   VbbHcc_both_Z_dR_stack_2->SetBinError(22,2.67871);
   VbbHcc_both_Z_dR_stack_2->SetBinError(23,2.748603);
   VbbHcc_both_Z_dR_stack_2->SetBinError(24,2.440959);
   VbbHcc_both_Z_dR_stack_2->SetBinError(25,2.217399);
   VbbHcc_both_Z_dR_stack_2->SetBinError(26,2.316098);
   VbbHcc_both_Z_dR_stack_2->SetBinError(27,1.689658);
   VbbHcc_both_Z_dR_stack_2->SetBinError(28,3.245245);
   VbbHcc_both_Z_dR_stack_2->SetBinError(29,1.574198);
   VbbHcc_both_Z_dR_stack_2->SetBinError(30,1.454907);
   VbbHcc_both_Z_dR_stack_2->SetBinError(31,1.268174);
   VbbHcc_both_Z_dR_stack_2->SetEntries(15109);

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
   VbbHcc_both_Z_dR_stack_3->SetBinContent(2,1.075257);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(3,1073.481);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(4,1595.301);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(5,1649.998);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(6,1714.221);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(7,1678.619);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(8,1617.956);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(9,1555.476);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(10,1522.287);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(11,1495.21);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(12,1486.153);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(13,1485.76);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(14,1482.105);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(15,1458.5);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(16,1403.395);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(17,1308.86);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(18,1206.869);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(19,1069.56);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(20,971.5143);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(21,844.3688);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(22,756.2144);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(23,655.3525);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(24,569.6312);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(25,480.3255);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(26,421.7087);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(27,372.3896);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(28,298.4899);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(29,237.8866);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(30,154.9081);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(31,120.8909);
   VbbHcc_both_Z_dR_stack_3->SetBinError(2,0.3100322);
   VbbHcc_both_Z_dR_stack_3->SetBinError(3,10.13652);
   VbbHcc_both_Z_dR_stack_3->SetBinError(4,12.72831);
   VbbHcc_both_Z_dR_stack_3->SetBinError(5,12.52807);
   VbbHcc_both_Z_dR_stack_3->SetBinError(6,12.69851);
   VbbHcc_both_Z_dR_stack_3->SetBinError(7,12.76924);
   VbbHcc_both_Z_dR_stack_3->SetBinError(8,12.98211);
   VbbHcc_both_Z_dR_stack_3->SetBinError(9,12.65121);
   VbbHcc_both_Z_dR_stack_3->SetBinError(10,12.02245);
   VbbHcc_both_Z_dR_stack_3->SetBinError(11,11.689);
   VbbHcc_both_Z_dR_stack_3->SetBinError(12,12.11952);
   VbbHcc_both_Z_dR_stack_3->SetBinError(13,11.81366);
   VbbHcc_both_Z_dR_stack_3->SetBinError(14,12.02075);
   VbbHcc_both_Z_dR_stack_3->SetBinError(15,12.00547);
   VbbHcc_both_Z_dR_stack_3->SetBinError(16,11.86589);
   VbbHcc_both_Z_dR_stack_3->SetBinError(17,11.64813);
   VbbHcc_both_Z_dR_stack_3->SetBinError(18,11.66526);
   VbbHcc_both_Z_dR_stack_3->SetBinError(19,10.03403);
   VbbHcc_both_Z_dR_stack_3->SetBinError(20,10.25057);
   VbbHcc_both_Z_dR_stack_3->SetBinError(21,9.153457);
   VbbHcc_both_Z_dR_stack_3->SetBinError(22,8.494317);
   VbbHcc_both_Z_dR_stack_3->SetBinError(23,7.676977);
   VbbHcc_both_Z_dR_stack_3->SetBinError(24,7.296406);
   VbbHcc_both_Z_dR_stack_3->SetBinError(25,6.541316);
   VbbHcc_both_Z_dR_stack_3->SetBinError(26,6.274149);
   VbbHcc_both_Z_dR_stack_3->SetBinError(27,6.757766);
   VbbHcc_both_Z_dR_stack_3->SetBinError(28,6.299328);
   VbbHcc_both_Z_dR_stack_3->SetBinError(29,5.592117);
   VbbHcc_both_Z_dR_stack_3->SetBinError(30,3.905168);
   VbbHcc_both_Z_dR_stack_3->SetBinError(31,3.329085);
   VbbHcc_both_Z_dR_stack_3->SetEntries(383737);

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
   VbbHcc_both_Z_dR_stack_4->SetBinContent(3,214.7297);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(4,326.3852);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(5,295.4473);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(6,258.4739);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(7,195.8489);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(8,165.6485);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(9,150.5178);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(10,129.3877);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(11,144.197);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(12,156.683);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(13,158.8558);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(14,186.1361);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(15,166.6609);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(16,183.2642);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(17,146.1086);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(18,142.5261);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(19,136.5608);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(20,126.2084);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(21,96.4101);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(22,88.81928);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(23,67.83427);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(24,56.13023);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(25,55.96267);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(26,64.3242);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(27,38.88564);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(28,38.06669);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(29,39.97482);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(30,33.1077);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(31,13.97456);
   VbbHcc_both_Z_dR_stack_4->SetBinError(3,6.936796);
   VbbHcc_both_Z_dR_stack_4->SetBinError(4,10.88013);
   VbbHcc_both_Z_dR_stack_4->SetBinError(5,12.59074);
   VbbHcc_both_Z_dR_stack_4->SetBinError(6,17.75783);
   VbbHcc_both_Z_dR_stack_4->SetBinError(7,11.41056);
   VbbHcc_both_Z_dR_stack_4->SetBinError(8,7.951523);
   VbbHcc_both_Z_dR_stack_4->SetBinError(9,9.709705);
   VbbHcc_both_Z_dR_stack_4->SetBinError(10,8.192483);
   VbbHcc_both_Z_dR_stack_4->SetBinError(11,13.07085);
   VbbHcc_both_Z_dR_stack_4->SetBinError(12,8.774698);
   VbbHcc_both_Z_dR_stack_4->SetBinError(13,14.17735);
   VbbHcc_both_Z_dR_stack_4->SetBinError(14,12.3783);
   VbbHcc_both_Z_dR_stack_4->SetBinError(15,9.65134);
   VbbHcc_both_Z_dR_stack_4->SetBinError(16,12.80121);
   VbbHcc_both_Z_dR_stack_4->SetBinError(17,8.577616);
   VbbHcc_both_Z_dR_stack_4->SetBinError(18,8.561588);
   VbbHcc_both_Z_dR_stack_4->SetBinError(19,13.0809);
   VbbHcc_both_Z_dR_stack_4->SetBinError(20,9.800231);
   VbbHcc_both_Z_dR_stack_4->SetBinError(21,5.883962);
   VbbHcc_both_Z_dR_stack_4->SetBinError(22,5.82519);
   VbbHcc_both_Z_dR_stack_4->SetBinError(23,5.266118);
   VbbHcc_both_Z_dR_stack_4->SetBinError(24,6.12193);
   VbbHcc_both_Z_dR_stack_4->SetBinError(25,4.75668);
   VbbHcc_both_Z_dR_stack_4->SetBinError(26,9.458704);
   VbbHcc_both_Z_dR_stack_4->SetBinError(27,3.850022);
   VbbHcc_both_Z_dR_stack_4->SetBinError(28,3.754874);
   VbbHcc_both_Z_dR_stack_4->SetBinError(29,5.632378);
   VbbHcc_both_Z_dR_stack_4->SetBinError(30,7.70767);
   VbbHcc_both_Z_dR_stack_4->SetBinError(31,2.134159);
   VbbHcc_both_Z_dR_stack_4->SetEntries(19219);

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
   VbbHcc_both_Z_dR_stack_5->SetBinContent(3,37.66167);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(4,36.4564);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(5,15.81168);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(6,23.6909);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(7,12.09659);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(8,22.72448);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(9,21.34401);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(10,13.22934);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(11,20.1366);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(12,13.80149);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(13,13.60888);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(14,14.03949);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(15,18.25778);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(16,23.74676);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(17,13.67584);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(18,8.175024);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(19,8.757341);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(20,10.7489);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(21,11.79379);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(22,4.800774);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(23,9.991085);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(24,3.922604);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(25,3.072051);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(26,9.183786);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(27,2.741785);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(28,2.717666);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(29,3.94252);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(30,3.717883);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(31,1.200997);
   VbbHcc_both_Z_dR_stack_5->SetBinError(3,4.554541);
   VbbHcc_both_Z_dR_stack_5->SetBinError(4,5.422456);
   VbbHcc_both_Z_dR_stack_5->SetBinError(5,2.864454);
   VbbHcc_both_Z_dR_stack_5->SetBinError(6,9.477219);
   VbbHcc_both_Z_dR_stack_5->SetBinError(7,1.522802);
   VbbHcc_both_Z_dR_stack_5->SetBinError(8,5.257492);
   VbbHcc_both_Z_dR_stack_5->SetBinError(9,4.228479);
   VbbHcc_both_Z_dR_stack_5->SetBinError(10,3.788129);
   VbbHcc_both_Z_dR_stack_5->SetBinError(11,5.095835);
   VbbHcc_both_Z_dR_stack_5->SetBinError(12,2.802725);
   VbbHcc_both_Z_dR_stack_5->SetBinError(13,3.800656);
   VbbHcc_both_Z_dR_stack_5->SetBinError(14,3.572355);
   VbbHcc_both_Z_dR_stack_5->SetBinError(15,4.289653);
   VbbHcc_both_Z_dR_stack_5->SetBinError(16,5.301675);
   VbbHcc_both_Z_dR_stack_5->SetBinError(17,3.263842);
   VbbHcc_both_Z_dR_stack_5->SetBinError(18,1.31231);
   VbbHcc_both_Z_dR_stack_5->SetBinError(19,1.430898);
   VbbHcc_both_Z_dR_stack_5->SetBinError(20,3.293263);
   VbbHcc_both_Z_dR_stack_5->SetBinError(21,2.896667);
   VbbHcc_both_Z_dR_stack_5->SetBinError(22,1.017016);
   VbbHcc_both_Z_dR_stack_5->SetBinError(23,3.57105);
   VbbHcc_both_Z_dR_stack_5->SetBinError(24,0.8801202);
   VbbHcc_both_Z_dR_stack_5->SetBinError(25,0.7696513);
   VbbHcc_both_Z_dR_stack_5->SetBinError(26,3.837227);
   VbbHcc_both_Z_dR_stack_5->SetBinError(27,0.7209564);
   VbbHcc_both_Z_dR_stack_5->SetBinError(28,0.713953);
   VbbHcc_both_Z_dR_stack_5->SetBinError(29,1.094341);
   VbbHcc_both_Z_dR_stack_5->SetBinError(30,0.9897103);
   VbbHcc_both_Z_dR_stack_5->SetBinError(31,0.5277603);
   VbbHcc_both_Z_dR_stack_5->SetEntries(2591);

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
   VbbHcc_both_Z_dR_stack_6->SetBinContent(4,0.5029805);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(5,0.2493026);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(9,0.3743199);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(11,1.152131);
   VbbHcc_both_Z_dR_stack_6->SetBinError(4,0.5029805);
   VbbHcc_both_Z_dR_stack_6->SetBinError(5,0.2493026);
   VbbHcc_both_Z_dR_stack_6->SetBinError(9,0.3743199);
   VbbHcc_both_Z_dR_stack_6->SetBinError(11,0.8232768);
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
   VbbHcc_both_Z_dR_stack_7->SetBinContent(3,2.366641);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(4,2.565463);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(5,1.875563);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(6,0.8899102);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(7,0.8955683);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(9,0.8592186);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(10,0.6750199);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(12,1.385301);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(13,0.3816532);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(14,0.8911556);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(21,0.2932993);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(26,0.4786962);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(27,0.4963468);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(28,0.3856298);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(29,0.3670258);
   VbbHcc_both_Z_dR_stack_7->SetBinError(3,1.023699);
   VbbHcc_both_Z_dR_stack_7->SetBinError(4,1.067253);
   VbbHcc_both_Z_dR_stack_7->SetBinError(5,0.9567587);
   VbbHcc_both_Z_dR_stack_7->SetBinError(6,0.6358248);
   VbbHcc_both_Z_dR_stack_7->SetBinError(7,0.6407104);
   VbbHcc_both_Z_dR_stack_7->SetBinError(9,0.6115124);
   VbbHcc_both_Z_dR_stack_7->SetBinError(10,0.6750199);
   VbbHcc_both_Z_dR_stack_7->SetBinError(12,1.062317);
   VbbHcc_both_Z_dR_stack_7->SetBinError(13,0.3816532);
   VbbHcc_both_Z_dR_stack_7->SetBinError(14,0.6376252);
   VbbHcc_both_Z_dR_stack_7->SetBinError(21,0.2932993);
   VbbHcc_both_Z_dR_stack_7->SetBinError(26,0.4786962);
   VbbHcc_both_Z_dR_stack_7->SetBinError(27,0.4963468);
   VbbHcc_both_Z_dR_stack_7->SetBinError(28,0.3856298);
   VbbHcc_both_Z_dR_stack_7->SetBinError(29,0.3670258);
   VbbHcc_both_Z_dR_stack_7->SetEntries(33);

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
   VbbHcc_both_Z_dR_stack_8->SetBinContent(3,5.76454);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(4,7.601104);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(5,10.10483);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(6,4.122864);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(7,2.926191);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(8,2.380818);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(9,1.929442);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(10,0.4603445);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(11,1.006793);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(12,1.36727);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(13,2.040258);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(14,4.444304);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(15,5.581257);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(16,2.897064);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(17,2.415427);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(18,2.538027);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(19,2.233123);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(20,2.422584);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(21,1.834165);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(22,0.8558205);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(23,2.091778);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(24,0.6741178);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(25,0.6091371);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(26,1.200757);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(27,0.27396);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(28,2.244098);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(29,0.3001798);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(30,0.5965141);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(31,0.3171006);
   VbbHcc_both_Z_dR_stack_8->SetBinError(3,1.347862);
   VbbHcc_both_Z_dR_stack_8->SetBinError(4,1.625003);
   VbbHcc_both_Z_dR_stack_8->SetBinError(5,1.853613);
   VbbHcc_both_Z_dR_stack_8->SetBinError(6,1.158188);
   VbbHcc_both_Z_dR_stack_8->SetBinError(7,0.9919108);
   VbbHcc_both_Z_dR_stack_8->SetBinError(8,0.9089406);
   VbbHcc_both_Z_dR_stack_8->SetBinError(9,0.7937839);
   VbbHcc_both_Z_dR_stack_8->SetBinError(10,0.3522627);
   VbbHcc_both_Z_dR_stack_8->SetBinError(11,0.5120054);
   VbbHcc_both_Z_dR_stack_8->SetBinError(12,0.669954);
   VbbHcc_both_Z_dR_stack_8->SetBinError(13,0.8421523);
   VbbHcc_both_Z_dR_stack_8->SetBinError(14,1.176193);
   VbbHcc_both_Z_dR_stack_8->SetBinError(15,1.366809);
   VbbHcc_both_Z_dR_stack_8->SetBinError(16,1.001806);
   VbbHcc_both_Z_dR_stack_8->SetBinError(17,0.8514725);
   VbbHcc_both_Z_dR_stack_8->SetBinError(18,0.9136333);
   VbbHcc_both_Z_dR_stack_8->SetBinError(19,0.8636043);
   VbbHcc_both_Z_dR_stack_8->SetBinError(20,0.9248194);
   VbbHcc_both_Z_dR_stack_8->SetBinError(21,0.7625598);
   VbbHcc_both_Z_dR_stack_8->SetBinError(22,0.496239);
   VbbHcc_both_Z_dR_stack_8->SetBinError(23,0.861631);
   VbbHcc_both_Z_dR_stack_8->SetBinError(24,0.4781067);
   VbbHcc_both_Z_dR_stack_8->SetBinError(25,0.4930087);
   VbbHcc_both_Z_dR_stack_8->SetBinError(26,0.6005231);
   VbbHcc_both_Z_dR_stack_8->SetBinError(27,0.27396);
   VbbHcc_both_Z_dR_stack_8->SetBinError(28,0.8592821);
   VbbHcc_both_Z_dR_stack_8->SetBinError(29,0.3001798);
   VbbHcc_both_Z_dR_stack_8->SetBinError(30,0.421836);
   VbbHcc_both_Z_dR_stack_8->SetBinError(31,0.3171006);
   VbbHcc_both_Z_dR_stack_8->SetEntries(232);

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
   VbbHcc_both_Z_dR_stack_9->SetBinContent(3,4.457453);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(4,8.171546);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(5,7.719679);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(6,5.69822);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(7,3.405357);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(8,2.017765);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(9,1.568297);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(10,1.486667);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(11,1.72043);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(12,2.107086);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(13,2.669405);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(14,3.47289);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(15,3.408529);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(16,3.828842);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(17,3.57321);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(18,3.038049);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(19,2.587062);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(20,1.899034);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(21,1.345085);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(22,1.010489);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(23,0.8810443);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(24,0.5526669);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(25,0.5262167);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(26,0.6410346);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(27,0.7150818);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(28,0.8276246);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(29,0.6865084);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(30,0.4525121);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(31,0.1943423);
   VbbHcc_both_Z_dR_stack_9->SetBinError(3,0.1144659);
   VbbHcc_both_Z_dR_stack_9->SetBinError(4,0.1604255);
   VbbHcc_both_Z_dR_stack_9->SetBinError(5,0.1598694);
   VbbHcc_both_Z_dR_stack_9->SetBinError(6,0.1307166);
   VbbHcc_both_Z_dR_stack_9->SetBinError(7,0.1047895);
   VbbHcc_both_Z_dR_stack_9->SetBinError(8,0.07546511);
   VbbHcc_both_Z_dR_stack_9->SetBinError(9,0.07092034);
   VbbHcc_both_Z_dR_stack_9->SetBinError(10,0.06384657);
   VbbHcc_both_Z_dR_stack_9->SetBinError(11,0.07269407);
   VbbHcc_both_Z_dR_stack_9->SetBinError(12,0.08382501);
   VbbHcc_both_Z_dR_stack_9->SetBinError(13,0.08906395);
   VbbHcc_both_Z_dR_stack_9->SetBinError(14,0.1054204);
   VbbHcc_both_Z_dR_stack_9->SetBinError(15,0.1004925);
   VbbHcc_both_Z_dR_stack_9->SetBinError(16,0.1186178);
   VbbHcc_both_Z_dR_stack_9->SetBinError(17,0.1083925);
   VbbHcc_both_Z_dR_stack_9->SetBinError(18,0.09462575);
   VbbHcc_both_Z_dR_stack_9->SetBinError(19,0.09069747);
   VbbHcc_both_Z_dR_stack_9->SetBinError(20,0.07397109);
   VbbHcc_both_Z_dR_stack_9->SetBinError(21,0.06432204);
   VbbHcc_both_Z_dR_stack_9->SetBinError(22,0.05366577);
   VbbHcc_both_Z_dR_stack_9->SetBinError(23,0.1150899);
   VbbHcc_both_Z_dR_stack_9->SetBinError(24,0.04378491);
   VbbHcc_both_Z_dR_stack_9->SetBinError(25,0.03816011);
   VbbHcc_both_Z_dR_stack_9->SetBinError(26,0.04154964);
   VbbHcc_both_Z_dR_stack_9->SetBinError(27,0.04535184);
   VbbHcc_both_Z_dR_stack_9->SetBinError(28,0.05234297);
   VbbHcc_both_Z_dR_stack_9->SetBinError(29,0.04416262);
   VbbHcc_both_Z_dR_stack_9->SetBinError(30,0.03627524);
   VbbHcc_both_Z_dR_stack_9->SetBinError(31,0.0224623);
   VbbHcc_both_Z_dR_stack_9->SetEntries(27714);

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
   VbbHcc_both_Z_dR_stack_10->SetBinContent(3,1.315039);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(4,2.74388);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(5,3.320887);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(6,2.991569);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(7,2.224966);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(8,1.578671);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(9,1.161636);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(10,1.051712);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(11,1.023844);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(12,1.138492);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(13,1.231781);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(14,1.250892);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(15,1.266171);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(16,1.26679);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(17,1.204537);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(18,1.113157);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(19,0.9427956);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(20,0.8289671);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(21,0.6650672);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(22,0.5614926);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(23,0.423449);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(24,0.387975);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(25,0.3723919);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(26,0.410761);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(27,0.42755);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(28,0.3569468);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(29,0.2900312);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(30,0.1815811);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(31,0.09313832);
   VbbHcc_both_Z_dR_stack_10->SetBinError(3,0.02908645);
   VbbHcc_both_Z_dR_stack_10->SetBinError(4,0.04199338);
   VbbHcc_both_Z_dR_stack_10->SetBinError(5,0.04627473);
   VbbHcc_both_Z_dR_stack_10->SetBinError(6,0.04393611);
   VbbHcc_both_Z_dR_stack_10->SetBinError(7,0.0378341);
   VbbHcc_both_Z_dR_stack_10->SetBinError(8,0.03191771);
   VbbHcc_both_Z_dR_stack_10->SetBinError(9,0.0273298);
   VbbHcc_both_Z_dR_stack_10->SetBinError(10,0.02605121);
   VbbHcc_both_Z_dR_stack_10->SetBinError(11,0.02569768);
   VbbHcc_both_Z_dR_stack_10->SetBinError(12,0.02711235);
   VbbHcc_both_Z_dR_stack_10->SetBinError(13,0.02821058);
   VbbHcc_both_Z_dR_stack_10->SetBinError(14,0.02842185);
   VbbHcc_both_Z_dR_stack_10->SetBinError(15,0.02860136);
   VbbHcc_both_Z_dR_stack_10->SetBinError(16,0.02859202);
   VbbHcc_both_Z_dR_stack_10->SetBinError(17,0.02792224);
   VbbHcc_both_Z_dR_stack_10->SetBinError(18,0.02680074);
   VbbHcc_both_Z_dR_stack_10->SetBinError(19,0.02470629);
   VbbHcc_both_Z_dR_stack_10->SetBinError(20,0.02311565);
   VbbHcc_both_Z_dR_stack_10->SetBinError(21,0.02071201);
   VbbHcc_both_Z_dR_stack_10->SetBinError(22,0.01908111);
   VbbHcc_both_Z_dR_stack_10->SetBinError(23,0.01646653);
   VbbHcc_both_Z_dR_stack_10->SetBinError(24,0.01579921);
   VbbHcc_both_Z_dR_stack_10->SetBinError(25,0.01549451);
   VbbHcc_both_Z_dR_stack_10->SetBinError(26,0.01625325);
   VbbHcc_both_Z_dR_stack_10->SetBinError(27,0.01658779);
   VbbHcc_both_Z_dR_stack_10->SetBinError(28,0.01518452);
   VbbHcc_both_Z_dR_stack_10->SetBinError(29,0.01363663);
   VbbHcc_both_Z_dR_stack_10->SetBinError(30,0.01078675);
   VbbHcc_both_Z_dR_stack_10->SetBinError(31,0.007767584);
   VbbHcc_both_Z_dR_stack_10->SetEntries(50073);

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
   VbbHcc_both_Z_dR_stack_11->SetBinContent(3,0.03156909);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(4,0.03745501);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(5,0.03327313);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(6,0.01859948);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(7,0.008202727);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(8,0.005727716);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(9,0.00272295);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(11,0.005642558);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(12,0.001269256);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(13,0.008826058);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(14,0.00569676);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(15,0.009121097);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(16,0.004830859);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(17,0.002662043);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(23,0.01255373);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(27,0.00283147);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(29,0.003551429);
   VbbHcc_both_Z_dR_stack_11->SetBinError(3,0.009674758);
   VbbHcc_both_Z_dR_stack_11->SetBinError(4,0.01048442);
   VbbHcc_both_Z_dR_stack_11->SetBinError(5,0.01008923);
   VbbHcc_both_Z_dR_stack_11->SetBinError(6,0.007383077);
   VbbHcc_both_Z_dR_stack_11->SetBinError(7,0.004739857);
   VbbHcc_both_Z_dR_stack_11->SetBinError(8,0.004050224);
   VbbHcc_both_Z_dR_stack_11->SetBinError(9,0.00272295);
   VbbHcc_both_Z_dR_stack_11->SetBinError(11,0.003989917);
   VbbHcc_both_Z_dR_stack_11->SetBinError(12,0.001269256);
   VbbHcc_both_Z_dR_stack_11->SetBinError(13,0.005098108);
   VbbHcc_both_Z_dR_stack_11->SetBinError(14,0.004028563);
   VbbHcc_both_Z_dR_stack_11->SetBinError(15,0.005289296);
   VbbHcc_both_Z_dR_stack_11->SetBinError(16,0.003466234);
   VbbHcc_both_Z_dR_stack_11->SetBinError(17,0.002662043);
   VbbHcc_both_Z_dR_stack_11->SetBinError(23,0.006320737);
   VbbHcc_both_Z_dR_stack_11->SetBinError(27,0.00283147);
   VbbHcc_both_Z_dR_stack_11->SetBinError(29,0.003551429);
   VbbHcc_both_Z_dR_stack_11->SetEntries(69);

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
   VbbHcc_both_Z_dR_stack_12->SetBinContent(3,0.008807358);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(4,0.01487792);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(5,0.01858874);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(6,0.01171109);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(7,0.007537445);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(8,0.003436955);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(9,0.003257825);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(10,0.002733999);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(11,0.003675854);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(12,0.003259801);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(13,0.002840852);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(14,0.002673525);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(15,0.002276514);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(16,0.001993754);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(17,0.002134631);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(18,0.002793782);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(19,0.001745354);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(20,0.003795282);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(21,0.001777616);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(22,0.001060734);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(23,0.002000059);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(25,0.0006628797);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(26,0.001364511);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(27,0.001447455);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(28,0.003358389);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(29,0.0006809183);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(30,0.0003489566);
   VbbHcc_both_Z_dR_stack_12->SetBinError(3,0.00178138);
   VbbHcc_both_Z_dR_stack_12->SetBinError(4,0.002332915);
   VbbHcc_both_Z_dR_stack_12->SetBinError(5,0.00254476);
   VbbHcc_both_Z_dR_stack_12->SetBinError(6,0.002028779);
   VbbHcc_both_Z_dR_stack_12->SetBinError(7,0.001666383);
   VbbHcc_both_Z_dR_stack_12->SetBinError(8,0.001098805);
   VbbHcc_both_Z_dR_stack_12->SetBinError(9,0.001100253);
   VbbHcc_both_Z_dR_stack_12->SetBinError(10,0.0009774321);
   VbbHcc_both_Z_dR_stack_12->SetBinError(11,0.001174177);
   VbbHcc_both_Z_dR_stack_12->SetBinError(12,0.001043353);
   VbbHcc_both_Z_dR_stack_12->SetBinError(13,0.001014053);
   VbbHcc_both_Z_dR_stack_12->SetBinError(14,0.0009558126);
   VbbHcc_both_Z_dR_stack_12->SetBinError(15,0.0008257333);
   VbbHcc_both_Z_dR_stack_12->SetBinError(16,0.000848838);
   VbbHcc_both_Z_dR_stack_12->SetBinError(17,0.00087797);
   VbbHcc_both_Z_dR_stack_12->SetBinError(18,0.0009665392);
   VbbHcc_both_Z_dR_stack_12->SetBinError(19,0.0007875066);
   VbbHcc_both_Z_dR_stack_12->SetBinError(20,0.001119276);
   VbbHcc_both_Z_dR_stack_12->SetBinError(21,0.000800541);
   VbbHcc_both_Z_dR_stack_12->SetBinError(22,0.0005372225);
   VbbHcc_both_Z_dR_stack_12->SetBinError(23,0.0008415221);
   VbbHcc_both_Z_dR_stack_12->SetBinError(25,0.0004005947);
   VbbHcc_both_Z_dR_stack_12->SetBinError(26,0.0006286968);
   VbbHcc_both_Z_dR_stack_12->SetBinError(27,0.000729777);
   VbbHcc_both_Z_dR_stack_12->SetBinError(28,0.00106807);
   VbbHcc_both_Z_dR_stack_12->SetBinError(29,0.0004823037);
   VbbHcc_both_Z_dR_stack_12->SetBinError(30,0.0003489566);
   VbbHcc_both_Z_dR_stack_12->SetEntries(330);

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
   
   TH1D *VbbHcc_both_Z_dR__579 = new TH1D("VbbHcc_both_Z_dR__579","",30,0,6);
   VbbHcc_both_Z_dR__579->SetBinContent(2,19);
   VbbHcc_both_Z_dR__579->SetBinContent(3,22753);
   VbbHcc_both_Z_dR__579->SetBinContent(4,25639);
   VbbHcc_both_Z_dR__579->SetBinContent(5,19489);
   VbbHcc_both_Z_dR__579->SetBinContent(6,17185);
   VbbHcc_both_Z_dR__579->SetBinContent(7,15554);
   VbbHcc_both_Z_dR__579->SetBinContent(8,14345);
   VbbHcc_both_Z_dR__579->SetBinContent(9,13883);
   VbbHcc_both_Z_dR__579->SetBinContent(10,13339);
   VbbHcc_both_Z_dR__579->SetBinContent(11,13391);
   VbbHcc_both_Z_dR__579->SetBinContent(12,13513);
   VbbHcc_both_Z_dR__579->SetBinContent(13,14010);
   VbbHcc_both_Z_dR__579->SetBinContent(14,14355);
   VbbHcc_both_Z_dR__579->SetBinContent(15,14884);
   VbbHcc_both_Z_dR__579->SetBinContent(16,14704);
   VbbHcc_both_Z_dR__579->SetBinContent(17,13840);
   VbbHcc_both_Z_dR__579->SetBinContent(18,12658);
   VbbHcc_both_Z_dR__579->SetBinContent(19,11453);
   VbbHcc_both_Z_dR__579->SetBinContent(20,10196);
   VbbHcc_both_Z_dR__579->SetBinContent(21,8730);
   VbbHcc_both_Z_dR__579->SetBinContent(22,7485);
   VbbHcc_both_Z_dR__579->SetBinContent(23,6145);
   VbbHcc_both_Z_dR__579->SetBinContent(24,5510);
   VbbHcc_both_Z_dR__579->SetBinContent(25,4677);
   VbbHcc_both_Z_dR__579->SetBinContent(26,4046);
   VbbHcc_both_Z_dR__579->SetBinContent(27,3598);
   VbbHcc_both_Z_dR__579->SetBinContent(28,3400);
   VbbHcc_both_Z_dR__579->SetBinContent(29,3200);
   VbbHcc_both_Z_dR__579->SetBinContent(30,2160);
   VbbHcc_both_Z_dR__579->SetBinContent(31,1606);
   VbbHcc_both_Z_dR__579->SetEntries(325796);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR__579->SetLineColor(ci);
   VbbHcc_both_Z_dR__579->SetLineWidth(2);
   VbbHcc_both_Z_dR__579->SetMarkerStyle(20);
   VbbHcc_both_Z_dR__579->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR__579->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR__579->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__579->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR__579->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR__579->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__579->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__579->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR__579->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR__579->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR__579->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__579->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__579->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR__579->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR__579->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__579->Draw("same E");
   
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
   1.156436,
   20760.92,
   21812.5,
   18846.17,
   13254.89,
   12201.85,
   14402.87,
   9503.276,
   10186.53,
   9903.102,
   12209.1,
   10714.08,
   13882.59,
   14057.35,
   13768,
   14224.56,
   12679.4,
   10211.42,
   9707.865,
   7498.002,
   6656.023,
   4057.765,
   5797.828,
   4515.585,
   2180.465,
   1967.724,
   2755.767,
   1872.623,
   1132.148};
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
   0.3204841,
   1836.586,
   2039.412,
   3018.778,
   1474.775,
   1371.312,
   2458.353,
   1083.02,
   1276.529,
   1114.187,
   1825.447,
   1499.775,
   1816.472,
   1689.682,
   2282.28,
   1802.954,
   1643.891,
   1473.966,
   1495.919,
   1208.029,
   1181.093,
   723.5709,
   1212.149,
   1046.684,
   460.5041,
   434.6175,
   653.6365,
   414.0053,
   163.7576};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_fx1421,Graph_from_VbbHcc_both_Z_dR_fy1421,Graph_from_VbbHcc_both_Z_dR_fex1421,Graph_from_VbbHcc_both_Z_dR_fey1421);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR1421 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR1421","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->SetMinimum(26.2371);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->SetMaximum(26237.1);
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
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
   
   TH1D *data_mc_ratio__580 = new TH1D("data_mc_ratio__580","",30,0,6);
   data_mc_ratio__580->SetBinContent(2,16.42979);
   data_mc_ratio__580->SetBinContent(3,1.095954);
   data_mc_ratio__580->SetBinContent(4,1.175427);
   data_mc_ratio__580->SetBinContent(5,1.034109);
   data_mc_ratio__580->SetBinContent(6,1.296503);
   data_mc_ratio__580->SetBinContent(7,1.274725);
   data_mc_ratio__580->SetBinContent(8,0.9959819);
   data_mc_ratio__580->SetBinContent(9,1.460865);
   data_mc_ratio__580->SetBinContent(10,1.309474);
   data_mc_ratio__580->SetBinContent(11,1.352203);
   data_mc_ratio__580->SetBinContent(12,1.106798);
   data_mc_ratio__580->SetBinContent(13,1.307626);
   data_mc_ratio__580->SetBinContent(14,1.034029);
   data_mc_ratio__580->SetBinContent(15,1.058805);
   data_mc_ratio__580->SetBinContent(16,1.067984);
   data_mc_ratio__580->SetBinContent(17,0.9729649);
   data_mc_ratio__580->SetBinContent(18,0.9983121);
   data_mc_ratio__580->SetBinContent(19,1.121587);
   data_mc_ratio__580->SetBinContent(20,1.050282);
   data_mc_ratio__580->SetBinContent(21,1.16431);
   data_mc_ratio__580->SetBinContent(22,1.124545);
   data_mc_ratio__580->SetBinContent(23,1.51438);
   data_mc_ratio__580->SetBinContent(24,0.9503559);
   data_mc_ratio__580->SetBinContent(25,1.035746);
   data_mc_ratio__580->SetBinContent(26,1.855567);
   data_mc_ratio__580->SetBinContent(27,1.828508);
   data_mc_ratio__580->SetBinContent(28,1.233776);
   data_mc_ratio__580->SetBinContent(29,1.708833);
   data_mc_ratio__580->SetBinContent(30,1.907877);
   data_mc_ratio__580->SetBinContent(31,1.37914);
   data_mc_ratio__580->SetBinError(2,3.769252);
   data_mc_ratio__580->SetBinError(3,0.007265622);
   data_mc_ratio__580->SetBinError(4,0.007340829);
   data_mc_ratio__580->SetBinError(5,0.007407499);
   data_mc_ratio__580->SetBinError(6,0.009890057);
   data_mc_ratio__580->SetBinError(7,0.01022105);
   data_mc_ratio__580->SetBinError(8,0.008315745);
   data_mc_ratio__580->SetBinError(9,0.01239848);
   data_mc_ratio__580->SetBinError(10,0.01133797);
   data_mc_ratio__580->SetBinError(11,0.01168518);
   data_mc_ratio__580->SetBinError(12,0.009521216);
   data_mc_ratio__580->SetBinError(13,0.01104751);
   data_mc_ratio__580->SetBinError(14,0.008630402);
   data_mc_ratio__580->SetBinError(15,0.008678733);
   data_mc_ratio__580->SetBinError(16,0.008807382);
   data_mc_ratio__580->SetBinError(17,0.00827045);
   data_mc_ratio__580->SetBinError(18,0.008873272);
   data_mc_ratio__580->SetBinError(19,0.01048029);
   data_mc_ratio__580->SetBinError(20,0.01040138);
   data_mc_ratio__580->SetBinError(21,0.01246125);
   data_mc_ratio__580->SetBinError(22,0.01299814);
   data_mc_ratio__580->SetBinError(23,0.01931853);
   data_mc_ratio__580->SetBinError(24,0.01280296);
   data_mc_ratio__580->SetBinError(25,0.01514501);
   data_mc_ratio__580->SetBinError(26,0.02917184);
   data_mc_ratio__580->SetBinError(27,0.03048361);
   data_mc_ratio__580->SetBinError(28,0.02115909);
   data_mc_ratio__580->SetBinError(29,0.03020818);
   data_mc_ratio__580->SetBinError(30,0.04105098);
   data_mc_ratio__580->SetBinError(31,0.4912321);
   data_mc_ratio__580->SetMinimum(0.4);
   data_mc_ratio__580->SetMaximum(1.6);
   data_mc_ratio__580->SetEntries(73.13169);
   data_mc_ratio__580->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__580->SetLineColor(ci);
   data_mc_ratio__580->SetLineWidth(2);
   data_mc_ratio__580->SetMarkerStyle(20);
   data_mc_ratio__580->SetMarkerSize(1.2);
   data_mc_ratio__580->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__580->GetXaxis()->SetRange(1,30);
   data_mc_ratio__580->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__580->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__580->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__580->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__580->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__580->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__580->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__580->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__580->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__580->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__580->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__580->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__580->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__580->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__580->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__580->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__580->Draw("E1");
   
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
   0.2771308,
   0.08846363,
   0.09349738,
   0.1601799,
   0.1112627,
   0.1123856,
   0.1706849,
   0.1139628,
   0.1253153,
   0.1125089,
   0.1495154,
   0.1399817,
   0.1308453,
   0.1201992,
   0.165767,
   0.1267494,
   0.1296505,
   0.1443449,
   0.1540935,
   0.1611135,
   0.1774472,
   0.1783176,
   0.2090695,
   0.2317938,
   0.2111953,
   0.2208732,
   0.2371886,
   0.221083,
   0.1446432};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1422,Graph_from_mc_statistical_error_fy1422,Graph_from_mc_statistical_error_fex1422,Graph_from_mc_statistical_error_fey1422);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1422 = new TH1F("Graph_Graph_from_mc_statistical_error1422","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1422->SetMinimum(0.6674431);
   Graph_Graph_from_mc_statistical_error1422->SetMaximum(1.332557);
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
