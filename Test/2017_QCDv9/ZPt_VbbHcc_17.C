void ZPt_VbbHcc_17()
{
//=========Macro generated from canvas: ZPt_VbbHcc_17/ZPt_VbbHcc_17
//=========  (Tue Sep 20 10:39:22 2022) by ROOT version 6.14/09
   TCanvas *ZPt_VbbHcc_17 = new TCanvas("ZPt_VbbHcc_17", "ZPt_VbbHcc_17",0,0,600,600);
   ZPt_VbbHcc_17->SetHighLightColor(2);
   ZPt_VbbHcc_17->Range(0,0,1,1);
   ZPt_VbbHcc_17->SetFillColor(0);
   ZPt_VbbHcc_17->SetFillStyle(4000);
   ZPt_VbbHcc_17->SetBorderMode(0);
   ZPt_VbbHcc_17->SetBorderSize(2);
   ZPt_VbbHcc_17->SetFrameFillStyle(1000);
   ZPt_VbbHcc_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(116.1295,-1199.317,1562.903,1198128);
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
   st->SetMaximum(1026852);
   
   TH1F *st_stack_10 = new TH1F("st_stack_10","",40,0,2000);
   st_stack_10->SetMinimum(0.01);
   st_stack_10->SetMaximum(1078195);
   st_stack_10->SetDirectory(0);
   st_stack_10->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_10->SetLineColor(ci);
   st_stack_10->GetXaxis()->SetRange(7,30);
   st_stack_10->GetXaxis()->SetLabelFont(42);
   st_stack_10->GetXaxis()->SetLabelSize(0.035);
   st_stack_10->GetXaxis()->SetTitleSize(0.035);
   st_stack_10->GetXaxis()->SetTitleFont(42);
   st_stack_10->GetYaxis()->SetTitle("Events/50.0");
   st_stack_10->GetYaxis()->SetLabelFont(42);
   st_stack_10->GetYaxis()->SetLabelSize(0.05);
   st_stack_10->GetYaxis()->SetTitleSize(0.057);
   st_stack_10->GetYaxis()->SetTitleOffset(1.2);
   st_stack_10->GetYaxis()->SetTitleFont(42);
   st_stack_10->GetZaxis()->SetLabelFont(42);
   st_stack_10->GetZaxis()->SetLabelSize(0.035);
   st_stack_10->GetZaxis()->SetTitleSize(0.035);
   st_stack_10->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_10);
   
   
   TH1D *VbbHcc_ZPt_stack_1 = new TH1D("VbbHcc_ZPt_stack_1","",40,0,2000);
   VbbHcc_ZPt_stack_1->SetBinContent(2,317777.9);
   VbbHcc_ZPt_stack_1->SetBinContent(3,397471.9);
   VbbHcc_ZPt_stack_1->SetBinContent(4,233673.3);
   VbbHcc_ZPt_stack_1->SetBinContent(5,88815.64);
   VbbHcc_ZPt_stack_1->SetBinContent(6,31977.75);
   VbbHcc_ZPt_stack_1->SetBinContent(7,10691.93);
   VbbHcc_ZPt_stack_1->SetBinContent(8,5105.436);
   VbbHcc_ZPt_stack_1->SetBinContent(9,2297.266);
   VbbHcc_ZPt_stack_1->SetBinContent(10,1346.041);
   VbbHcc_ZPt_stack_1->SetBinContent(11,684.8227);
   VbbHcc_ZPt_stack_1->SetBinContent(12,396.3381);
   VbbHcc_ZPt_stack_1->SetBinContent(13,302.3264);
   VbbHcc_ZPt_stack_1->SetBinContent(14,159.2036);
   VbbHcc_ZPt_stack_1->SetBinContent(15,80.03345);
   VbbHcc_ZPt_stack_1->SetBinContent(16,57.31352);
   VbbHcc_ZPt_stack_1->SetBinContent(17,43.57488);
   VbbHcc_ZPt_stack_1->SetBinContent(18,22.23566);
   VbbHcc_ZPt_stack_1->SetBinContent(19,23.99762);
   VbbHcc_ZPt_stack_1->SetBinContent(20,9.635971);
   VbbHcc_ZPt_stack_1->SetBinContent(21,8.22141);
   VbbHcc_ZPt_stack_1->SetBinContent(22,5.413173);
   VbbHcc_ZPt_stack_1->SetBinContent(23,4.64334);
   VbbHcc_ZPt_stack_1->SetBinContent(24,2.281399);
   VbbHcc_ZPt_stack_1->SetBinContent(25,2.386122);
   VbbHcc_ZPt_stack_1->SetBinContent(26,1.50941);
   VbbHcc_ZPt_stack_1->SetBinContent(27,0.6241911);
   VbbHcc_ZPt_stack_1->SetBinContent(28,0.6475053);
   VbbHcc_ZPt_stack_1->SetBinContent(29,0.9767868);
   VbbHcc_ZPt_stack_1->SetBinContent(30,0.7678173);
   VbbHcc_ZPt_stack_1->SetBinContent(32,0.3726844);
   VbbHcc_ZPt_stack_1->SetBinContent(33,0.238348);
   VbbHcc_ZPt_stack_1->SetBinContent(37,0.2053797);
   VbbHcc_ZPt_stack_1->SetBinError(2,9040.649);
   VbbHcc_ZPt_stack_1->SetBinError(3,9966.585);
   VbbHcc_ZPt_stack_1->SetBinError(4,7159.067);
   VbbHcc_ZPt_stack_1->SetBinError(5,3487.926);
   VbbHcc_ZPt_stack_1->SetBinError(6,1177.558);
   VbbHcc_ZPt_stack_1->SetBinError(7,393.8679);
   VbbHcc_ZPt_stack_1->SetBinError(8,216.7868);
   VbbHcc_ZPt_stack_1->SetBinError(9,117.5872);
   VbbHcc_ZPt_stack_1->SetBinError(10,82.52983);
   VbbHcc_ZPt_stack_1->SetBinError(11,57.19763);
   VbbHcc_ZPt_stack_1->SetBinError(12,36.91793);
   VbbHcc_ZPt_stack_1->SetBinError(13,30.47263);
   VbbHcc_ZPt_stack_1->SetBinError(14,19.59944);
   VbbHcc_ZPt_stack_1->SetBinError(15,9.912645);
   VbbHcc_ZPt_stack_1->SetBinError(16,5.800106);
   VbbHcc_ZPt_stack_1->SetBinError(17,6.880341);
   VbbHcc_ZPt_stack_1->SetBinError(18,2.870086);
   VbbHcc_ZPt_stack_1->SetBinError(19,2.831691);
   VbbHcc_ZPt_stack_1->SetBinError(20,1.521924);
   VbbHcc_ZPt_stack_1->SetBinError(21,1.285209);
   VbbHcc_ZPt_stack_1->SetBinError(22,1.006432);
   VbbHcc_ZPt_stack_1->SetBinError(23,0.9316739);
   VbbHcc_ZPt_stack_1->SetBinError(24,0.6414853);
   VbbHcc_ZPt_stack_1->SetBinError(25,0.662784);
   VbbHcc_ZPt_stack_1->SetBinError(26,0.5213362);
   VbbHcc_ZPt_stack_1->SetBinError(27,0.3223892);
   VbbHcc_ZPt_stack_1->SetBinError(28,0.3392061);
   VbbHcc_ZPt_stack_1->SetBinError(29,0.4373542);
   VbbHcc_ZPt_stack_1->SetBinError(30,0.3844326);
   VbbHcc_ZPt_stack_1->SetBinError(32,0.263624);
   VbbHcc_ZPt_stack_1->SetBinError(33,0.1924556);
   VbbHcc_ZPt_stack_1->SetBinError(37,0.2053797);
   VbbHcc_ZPt_stack_1->SetEntries(21518);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_ZPt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_stack_1->SetLineColor(ci);
   VbbHcc_ZPt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_stack_1,"");
   
   TH1D *VbbHcc_ZPt_stack_2 = new TH1D("VbbHcc_ZPt_stack_2","",40,0,2000);
   VbbHcc_ZPt_stack_2->SetBinContent(2,3844.865);
   VbbHcc_ZPt_stack_2->SetBinContent(3,3076.797);
   VbbHcc_ZPt_stack_2->SetBinContent(4,1516.928);
   VbbHcc_ZPt_stack_2->SetBinContent(5,764.6245);
   VbbHcc_ZPt_stack_2->SetBinContent(6,402.0753);
   VbbHcc_ZPt_stack_2->SetBinContent(7,235.5224);
   VbbHcc_ZPt_stack_2->SetBinContent(8,132.3124);
   VbbHcc_ZPt_stack_2->SetBinContent(9,84.61554);
   VbbHcc_ZPt_stack_2->SetBinContent(10,49.56787);
   VbbHcc_ZPt_stack_2->SetBinContent(11,32.57526);
   VbbHcc_ZPt_stack_2->SetBinContent(12,22.32137);
   VbbHcc_ZPt_stack_2->SetBinContent(13,12.37941);
   VbbHcc_ZPt_stack_2->SetBinContent(14,8.932314);
   VbbHcc_ZPt_stack_2->SetBinContent(15,6.144381);
   VbbHcc_ZPt_stack_2->SetBinContent(16,3.873453);
   VbbHcc_ZPt_stack_2->SetBinContent(17,1.9827);
   VbbHcc_ZPt_stack_2->SetBinContent(18,2.063281);
   VbbHcc_ZPt_stack_2->SetBinContent(19,2.679116);
   VbbHcc_ZPt_stack_2->SetBinContent(20,0.5702921);
   VbbHcc_ZPt_stack_2->SetBinContent(21,-0.05160105);
   VbbHcc_ZPt_stack_2->SetBinContent(22,0.05140591);
   VbbHcc_ZPt_stack_2->SetBinContent(23,0.114978);
   VbbHcc_ZPt_stack_2->SetBinContent(24,0.0546883);
   VbbHcc_ZPt_stack_2->SetBinContent(26,-0.0521999);
   VbbHcc_ZPt_stack_2->SetBinContent(28,0.6717701);
   VbbHcc_ZPt_stack_2->SetBinContent(39,0.05215773);
   VbbHcc_ZPt_stack_2->SetBinError(2,25.62357);
   VbbHcc_ZPt_stack_2->SetBinError(3,23.92619);
   VbbHcc_ZPt_stack_2->SetBinError(4,17.50194);
   VbbHcc_ZPt_stack_2->SetBinError(5,12.85942);
   VbbHcc_ZPt_stack_2->SetBinError(6,9.582734);
   VbbHcc_ZPt_stack_2->SetBinError(7,7.412051);
   VbbHcc_ZPt_stack_2->SetBinError(8,5.595431);
   VbbHcc_ZPt_stack_2->SetBinError(9,4.577747);
   VbbHcc_ZPt_stack_2->SetBinError(10,3.529128);
   VbbHcc_ZPt_stack_2->SetBinError(11,2.892208);
   VbbHcc_ZPt_stack_2->SetBinError(12,2.44232);
   VbbHcc_ZPt_stack_2->SetBinError(13,1.829184);
   VbbHcc_ZPt_stack_2->SetBinError(14,1.533524);
   VbbHcc_ZPt_stack_2->SetBinError(15,1.362755);
   VbbHcc_ZPt_stack_2->SetBinError(16,1.053645);
   VbbHcc_ZPt_stack_2->SetBinError(17,0.7086424);
   VbbHcc_ZPt_stack_2->SetBinError(18,0.7716297);
   VbbHcc_ZPt_stack_2->SetBinError(19,0.8834563);
   VbbHcc_ZPt_stack_2->SetBinError(20,0.3813218);
   VbbHcc_ZPt_stack_2->SetBinError(21,0.05160105);
   VbbHcc_ZPt_stack_2->SetBinError(22,0.05140591);
   VbbHcc_ZPt_stack_2->SetBinError(23,0.08135433);
   VbbHcc_ZPt_stack_2->SetBinError(24,0.0546883);
   VbbHcc_ZPt_stack_2->SetBinError(26,0.0521999);
   VbbHcc_ZPt_stack_2->SetBinError(28,0.4770711);
   VbbHcc_ZPt_stack_2->SetBinError(39,0.05215773);
   VbbHcc_ZPt_stack_2->SetEntries(128128);

   ci = TColor::GetColor("#660066");
   VbbHcc_ZPt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_stack_2->SetLineColor(ci);
   VbbHcc_ZPt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_stack_2,"");
   
   TH1D *VbbHcc_ZPt_stack_3 = new TH1D("VbbHcc_ZPt_stack_3","",40,0,2000);
   VbbHcc_ZPt_stack_3->SetBinContent(2,71956.27);
   VbbHcc_ZPt_stack_3->SetBinContent(3,58740.52);
   VbbHcc_ZPt_stack_3->SetBinContent(4,20337.9);
   VbbHcc_ZPt_stack_3->SetBinContent(5,7889.275);
   VbbHcc_ZPt_stack_3->SetBinContent(6,3607.677);
   VbbHcc_ZPt_stack_3->SetBinContent(7,1807.283);
   VbbHcc_ZPt_stack_3->SetBinContent(8,988.7818);
   VbbHcc_ZPt_stack_3->SetBinContent(9,572.433);
   VbbHcc_ZPt_stack_3->SetBinContent(10,342.945);
   VbbHcc_ZPt_stack_3->SetBinContent(11,214.7668);
   VbbHcc_ZPt_stack_3->SetBinContent(12,139.9117);
   VbbHcc_ZPt_stack_3->SetBinContent(13,92.7903);
   VbbHcc_ZPt_stack_3->SetBinContent(14,61.66543);
   VbbHcc_ZPt_stack_3->SetBinContent(15,36.84755);
   VbbHcc_ZPt_stack_3->SetBinContent(16,28.34556);
   VbbHcc_ZPt_stack_3->SetBinContent(17,18.98254);
   VbbHcc_ZPt_stack_3->SetBinContent(18,11.36263);
   VbbHcc_ZPt_stack_3->SetBinContent(19,8.274492);
   VbbHcc_ZPt_stack_3->SetBinContent(20,5.37457);
   VbbHcc_ZPt_stack_3->SetBinContent(21,4.322339);
   VbbHcc_ZPt_stack_3->SetBinContent(22,2.870006);
   VbbHcc_ZPt_stack_3->SetBinContent(23,2.243241);
   VbbHcc_ZPt_stack_3->SetBinContent(24,2.215003);
   VbbHcc_ZPt_stack_3->SetBinContent(25,1.098895);
   VbbHcc_ZPt_stack_3->SetBinContent(26,0.8563792);
   VbbHcc_ZPt_stack_3->SetBinContent(27,0.2022784);
   VbbHcc_ZPt_stack_3->SetBinContent(28,0.4312669);
   VbbHcc_ZPt_stack_3->SetBinContent(29,0.09585426);
   VbbHcc_ZPt_stack_3->SetBinContent(30,0.08686269);
   VbbHcc_ZPt_stack_3->SetBinContent(31,0.1705729);
   VbbHcc_ZPt_stack_3->SetBinContent(32,0.1505726);
   VbbHcc_ZPt_stack_3->SetBinContent(33,0.08964949);
   VbbHcc_ZPt_stack_3->SetBinContent(35,0.08592689);
   VbbHcc_ZPt_stack_3->SetBinContent(39,0.05285421);
   VbbHcc_ZPt_stack_3->SetBinError(2,73.42951);
   VbbHcc_ZPt_stack_3->SetBinError(3,66.19181);
   VbbHcc_ZPt_stack_3->SetBinError(4,38.58506);
   VbbHcc_ZPt_stack_3->SetBinError(5,23.96185);
   VbbHcc_ZPt_stack_3->SetBinError(6,16.20034);
   VbbHcc_ZPt_stack_3->SetBinError(7,11.50701);
   VbbHcc_ZPt_stack_3->SetBinError(8,8.530921);
   VbbHcc_ZPt_stack_3->SetBinError(9,6.520299);
   VbbHcc_ZPt_stack_3->SetBinError(10,5.076987);
   VbbHcc_ZPt_stack_3->SetBinError(11,4.010148);
   VbbHcc_ZPt_stack_3->SetBinError(12,3.251347);
   VbbHcc_ZPt_stack_3->SetBinError(13,2.657844);
   VbbHcc_ZPt_stack_3->SetBinError(14,2.163872);
   VbbHcc_ZPt_stack_3->SetBinError(15,1.680846);
   VbbHcc_ZPt_stack_3->SetBinError(16,1.468532);
   VbbHcc_ZPt_stack_3->SetBinError(17,1.220163);
   VbbHcc_ZPt_stack_3->SetBinError(18,0.9231754);
   VbbHcc_ZPt_stack_3->SetBinError(19,0.7900138);
   VbbHcc_ZPt_stack_3->SetBinError(20,0.6437378);
   VbbHcc_ZPt_stack_3->SetBinError(21,0.5680019);
   VbbHcc_ZPt_stack_3->SetBinError(22,0.4787482);
   VbbHcc_ZPt_stack_3->SetBinError(23,0.4113743);
   VbbHcc_ZPt_stack_3->SetBinError(24,0.4094928);
   VbbHcc_ZPt_stack_3->SetBinError(25,0.304868);
   VbbHcc_ZPt_stack_3->SetBinError(26,0.2713994);
   VbbHcc_ZPt_stack_3->SetBinError(27,0.1188899);
   VbbHcc_ZPt_stack_3->SetBinError(28,0.1710822);
   VbbHcc_ZPt_stack_3->SetBinError(29,0.1411343);
   VbbHcc_ZPt_stack_3->SetBinError(30,0.08686269);
   VbbHcc_ZPt_stack_3->SetBinError(31,0.120614);
   VbbHcc_ZPt_stack_3->SetBinError(32,0.08772044);
   VbbHcc_ZPt_stack_3->SetBinError(33,0.08964949);
   VbbHcc_ZPt_stack_3->SetBinError(35,0.08592689);
   VbbHcc_ZPt_stack_3->SetBinError(39,0.05285421);
   VbbHcc_ZPt_stack_3->SetEntries(2474398);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_ZPt_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_stack_3->SetLineColor(ci);
   VbbHcc_ZPt_stack_3->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_stack_3,"");
   
   TH1D *VbbHcc_ZPt_stack_4 = new TH1D("VbbHcc_ZPt_stack_4","",40,0,2000);
   VbbHcc_ZPt_stack_4->SetBinContent(2,1574.247);
   VbbHcc_ZPt_stack_4->SetBinContent(3,2115.492);
   VbbHcc_ZPt_stack_4->SetBinContent(4,1809.738);
   VbbHcc_ZPt_stack_4->SetBinContent(5,1075.721);
   VbbHcc_ZPt_stack_4->SetBinContent(6,566.8179);
   VbbHcc_ZPt_stack_4->SetBinContent(7,319.3384);
   VbbHcc_ZPt_stack_4->SetBinContent(8,185.4885);
   VbbHcc_ZPt_stack_4->SetBinContent(9,104.0119);
   VbbHcc_ZPt_stack_4->SetBinContent(10,54.48488);
   VbbHcc_ZPt_stack_4->SetBinContent(11,32.83753);
   VbbHcc_ZPt_stack_4->SetBinContent(12,20.51936);
   VbbHcc_ZPt_stack_4->SetBinContent(13,13.93588);
   VbbHcc_ZPt_stack_4->SetBinContent(14,8.993665);
   VbbHcc_ZPt_stack_4->SetBinContent(15,6.762816);
   VbbHcc_ZPt_stack_4->SetBinContent(16,4.203667);
   VbbHcc_ZPt_stack_4->SetBinContent(17,3.264104);
   VbbHcc_ZPt_stack_4->SetBinContent(18,3.088301);
   VbbHcc_ZPt_stack_4->SetBinContent(19,1.462388);
   VbbHcc_ZPt_stack_4->SetBinContent(20,0.9473649);
   VbbHcc_ZPt_stack_4->SetBinContent(21,0.9408232);
   VbbHcc_ZPt_stack_4->SetBinContent(22,0.3304039);
   VbbHcc_ZPt_stack_4->SetBinContent(23,0.9464506);
   VbbHcc_ZPt_stack_4->SetBinContent(24,0.3559285);
   VbbHcc_ZPt_stack_4->SetBinContent(25,0.4456722);
   VbbHcc_ZPt_stack_4->SetBinContent(26,0.3291487);
   VbbHcc_ZPt_stack_4->SetBinContent(27,0.05227043);
   VbbHcc_ZPt_stack_4->SetBinContent(30,0.1786268);
   VbbHcc_ZPt_stack_4->SetBinContent(37,0.08397603);
   VbbHcc_ZPt_stack_4->SetBinError(2,23.02006);
   VbbHcc_ZPt_stack_4->SetBinError(3,26.46502);
   VbbHcc_ZPt_stack_4->SetBinError(4,23.83646);
   VbbHcc_ZPt_stack_4->SetBinError(5,16.40205);
   VbbHcc_ZPt_stack_4->SetBinError(6,9.701908);
   VbbHcc_ZPt_stack_4->SetBinError(7,5.832854);
   VbbHcc_ZPt_stack_4->SetBinError(8,4.037648);
   VbbHcc_ZPt_stack_4->SetBinError(9,2.846812);
   VbbHcc_ZPt_stack_4->SetBinError(10,2.041518);
   VbbHcc_ZPt_stack_4->SetBinError(11,1.582948);
   VbbHcc_ZPt_stack_4->SetBinError(12,1.245516);
   VbbHcc_ZPt_stack_4->SetBinError(13,1.016256);
   VbbHcc_ZPt_stack_4->SetBinError(14,0.8487948);
   VbbHcc_ZPt_stack_4->SetBinError(15,0.7199027);
   VbbHcc_ZPt_stack_4->SetBinError(16,0.5693327);
   VbbHcc_ZPt_stack_4->SetBinError(17,0.5049355);
   VbbHcc_ZPt_stack_4->SetBinError(18,0.4884934);
   VbbHcc_ZPt_stack_4->SetBinError(19,0.3405301);
   VbbHcc_ZPt_stack_4->SetBinError(20,0.2766193);
   VbbHcc_ZPt_stack_4->SetBinError(21,0.2665105);
   VbbHcc_ZPt_stack_4->SetBinError(22,0.1659237);
   VbbHcc_ZPt_stack_4->SetBinError(23,0.275355);
   VbbHcc_ZPt_stack_4->SetBinError(24,0.1609089);
   VbbHcc_ZPt_stack_4->SetBinError(25,0.183912);
   VbbHcc_ZPt_stack_4->SetBinError(26,0.1653562);
   VbbHcc_ZPt_stack_4->SetBinError(27,0.05227043);
   VbbHcc_ZPt_stack_4->SetBinError(30,0.1269319);
   VbbHcc_ZPt_stack_4->SetBinError(37,0.08397603);
   VbbHcc_ZPt_stack_4->SetEntries(45331);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_ZPt_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_stack_4->SetLineColor(ci);
   VbbHcc_ZPt_stack_4->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_stack_4,"");
   
   TH1D *VbbHcc_ZPt_stack_5 = new TH1D("VbbHcc_ZPt_stack_5","",40,0,2000);
   VbbHcc_ZPt_stack_5->SetBinContent(2,369.5421);
   VbbHcc_ZPt_stack_5->SetBinContent(3,514.4574);
   VbbHcc_ZPt_stack_5->SetBinContent(4,468.6893);
   VbbHcc_ZPt_stack_5->SetBinContent(5,319.3624);
   VbbHcc_ZPt_stack_5->SetBinContent(6,215.1672);
   VbbHcc_ZPt_stack_5->SetBinContent(7,120.9871);
   VbbHcc_ZPt_stack_5->SetBinContent(8,82.43392);
   VbbHcc_ZPt_stack_5->SetBinContent(9,51.15835);
   VbbHcc_ZPt_stack_5->SetBinContent(10,29.926);
   VbbHcc_ZPt_stack_5->SetBinContent(11,20.80369);
   VbbHcc_ZPt_stack_5->SetBinContent(12,16.22778);
   VbbHcc_ZPt_stack_5->SetBinContent(13,11.1874);
   VbbHcc_ZPt_stack_5->SetBinContent(14,8.423279);
   VbbHcc_ZPt_stack_5->SetBinContent(15,5.836343);
   VbbHcc_ZPt_stack_5->SetBinContent(16,4.093563);
   VbbHcc_ZPt_stack_5->SetBinContent(17,2.746839);
   VbbHcc_ZPt_stack_5->SetBinContent(18,2.871572);
   VbbHcc_ZPt_stack_5->SetBinContent(19,1.254169);
   VbbHcc_ZPt_stack_5->SetBinContent(20,0.7965708);
   VbbHcc_ZPt_stack_5->SetBinContent(21,0.4783724);
   VbbHcc_ZPt_stack_5->SetBinContent(22,0.631129);
   VbbHcc_ZPt_stack_5->SetBinContent(23,0.4622206);
   VbbHcc_ZPt_stack_5->SetBinContent(24,0.3323277);
   VbbHcc_ZPt_stack_5->SetBinContent(25,0.323993);
   VbbHcc_ZPt_stack_5->SetBinContent(26,0.1542785);
   VbbHcc_ZPt_stack_5->SetBinContent(27,0.2046322);
   VbbHcc_ZPt_stack_5->SetBinContent(28,0.003074315);
   VbbHcc_ZPt_stack_5->SetBinContent(29,0.1001739);
   VbbHcc_ZPt_stack_5->SetBinContent(30,0.1282399);
   VbbHcc_ZPt_stack_5->SetBinContent(31,0.002001616);
   VbbHcc_ZPt_stack_5->SetBinContent(32,0.003036047);
   VbbHcc_ZPt_stack_5->SetBinContent(33,0.001626293);
   VbbHcc_ZPt_stack_5->SetBinContent(34,0.001184084);
   VbbHcc_ZPt_stack_5->SetBinContent(35,0.001127256);
   VbbHcc_ZPt_stack_5->SetBinContent(36,0.03349571);
   VbbHcc_ZPt_stack_5->SetBinContent(39,0.0007577301);
   VbbHcc_ZPt_stack_5->SetBinError(2,18.67951);
   VbbHcc_ZPt_stack_5->SetBinError(3,22.38032);
   VbbHcc_ZPt_stack_5->SetBinError(4,20.79648);
   VbbHcc_ZPt_stack_5->SetBinError(5,14.47606);
   VbbHcc_ZPt_stack_5->SetBinError(6,9.630352);
   VbbHcc_ZPt_stack_5->SetBinError(7,4.311144);
   VbbHcc_ZPt_stack_5->SetBinError(8,3.576273);
   VbbHcc_ZPt_stack_5->SetBinError(9,2.230914);
   VbbHcc_ZPt_stack_5->SetBinError(10,1.607825);
   VbbHcc_ZPt_stack_5->SetBinError(11,1.337413);
   VbbHcc_ZPt_stack_5->SetBinError(12,1.174439);
   VbbHcc_ZPt_stack_5->SetBinError(13,0.967337);
   VbbHcc_ZPt_stack_5->SetBinError(14,0.8306324);
   VbbHcc_ZPt_stack_5->SetBinError(15,0.6878183);
   VbbHcc_ZPt_stack_5->SetBinError(16,0.5784999);
   VbbHcc_ZPt_stack_5->SetBinError(17,0.4715269);
   VbbHcc_ZPt_stack_5->SetBinError(18,0.4915882);
   VbbHcc_ZPt_stack_5->SetBinError(19,0.3130718);
   VbbHcc_ZPt_stack_5->SetBinError(20,0.2467764);
   VbbHcc_ZPt_stack_5->SetBinError(21,0.182939);
   VbbHcc_ZPt_stack_5->SetBinError(22,0.2189058);
   VbbHcc_ZPt_stack_5->SetBinError(23,0.1921097);
   VbbHcc_ZPt_stack_5->SetBinError(24,0.1610831);
   VbbHcc_ZPt_stack_5->SetBinError(25,0.1600252);
   VbbHcc_ZPt_stack_5->SetBinError(26,0.1047089);
   VbbHcc_ZPt_stack_5->SetBinError(27,0.1412093);
   VbbHcc_ZPt_stack_5->SetBinError(28,0.001096232);
   VbbHcc_ZPt_stack_5->SetBinError(29,0.09836705);
   VbbHcc_ZPt_stack_5->SetBinError(30,0.1037365);
   VbbHcc_ZPt_stack_5->SetBinError(31,0.0008959917);
   VbbHcc_ZPt_stack_5->SetBinError(32,0.001025365);
   VbbHcc_ZPt_stack_5->SetBinError(33,0.000760947);
   VbbHcc_ZPt_stack_5->SetBinError(34,0.000684471);
   VbbHcc_ZPt_stack_5->SetBinError(35,0.0006518649);
   VbbHcc_ZPt_stack_5->SetBinError(36,0.03322382);
   VbbHcc_ZPt_stack_5->SetBinError(39,0.0005383644);
   VbbHcc_ZPt_stack_5->SetEntries(11695);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_ZPt_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_stack_5->SetLineColor(ci);
   VbbHcc_ZPt_stack_5->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_stack_5,"");
   
   TH1D *VbbHcc_ZPt_stack_6 = new TH1D("VbbHcc_ZPt_stack_6","",40,0,2000);
   VbbHcc_ZPt_stack_6->SetBinContent(2,12.89944);
   VbbHcc_ZPt_stack_6->SetBinContent(3,9.340594);
   VbbHcc_ZPt_stack_6->SetBinContent(4,3.04491);
   VbbHcc_ZPt_stack_6->SetBinContent(5,3.154576);
   VbbHcc_ZPt_stack_6->SetBinContent(6,1.383701);
   VbbHcc_ZPt_stack_6->SetBinContent(7,1.627741);
   VbbHcc_ZPt_stack_6->SetBinContent(9,0.7962748);
   VbbHcc_ZPt_stack_6->SetBinContent(10,0.4783402);
   VbbHcc_ZPt_stack_6->SetBinError(2,1.716124);
   VbbHcc_ZPt_stack_6->SetBinError(3,1.483896);
   VbbHcc_ZPt_stack_6->SetBinError(4,0.8268963);
   VbbHcc_ZPt_stack_6->SetBinError(5,0.8638686);
   VbbHcc_ZPt_stack_6->SetBinError(6,0.5707791);
   VbbHcc_ZPt_stack_6->SetBinError(7,0.6241952);
   VbbHcc_ZPt_stack_6->SetBinError(9,0.4604455);
   VbbHcc_ZPt_stack_6->SetBinError(10,0.33827);
   VbbHcc_ZPt_stack_6->SetEntries(145);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_ZPt_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_stack_6->SetLineColor(ci);
   VbbHcc_ZPt_stack_6->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_stack_6,"");
   
   TH1D *VbbHcc_ZPt_stack_7 = new TH1D("VbbHcc_ZPt_stack_7","",40,0,2000);
   VbbHcc_ZPt_stack_7->SetBinContent(2,32.63288);
   VbbHcc_ZPt_stack_7->SetBinContent(3,19.67695);
   VbbHcc_ZPt_stack_7->SetBinContent(4,11.6456);
   VbbHcc_ZPt_stack_7->SetBinContent(5,6.22329);
   VbbHcc_ZPt_stack_7->SetBinContent(6,3.81614);
   VbbHcc_ZPt_stack_7->SetBinContent(7,1.826486);
   VbbHcc_ZPt_stack_7->SetBinContent(8,1.054137);
   VbbHcc_ZPt_stack_7->SetBinContent(9,0.8312875);
   VbbHcc_ZPt_stack_7->SetBinContent(10,0.1407014);
   VbbHcc_ZPt_stack_7->SetBinContent(11,0.109422);
   VbbHcc_ZPt_stack_7->SetBinContent(12,0.1701205);
   VbbHcc_ZPt_stack_7->SetBinContent(14,0.1844377);
   VbbHcc_ZPt_stack_7->SetBinContent(15,0.1247279);
   VbbHcc_ZPt_stack_7->SetBinError(2,2.371235);
   VbbHcc_ZPt_stack_7->SetBinError(3,1.805606);
   VbbHcc_ZPt_stack_7->SetBinError(4,1.40224);
   VbbHcc_ZPt_stack_7->SetBinError(5,1.028402);
   VbbHcc_ZPt_stack_7->SetBinError(6,0.8042964);
   VbbHcc_ZPt_stack_7->SetBinError(7,0.5337766);
   VbbHcc_ZPt_stack_7->SetBinError(8,0.4310139);
   VbbHcc_ZPt_stack_7->SetBinError(9,0.37628);
   VbbHcc_ZPt_stack_7->SetBinError(10,0.1407014);
   VbbHcc_ZPt_stack_7->SetBinError(11,0.109422);
   VbbHcc_ZPt_stack_7->SetBinError(12,0.1701205);
   VbbHcc_ZPt_stack_7->SetBinError(14,0.1844377);
   VbbHcc_ZPt_stack_7->SetBinError(15,0.1247279);
   VbbHcc_ZPt_stack_7->SetEntries(480);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_ZPt_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_stack_7->SetLineColor(ci);
   VbbHcc_ZPt_stack_7->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_stack_7,"");
   
   TH1D *VbbHcc_ZPt_stack_8 = new TH1D("VbbHcc_ZPt_stack_8","",40,0,2000);
   VbbHcc_ZPt_stack_8->SetBinContent(2,169.0356);
   VbbHcc_ZPt_stack_8->SetBinContent(3,70.79345);
   VbbHcc_ZPt_stack_8->SetBinContent(4,34.08894);
   VbbHcc_ZPt_stack_8->SetBinContent(5,15.90103);
   VbbHcc_ZPt_stack_8->SetBinContent(6,10.00464);
   VbbHcc_ZPt_stack_8->SetBinContent(7,3.77816);
   VbbHcc_ZPt_stack_8->SetBinContent(8,2.500962);
   VbbHcc_ZPt_stack_8->SetBinContent(9,0.6025414);
   VbbHcc_ZPt_stack_8->SetBinContent(10,0.1603694);
   VbbHcc_ZPt_stack_8->SetBinContent(12,0.4150588);
   VbbHcc_ZPt_stack_8->SetBinContent(14,0.2310328);
   VbbHcc_ZPt_stack_8->SetBinError(2,6.062829);
   VbbHcc_ZPt_stack_8->SetBinError(3,3.983642);
   VbbHcc_ZPt_stack_8->SetBinError(4,2.736465);
   VbbHcc_ZPt_stack_8->SetBinError(5,1.874046);
   VbbHcc_ZPt_stack_8->SetBinError(6,1.470968);
   VbbHcc_ZPt_stack_8->SetBinError(7,0.888994);
   VbbHcc_ZPt_stack_8->SetBinError(8,0.7395986);
   VbbHcc_ZPt_stack_8->SetBinError(9,0.3512719);
   VbbHcc_ZPt_stack_8->SetBinError(10,0.1603694);
   VbbHcc_ZPt_stack_8->SetBinError(12,0.2935213);
   VbbHcc_ZPt_stack_8->SetBinError(14,0.2310328);
   VbbHcc_ZPt_stack_8->SetEntries(1459);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_ZPt_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_stack_8->SetLineColor(ci);
   VbbHcc_ZPt_stack_8->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_stack_8,"");
   
   TH1D *VbbHcc_ZPt_stack_9 = new TH1D("VbbHcc_ZPt_stack_9","",40,0,2000);
   VbbHcc_ZPt_stack_9->SetBinContent(2,97.58277);
   VbbHcc_ZPt_stack_9->SetBinContent(3,52.5901);
   VbbHcc_ZPt_stack_9->SetBinContent(4,24.44528);
   VbbHcc_ZPt_stack_9->SetBinContent(5,12.65756);
   VbbHcc_ZPt_stack_9->SetBinContent(6,6.779223);
   VbbHcc_ZPt_stack_9->SetBinContent(7,3.734714);
   VbbHcc_ZPt_stack_9->SetBinContent(8,2.070387);
   VbbHcc_ZPt_stack_9->SetBinContent(9,1.082019);
   VbbHcc_ZPt_stack_9->SetBinContent(10,0.5070116);
   VbbHcc_ZPt_stack_9->SetBinContent(11,0.1949034);
   VbbHcc_ZPt_stack_9->SetBinContent(12,0.0977507);
   VbbHcc_ZPt_stack_9->SetBinContent(13,0.03759085);
   VbbHcc_ZPt_stack_9->SetBinContent(14,0.01393062);
   VbbHcc_ZPt_stack_9->SetBinContent(15,0.01660679);
   VbbHcc_ZPt_stack_9->SetBinContent(16,0.008822367);
   VbbHcc_ZPt_stack_9->SetBinContent(17,0.005980434);
   VbbHcc_ZPt_stack_9->SetBinContent(18,0.003701896);
   VbbHcc_ZPt_stack_9->SetBinContent(19,0.003980181);
   VbbHcc_ZPt_stack_9->SetBinError(2,0.4396543);
   VbbHcc_ZPt_stack_9->SetBinError(3,0.3214895);
   VbbHcc_ZPt_stack_9->SetBinError(4,0.2184467);
   VbbHcc_ZPt_stack_9->SetBinError(5,0.1574791);
   VbbHcc_ZPt_stack_9->SetBinError(6,0.1154586);
   VbbHcc_ZPt_stack_9->SetBinError(7,0.08501397);
   VbbHcc_ZPt_stack_9->SetBinError(8,0.06334192);
   VbbHcc_ZPt_stack_9->SetBinError(9,0.04610527);
   VbbHcc_ZPt_stack_9->SetBinError(10,0.03104997);
   VbbHcc_ZPt_stack_9->SetBinError(11,0.01925943);
   VbbHcc_ZPt_stack_9->SetBinError(12,0.01361188);
   VbbHcc_ZPt_stack_9->SetBinError(13,0.008786443);
   VbbHcc_ZPt_stack_9->SetBinError(14,0.004981148);
   VbbHcc_ZPt_stack_9->SetBinError(15,0.005606863);
   VbbHcc_ZPt_stack_9->SetBinError(16,0.004048571);
   VbbHcc_ZPt_stack_9->SetBinError(17,0.003455323);
   VbbHcc_ZPt_stack_9->SetBinError(18,0.002631007);
   VbbHcc_ZPt_stack_9->SetBinError(19,0.002814616);
   VbbHcc_ZPt_stack_9->SetEntries(115171);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_ZPt_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_stack_9->SetLineColor(ci);
   VbbHcc_ZPt_stack_9->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_stack_9,"");
   
   TH1D *VbbHcc_ZPt_stack_10 = new TH1D("VbbHcc_ZPt_stack_10","",40,0,2000);
   VbbHcc_ZPt_stack_10->SetBinContent(2,10.70591);
   VbbHcc_ZPt_stack_10->SetBinContent(3,9.577063);
   VbbHcc_ZPt_stack_10->SetBinContent(4,5.805723);
   VbbHcc_ZPt_stack_10->SetBinContent(5,3.050913);
   VbbHcc_ZPt_stack_10->SetBinContent(6,1.534925);
   VbbHcc_ZPt_stack_10->SetBinContent(7,0.7565182);
   VbbHcc_ZPt_stack_10->SetBinContent(8,0.4126498);
   VbbHcc_ZPt_stack_10->SetBinContent(9,0.2035327);
   VbbHcc_ZPt_stack_10->SetBinContent(10,0.1053787);
   VbbHcc_ZPt_stack_10->SetBinContent(11,0.07124505);
   VbbHcc_ZPt_stack_10->SetBinContent(12,0.03680506);
   VbbHcc_ZPt_stack_10->SetBinContent(13,0.03006536);
   VbbHcc_ZPt_stack_10->SetBinContent(14,0.01655269);
   VbbHcc_ZPt_stack_10->SetBinContent(15,0.01154678);
   VbbHcc_ZPt_stack_10->SetBinContent(16,0.00529483);
   VbbHcc_ZPt_stack_10->SetBinContent(17,0.002213078);
   VbbHcc_ZPt_stack_10->SetBinContent(18,0.003194722);
   VbbHcc_ZPt_stack_10->SetBinContent(19,0.003188016);
   VbbHcc_ZPt_stack_10->SetBinContent(20,0.001357389);
   VbbHcc_ZPt_stack_10->SetBinContent(21,0.001379177);
   VbbHcc_ZPt_stack_10->SetBinContent(22,0.001398998);
   VbbHcc_ZPt_stack_10->SetBinContent(23,0.002279512);
   VbbHcc_ZPt_stack_10->SetBinContent(24,0.001377501);
   VbbHcc_ZPt_stack_10->SetBinContent(25,0.000449816);
   VbbHcc_ZPt_stack_10->SetBinContent(26,0.0004353423);
   VbbHcc_ZPt_stack_10->SetBinContent(27,0.0004534816);
   VbbHcc_ZPt_stack_10->SetBinError(2,0.06942705);
   VbbHcc_ZPt_stack_10->SetBinError(3,0.06564047);
   VbbHcc_ZPt_stack_10->SetBinError(4,0.0510445);
   VbbHcc_ZPt_stack_10->SetBinError(5,0.03696168);
   VbbHcc_ZPt_stack_10->SetBinError(6,0.02621055);
   VbbHcc_ZPt_stack_10->SetBinError(7,0.01838584);
   VbbHcc_ZPt_stack_10->SetBinError(8,0.01356615);
   VbbHcc_ZPt_stack_10->SetBinError(9,0.009486201);
   VbbHcc_ZPt_stack_10->SetBinError(10,0.006828226);
   VbbHcc_ZPt_stack_10->SetBinError(11,0.005645789);
   VbbHcc_ZPt_stack_10->SetBinError(12,0.004058363);
   VbbHcc_ZPt_stack_10->SetBinError(13,0.00368125);
   VbbHcc_ZPt_stack_10->SetBinError(14,0.002725531);
   VbbHcc_ZPt_stack_10->SetBinError(15,0.00226968);
   VbbHcc_ZPt_stack_10->SetBinError(16,0.001503756);
   VbbHcc_ZPt_stack_10->SetBinError(17,0.0009912529);
   VbbHcc_ZPt_stack_10->SetBinError(18,0.001208801);
   VbbHcc_ZPt_stack_10->SetBinError(19,0.001207505);
   VbbHcc_ZPt_stack_10->SetBinError(20,0.0007836973);
   VbbHcc_ZPt_stack_10->SetBinError(21,0.0007976269);
   VbbHcc_ZPt_stack_10->SetBinError(22,0.0008086836);
   VbbHcc_ZPt_stack_10->SetBinError(23,0.001021034);
   VbbHcc_ZPt_stack_10->SetBinError(24,0.0007966673);
   VbbHcc_ZPt_stack_10->SetBinError(25,0.000449816);
   VbbHcc_ZPt_stack_10->SetBinError(26,0.0004353423);
   VbbHcc_ZPt_stack_10->SetBinError(27,0.0004534816);
   VbbHcc_ZPt_stack_10->SetEntries(72910);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_ZPt_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_stack_10->SetLineColor(ci);
   VbbHcc_ZPt_stack_10->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_stack_10,"");
   
   TH1D *VbbHcc_ZPt_stack_11 = new TH1D("VbbHcc_ZPt_stack_11","",40,0,2000);
   VbbHcc_ZPt_stack_11->SetBinContent(2,2.499814);
   VbbHcc_ZPt_stack_11->SetBinContent(3,1.819188);
   VbbHcc_ZPt_stack_11->SetBinContent(4,0.9103472);
   VbbHcc_ZPt_stack_11->SetBinContent(5,0.5337712);
   VbbHcc_ZPt_stack_11->SetBinContent(6,0.3233379);
   VbbHcc_ZPt_stack_11->SetBinContent(7,0.1542222);
   VbbHcc_ZPt_stack_11->SetBinContent(8,0.102758);
   VbbHcc_ZPt_stack_11->SetBinContent(9,0.04865472);
   VbbHcc_ZPt_stack_11->SetBinContent(10,0.03596606);
   VbbHcc_ZPt_stack_11->SetBinContent(11,0.01425859);
   VbbHcc_ZPt_stack_11->SetBinContent(13,0.002820432);
   VbbHcc_ZPt_stack_11->SetBinContent(14,0.002480913);
   VbbHcc_ZPt_stack_11->SetBinContent(18,2.430881e-05);
   VbbHcc_ZPt_stack_11->SetBinError(2,0.08157133);
   VbbHcc_ZPt_stack_11->SetBinError(3,0.06902179);
   VbbHcc_ZPt_stack_11->SetBinError(4,0.0483716);
   VbbHcc_ZPt_stack_11->SetBinError(5,0.03713686);
   VbbHcc_ZPt_stack_11->SetBinError(6,0.02884806);
   VbbHcc_ZPt_stack_11->SetBinError(7,0.02022404);
   VbbHcc_ZPt_stack_11->SetBinError(8,0.0168944);
   VbbHcc_ZPt_stack_11->SetBinError(9,0.01108136);
   VbbHcc_ZPt_stack_11->SetBinError(10,0.009490213);
   VbbHcc_ZPt_stack_11->SetBinError(11,0.005343807);
   VbbHcc_ZPt_stack_11->SetBinError(13,0.002820432);
   VbbHcc_ZPt_stack_11->SetBinError(14,0.002480913);
   VbbHcc_ZPt_stack_11->SetBinError(18,2.430881e-05);
   VbbHcc_ZPt_stack_11->SetEntries(2979);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_ZPt_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_stack_11->SetLineColor(ci);
   VbbHcc_ZPt_stack_11->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_stack_11,"");
   
   TH1D *VbbHcc_ZPt_stack_12 = new TH1D("VbbHcc_ZPt_stack_12","",40,0,2000);
   VbbHcc_ZPt_stack_12->SetBinContent(2,0.4164644);
   VbbHcc_ZPt_stack_12->SetBinContent(3,0.5958335);
   VbbHcc_ZPt_stack_12->SetBinContent(4,0.4535868);
   VbbHcc_ZPt_stack_12->SetBinContent(5,0.2423347);
   VbbHcc_ZPt_stack_12->SetBinContent(6,0.1253746);
   VbbHcc_ZPt_stack_12->SetBinContent(7,0.06762758);
   VbbHcc_ZPt_stack_12->SetBinContent(8,0.03196407);
   VbbHcc_ZPt_stack_12->SetBinContent(9,0.008507314);
   VbbHcc_ZPt_stack_12->SetBinContent(10,0.006256076);
   VbbHcc_ZPt_stack_12->SetBinContent(11,0.003498866);
   VbbHcc_ZPt_stack_12->SetBinContent(12,0.00155885);
   VbbHcc_ZPt_stack_12->SetBinContent(13,0.001626064);
   VbbHcc_ZPt_stack_12->SetBinContent(14,1.538988e-05);
   VbbHcc_ZPt_stack_12->SetBinContent(15,0.0003958677);
   VbbHcc_ZPt_stack_12->SetBinContent(16,0.0002727587);
   VbbHcc_ZPt_stack_12->SetBinError(2,0.01185244);
   VbbHcc_ZPt_stack_12->SetBinError(3,0.01412782);
   VbbHcc_ZPt_stack_12->SetBinError(4,0.01235158);
   VbbHcc_ZPt_stack_12->SetBinError(5,0.009008789);
   VbbHcc_ZPt_stack_12->SetBinError(6,0.00646942);
   VbbHcc_ZPt_stack_12->SetBinError(7,0.004824828);
   VbbHcc_ZPt_stack_12->SetBinError(8,0.003237521);
   VbbHcc_ZPt_stack_12->SetBinError(9,0.001689917);
   VbbHcc_ZPt_stack_12->SetBinError(10,0.00147657);
   VbbHcc_ZPt_stack_12->SetBinError(11,0.001059335);
   VbbHcc_ZPt_stack_12->SetBinError(12,0.000662648);
   VbbHcc_ZPt_stack_12->SetBinError(13,0.0006457299);
   VbbHcc_ZPt_stack_12->SetBinError(14,1.538988e-05);
   VbbHcc_ZPt_stack_12->SetBinError(15,0.0003411338);
   VbbHcc_ZPt_stack_12->SetBinError(16,0.0002727587);
   VbbHcc_ZPt_stack_12->SetEntries(6613);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_ZPt_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_stack_12->SetLineColor(ci);
   VbbHcc_ZPt_stack_12->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_ZPt__19 = new TH1D("VbbHcc_ZPt__19","",40,0,2000);
   VbbHcc_ZPt__19->SetBinContent(2,32446);
   VbbHcc_ZPt__19->SetBinContent(3,41884);
   VbbHcc_ZPt__19->SetBinContent(4,33428);
   VbbHcc_ZPt__19->SetBinContent(5,22059);
   VbbHcc_ZPt__19->SetBinContent(6,14170);
   VbbHcc_ZPt__19->SetBinContent(7,9584);
   VbbHcc_ZPt__19->SetBinContent(8,6854);
   VbbHcc_ZPt__19->SetBinContent(9,4915);
   VbbHcc_ZPt__19->SetBinContent(10,3070);
   VbbHcc_ZPt__19->SetBinContent(11,1917);
   VbbHcc_ZPt__19->SetBinContent(12,1106);
   VbbHcc_ZPt__19->SetBinContent(13,685);
   VbbHcc_ZPt__19->SetBinContent(14,427);
   VbbHcc_ZPt__19->SetBinContent(15,280);
   VbbHcc_ZPt__19->SetBinContent(16,170);
   VbbHcc_ZPt__19->SetBinContent(17,128);
   VbbHcc_ZPt__19->SetBinContent(18,76);
   VbbHcc_ZPt__19->SetBinContent(19,53);
   VbbHcc_ZPt__19->SetBinContent(20,29);
   VbbHcc_ZPt__19->SetBinContent(21,30);
   VbbHcc_ZPt__19->SetBinContent(22,23);
   VbbHcc_ZPt__19->SetBinContent(23,6);
   VbbHcc_ZPt__19->SetBinContent(24,13);
   VbbHcc_ZPt__19->SetBinContent(25,4);
   VbbHcc_ZPt__19->SetBinContent(26,9);
   VbbHcc_ZPt__19->SetBinContent(27,3);
   VbbHcc_ZPt__19->SetBinContent(28,2);
   VbbHcc_ZPt__19->SetBinContent(29,3);
   VbbHcc_ZPt__19->SetBinContent(30,1);
   VbbHcc_ZPt__19->SetBinContent(31,1);
   VbbHcc_ZPt__19->SetBinContent(32,1);
   VbbHcc_ZPt__19->SetEntries(173377);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt__19->SetLineColor(ci);
   VbbHcc_ZPt__19->SetLineWidth(2);
   VbbHcc_ZPt__19->SetMarkerStyle(20);
   VbbHcc_ZPt__19->SetMarkerSize(1.2);
   VbbHcc_ZPt__19->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt__19->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt__19->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt__19->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt__19->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt__19->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt__19->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt__19->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt__19->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt__19->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt__19->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt__19->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt__19->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt__19->GetZaxis()->SetTitleFont(42);
   VbbHcc_ZPt__19->Draw("same E");
   
   Double_t Graph_from_VbbHcc_ZPt_fx1019[40] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075,
   1125,
   1175,
   1225,
   1275,
   1325,
   1375,
   1425,
   1475,
   1525,
   1575,
   1625,
   1675,
   1725,
   1775,
   1825,
   1875,
   1925,
   1975};
   Double_t Graph_from_VbbHcc_ZPt_fy1019[40] = {
   0,
   395848.6,
   462083.6,
   257886.9,
   98906.39,
   36793.46,
   13187,
   6500.625,
   3113.058,
   1824.399,
   986.1993,
   596.0396,
   432.6915,
   247.6667,
   135.7778,
   97.84415,
   70.55926,
   41.62836,
   37.67496,
   17.32613,
   13.91272,
   9.297517,
   8.412509,
   5.240725,
   4.255132,
   2.797452,
   1.083826,
   1.753617,
   1.172815,
   1.161547,
   0.1725745,
   0.526293,
   0.3296238,
   0.001184084,
   0.08705414,
   0.03349571,
   0.2893557,
   0,
   0.1057697,
   0};
   Double_t Graph_from_VbbHcc_ZPt_fex1019[40] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_VbbHcc_ZPt_fey1019[40] = {
   0,
   9041.035,
   9966.894,
   7159.263,
   3488.101,
   1177.789,
   394.1743,
   217.0954,
   117.9143,
   82.80288,
   57.44843,
   37.1822,
   30.67507,
   19.8159,
   10.19558,
   6.129177,
   7.057434,
   3.188315,
   3.104364,
   1.735936,
   1.442756,
   1.148999,
   1.075449,
   0.7962529,
   0.7691938,
   0.6216758,
   0.3751561,
   0.609859,
   0.4699719,
   0.4268565,
   0.1206173,
   0.2778373,
   0.2123129,
   0.000684471,
   0.08592936,
   0.03322382,
   0.2218846,
   0,
   0.07425824,
   0};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_ZPt_fx1019,Graph_from_VbbHcc_ZPt_fy1019,Graph_from_VbbHcc_ZPt_fex1019,Graph_from_VbbHcc_ZPt_fey1019);
   gre->SetName("Graph_from_VbbHcc_ZPt");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_ZPt1019 = new TH1F("Graph_Graph_from_VbbHcc_ZPt1019","",100,0,2200);
   Graph_Graph_from_VbbHcc_ZPt1019->SetMinimum(0);
   Graph_Graph_from_VbbHcc_ZPt1019->SetMaximum(519255.5);
   Graph_Graph_from_VbbHcc_ZPt1019->SetDirectory(0);
   Graph_Graph_from_VbbHcc_ZPt1019->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_ZPt1019->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_ZPt1019->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_ZPt1019->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_ZPt1019->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_ZPt1019->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_ZPt1019->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_ZPt1019->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_ZPt1019->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_ZPt1019->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_ZPt1019->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_ZPt1019->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_ZPt1019->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_ZPt1019->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_ZPt1019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_ZPt1019);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_ZPt","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_ZPt_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_ZPt_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_ZPt_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_ZPt_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_ZPt_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_ZPt_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_ZPt_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_ZPt_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_ZPt_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_ZPt_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_ZPt_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_ZPt_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_ZPt","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   ZPt_VbbHcc_17->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(116.1295,-0.2774193,1562.903,1.658065);
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
   
   TH1D *data_mc_ratio__20 = new TH1D("data_mc_ratio__20","",40,0,2000);
   data_mc_ratio__20->SetBinContent(2,0.08196568);
   data_mc_ratio__20->SetBinContent(3,0.09064161);
   data_mc_ratio__20->SetBinContent(4,0.1296227);
   data_mc_ratio__20->SetBinContent(5,0.2230291);
   data_mc_ratio__20->SetBinContent(6,0.3851228);
   data_mc_ratio__20->SetBinContent(7,0.7267762);
   data_mc_ratio__20->SetBinContent(8,1.05436);
   data_mc_ratio__20->SetBinContent(9,1.578834);
   data_mc_ratio__20->SetBinContent(10,1.682746);
   data_mc_ratio__20->SetBinContent(11,1.943826);
   data_mc_ratio__20->SetBinContent(12,1.855581);
   data_mc_ratio__20->SetBinContent(13,1.583114);
   data_mc_ratio__20->SetBinContent(14,1.724091);
   data_mc_ratio__20->SetBinContent(15,2.062193);
   data_mc_ratio__20->SetBinContent(16,1.737457);
   data_mc_ratio__20->SetBinContent(17,1.814078);
   data_mc_ratio__20->SetBinContent(18,1.825678);
   data_mc_ratio__20->SetBinContent(19,1.40677);
   data_mc_ratio__20->SetBinContent(20,1.673773);
   data_mc_ratio__20->SetBinContent(21,2.1563);
   data_mc_ratio__20->SetBinContent(22,2.473779);
   data_mc_ratio__20->SetBinContent(23,0.7132236);
   data_mc_ratio__20->SetBinContent(24,2.480573);
   data_mc_ratio__20->SetBinContent(25,0.9400413);
   data_mc_ratio__20->SetBinContent(26,3.217213);
   data_mc_ratio__20->SetBinContent(27,2.767973);
   data_mc_ratio__20->SetBinContent(28,1.1405);
   data_mc_ratio__20->SetBinContent(29,2.557948);
   data_mc_ratio__20->SetBinContent(30,0.8609211);
   data_mc_ratio__20->SetBinContent(31,5.794599);
   data_mc_ratio__20->SetBinContent(32,1.900082);
   data_mc_ratio__20->SetBinError(2,0.000455042);
   data_mc_ratio__20->SetBinError(3,0.0004428978);
   data_mc_ratio__20->SetBinError(4,0.0007089668);
   data_mc_ratio__20->SetBinError(5,0.001501649);
   data_mc_ratio__20->SetBinError(6,0.003235298);
   data_mc_ratio__20->SetBinError(7,0.007423818);
   data_mc_ratio__20->SetBinError(8,0.01273553);
   data_mc_ratio__20->SetBinError(9,0.02252032);
   data_mc_ratio__20->SetBinError(10,0.03037032);
   data_mc_ratio__20->SetBinError(11,0.04439626);
   data_mc_ratio__20->SetBinError(12,0.05579592);
   data_mc_ratio__20->SetBinError(13,0.06048768);
   data_mc_ratio__20->SetBinError(14,0.08343462);
   data_mc_ratio__20->SetBinError(15,0.1232396);
   data_mc_ratio__20->SetBinError(16,0.1332569);
   data_mc_ratio__20->SetBinError(17,0.1603434);
   data_mc_ratio__20->SetBinError(18,0.2094197);
   data_mc_ratio__20->SetBinError(19,0.1932347);
   data_mc_ratio__20->SetBinError(20,0.3108118);
   data_mc_ratio__20->SetBinError(21,0.3936847);
   data_mc_ratio__20->SetBinError(22,0.5158185);
   data_mc_ratio__20->SetBinError(23,0.2911723);
   data_mc_ratio__20->SetBinError(24,0.6879872);
   data_mc_ratio__20->SetBinError(25,0.4700206);
   data_mc_ratio__20->SetBinError(26,1.072404);
   data_mc_ratio__20->SetBinError(27,1.59809);
   data_mc_ratio__20->SetBinError(28,0.8064554);
   data_mc_ratio__20->SetBinError(29,1.476832);
   data_mc_ratio__20->SetBinError(30,0.8609211);
   data_mc_ratio__20->SetBinError(31,5.794599);
   data_mc_ratio__20->SetBinError(32,1.900082);
   data_mc_ratio__20->SetMinimum(0.4);
   data_mc_ratio__20->SetMaximum(1.6);
   data_mc_ratio__20->SetEntries(38.42588);
   data_mc_ratio__20->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__20->SetLineColor(ci);
   data_mc_ratio__20->SetLineWidth(2);
   data_mc_ratio__20->SetMarkerStyle(20);
   data_mc_ratio__20->SetMarkerSize(1.2);
   data_mc_ratio__20->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   data_mc_ratio__20->GetXaxis()->SetRange(7,30);
   data_mc_ratio__20->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__20->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__20->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__20->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__20->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__20->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__20->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__20->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__20->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__20->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__20->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__20->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__20->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__20->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__20->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__20->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__20->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1020[40] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075,
   1125,
   1175,
   1225,
   1275,
   1325,
   1375,
   1425,
   1475,
   1525,
   1575,
   1625,
   1675,
   1725,
   1775,
   1825,
   1875,
   1925,
   1975};
   Double_t Graph_from_mc_statistical_error_fy1020[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1020[40] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_mc_statistical_error_fey1020[40] = {
   0,
   0.02283963,
   0.02156946,
   0.02776125,
   0.03526669,
   0.03201084,
   0.02989112,
   0.03339608,
   0.03787733,
   0.04538639,
   0.05825235,
   0.06238208,
   0.07089363,
   0.08001035,
   0.07509017,
   0.06264224,
   0.1000214,
   0.07658998,
   0.0823986,
   0.1001918,
   0.1037005,
   0.1235813,
   0.1278393,
   0.1519356,
   0.1807685,
   0.2222293,
   0.3461406,
   0.3477721,
   0.4007213,
   0.3674898,
   0.6989289,
   0.5279137,
   0.6441066,
   0.5780595,
   0.9870795,
   0.9918828,
   0.766823,
   0,
   0.702075,
   0};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1020,Graph_from_mc_statistical_error_fy1020,Graph_from_mc_statistical_error_fex1020,Graph_from_mc_statistical_error_fey1020);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1020 = new TH1F("Graph_Graph_from_mc_statistical_error1020","",100,0,2200);
   Graph_Graph_from_mc_statistical_error1020->SetMinimum(0.007305482);
   Graph_Graph_from_mc_statistical_error1020->SetMaximum(2.190259);
   Graph_Graph_from_mc_statistical_error1020->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1020->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1020->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1020->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1020->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1020->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1020->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1020->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1020->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1020->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1020->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1020->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1020->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1020->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1020->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1020);
   
   gre->Draw("e2");
   TLine *line = new TLine(300,1,1500,1);
   line->Draw();
   bottomPad->Modified();
   ZPt_VbbHcc_17->cd();
   ZPt_VbbHcc_17->Modified();
   ZPt_VbbHcc_17->cd();
   ZPt_VbbHcc_17->SetSelected(ZPt_VbbHcc_17);
}
