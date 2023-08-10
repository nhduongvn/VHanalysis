void Z_dR_Bj1_tags_16_logY()
{
//=========Macro generated from canvas: Z_dR_Bj1_tags_16/Z_dR_Bj1_tags_16
//=========  (Thu Aug 10 12:20:14 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_tags_16 = new TCanvas("Z_dR_Bj1_tags_16", "Z_dR_Bj1_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_tags_16->SetHighLightColor(2);
   Z_dR_Bj1_tags_16->Range(0,0,1,1);
   Z_dR_Bj1_tags_16->SetFillColor(0);
   Z_dR_Bj1_tags_16->SetFillStyle(4000);
   Z_dR_Bj1_tags_16->SetBorderMode(0);
   Z_dR_Bj1_tags_16->SetBorderSize(2);
   Z_dR_Bj1_tags_16->SetFrameFillStyle(1000);
   Z_dR_Bj1_tags_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.855043,6.314516,11.84514);
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
   st->SetMaximum(7.039685e+09);
   
   TH1F *st_stack_53 = new TH1F("st_stack_53","",30,0,6);
   st_stack_53->SetMinimum(0.001444298);
   st_stack_53->SetMaximum(2.372029e+10);
   st_stack_53->SetDirectory(0);
   st_stack_53->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_53->SetLineColor(ci);
   st_stack_53->GetXaxis()->SetRange(1,30);
   st_stack_53->GetXaxis()->SetLabelFont(42);
   st_stack_53->GetXaxis()->SetLabelSize(0.035);
   st_stack_53->GetXaxis()->SetTitleSize(0.035);
   st_stack_53->GetXaxis()->SetTitleFont(42);
   st_stack_53->GetYaxis()->SetTitle("Events/0.2");
   st_stack_53->GetYaxis()->SetLabelFont(42);
   st_stack_53->GetYaxis()->SetLabelSize(0.05);
   st_stack_53->GetYaxis()->SetTitleSize(0.057);
   st_stack_53->GetYaxis()->SetTitleOffset(1.2);
   st_stack_53->GetYaxis()->SetTitleFont(42);
   st_stack_53->GetZaxis()->SetLabelFont(42);
   st_stack_53->GetZaxis()->SetLabelSize(0.035);
   st_stack_53->GetZaxis()->SetTitleSize(0.035);
   st_stack_53->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_53);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(1,3794.466);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(2,21567.87);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(3,24862.31);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(4,16523.35);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(5,13778.76);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(6,13677.9);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(7,12276.52);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(8,9584.111);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(9,6399.86);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(10,6860.979);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(11,8039.887);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(12,7493.171);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(13,4711.142);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(14,6167.266);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(15,3021.459);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(16,2294.414);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(17,1942.251);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(18,1821.158);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(19,1118.857);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(20,2711.969);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(21,1189.672);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(22,631.4953);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(23,820.1336);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(24,545.7972);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(25,528.841);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(26,384.2359);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(27,85.73892);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(28,70.5303);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(29,28.45984);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(30,10.35646);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(31,50.61643);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(1,505.2509);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(2,1807.515);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(3,3070.474);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(4,2122.265);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(5,2011.595);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(6,2415.507);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(7,2382.118);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(8,1871.868);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(9,1026.61);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(10,1708.036);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(11,1791.163);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(12,1788.275);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(13,1572.786);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(14,1684.52);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(15,674.5776);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(16,613.6887);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(17,487.0499);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(18,548.868);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(19,293.0356);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(20,1473.07);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(21,472.5794);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(22,280.4504);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(23,386.359);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(24,277.4789);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(25,277.3743);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(26,271.4751);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(27,35.37803);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(28,34.55859);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(29,11.50952);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(30,7.205914);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(31,32.88407);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetEntries(9435);

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
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(1,22.13279);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(2,79.25194);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(3,93.42169);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(4,84.2539);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(5,63.2262);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(6,58.3736);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(7,49.13717);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(8,38.24928);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(9,37.48036);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(10,31.30709);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(11,26.95548);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(12,22.81704);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(13,21.81872);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(14,20.35822);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(15,17.891);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(16,15.63766);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(17,12.70017);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(18,8.332234);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(19,7.696501);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(20,6.521675);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(21,4.800827);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(22,6.415643);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(23,1.841792);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(24,2.983301);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(25,1.673736);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(26,1.127178);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(27,1.363027);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(28,0.2952271);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(29,0.1348404);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(30,0.0898936);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(31,0.453181);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(1,2.065276);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(2,3.582797);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(3,3.840764);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(4,3.602243);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(5,3.025766);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(6,2.97758);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(7,2.769981);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(8,2.372726);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(9,2.486312);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(10,2.210978);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(11,1.994458);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(12,1.866637);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(13,1.741274);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(14,1.83568);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(15,1.652374);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(16,1.617435);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(17,1.396301);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(18,1.153006);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(19,1.037638);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(20,1.036754);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(21,0.8676406);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(22,1.084563);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(23,0.3821591);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(24,0.7032226);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(25,0.5082169);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(26,0.4163015);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(27,0.4889742);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(28,0.1209763);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(29,0.07785014);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(30,0.06356437);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(31,0.2812106);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetEntries(9214);

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
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(1,231.4469);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(2,1214.957);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(3,1688.642);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(4,1662.563);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(5,1411.816);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(6,1141.505);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(7,916.3689);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(8,771.5835);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(9,665.5415);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(10,591.0819);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(11,528.6982);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(12,474.279);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(13,422.0191);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(14,377.9422);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(15,328.8887);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(16,279.8647);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(17,224.4577);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(18,185.4085);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(19,151.4246);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(20,118.406);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(21,97.00055);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(22,70.14045);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(23,56.45806);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(24,40.90699);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(25,31.03627);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(26,21.64083);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(27,15.82201);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(28,8.490016);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(29,6.557851);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(30,2.841614);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(31,7.773476);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(1,3.858612);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(2,8.818996);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(3,10.43657);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(4,10.35936);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(5,9.562228);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(6,8.589233);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(7,7.692795);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(8,7.045853);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(9,6.554304);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(10,6.182083);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(11,5.854331);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(12,5.544245);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(13,5.218513);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(14,4.94099);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(15,4.624166);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(16,4.25213);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(17,3.792743);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(18,3.454743);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(19,3.123394);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(20,2.754689);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(21,2.492627);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(22,2.120929);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(23,1.899829);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(24,1.602867);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(25,1.404126);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(26,1.175447);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(27,0.9958152);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(28,0.7215756);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(29,0.6419616);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(30,0.4288516);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(31,0.7085938);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetEntries(221451);

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
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(1,64.12704);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(2,261.0062);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(3,313.5621);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(4,243.9812);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(5,173.1591);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(6,140.6068);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(7,114.3836);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(8,101.1304);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(9,93.2531);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(10,85.3368);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(11,60.66265);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(12,62.41097);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(13,54.17568);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(14,43.66105);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(15,38.74006);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(16,26.81235);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(17,26.02239);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(18,22.09294);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(19,18.75073);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(20,16.7322);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(21,10.42761);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(22,9.128978);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(23,7.036343);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(24,6.177448);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(25,6.792662);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(26,6.06013);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(27,4.992827);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(28,1.391589);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(29,0.6241478);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(30,0.3793323);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(31,0.2114053);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(1,2.506209);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(2,10.93239);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(3,13.31891);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(4,12.71996);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(5,10.29365);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(6,9.195136);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(7,8.898402);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(8,8.175925);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(9,8.685375);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(10,8.308972);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(11,5.625687);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(12,6.585585);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(13,5.562719);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(14,4.864332);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(15,4.755743);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(16,3.112556);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(17,3.156932);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(18,3.77374);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(19,3.711227);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(20,3.675565);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(21,1.273433);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(22,1.304916);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(23,1.068368);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(24,0.9535635);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(25,2.513433);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(26,2.525932);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(27,2.500126);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(28,0.394747);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(29,0.3193601);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(30,0.1699577);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(31,0.1224198);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetEntries(14977);

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
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(1,13.78294);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(2,40.46233);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(3,28.27623);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(4,12.35419);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(5,14.48673);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(6,14.45269);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(7,6.524777);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(8,8.431854);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(9,4.179503);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(10,6.661395);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(11,4.441657);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(12,6.965207);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(13,4.285035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(14,2.211171);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(15,3.014557);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(16,1.897132);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(17,7.933282);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(18,1.514459);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(19,1.200015);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(20,1.921672);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(21,0.5162096);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(22,0.7263485);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(23,1.501834);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(24,0.6109855);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(25,0.3716667);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(26,0.1281454);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(27,0.1080389);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(28,0.1208815);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(29,0.0759034);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(31,0.07564673);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(1,1.561909);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(2,7.149054);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(3,3.301615);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(4,1.509746);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(5,2.340801);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(6,2.543645);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(7,1.287083);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(8,1.809718);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(9,0.7034607);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(10,1.692847);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(11,0.6795378);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(12,1.91631);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(13,1.209098);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(14,0.4575048);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(15,1.115631);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(16,0.4121388);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(17,6.082232);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(18,0.4758759);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(19,0.3341241);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(20,1.077582);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(21,0.190875);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(22,0.4201225);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(23,1.048448);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(24,0.237623);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(25,0.1582675);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(26,0.08809142);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(27,0.07723145);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(28,0.08774819);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(29,0.07564717);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(31,0.07564673);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetEntries(3105);

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
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(3,0.2687386);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(4,0.4031079);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(5,0.1343693);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(6,0.2687386);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(7,0.1343693);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(8,0.1343693);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(14,0.1343693);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(3,0.1900269);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(4,0.2327345);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(5,0.1343693);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(6,0.1900269);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(7,0.1343693);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(8,0.1343693);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(14,0.1343693);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetEntries(11);

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
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(1,0.5449062);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(2,0.9808311);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(3,0.8718499);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(4,0.7628687);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(5,0.3269437);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(6,0.1089812);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(7,0.2179625);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(8,0.1089812);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(9,0.2179625);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(10,0.1089812);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(11,0.3269437);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(12,0.1089812);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(14,0.1089812);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(15,0.2179625);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(17,0.1089812);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(24,0.1089812);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(1,0.2436895);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(2,0.3269437);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(3,0.3082455);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(4,0.2883373);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(5,0.188761);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(6,0.1089812);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(7,0.1541227);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(8,0.1089812);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(9,0.1541227);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(10,0.1089812);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(11,0.188761);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(12,0.1089812);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(14,0.1089812);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(15,0.1541227);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(17,0.1089812);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(24,0.1089812);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetEntries(48);

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
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(1,0.9728286);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(2,4.134522);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(3,6.080179);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(4,3.648107);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(5,5.593764);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(6,3.648107);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(7,2.188864);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(8,3.4049);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(9,1.70245);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(10,1.216036);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(11,0.7296215);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(12,1.459243);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(13,1.70245);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(14,1.459243);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(15,1.216036);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(16,0.4864143);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(17,0.9728286);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(18,0.2432072);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(19,0.4864143);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(24,0.4864143);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(25,0.2432072);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(1,0.4864143);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(2,1.002769);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(3,1.216036);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(4,0.9419372);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(5,1.166381);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(6,0.9419372);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(7,0.7296215);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(8,0.9099978);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(9,0.6434656);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(10,0.5438277);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(11,0.4212471);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(12,0.5957334);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(13,0.6434656);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(14,0.5957334);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(15,0.5438277);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(16,0.3439469);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(17,0.4864143);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(18,0.2432072);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(19,0.3439469);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(24,0.3439469);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(25,0.2432072);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetEntries(173);

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
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(1,0.9578798);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(2,4.574535);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(3,5.934419);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(4,5.152589);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(5,3.850926);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(6,2.776604);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(7,2.083493);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(8,1.718916);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(9,1.614949);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(10,1.635743);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(11,1.537321);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(12,1.498507);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(13,1.365429);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(14,1.08264);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(15,0.9121345);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(16,0.6556833);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(17,0.4560672);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(18,0.3590317);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(19,0.2398165);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(20,0.1469396);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(21,0.162188);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(22,0.1150565);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(23,0.1039667);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(24,0.05960757);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(25,0.06653868);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(26,0.04158668);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(27,0.01940712);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(28,0.008317336);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(29,0.00554489);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(30,0.001386223);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(31,0.001386223);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(1,0.03643947);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(2,0.07963243);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(3,0.09069964);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(4,0.08451412);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(5,0.07306327);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(6,0.06204024);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(7,0.05374183);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(8,0.04881393);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(9,0.04731468);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(10,0.04761831);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(11,0.0461635);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(12,0.04557701);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(13,0.04350619);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(14,0.0387399);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(15,0.0355587);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(16,0.03014835);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(17,0.0251438);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(18,0.02230914);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(19,0.01823291);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(20,0.01427204);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(21,0.01499429);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(22,0.01262909);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(23,0.01200504);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(24,0.009090069);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(25,0.009604032);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(26,0.007592654);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(27,0.00518677);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(28,0.003395538);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(29,0.002772445);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(30,0.001386223);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(31,0.001386223);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetEntries(28234);

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
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(1,0.4367905);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(2,2.10284);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(3,2.79912);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(4,2.366996);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(5,1.785565);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(6,1.290273);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(7,0.9389022);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(8,0.7949803);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(9,0.722481);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(10,0.6550063);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(11,0.6288061);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(12,0.5523588);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(13,0.4873965);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(14,0.4407385);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(15,0.3585487);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(16,0.2580546);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(17,0.2297009);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(18,0.1654564);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(19,0.1392561);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(20,0.09834068);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(21,0.08900908);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(22,0.07034589);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(23,0.05527177);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(24,0.04127437);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(25,0.02584135);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(26,0.02261118);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(27,0.009690505);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(28,0.004665799);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(29,0.002512353);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(30,0.00143563);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(31,0.0007178152);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(1,0.01252068);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(2,0.02747226);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(3,0.03169583);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(4,0.02914674);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(5,0.02531507);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(6,0.0215195);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(7,0.01835699);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(8,0.01689155);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(9,0.01610292);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(10,0.01533254);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(11,0.01502276);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(12,0.01407998);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(13,0.01322612);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(14,0.01257714);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(15,0.01134398);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(16,0.009623811);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(17,0.009079724);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(18,0.007706073);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(19,0.00706966);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(20,0.005940978);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(21,0.005652082);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(22,0.005024706);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(23,0.004453926);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(24,0.003848855);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(25,0.003045432);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(26,0.002848741);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(27,0.001864939);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(28,0.00129406);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(29,0.0009495802);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(30,0.0007178152);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(31,0.000507572);
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
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(1,0.008205022);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(2,0.01641004);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(3,0.01641004);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(4,0.03008508);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(5,0.005470015);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(6,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(7,0.005470015);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(9,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(14,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(24,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(25,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(26,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(1,0.004737172);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(2,0.006699373);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(3,0.006699373);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(4,0.009070994);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(5,0.003867885);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(6,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(7,0.003867885);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(9,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(14,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(24,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(25,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(26,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetEntries(36);

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
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(1,0.003215393);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(2,0.008217114);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(3,0.007145317);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(4,0.008217114);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(5,0.002500861);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(6,0.002143595);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(7,0.001429063);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(8,0.001071798);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(9,0.002500861);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(10,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(11,0.0007145317);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(12,0.001786329);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(13,0.001071798);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(14,0.001071798);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(15,0.0007145317);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(17,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(18,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(19,0.0007145317);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(20,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(23,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(24,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(25,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(27,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(1,0.001071798);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(2,0.001713387);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(3,0.001597741);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(4,0.001713387);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(5,0.0009452366);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(6,0.000875119);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(7,0.0007145317);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(8,0.0006188026);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(9,0.0009452366);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(10,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(11,0.0005052502);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(12,0.0007988707);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(13,0.0006188026);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(14,0.0006188026);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(15,0.0005052502);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(17,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(18,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(19,0.0005052502);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(20,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(23,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(24,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(25,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(27,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetEntries(127);

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
   
   TH1D *VbbHcc_tags_Z_dR_Bj1__144 = new TH1D("VbbHcc_tags_Z_dR_Bj1__144","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(1,4025);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(2,13884);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(3,13355);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(4,10374);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(5,8550);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(6,6620);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(7,5474);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(8,4656);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(9,4013);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(10,3513);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(11,3182);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(12,2992);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(13,2639);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(14,2345);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(15,2098);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(16,1819);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(17,1464);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(18,1252);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(19,1048);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(20,901);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(21,709);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(22,532);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(23,500);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(24,385);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(25,263);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(26,209);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(27,130);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(28,103);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(29,66);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(30,36);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(31,48);
   VbbHcc_tags_Z_dR_Bj1__144->SetEntries(97214);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1__144->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1__144->SetLineWidth(2);
   VbbHcc_tags_Z_dR_Bj1__144->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR_Bj1__144->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR_Bj1__144->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1__144->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__144->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__144->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__144->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__144->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__144->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__144->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__144->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1__144->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__144->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__144->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__144->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__144->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__144->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_fx1105[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_fy1105[30] = {
   4128.879,
   23175.37,
   27002.19,
   18538.88,
   15453.14,
   15040.93,
   13368.5,
   10509.67,
   7204.577,
   7578.982,
   8663.868,
   8063.265,
   5216.997,
   6614.668,
   3412.699,
   2620.026,
   2215.133,
   2039.275,
   1298.795,
   2855.796,
   1302.668,
   718.0921,
   887.1312,
   597.1753,
   569.054,
   413.2591,
   108.0543,
   80.841,
   35.86064,
   13.67012};
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_fex1105[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_fey1105[30] = {
   505.2788,
   1807.587,
   3070.525,
   2122.332,
   2011.648,
   2415.544,
   2382.149,
   1871.901,
   1026.671,
   1708.069,
   1791.183,
   1788.298,
   1572.806,
   1684.536,
   674.6134,
   613.7137,
   487.1152,
   548.8933,
   293.0779,
   1473.078,
   472.5885,
   280.4638,
   386.3668,
   277.4864,
   277.3899,
   271.4898,
   35.4837,
   34.5687,
   11.53235,
   7.220944};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_Z_dR_Bj1_fx1105,Graph_from_VbbHcc_tags_Z_dR_Bj1_fy1105,Graph_from_VbbHcc_tags_Z_dR_Bj1_fex1105,Graph_from_VbbHcc_tags_Z_dR_Bj1_fey1105);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->SetMinimum(5.804262);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->SetMaximum(33079.34);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1","Data (JetHT, 2016)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_Bj1_tags_16->cd();
  
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
   
   TH1D *data_mc_ratio__145 = new TH1D("data_mc_ratio__145","",30,0,6);
   data_mc_ratio__145->SetBinContent(1,0.9748408);
   data_mc_ratio__145->SetBinContent(2,0.5990844);
   data_mc_ratio__145->SetBinContent(3,0.4945896);
   data_mc_ratio__145->SetBinContent(4,0.5595809);
   data_mc_ratio__145->SetBinContent(5,0.5532855);
   data_mc_ratio__145->SetBinContent(6,0.4401323);
   data_mc_ratio__145->SetBinContent(7,0.40947);
   data_mc_ratio__145->SetBinContent(8,0.4430206);
   data_mc_ratio__145->SetBinContent(9,0.557007);
   data_mc_ratio__145->SetBinContent(10,0.4635187);
   data_mc_ratio__145->SetBinContent(11,0.3672724);
   data_mc_ratio__145->SetBinContent(12,0.3710656);
   data_mc_ratio__145->SetBinContent(13,0.5058466);
   data_mc_ratio__145->SetBinContent(14,0.3545151);
   data_mc_ratio__145->SetBinContent(15,0.6147627);
   data_mc_ratio__145->SetBinContent(16,0.6942679);
   data_mc_ratio__145->SetBinContent(17,0.6609085);
   data_mc_ratio__145->SetBinContent(18,0.6139438);
   data_mc_ratio__145->SetBinContent(19,0.8069019);
   data_mc_ratio__145->SetBinContent(20,0.3154987);
   data_mc_ratio__145->SetBinContent(21,0.5442676);
   data_mc_ratio__145->SetBinContent(22,0.740852);
   data_mc_ratio__145->SetBinContent(23,0.5636145);
   data_mc_ratio__145->SetBinContent(24,0.6447018);
   data_mc_ratio__145->SetBinContent(25,0.4621705);
   data_mc_ratio__145->SetBinContent(26,0.5057359);
   data_mc_ratio__145->SetBinContent(27,1.203099);
   data_mc_ratio__145->SetBinContent(28,1.274106);
   data_mc_ratio__145->SetBinContent(29,1.840458);
   data_mc_ratio__145->SetBinContent(30,2.63348);
   data_mc_ratio__145->SetBinContent(31,0.8117399);
   data_mc_ratio__145->SetBinError(1,0.01536564);
   data_mc_ratio__145->SetBinError(2,0.005084295);
   data_mc_ratio__145->SetBinError(3,0.004279795);
   data_mc_ratio__145->SetBinError(4,0.005494014);
   data_mc_ratio__145->SetBinError(5,0.005983651);
   data_mc_ratio__145->SetBinError(6,0.005409464);
   data_mc_ratio__145->SetBinError(7,0.005534389);
   data_mc_ratio__145->SetBinError(8,0.006492582);
   data_mc_ratio__145->SetBinError(9,0.008792777);
   data_mc_ratio__145->SetBinError(10,0.007820386);
   data_mc_ratio__145->SetBinError(11,0.006510858);
   data_mc_ratio__145->SetBinError(12,0.006783751);
   data_mc_ratio__145->SetBinError(13,0.009846891);
   data_mc_ratio__145->SetBinError(14,0.007320881);
   data_mc_ratio__145->SetBinError(15,0.01342161);
   data_mc_ratio__145->SetBinError(16,0.01627836);
   data_mc_ratio__145->SetBinError(17,0.01727312);
   data_mc_ratio__145->SetBinError(18,0.01735108);
   data_mc_ratio__145->SetBinError(19,0.02492528);
   data_mc_ratio__145->SetBinError(20,0.01051079);
   data_mc_ratio__145->SetBinError(21,0.0204404);
   data_mc_ratio__145->SetBinError(22,0.03212001);
   data_mc_ratio__145->SetBinError(23,0.02520561);
   data_mc_ratio__145->SetBinError(24,0.03285705);
   data_mc_ratio__145->SetBinError(25,0.02849866);
   data_mc_ratio__145->SetBinError(26,0.03498249);
   data_mc_ratio__145->SetBinError(27,0.1055188);
   data_mc_ratio__145->SetBinError(28,0.1255414);
   data_mc_ratio__145->SetBinError(29,0.2265447);
   data_mc_ratio__145->SetBinError(30,0.4389133);
   data_mc_ratio__145->SetBinError(31,0.4664959);
   data_mc_ratio__145->SetMinimum(0.4);
   data_mc_ratio__145->SetMaximum(1.6);
   data_mc_ratio__145->SetEntries(121.3879);
   data_mc_ratio__145->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__145->SetLineColor(ci);
   data_mc_ratio__145->SetLineWidth(2);
   data_mc_ratio__145->SetMarkerStyle(20);
   data_mc_ratio__145->SetMarkerSize(1.2);
   data_mc_ratio__145->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   data_mc_ratio__145->GetXaxis()->SetRange(1,30);
   data_mc_ratio__145->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__145->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__145->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__145->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__145->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__145->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__145->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__145->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__145->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__145->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__145->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__145->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__145->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__145->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__145->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__145->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__145->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1106[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1106[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1106[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1106[30] = {
   0.1223767,
   0.07799607,
   0.1137139,
   0.1144801,
   0.1301773,
   0.160598,
   0.1781912,
   0.1781123,
   0.1425026,
   0.2253692,
   0.2067417,
   0.2217833,
   0.3014773,
   0.2546667,
   0.1976774,
   0.2342395,
   0.2199034,
   0.2691611,
   0.2256537,
   0.5158204,
   0.3627851,
   0.3905681,
   0.4355238,
   0.4646648,
   0.4874579,
   0.656948,
   0.3283877,
   0.4276134,
   0.3215879,
   0.5282281};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1106,Graph_from_mc_statistical_error_fy1106,Graph_from_mc_statistical_error_fex1106,Graph_from_mc_statistical_error_fey1106);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1106 = new TH1F("Graph_Graph_from_mc_statistical_error1106","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1106->SetMinimum(0.2116624);
   Graph_Graph_from_mc_statistical_error1106->SetMaximum(1.788338);
   Graph_Graph_from_mc_statistical_error1106->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1106->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1106->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1106->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1106->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1106->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1106->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1106->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1106->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1106->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1106->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1106->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1106->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1106->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1106->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1106->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1106);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj1_tags_16->cd();
   Z_dR_Bj1_tags_16->Modified();
   Z_dR_Bj1_tags_16->cd();
   Z_dR_Bj1_tags_16->SetSelected(Z_dR_Bj1_tags_16);
}
