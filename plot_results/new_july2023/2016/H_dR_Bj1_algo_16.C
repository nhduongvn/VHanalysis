void H_dR_Bj1_algo_16()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_16/H_dR_Bj1_algo_16
//=========  (Mon Jul 24 10:11:49 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_algo_16 = new TCanvas("H_dR_Bj1_algo_16", "H_dR_Bj1_algo_16",0,0,600,600);
   H_dR_Bj1_algo_16->SetHighLightColor(2);
   H_dR_Bj1_algo_16->Range(0,0,1,1);
   H_dR_Bj1_algo_16->SetFillColor(0);
   H_dR_Bj1_algo_16->SetFillStyle(4000);
   H_dR_Bj1_algo_16->SetBorderMode(0);
   H_dR_Bj1_algo_16->SetBorderSize(2);
   H_dR_Bj1_algo_16->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-116.5046,6.314516,116398);
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
   st->SetMaximum(99758.65);
   
   TH1F *st_stack_141 = new TH1F("st_stack_141","",30,0,6);
   st_stack_141->SetMinimum(0.01);
   st_stack_141->SetMaximum(104746.6);
   st_stack_141->SetDirectory(0);
   st_stack_141->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_141->SetLineColor(ci);
   st_stack_141->GetXaxis()->SetRange(1,30);
   st_stack_141->GetXaxis()->SetLabelFont(42);
   st_stack_141->GetXaxis()->SetLabelSize(0.035);
   st_stack_141->GetXaxis()->SetTitleSize(0.035);
   st_stack_141->GetXaxis()->SetTitleFont(42);
   st_stack_141->GetYaxis()->SetTitle("Events/0.2");
   st_stack_141->GetYaxis()->SetLabelFont(42);
   st_stack_141->GetYaxis()->SetLabelSize(0.05);
   st_stack_141->GetYaxis()->SetTitleSize(0.057);
   st_stack_141->GetYaxis()->SetTitleOffset(1.2);
   st_stack_141->GetYaxis()->SetTitleFont(42);
   st_stack_141->GetZaxis()->SetLabelFont(42);
   st_stack_141->GetZaxis()->SetLabelSize(0.035);
   st_stack_141->GetZaxis()->SetTitleSize(0.035);
   st_stack_141->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_141);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(1,268.7956);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(2,24275.77);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(3,34098.93);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(4,30749.02);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(5,30997.85);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(6,30536.27);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(7,26350.15);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(8,21743.86);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(9,43040.76);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(10,17536.55);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(11,18499.12);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(12,15008.62);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(13,17722.72);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(14,13122.76);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(15,11006.88);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(16,11463.86);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(17,6422.189);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(18,10434.14);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(19,6177.865);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(20,7222.002);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(21,5397.837);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(22,4343.437);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(23,4741.615);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(24,3428.943);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(25,3059.257);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(26,1785.17);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(27,1356.608);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(28,627.4739);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(29,445.5487);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(30,57.81485);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(31,88.48923);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(1,268.7956);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(2,2919.225);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(3,3379.711);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(4,3811.112);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(5,3794.523);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(6,3606.124);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(7,3442.947);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(8,3280.05);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(9,20691.96);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(10,2188.659);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(11,2593.437);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(12,2066.464);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(13,2603.08);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(14,2340.692);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(15,1318.095);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(16,1372.582);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(17,882.6966);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(18,1366.051);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(19,955.3981);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(20,1156.61);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(21,949.5989);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(22,865.34);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(23,945.211);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(24,774.4357);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(25,770.4306);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(26,547.9329);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(27,475.0792);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(28,279.0929);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(29,273.9478);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(30,26.40775);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(31,35.15942);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetEntries(15710);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(1,0.268362);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(2,79.54888);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(3,166.6197);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(4,148.8047);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(5,154.5273);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(6,174.0362);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(7,178.7163);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(8,167.8067);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(9,161.0083);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(10,148.4301);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(11,136.8019);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(12,133.8291);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(13,129.4136);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(14,123.1745);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(15,108.9274);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(16,112.7589);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(17,96.95341);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(18,84.13133);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(19,67.93896);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(20,61.02146);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(21,45.14976);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(22,37.33322);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(23,29.21653);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(24,21.91421);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(25,19.00157);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(26,12.48672);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(27,8.220907);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(28,5.510762);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(29,3.220194);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(30,1.305349);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(31,2.899787);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(1,0.268362);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(2,4.044778);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(3,5.591562);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(4,4.723827);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(5,4.454674);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(6,4.855387);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(7,4.801738);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(8,4.503785);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(9,4.341203);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(10,4.210223);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(11,3.990713);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(12,4.008781);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(13,3.939554);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(14,3.865936);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(15,3.518758);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(16,3.609629);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(17,3.349619);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(18,3.137823);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(19,2.728594);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(20,2.723563);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(21,2.080666);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(22,1.975525);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(23,1.831394);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(24,1.576319);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(25,1.433745);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(26,1.16081);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(27,0.9261511);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(28,0.7378132);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(29,0.6210894);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(30,0.4211858);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(31,0.6091106);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetEntries(39281);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_3 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(1,1.463497);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(2,822.6852);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(3,2241.284);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(4,2508.492);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(5,2382.723);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(6,2144.134);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(7,1896.62);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(8,1679.345);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(9,1489.075);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(10,1323.722);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(11,1181.291);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(12,1045.426);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(13,954.9701);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(14,907.1541);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(15,842.1611);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(16,808.5604);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(17,710.0302);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(18,638.8506);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(19,563.5051);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(20,484.1703);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(21,410.2895);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(22,326.1455);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(23,250.9673);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(24,193.6402);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(25,141.1592);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(26,92.30101);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(27,66.55155);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(28,41.20557);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(29,26.58534);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(30,14.96978);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(31,19.78578);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(1,0.2918334);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(2,6.957484);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(3,11.59428);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(4,12.36772);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(5,12.08902);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(6,11.45107);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(7,10.73219);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(8,10.08588);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(9,9.471887);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(10,8.9271);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(11,8.415039);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(12,7.919637);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(13,7.562261);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(14,7.378019);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(15,7.107996);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(16,6.970205);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(17,6.539421);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(18,6.201418);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(19,5.816015);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(20,5.390961);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(21,4.961857);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(22,4.413258);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(23,3.867265);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(24,3.393198);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(25,2.889078);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(26,2.331015);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(27,1.981388);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(28,1.550332);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(29,1.241462);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(30,0.9314943);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(31,1.06787);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetEntries(446835);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_H_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_4 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(2,93.58844);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(3,227.1957);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(4,241.4744);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(5,208.5531);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(6,182.5497);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(7,156.285);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(8,165.5582);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(9,136.4262);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(10,124.9836);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(11,113.9287);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(12,104.9691);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(13,82.60578);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(14,92.56006);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(15,63.37041);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(16,71.39013);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(17,66.72456);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(18,60.11614);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(19,57.00569);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(20,51.44614);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(21,45.58791);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(22,41.82939);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(23,23.86367);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(24,26.60965);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(25,18.88168);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(26,15.70546);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(27,6.335863);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(28,4.718567);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(29,3.377734);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(30,0.5790195);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(31,0.7787445);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(2,5.589409);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(3,12.26467);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(4,16.17524);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(5,13.73086);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(6,11.66468);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(7,10.49131);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(8,12.33509);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(9,10.31304);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(10,10.17266);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(11,9.349763);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(12,8.857336);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(13,6.908118);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(14,7.940854);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(15,5.462431);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(16,6.716623);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(17,7.152536);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(18,7.114219);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(19,6.085554);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(20,6.552362);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(21,6.475134);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(22,7.35499);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(23,3.348949);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(24,4.988372);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(25,4.071516);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(26,4.028586);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(27,1.019212);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(28,0.8654077);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(29,0.7290747);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(30,0.2053711);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(31,0.2355292);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetEntries(15848);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_H_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_5 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(2,63.78677);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(3,178.4188);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(4,130.8072);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(5,140.6333);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(6,95.97405);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(7,68.56655);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(8,70.44044);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(9,61.90807);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(10,69.32608);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(11,61.16589);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(12,46.63789);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(13,38.82726);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(14,48.97976);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(15,41.69145);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(16,38.92974);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(17,33.01644);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(18,25.93854);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(19,29.82586);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(20,18.8054);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(21,19.53022);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(22,21.45219);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(23,12.22005);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(24,15.82807);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(25,9.321084);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(26,10.23552);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(27,3.032249);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(28,1.785872);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(29,1.020502);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(30,0.02414437);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(31,1.237679);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(2,8.465286);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(3,20.79519);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(4,18.80556);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(5,19.99792);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(6,11.32161);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(7,8.54632);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(8,10.37705);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(9,10.0189);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(10,10.43986);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(11,11.58785);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(12,4.992697);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(13,7.019845);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(14,7.682322);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(15,9.39642);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(16,9.291183);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(17,7.031507);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(18,3.314808);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(19,7.143532);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(20,2.681221);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(21,6.57075);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(22,6.743959);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(23,2.533534);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(24,6.539088);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(25,2.405721);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(26,6.252351);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(27,0.6538352);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(28,0.4125183);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(29,0.4462659);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(30,0.01372195);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(31,1.038691);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetEntries(9338);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_H_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_6 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(2,0.687355);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(3,0.3436775);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(4,0.4295969);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(5,0.5155163);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(6,0.3436775);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(7,0.2577581);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(8,0.2577581);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(9,0.3436775);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(10,0.2577581);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(11,0.1718388);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(12,0.1718388);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(13,0.1718388);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(14,0.08591938);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(15,0.1718388);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(16,0.08591938);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(17,0.1718388);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(18,0.2577581);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(21,0.08591938);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(24,0.08591938);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(2,0.2430167);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(3,0.1718388);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(4,0.1921216);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(5,0.2104586);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(6,0.1718388);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(7,0.1488167);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(8,0.1488167);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(9,0.1718388);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(10,0.1488167);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(11,0.1215083);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(12,0.1215083);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(13,0.1215083);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(14,0.08591938);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(15,0.1215083);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(16,0.08591938);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(17,0.1215083);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(18,0.1488167);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(21,0.08591938);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(24,0.08591938);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetEntries(57);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_7 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(2,3.695418);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(3,8.155404);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(4,4.332559);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(5,1.592852);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(6,1.465424);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(7,0.8282832);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(8,0.8919973);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(9,0.9557114);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(10,0.7645692);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(11,1.274282);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(12,0.5097128);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(13,0.1911423);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(14,0.4459987);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(15,0.5734269);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(16,0.5097128);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(17,0.3185705);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(18,0.4459987);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(19,0.3822846);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(20,0.2548564);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(21,0.1911423);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(22,0.2548564);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(23,0.2548564);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(24,0.1911423);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(25,0.1274282);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(26,0.2548564);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(27,0.1911423);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(28,0.1274282);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(2,0.4852321);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(3,0.7208427);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(4,0.5253999);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(5,0.3185705);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(6,0.3055621);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(7,0.2297244);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(8,0.2383963);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(9,0.2467636);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(10,0.2207121);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(11,0.2849381);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(12,0.1802107);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(13,0.1103561);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(14,0.1685717);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(15,0.1911423);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(16,0.1802107);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(17,0.142469);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(18,0.1685717);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(19,0.156067);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(20,0.1274282);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(21,0.1103561);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(22,0.1274282);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(23,0.1274282);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(24,0.1103561);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(25,0.09010534);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(26,0.1274282);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(27,0.1103561);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(28,0.09010534);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetEntries(458);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_8 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(2,3.049523);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(3,5.740278);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(4,6.099046);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(5,3.049523);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(6,1.255686);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(7,0.8969185);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(8,0.8969185);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(9,0.1793837);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(10,1.255686);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(11,1.255686);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(12,0.3587674);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(13,0.3587674);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(14,0.5381511);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(15,0.1793837);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(16,0.3587674);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(17,0.1793837);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(18,0.3587674);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(19,0.1793837);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(20,0.5381511);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(21,0.3587674);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(22,0.3587674);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(23,0.3587674);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(26,0.1793837);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(2,0.7396179);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(3,1.014747);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(4,1.045978);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(5,0.7396179);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(6,0.4746047);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(7,0.4011141);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(8,0.4011141);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(9,0.1793837);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(10,0.4746047);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(11,0.4746047);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(12,0.2536869);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(13,0.2536869);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(14,0.3107017);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(15,0.1793837);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(16,0.2536869);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(17,0.1793837);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(18,0.2536869);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(19,0.1793837);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(20,0.3107017);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(21,0.2536869);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(22,0.2536869);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(23,0.2536869);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(26,0.1793837);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetEntries(156);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_9 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(1,0.001379387);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(2,1.702164);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(3,3.329841);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(4,2.27323);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(5,1.262139);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(6,0.7876302);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(7,0.5986541);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(8,0.4924413);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(9,0.4952001);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(10,0.3972636);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(11,0.3600201);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(12,0.2827744);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(13,0.288292);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(14,0.3048446);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(15,0.2179432);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(16,0.2082875);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(17,0.2248401);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(18,0.1944936);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(19,0.1544914);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(20,0.1696647);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(21,0.1834585);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(22,0.1393181);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(23,0.1365594);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(24,0.1475945);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(25,0.1310418);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(26,0.07310753);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(27,0.06758998);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(28,0.02069081);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(29,0.01379387);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(30,0.004138162);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(31,0.006896937);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(1,0.001379387);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(2,0.04845558);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(3,0.06777272);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(4,0.05599701);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(5,0.04172504);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(6,0.0329613);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(7,0.02873632);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(8,0.02606276);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(9,0.02613566);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(10,0.02340898);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(11,0.02228469);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(12,0.01974982);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(13,0.01994157);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(14,0.02050607);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(15,0.01733863);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(16,0.0169502);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(17,0.01761084);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(18,0.01637932);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(19,0.01459806);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(20,0.01529815);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(21,0.01590787);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(22,0.01386267);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(23,0.01372473);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(24,0.01426849);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(25,0.01344461);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(26,0.01004209);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(27,0.009655712);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(28,0.005342344);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(29,0.004362006);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(30,0.002389169);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(31,0.003084404);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetEntries(10635);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_H_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_10 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(2,0.3859738);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(3,0.9799725);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(4,0.8181356);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(5,0.4919555);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(6,0.3390698);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(7,0.2699668);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(8,0.2628059);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(9,0.2287915);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(10,0.2073088);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(11,0.1990737);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(12,0.1761587);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(13,0.1604047);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(14,0.1557501);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(15,0.1414283);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(16,0.1324771);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(17,0.1356995);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(18,0.1192294);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(19,0.1027593);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(20,0.0945242);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(21,0.09094374);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(22,0.0658805);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(23,0.06802878);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(24,0.04475578);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(25,0.04475578);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(26,0.03294025);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(27,0.01969254);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(28,0.01038334);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(29,0.004654601);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(30,0.001074139);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(31,0.003938508);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(2,0.0117557);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(3,0.01873167);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(4,0.01711521);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(5,0.01327188);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(6,0.01101829);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(7,0.009831612);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(8,0.009700343);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(9,0.009050853);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(10,0.008615458);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(11,0.008442605);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(12,0.007941849);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(13,0.00757841);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(14,0.007467646);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(15,0.007116028);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(16,0.006887156);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(17,0.006970416);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(18,0.00653373);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(19,0.006065687);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(20,0.005817562);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(21,0.005706318);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(22,0.004856775);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(23,0.004935326);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(24,0.004003078);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(25,0.004003078);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(26,0.003434259);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(27,0.002655342);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(28,0.001928138);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(29,0.001290954);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(30,0.0006201542);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(31,0.001187505);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetEntries(16167);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_H_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_11 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(2,0.01641004);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(3,0.09299025);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(4,0.1312804);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(5,0.09299025);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(6,0.06837519);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(7,0.0355551);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(8,0.03282009);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(9,0.01367504);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(10,0.01094003);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(11,0.01094003);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(12,0.002735007);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(13,0.008205022);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(14,0.005470015);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(15,0.008205022);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(17,0.002735007);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(18,0.008205022);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(20,0.01094003);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(21,0.01094003);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(22,0.01367504);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(23,0.005470015);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(24,0.008205022);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(25,0.008205022);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(26,0.005470015);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(27,0.002735007);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(2,0.006699373);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(3,0.0159477);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(4,0.01894869);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(5,0.0159477);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(6,0.01367504);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(7,0.00986121);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(8,0.009474344);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(9,0.006115663);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(10,0.005470015);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(11,0.005470015);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(12,0.002735007);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(13,0.004737172);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(14,0.003867885);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(15,0.004737172);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(17,0.002735007);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(18,0.004737172);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(20,0.005470015);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(21,0.005470015);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(22,0.006115663);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(23,0.003867885);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(24,0.004737172);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(25,0.004737172);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(26,0.003867885);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(27,0.002735007);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetEntries(222);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_12 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(2,0.005001722);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(3,0.02465134);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(4,0.05180355);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(5,0.04251464);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(6,0.02572314);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(7,0.01071798);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(8,0.008931646);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(9,0.00428719);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(10,0.003215393);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(11,0.003215393);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(12,0.003215393);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(13,0.002500861);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(14,0.002500861);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(15,0.005001722);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(16,0.003215393);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(17,0.002500861);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(18,0.002143595);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(19,0.002143595);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(20,0.002500861);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(21,0.00428719);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(22,0.001429063);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(23,0.003572658);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(24,0.002143595);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(25,0.001071798);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(26,0.001429063);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(27,0.001429063);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(29,0.0003572658);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(2,0.001336766);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(3,0.002967673);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(4,0.00430205);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(5,0.00389731);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(6,0.003031501);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(7,0.001956826);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(8,0.001786329);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(9,0.001237605);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(10,0.001071798);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(11,0.001071798);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(12,0.001071798);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(13,0.0009452366);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(14,0.0009452366);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(15,0.001336766);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(16,0.001071798);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(17,0.0009452366);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(18,0.000875119);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(19,0.000875119);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(20,0.0009452366);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(21,0.001237605);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(22,0.0007145317);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(23,0.001129774);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(24,0.000875119);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(25,0.0006188026);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(26,0.0007145317);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(27,0.0007145317);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(29,0.0003572658);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetEntries(620);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_H_dR_Bj1__281 = new TH1D("VbbHcc_algo_H_dR_Bj1__281","",30,0,6);
   VbbHcc_algo_H_dR_Bj1__281->SetBinContent(1,12);
   VbbHcc_algo_H_dR_Bj1__281->SetBinContent(2,4150);
   VbbHcc_algo_H_dR_Bj1__281->SetBinContent(3,8175);
   VbbHcc_algo_H_dR_Bj1__281->SetBinContent(4,6903);
   VbbHcc_algo_H_dR_Bj1__281->SetBinContent(5,7135);
   VbbHcc_algo_H_dR_Bj1__281->SetBinContent(6,7043);
   VbbHcc_algo_H_dR_Bj1__281->SetBinContent(7,6817);
   VbbHcc_algo_H_dR_Bj1__281->SetBinContent(8,6471);
   VbbHcc_algo_H_dR_Bj1__281->SetBinContent(9,6229);
   VbbHcc_algo_H_dR_Bj1__281->SetBinContent(10,5858);
   VbbHcc_algo_H_dR_Bj1__281->SetBinContent(11,5600);
   VbbHcc_algo_H_dR_Bj1__281->SetBinContent(12,5090);
   VbbHcc_algo_H_dR_Bj1__281->SetBinContent(13,4915);
   VbbHcc_algo_H_dR_Bj1__281->SetBinContent(14,4704);
   VbbHcc_algo_H_dR_Bj1__281->SetBinContent(15,4313);
   VbbHcc_algo_H_dR_Bj1__281->SetBinContent(16,4024);
   VbbHcc_algo_H_dR_Bj1__281->SetBinContent(17,3672);
   VbbHcc_algo_H_dR_Bj1__281->SetBinContent(18,3102);
   VbbHcc_algo_H_dR_Bj1__281->SetBinContent(19,2668);
   VbbHcc_algo_H_dR_Bj1__281->SetBinContent(20,2190);
   VbbHcc_algo_H_dR_Bj1__281->SetBinContent(21,1832);
   VbbHcc_algo_H_dR_Bj1__281->SetBinContent(22,1504);
   VbbHcc_algo_H_dR_Bj1__281->SetBinContent(23,1262);
   VbbHcc_algo_H_dR_Bj1__281->SetBinContent(24,989);
   VbbHcc_algo_H_dR_Bj1__281->SetBinContent(25,785);
   VbbHcc_algo_H_dR_Bj1__281->SetBinContent(26,552);
   VbbHcc_algo_H_dR_Bj1__281->SetBinContent(27,433);
   VbbHcc_algo_H_dR_Bj1__281->SetBinContent(28,259);
   VbbHcc_algo_H_dR_Bj1__281->SetBinContent(29,181);
   VbbHcc_algo_H_dR_Bj1__281->SetBinContent(30,87);
   VbbHcc_algo_H_dR_Bj1__281->SetBinContent(31,78);
   VbbHcc_algo_H_dR_Bj1__281->SetEntries(107062);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1__281->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1__281->SetLineWidth(2);
   VbbHcc_algo_H_dR_Bj1__281->SetMarkerStyle(20);
   VbbHcc_algo_H_dR_Bj1__281->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR_Bj1__281->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1__281->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1__281->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1__281->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1__281->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1__281->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1__281->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1__281->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1__281->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1__281->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1__281->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1__281->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1__281->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1__281->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1__281->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fx1281[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fy1281[30] = {
   270.5289,
   25344.92,
   36931.12,
   33792.73,
   33891.34,
   33137.25,
   28653.24,
   23829.85,
   44891.39,
   19205.91,
   19995.59,
   16340.99,
   18929.72,
   14296.17,
   12064.33,
   12496.8,
   7329.949,
   11244.56,
   6896.962,
   7838.516,
   5919.32,
   4771.031,
   5058.71,
   3687.414,
   3247.933,
   1916.446,
   1441.032,
   680.8531,
   479.7713,
   74.69835};
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fex1281[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fey1281[30] = {
   268.7959,
   2919.253,
   3379.822,
   3811.216,
   3794.623,
   3606.182,
   3442.994,
   3280.108,
   20691.97,
   2188.73,
   2593.497,
   2066.508,
   2603.112,
   2340.733,
   1318.163,
   1372.652,
   882.7842,
   1366.091,
   955.4659,
   1156.648,
   949.659,
   865.411,
   945.2301,
   774.4884,
   770.4518,
   547.9896,
   475.0857,
   279.0998,
   273.9527,
   26.42833};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_H_dR_Bj1_fx1281,Graph_from_VbbHcc_algo_H_dR_Bj1_fy1281,Graph_from_VbbHcc_algo_H_dR_Bj1_fex1281,Graph_from_VbbHcc_algo_H_dR_Bj1_fey1281);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->SetMinimum(1.559651);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->SetMaximum(72141.53);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_H_dR_Bj1","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_Bj1_algo_16->cd();
  
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
   
   TH1D *data_mc_ratio__282 = new TH1D("data_mc_ratio__282","",30,0,6);
   data_mc_ratio__282->SetBinContent(1,0.04435756);
   data_mc_ratio__282->SetBinContent(2,0.1637409);
   data_mc_ratio__282->SetBinContent(3,0.221358);
   data_mc_ratio__282->SetBinContent(4,0.2042747);
   data_mc_ratio__282->SetBinContent(5,0.2105258);
   data_mc_ratio__282->SetBinContent(6,0.2125403);
   data_mc_ratio__282->SetBinContent(7,0.2379138);
   data_mc_ratio__282->SetBinContent(8,0.2715502);
   data_mc_ratio__282->SetBinContent(9,0.1387571);
   data_mc_ratio__282->SetBinContent(10,0.3050102);
   data_mc_ratio__282->SetBinContent(11,0.2800618);
   data_mc_ratio__282->SetBinContent(12,0.3114866);
   data_mc_ratio__282->SetBinContent(13,0.2596446);
   data_mc_ratio__282->SetBinContent(14,0.3290392);
   data_mc_ratio__282->SetBinContent(15,0.3575002);
   data_mc_ratio__282->SetBinContent(16,0.3220024);
   data_mc_ratio__282->SetBinContent(17,0.5009585);
   data_mc_ratio__282->SetBinContent(18,0.2758667);
   data_mc_ratio__282->SetBinContent(19,0.386837);
   data_mc_ratio__282->SetBinContent(20,0.2793896);
   data_mc_ratio__282->SetBinContent(21,0.309495);
   data_mc_ratio__282->SetBinContent(22,0.3152358);
   data_mc_ratio__282->SetBinContent(23,0.2494707);
   data_mc_ratio__282->SetBinContent(24,0.2682096);
   data_mc_ratio__282->SetBinContent(25,0.2416922);
   data_mc_ratio__282->SetBinContent(26,0.2880331);
   data_mc_ratio__282->SetBinContent(27,0.3004792);
   data_mc_ratio__282->SetBinContent(28,0.3804051);
   data_mc_ratio__282->SetBinContent(29,0.3772631);
   data_mc_ratio__282->SetBinContent(30,1.164684);
   data_mc_ratio__282->SetBinContent(31,0.6890334);
   data_mc_ratio__282->SetBinError(1,0.01280492);
   data_mc_ratio__282->SetBinError(2,0.002541752);
   data_mc_ratio__282->SetBinError(3,0.002448226);
   data_mc_ratio__282->SetBinError(4,0.002458644);
   data_mc_ratio__282->SetBinError(5,0.002492346);
   data_mc_ratio__282->SetBinError(6,0.002532575);
   data_mc_ratio__282->SetBinError(7,0.002881529);
   data_mc_ratio__282->SetBinError(8,0.003375704);
   data_mc_ratio__282->SetBinError(9,0.00175811);
   data_mc_ratio__282->SetBinError(10,0.003985105);
   data_mc_ratio__282->SetBinError(11,0.003742483);
   data_mc_ratio__282->SetBinError(12,0.004365968);
   data_mc_ratio__282->SetBinError(13,0.003703545);
   data_mc_ratio__282->SetBinError(14,0.004797489);
   data_mc_ratio__282->SetBinError(15,0.005443605);
   data_mc_ratio__282->SetBinError(16,0.0050761);
   data_mc_ratio__282->SetBinError(17,0.008267046);
   data_mc_ratio__282->SetBinError(18,0.004953115);
   data_mc_ratio__282->SetBinError(19,0.007489194);
   data_mc_ratio__282->SetBinError(20,0.005970191);
   data_mc_ratio__282->SetBinError(21,0.007230876);
   data_mc_ratio__282->SetBinError(22,0.008128524);
   data_mc_ratio__282->SetBinError(23,0.00702247);
   data_mc_ratio__282->SetBinError(24,0.00852857);
   data_mc_ratio__282->SetBinError(25,0.008626365);
   data_mc_ratio__282->SetBinError(26,0.0122595);
   data_mc_ratio__282->SetBinError(27,0.01444011);
   data_mc_ratio__282->SetBinError(28,0.02363722);
   data_mc_ratio__282->SetBinError(29,0.02804175);
   data_mc_ratio__282->SetBinError(30,0.1248673);
   data_mc_ratio__282->SetBinError(31,0.2279993);
   data_mc_ratio__282->SetMinimum(0.4);
   data_mc_ratio__282->SetMaximum(1.6);
   data_mc_ratio__282->SetEntries(264.4162);
   data_mc_ratio__282->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__282->SetLineColor(ci);
   data_mc_ratio__282->SetLineWidth(2);
   data_mc_ratio__282->SetMarkerStyle(20);
   data_mc_ratio__282->SetMarkerSize(1.2);
   data_mc_ratio__282->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__282->GetXaxis()->SetRange(1,30);
   data_mc_ratio__282->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__282->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__282->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__282->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__282->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__282->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__282->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__282->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__282->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__282->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__282->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__282->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__282->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__282->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__282->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__282->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__282->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1282[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1282[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1282[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1282[30] = {
   0.9935942,
   0.115181,
   0.09151692,
   0.1127821,
   0.1119644,
   0.1088256,
   0.1201607,
   0.137647,
   0.4609341,
   0.1139612,
   0.1297035,
   0.1264616,
   0.1375146,
   0.1637315,
   0.1092612,
   0.1098403,
   0.1204352,
   0.1214891,
   0.1385343,
   0.1475595,
   0.1604338,
   0.1813887,
   0.186852,
   0.2100356,
   0.237213,
   0.2859405,
   0.3296845,
   0.4099266,
   0.5710069,
   0.3538007};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1282,Graph_from_mc_statistical_error_fy1282,Graph_from_mc_statistical_error_fex1282,Graph_from_mc_statistical_error_fey1282);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1282 = new TH1F("Graph_Graph_from_mc_statistical_error1282","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1282->SetMinimum(0.005765193);
   Graph_Graph_from_mc_statistical_error1282->SetMaximum(2.192313);
   Graph_Graph_from_mc_statistical_error1282->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1282->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1282->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1282->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1282->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1282->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1282->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1282->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1282->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1282->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1282->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1282->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1282->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1282->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1282->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1282->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1282);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj1_algo_16->cd();
   H_dR_Bj1_algo_16->Modified();
   H_dR_Bj1_algo_16->cd();
   H_dR_Bj1_algo_16->SetSelected(H_dR_Bj1_algo_16);
}
