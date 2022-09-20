void HPt_VbbHcc_all()
{
//=========Macro generated from canvas: HPt_VbbHcc_all/HPt_VbbHcc_all
//=========  (Tue Sep 20 13:13:10 2022) by ROOT version 6.14/09
   TCanvas *HPt_VbbHcc_all = new TCanvas("HPt_VbbHcc_all", "HPt_VbbHcc_all",0,0,600,600);
   HPt_VbbHcc_all->SetHighLightColor(2);
   HPt_VbbHcc_all->Range(0,0,1,1);
   HPt_VbbHcc_all->SetFillColor(0);
   HPt_VbbHcc_all->SetFillStyle(4000);
   HPt_VbbHcc_all->SetBorderMode(0);
   HPt_VbbHcc_all->SetBorderSize(2);
   HPt_VbbHcc_all->SetFrameFillStyle(1000);
   HPt_VbbHcc_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(116.1295,-2085.065,1562.903,2083280);
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
   st->SetMinimum(0.3);
   st->SetMaximum(1785470);
   
   TH1F *st_stack_16 = new TH1F("st_stack_16","",40,0,2000);
   st_stack_16->SetMinimum(0.3);
   st_stack_16->SetMaximum(1874743);
   st_stack_16->SetDirectory(0);
   st_stack_16->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_16->SetLineColor(ci);
   st_stack_16->GetXaxis()->SetRange(7,30);
   st_stack_16->GetXaxis()->SetLabelFont(42);
   st_stack_16->GetXaxis()->SetLabelSize(0.035);
   st_stack_16->GetXaxis()->SetTitleSize(0.035);
   st_stack_16->GetXaxis()->SetTitleFont(42);
   st_stack_16->GetYaxis()->SetTitle("Events/50.0");
   st_stack_16->GetYaxis()->SetLabelFont(42);
   st_stack_16->GetYaxis()->SetLabelSize(0.05);
   st_stack_16->GetYaxis()->SetTitleSize(0.057);
   st_stack_16->GetYaxis()->SetTitleOffset(1.2);
   st_stack_16->GetYaxis()->SetTitleFont(42);
   st_stack_16->GetZaxis()->SetLabelFont(42);
   st_stack_16->GetZaxis()->SetLabelSize(0.035);
   st_stack_16->GetZaxis()->SetTitleSize(0.035);
   st_stack_16->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_16);
   
   
   TH1D *VbbHcc_HPt_all_stack_1 = new TH1D("VbbHcc_HPt_all_stack_1","",40,0,2000);
   VbbHcc_HPt_all_stack_1->SetBinContent(1,138761.3);
   VbbHcc_HPt_all_stack_1->SetBinContent(2,571417.6);
   VbbHcc_HPt_all_stack_1->SetBinContent(3,707117.6);
   VbbHcc_HPt_all_stack_1->SetBinContent(4,429383.2);
   VbbHcc_HPt_all_stack_1->SetBinContent(5,166422.2);
   VbbHcc_HPt_all_stack_1->SetBinContent(6,69797.67);
   VbbHcc_HPt_all_stack_1->SetBinContent(7,27538.24);
   VbbHcc_HPt_all_stack_1->SetBinContent(8,12892.06);
   VbbHcc_HPt_all_stack_1->SetBinContent(9,6328.664);
   VbbHcc_HPt_all_stack_1->SetBinContent(10,3374.309);
   VbbHcc_HPt_all_stack_1->SetBinContent(11,1993.204);
   VbbHcc_HPt_all_stack_1->SetBinContent(12,1367.36);
   VbbHcc_HPt_all_stack_1->SetBinContent(13,680.7598);
   VbbHcc_HPt_all_stack_1->SetBinContent(14,373.6513);
   VbbHcc_HPt_all_stack_1->SetBinContent(15,262.0369);
   VbbHcc_HPt_all_stack_1->SetBinContent(16,168.0405);
   VbbHcc_HPt_all_stack_1->SetBinContent(17,107.5863);
   VbbHcc_HPt_all_stack_1->SetBinContent(18,69.71916);
   VbbHcc_HPt_all_stack_1->SetBinContent(19,56.52849);
   VbbHcc_HPt_all_stack_1->SetBinContent(20,43.33601);
   VbbHcc_HPt_all_stack_1->SetBinContent(21,17.39013);
   VbbHcc_HPt_all_stack_1->SetBinContent(22,15.37938);
   VbbHcc_HPt_all_stack_1->SetBinContent(23,11.36554);
   VbbHcc_HPt_all_stack_1->SetBinContent(24,6.452664);
   VbbHcc_HPt_all_stack_1->SetBinContent(25,6.468677);
   VbbHcc_HPt_all_stack_1->SetBinContent(26,1.709101);
   VbbHcc_HPt_all_stack_1->SetBinContent(27,2.271894);
   VbbHcc_HPt_all_stack_1->SetBinContent(28,2.284254);
   VbbHcc_HPt_all_stack_1->SetBinContent(30,1.811535);
   VbbHcc_HPt_all_stack_1->SetBinContent(31,0.6432205);
   VbbHcc_HPt_all_stack_1->SetBinContent(33,0.5325397);
   VbbHcc_HPt_all_stack_1->SetBinError(1,5844.863);
   VbbHcc_HPt_all_stack_1->SetBinError(2,12093.45);
   VbbHcc_HPt_all_stack_1->SetBinError(3,13312.09);
   VbbHcc_HPt_all_stack_1->SetBinError(4,9706.281);
   VbbHcc_HPt_all_stack_1->SetBinError(5,4717.348);
   VbbHcc_HPt_all_stack_1->SetBinError(6,2008.459);
   VbbHcc_HPt_all_stack_1->SetBinError(7,683.8589);
   VbbHcc_HPt_all_stack_1->SetBinError(8,325.617);
   VbbHcc_HPt_all_stack_1->SetBinError(9,191.6307);
   VbbHcc_HPt_all_stack_1->SetBinError(10,122.4917);
   VbbHcc_HPt_all_stack_1->SetBinError(11,83.37692);
   VbbHcc_HPt_all_stack_1->SetBinError(12,66.05679);
   VbbHcc_HPt_all_stack_1->SetBinError(13,41.77768);
   VbbHcc_HPt_all_stack_1->SetBinError(14,26.99808);
   VbbHcc_HPt_all_stack_1->SetBinError(15,17.94233);
   VbbHcc_HPt_all_stack_1->SetBinError(16,13.29951);
   VbbHcc_HPt_all_stack_1->SetBinError(17,6.615045);
   VbbHcc_HPt_all_stack_1->SetBinError(18,4.999017);
   VbbHcc_HPt_all_stack_1->SetBinError(19,4.547435);
   VbbHcc_HPt_all_stack_1->SetBinError(20,3.746065);
   VbbHcc_HPt_all_stack_1->SetBinError(21,1.916022);
   VbbHcc_HPt_all_stack_1->SetBinError(22,1.860586);
   VbbHcc_HPt_all_stack_1->SetBinError(23,1.508708);
   VbbHcc_HPt_all_stack_1->SetBinError(24,1.259336);
   VbbHcc_HPt_all_stack_1->SetBinError(25,1.12811);
   VbbHcc_HPt_all_stack_1->SetBinError(26,0.5700471);
   VbbHcc_HPt_all_stack_1->SetBinError(27,0.6562493);
   VbbHcc_HPt_all_stack_1->SetBinError(28,0.6598113);
   VbbHcc_HPt_all_stack_1->SetBinError(30,0.6045332);
   VbbHcc_HPt_all_stack_1->SetBinError(31,0.371587);
   VbbHcc_HPt_all_stack_1->SetBinError(33,0.307647);
   VbbHcc_HPt_all_stack_1->SetEntries(51654);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_HPt_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_all_stack_1->SetLineColor(ci);
   VbbHcc_HPt_all_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_all_stack_1,"");
   
   TH1D *VbbHcc_HPt_all_stack_2 = new TH1D("VbbHcc_HPt_all_stack_2","",40,0,2000);
   VbbHcc_HPt_all_stack_2->SetBinContent(1,1887.877);
   VbbHcc_HPt_all_stack_2->SetBinContent(2,5908.743);
   VbbHcc_HPt_all_stack_2->SetBinContent(3,5007.793);
   VbbHcc_HPt_all_stack_2->SetBinContent(4,2484.771);
   VbbHcc_HPt_all_stack_2->SetBinContent(5,1226.481);
   VbbHcc_HPt_all_stack_2->SetBinContent(6,632.9026);
   VbbHcc_HPt_all_stack_2->SetBinContent(7,384.6955);
   VbbHcc_HPt_all_stack_2->SetBinContent(8,226.6341);
   VbbHcc_HPt_all_stack_2->SetBinContent(9,154.3405);
   VbbHcc_HPt_all_stack_2->SetBinContent(10,93.69173);
   VbbHcc_HPt_all_stack_2->SetBinContent(11,57.23659);
   VbbHcc_HPt_all_stack_2->SetBinContent(12,43.65461);
   VbbHcc_HPt_all_stack_2->SetBinContent(13,27.88916);
   VbbHcc_HPt_all_stack_2->SetBinContent(14,19.17366);
   VbbHcc_HPt_all_stack_2->SetBinContent(15,10.52725);
   VbbHcc_HPt_all_stack_2->SetBinContent(16,3.934607);
   VbbHcc_HPt_all_stack_2->SetBinContent(17,4.002904);
   VbbHcc_HPt_all_stack_2->SetBinContent(18,2.3136);
   VbbHcc_HPt_all_stack_2->SetBinContent(19,1.661722);
   VbbHcc_HPt_all_stack_2->SetBinContent(20,1.46142);
   VbbHcc_HPt_all_stack_2->SetBinContent(21,1.142048);
   VbbHcc_HPt_all_stack_2->SetBinContent(22,3.024078);
   VbbHcc_HPt_all_stack_2->SetBinContent(23,1.090234);
   VbbHcc_HPt_all_stack_2->SetBinContent(24,0.8989571);
   VbbHcc_HPt_all_stack_2->SetBinContent(26,0.8112615);
   VbbHcc_HPt_all_stack_2->SetBinContent(27,0.3149849);
   VbbHcc_HPt_all_stack_2->SetBinContent(28,0.04378173);
   VbbHcc_HPt_all_stack_2->SetBinContent(29,0.09148934);
   VbbHcc_HPt_all_stack_2->SetBinError(1,18.4483);
   VbbHcc_HPt_all_stack_2->SetBinError(2,32.12736);
   VbbHcc_HPt_all_stack_2->SetBinError(3,30.16377);
   VbbHcc_HPt_all_stack_2->SetBinError(4,21.74016);
   VbbHcc_HPt_all_stack_2->SetBinError(5,15.54547);
   VbbHcc_HPt_all_stack_2->SetBinError(6,11.50207);
   VbbHcc_HPt_all_stack_2->SetBinError(7,9.157296);
   VbbHcc_HPt_all_stack_2->SetBinError(8,7.056369);
   VbbHcc_HPt_all_stack_2->SetBinError(9,6.113598);
   VbbHcc_HPt_all_stack_2->SetBinError(10,4.721983);
   VbbHcc_HPt_all_stack_2->SetBinError(11,3.749793);
   VbbHcc_HPt_all_stack_2->SetBinError(12,3.314466);
   VbbHcc_HPt_all_stack_2->SetBinError(13,2.625377);
   VbbHcc_HPt_all_stack_2->SetBinError(14,2.209802);
   VbbHcc_HPt_all_stack_2->SetBinError(15,1.589399);
   VbbHcc_HPt_all_stack_2->SetBinError(16,1.125709);
   VbbHcc_HPt_all_stack_2->SetBinError(17,1.037609);
   VbbHcc_HPt_all_stack_2->SetBinError(18,0.7609832);
   VbbHcc_HPt_all_stack_2->SetBinError(19,0.6252588);
   VbbHcc_HPt_all_stack_2->SetBinError(20,0.6165386);
   VbbHcc_HPt_all_stack_2->SetBinError(21,0.5773433);
   VbbHcc_HPt_all_stack_2->SetBinError(22,0.92138);
   VbbHcc_HPt_all_stack_2->SetBinError(23,0.5538538);
   VbbHcc_HPt_all_stack_2->SetBinError(24,0.5554293);
   VbbHcc_HPt_all_stack_2->SetBinError(26,0.4702474);
   VbbHcc_HPt_all_stack_2->SetBinError(27,0.3708766);
   VbbHcc_HPt_all_stack_2->SetBinError(28,0.04378173);
   VbbHcc_HPt_all_stack_2->SetBinError(29,0.06469273);
   VbbHcc_HPt_all_stack_2->SetEntries(236928);

   ci = TColor::GetColor("#660066");
   VbbHcc_HPt_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_all_stack_2->SetLineColor(ci);
   VbbHcc_HPt_all_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_all_stack_2,"");
   
   TH1D *VbbHcc_HPt_all_stack_3 = new TH1D("VbbHcc_HPt_all_stack_3","",40,0,2000);
   VbbHcc_HPt_all_stack_3->SetBinContent(1,37859.65);
   VbbHcc_HPt_all_stack_3->SetBinContent(2,108232.1);
   VbbHcc_HPt_all_stack_3->SetBinContent(3,86435.43);
   VbbHcc_HPt_all_stack_3->SetBinContent(4,34827.84);
   VbbHcc_HPt_all_stack_3->SetBinContent(5,15249.61);
   VbbHcc_HPt_all_stack_3->SetBinContent(6,7621.06);
   VbbHcc_HPt_all_stack_3->SetBinContent(7,4087.328);
   VbbHcc_HPt_all_stack_3->SetBinContent(8,2353.815);
   VbbHcc_HPt_all_stack_3->SetBinContent(9,1359.96);
   VbbHcc_HPt_all_stack_3->SetBinContent(10,829.051);
   VbbHcc_HPt_all_stack_3->SetBinContent(11,522.6675);
   VbbHcc_HPt_all_stack_3->SetBinContent(12,328.8782);
   VbbHcc_HPt_all_stack_3->SetBinContent(13,211.1969);
   VbbHcc_HPt_all_stack_3->SetBinContent(14,141.5183);
   VbbHcc_HPt_all_stack_3->SetBinContent(15,89.85485);
   VbbHcc_HPt_all_stack_3->SetBinContent(16,57.3238);
   VbbHcc_HPt_all_stack_3->SetBinContent(17,40.47142);
   VbbHcc_HPt_all_stack_3->SetBinContent(18,25.64164);
   VbbHcc_HPt_all_stack_3->SetBinContent(19,17.63115);
   VbbHcc_HPt_all_stack_3->SetBinContent(20,11.76865);
   VbbHcc_HPt_all_stack_3->SetBinContent(21,9.469029);
   VbbHcc_HPt_all_stack_3->SetBinContent(22,5.300643);
   VbbHcc_HPt_all_stack_3->SetBinContent(23,3.552607);
   VbbHcc_HPt_all_stack_3->SetBinContent(24,3.668624);
   VbbHcc_HPt_all_stack_3->SetBinContent(25,2.013724);
   VbbHcc_HPt_all_stack_3->SetBinContent(26,0.9271717);
   VbbHcc_HPt_all_stack_3->SetBinContent(27,1.058863);
   VbbHcc_HPt_all_stack_3->SetBinContent(28,0.6156443);
   VbbHcc_HPt_all_stack_3->SetBinContent(29,0.4469192);
   VbbHcc_HPt_all_stack_3->SetBinContent(31,0.1760025);
   VbbHcc_HPt_all_stack_3->SetBinContent(32,0.2831061);
   VbbHcc_HPt_all_stack_3->SetBinContent(33,0.05636825);
   VbbHcc_HPt_all_stack_3->SetBinContent(34,0.1409789);
   VbbHcc_HPt_all_stack_3->SetBinError(1,51.83588);
   VbbHcc_HPt_all_stack_3->SetBinError(2,88.01003);
   VbbHcc_HPt_all_stack_3->SetBinError(3,78.82104);
   VbbHcc_HPt_all_stack_3->SetBinError(4,49.57254);
   VbbHcc_HPt_all_stack_3->SetBinError(5,32.58714);
   VbbHcc_HPt_all_stack_3->SetBinError(6,23.03667);
   VbbHcc_HPt_all_stack_3->SetBinError(7,16.89243);
   VbbHcc_HPt_all_stack_3->SetBinError(8,12.86004);
   VbbHcc_HPt_all_stack_3->SetBinError(9,9.794395);
   VbbHcc_HPt_all_stack_3->SetBinError(10,7.689154);
   VbbHcc_HPt_all_stack_3->SetBinError(11,6.113306);
   VbbHcc_HPt_all_stack_3->SetBinError(12,4.85663);
   VbbHcc_HPt_all_stack_3->SetBinError(13,3.899646);
   VbbHcc_HPt_all_stack_3->SetBinError(14,3.202734);
   VbbHcc_HPt_all_stack_3->SetBinError(15,2.558918);
   VbbHcc_HPt_all_stack_3->SetBinError(16,2.07296);
   VbbHcc_HPt_all_stack_3->SetBinError(17,1.715828);
   VbbHcc_HPt_all_stack_3->SetBinError(18,1.356718);
   VbbHcc_HPt_all_stack_3->SetBinError(19,1.133954);
   VbbHcc_HPt_all_stack_3->SetBinError(20,0.922829);
   VbbHcc_HPt_all_stack_3->SetBinError(21,0.8259296);
   VbbHcc_HPt_all_stack_3->SetBinError(22,0.6120853);
   VbbHcc_HPt_all_stack_3->SetBinError(23,0.5308453);
   VbbHcc_HPt_all_stack_3->SetBinError(24,0.525176);
   VbbHcc_HPt_all_stack_3->SetBinError(25,0.3887895);
   VbbHcc_HPt_all_stack_3->SetBinError(26,0.2733066);
   VbbHcc_HPt_all_stack_3->SetBinError(27,0.3055593);
   VbbHcc_HPt_all_stack_3->SetBinError(28,0.2218606);
   VbbHcc_HPt_all_stack_3->SetBinError(29,0.182783);
   VbbHcc_HPt_all_stack_3->SetBinError(31,0.1244581);
   VbbHcc_HPt_all_stack_3->SetBinError(32,0.1415544);
   VbbHcc_HPt_all_stack_3->SetBinError(33,0.05636825);
   VbbHcc_HPt_all_stack_3->SetBinError(34,0.09968716);
   VbbHcc_HPt_all_stack_3->SetEntries(4563270);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_HPt_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_all_stack_3->SetLineColor(ci);
   VbbHcc_HPt_all_stack_3->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_all_stack_3,"");
   
   TH1D *VbbHcc_HPt_all_stack_4 = new TH1D("VbbHcc_HPt_all_stack_4","",40,0,2000);
   VbbHcc_HPt_all_stack_4->SetBinContent(1,785.8732);
   VbbHcc_HPt_all_stack_4->SetBinContent(2,2801.696);
   VbbHcc_HPt_all_stack_4->SetBinContent(3,3789.465);
   VbbHcc_HPt_all_stack_4->SetBinContent(4,3308.381);
   VbbHcc_HPt_all_stack_4->SetBinContent(5,1998.744);
   VbbHcc_HPt_all_stack_4->SetBinContent(6,1065.349);
   VbbHcc_HPt_all_stack_4->SetBinContent(7,577.9418);
   VbbHcc_HPt_all_stack_4->SetBinContent(8,335.4966);
   VbbHcc_HPt_all_stack_4->SetBinContent(9,203.659);
   VbbHcc_HPt_all_stack_4->SetBinContent(10,109.0569);
   VbbHcc_HPt_all_stack_4->SetBinContent(11,66.23087);
   VbbHcc_HPt_all_stack_4->SetBinContent(12,45.63036);
   VbbHcc_HPt_all_stack_4->SetBinContent(13,26.40355);
   VbbHcc_HPt_all_stack_4->SetBinContent(14,18.76635);
   VbbHcc_HPt_all_stack_4->SetBinContent(15,12.2849);
   VbbHcc_HPt_all_stack_4->SetBinContent(16,8.395054);
   VbbHcc_HPt_all_stack_4->SetBinContent(17,6.883719);
   VbbHcc_HPt_all_stack_4->SetBinContent(18,4.582427);
   VbbHcc_HPt_all_stack_4->SetBinContent(19,2.779073);
   VbbHcc_HPt_all_stack_4->SetBinContent(20,2.678224);
   VbbHcc_HPt_all_stack_4->SetBinContent(21,1.069059);
   VbbHcc_HPt_all_stack_4->SetBinContent(22,1.176105);
   VbbHcc_HPt_all_stack_4->SetBinContent(23,0.7616387);
   VbbHcc_HPt_all_stack_4->SetBinContent(24,0.3142098);
   VbbHcc_HPt_all_stack_4->SetBinContent(25,0.2015326);
   VbbHcc_HPt_all_stack_4->SetBinContent(26,0.09425397);
   VbbHcc_HPt_all_stack_4->SetBinContent(27,0.17369);
   VbbHcc_HPt_all_stack_4->SetBinContent(28,0.07712674);
   VbbHcc_HPt_all_stack_4->SetBinContent(29,0.3259808);
   VbbHcc_HPt_all_stack_4->SetBinContent(34,0.09695139);
   VbbHcc_HPt_all_stack_4->SetBinError(1,15.01256);
   VbbHcc_HPt_all_stack_4->SetBinError(2,28.75567);
   VbbHcc_HPt_all_stack_4->SetBinError(3,33.34963);
   VbbHcc_HPt_all_stack_4->SetBinError(4,30.20328);
   VbbHcc_HPt_all_stack_4->SetBinError(5,21.21921);
   VbbHcc_HPt_all_stack_4->SetBinError(6,12.42614);
   VbbHcc_HPt_all_stack_4->SetBinError(7,7.499288);
   VbbHcc_HPt_all_stack_4->SetBinError(8,5.201919);
   VbbHcc_HPt_all_stack_4->SetBinError(9,3.901356);
   VbbHcc_HPt_all_stack_4->SetBinError(10,2.836486);
   VbbHcc_HPt_all_stack_4->SetBinError(11,2.214254);
   VbbHcc_HPt_all_stack_4->SetBinError(12,1.839188);
   VbbHcc_HPt_all_stack_4->SetBinError(13,1.399515);
   VbbHcc_HPt_all_stack_4->SetBinError(14,1.176656);
   VbbHcc_HPt_all_stack_4->SetBinError(15,0.9852677);
   VbbHcc_HPt_all_stack_4->SetBinError(16,0.7997544);
   VbbHcc_HPt_all_stack_4->SetBinError(17,0.7144194);
   VbbHcc_HPt_all_stack_4->SetBinError(18,0.5896274);
   VbbHcc_HPt_all_stack_4->SetBinError(19,0.4498225);
   VbbHcc_HPt_all_stack_4->SetBinError(20,0.4534613);
   VbbHcc_HPt_all_stack_4->SetBinError(21,0.2875976);
   VbbHcc_HPt_all_stack_4->SetBinError(22,0.2813803);
   VbbHcc_HPt_all_stack_4->SetBinError(23,0.2415938);
   VbbHcc_HPt_all_stack_4->SetBinError(24,0.1587972);
   VbbHcc_HPt_all_stack_4->SetBinError(25,0.1218615);
   VbbHcc_HPt_all_stack_4->SetBinError(26,0.06800169);
   VbbHcc_HPt_all_stack_4->SetBinError(27,0.1043125);
   VbbHcc_HPt_all_stack_4->SetBinError(28,0.07712674);
   VbbHcc_HPt_all_stack_4->SetBinError(29,0.1642272);
   VbbHcc_HPt_all_stack_4->SetBinError(34,0.09695139);
   VbbHcc_HPt_all_stack_4->SetEntries(95489);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_HPt_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_all_stack_4->SetLineColor(ci);
   VbbHcc_HPt_all_stack_4->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_all_stack_4,"");
   
   TH1D *VbbHcc_HPt_all_stack_5 = new TH1D("VbbHcc_HPt_all_stack_5","",40,0,2000);
   VbbHcc_HPt_all_stack_5->SetBinContent(1,165.1847);
   VbbHcc_HPt_all_stack_5->SetBinContent(2,550.8806);
   VbbHcc_HPt_all_stack_5->SetBinContent(3,822.9957);
   VbbHcc_HPt_all_stack_5->SetBinContent(4,832.3201);
   VbbHcc_HPt_all_stack_5->SetBinContent(5,609.2708);
   VbbHcc_HPt_all_stack_5->SetBinContent(6,336.1499);
   VbbHcc_HPt_all_stack_5->SetBinContent(7,207.5236);
   VbbHcc_HPt_all_stack_5->SetBinContent(8,137.0496);
   VbbHcc_HPt_all_stack_5->SetBinContent(9,83.7736);
   VbbHcc_HPt_all_stack_5->SetBinContent(10,53.91002);
   VbbHcc_HPt_all_stack_5->SetBinContent(11,35.50276);
   VbbHcc_HPt_all_stack_5->SetBinContent(12,26.66579);
   VbbHcc_HPt_all_stack_5->SetBinContent(13,17.04597);
   VbbHcc_HPt_all_stack_5->SetBinContent(14,14.36001);
   VbbHcc_HPt_all_stack_5->SetBinContent(15,7.962218);
   VbbHcc_HPt_all_stack_5->SetBinContent(16,5.62894);
   VbbHcc_HPt_all_stack_5->SetBinContent(17,5.128107);
   VbbHcc_HPt_all_stack_5->SetBinContent(18,3.083311);
   VbbHcc_HPt_all_stack_5->SetBinContent(19,2.582348);
   VbbHcc_HPt_all_stack_5->SetBinContent(20,1.307304);
   VbbHcc_HPt_all_stack_5->SetBinContent(21,0.3921814);
   VbbHcc_HPt_all_stack_5->SetBinContent(22,1.184965);
   VbbHcc_HPt_all_stack_5->SetBinContent(23,0.7298152);
   VbbHcc_HPt_all_stack_5->SetBinContent(24,0.2254287);
   VbbHcc_HPt_all_stack_5->SetBinContent(25,0.5303817);
   VbbHcc_HPt_all_stack_5->SetBinContent(26,0.1079608);
   VbbHcc_HPt_all_stack_5->SetBinContent(27,0.5350826);
   VbbHcc_HPt_all_stack_5->SetBinContent(28,0.005874248);
   VbbHcc_HPt_all_stack_5->SetBinContent(29,0.1012297);
   VbbHcc_HPt_all_stack_5->SetBinContent(30,0.00315437);
   VbbHcc_HPt_all_stack_5->SetBinContent(31,0.02566382);
   VbbHcc_HPt_all_stack_5->SetBinContent(32,0.00198718);
   VbbHcc_HPt_all_stack_5->SetBinContent(33,0.0005991783);
   VbbHcc_HPt_all_stack_5->SetBinContent(34,0.0006876935);
   VbbHcc_HPt_all_stack_5->SetBinContent(35,0.0004160054);
   VbbHcc_HPt_all_stack_5->SetBinContent(36,0.0007797215);
   VbbHcc_HPt_all_stack_5->SetBinContent(37,0.0005120318);
   VbbHcc_HPt_all_stack_5->SetBinContent(38,0.0001477645);
   VbbHcc_HPt_all_stack_5->SetBinContent(39,0.0003417247);
   VbbHcc_HPt_all_stack_5->SetBinContent(40,0.0003970803);
   VbbHcc_HPt_all_stack_5->SetBinContent(41,0.03350069);
   VbbHcc_HPt_all_stack_5->SetBinError(1,11.56402);
   VbbHcc_HPt_all_stack_5->SetBinError(2,21.92863);
   VbbHcc_HPt_all_stack_5->SetBinError(3,26.98735);
   VbbHcc_HPt_all_stack_5->SetBinError(4,26.07578);
   VbbHcc_HPt_all_stack_5->SetBinError(5,19.65894);
   VbbHcc_HPt_all_stack_5->SetBinError(6,10.75489);
   VbbHcc_HPt_all_stack_5->SetBinError(7,5.674116);
   VbbHcc_HPt_all_stack_5->SetBinError(8,3.777552);
   VbbHcc_HPt_all_stack_5->SetBinError(9,2.686604);
   VbbHcc_HPt_all_stack_5->SetBinError(10,2.113371);
   VbbHcc_HPt_all_stack_5->SetBinError(11,1.680258);
   VbbHcc_HPt_all_stack_5->SetBinError(12,1.430175);
   VbbHcc_HPt_all_stack_5->SetBinError(13,1.145345);
   VbbHcc_HPt_all_stack_5->SetBinError(14,1.042304);
   VbbHcc_HPt_all_stack_5->SetBinError(15,0.7846269);
   VbbHcc_HPt_all_stack_5->SetBinError(16,0.6589308);
   VbbHcc_HPt_all_stack_5->SetBinError(17,0.621341);
   VbbHcc_HPt_all_stack_5->SetBinError(18,0.4829353);
   VbbHcc_HPt_all_stack_5->SetBinError(19,0.4396392);
   VbbHcc_HPt_all_stack_5->SetBinError(20,0.3111578);
   VbbHcc_HPt_all_stack_5->SetBinError(21,0.1438402);
   VbbHcc_HPt_all_stack_5->SetBinError(22,0.2892908);
   VbbHcc_HPt_all_stack_5->SetBinError(23,0.2376631);
   VbbHcc_HPt_all_stack_5->SetBinError(24,0.08372378);
   VbbHcc_HPt_all_stack_5->SetBinError(25,0.2253711);
   VbbHcc_HPt_all_stack_5->SetBinError(26,0.1002681);
   VbbHcc_HPt_all_stack_5->SetBinError(27,0.2201596);
   VbbHcc_HPt_all_stack_5->SetBinError(28,0.001195723);
   VbbHcc_HPt_all_stack_5->SetBinError(29,0.09836694);
   VbbHcc_HPt_all_stack_5->SetBinError(30,0.0009381352);
   VbbHcc_HPt_all_stack_5->SetBinError(31,0.02341843);
   VbbHcc_HPt_all_stack_5->SetBinError(32,0.0008091513);
   VbbHcc_HPt_all_stack_5->SetBinError(33,0.0004529644);
   VbbHcc_HPt_all_stack_5->SetBinError(34,0.0004346376);
   VbbHcc_HPt_all_stack_5->SetBinError(35,0.0004160054);
   VbbHcc_HPt_all_stack_5->SetBinError(36,0.0004041394);
   VbbHcc_HPt_all_stack_5->SetBinError(37,0.0003817912);
   VbbHcc_HPt_all_stack_5->SetBinError(38,0.0001044853);
   VbbHcc_HPt_all_stack_5->SetBinError(39,0.0003417247);
   VbbHcc_HPt_all_stack_5->SetBinError(40,0.0003970803);
   VbbHcc_HPt_all_stack_5->SetBinError(41,0.03322299);
   VbbHcc_HPt_all_stack_5->SetEntries(24313);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_HPt_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_all_stack_5->SetLineColor(ci);
   VbbHcc_HPt_all_stack_5->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_all_stack_5,"");
   
   TH1D *VbbHcc_HPt_all_stack_6 = new TH1D("VbbHcc_HPt_all_stack_6","",40,0,2000);
   VbbHcc_HPt_all_stack_6->SetBinContent(1,6.616344);
   VbbHcc_HPt_all_stack_6->SetBinContent(2,18.83423);
   VbbHcc_HPt_all_stack_6->SetBinContent(3,11.71228);
   VbbHcc_HPt_all_stack_6->SetBinContent(4,6.608916);
   VbbHcc_HPt_all_stack_6->SetBinContent(5,3.788758);
   VbbHcc_HPt_all_stack_6->SetBinContent(6,1.745445);
   VbbHcc_HPt_all_stack_6->SetBinContent(7,1.238102);
   VbbHcc_HPt_all_stack_6->SetBinContent(8,0.4908134);
   VbbHcc_HPt_all_stack_6->SetBinContent(9,0.9614632);
   VbbHcc_HPt_all_stack_6->SetBinContent(10,0.6997229);
   VbbHcc_HPt_all_stack_6->SetBinContent(12,0.2358588);
   VbbHcc_HPt_all_stack_6->SetBinError(1,1.092869);
   VbbHcc_HPt_all_stack_6->SetBinError(2,1.873623);
   VbbHcc_HPt_all_stack_6->SetBinError(3,1.439759);
   VbbHcc_HPt_all_stack_6->SetBinError(4,1.039201);
   VbbHcc_HPt_all_stack_6->SetBinError(5,0.8161073);
   VbbHcc_HPt_all_stack_6->SetBinError(6,0.4922015);
   VbbHcc_HPt_all_stack_6->SetBinError(7,0.4420549);
   VbbHcc_HPt_all_stack_6->SetBinError(8,0.3548405);
   VbbHcc_HPt_all_stack_6->SetBinError(9,0.4708099);
   VbbHcc_HPt_all_stack_6->SetBinError(10,0.385411);
   VbbHcc_HPt_all_stack_6->SetBinError(12,0.2358588);
   VbbHcc_HPt_all_stack_6->SetEntries(365);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_HPt_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_all_stack_6->SetLineColor(ci);
   VbbHcc_HPt_all_stack_6->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_all_stack_6,"");
   
   TH1D *VbbHcc_HPt_all_stack_7 = new TH1D("VbbHcc_HPt_all_stack_7","",40,0,2000);
   VbbHcc_HPt_all_stack_7->SetBinContent(1,11.36819);
   VbbHcc_HPt_all_stack_7->SetBinContent(2,46.70971);
   VbbHcc_HPt_all_stack_7->SetBinContent(3,37.14431);
   VbbHcc_HPt_all_stack_7->SetBinContent(4,17.59724);
   VbbHcc_HPt_all_stack_7->SetBinContent(5,8.483012);
   VbbHcc_HPt_all_stack_7->SetBinContent(6,5.48673);
   VbbHcc_HPt_all_stack_7->SetBinContent(7,3.380802);
   VbbHcc_HPt_all_stack_7->SetBinContent(8,2.354654);
   VbbHcc_HPt_all_stack_7->SetBinContent(9,1.304043);
   VbbHcc_HPt_all_stack_7->SetBinContent(10,0.6482614);
   VbbHcc_HPt_all_stack_7->SetBinContent(11,0.3989633);
   VbbHcc_HPt_all_stack_7->SetBinContent(12,0.109422);
   VbbHcc_HPt_all_stack_7->SetBinContent(13,0.4111668);
   VbbHcc_HPt_all_stack_7->SetBinContent(14,0.4551554);
   VbbHcc_HPt_all_stack_7->SetBinContent(15,0.1844377);
   VbbHcc_HPt_all_stack_7->SetBinError(1,1.138305);
   VbbHcc_HPt_all_stack_7->SetBinError(2,2.49324);
   VbbHcc_HPt_all_stack_7->SetBinError(3,2.189224);
   VbbHcc_HPt_all_stack_7->SetBinError(4,1.478402);
   VbbHcc_HPt_all_stack_7->SetBinError(5,1.00009);
   VbbHcc_HPt_all_stack_7->SetBinError(6,0.7624494);
   VbbHcc_HPt_all_stack_7->SetBinError(7,0.6835715);
   VbbHcc_HPt_all_stack_7->SetBinError(8,0.5092898);
   VbbHcc_HPt_all_stack_7->SetBinError(9,0.3947878);
   VbbHcc_HPt_all_stack_7->SetBinError(10,0.3116815);
   VbbHcc_HPt_all_stack_7->SetBinError(11,0.213296);
   VbbHcc_HPt_all_stack_7->SetBinError(12,0.109422);
   VbbHcc_HPt_all_stack_7->SetBinError(13,0.1900308);
   VbbHcc_HPt_all_stack_7->SetBinError(14,0.2220069);
   VbbHcc_HPt_all_stack_7->SetBinError(15,0.1844377);
   VbbHcc_HPt_all_stack_7->SetEntries(1328);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_HPt_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_all_stack_7->SetLineColor(ci);
   VbbHcc_HPt_all_stack_7->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_all_stack_7,"");
   
   TH1D *VbbHcc_HPt_all_stack_8 = new TH1D("VbbHcc_HPt_all_stack_8","",40,0,2000);
   VbbHcc_HPt_all_stack_8->SetBinContent(1,67.31254);
   VbbHcc_HPt_all_stack_8->SetBinContent(2,273.5055);
   VbbHcc_HPt_all_stack_8->SetBinContent(3,117.0733);
   VbbHcc_HPt_all_stack_8->SetBinContent(4,62.14243);
   VbbHcc_HPt_all_stack_8->SetBinContent(5,29.97844);
   VbbHcc_HPt_all_stack_8->SetBinContent(6,12.43841);
   VbbHcc_HPt_all_stack_8->SetBinContent(7,12.06874);
   VbbHcc_HPt_all_stack_8->SetBinContent(8,4.467399);
   VbbHcc_HPt_all_stack_8->SetBinContent(9,1.271532);
   VbbHcc_HPt_all_stack_8->SetBinContent(10,0.6247964);
   VbbHcc_HPt_all_stack_8->SetBinContent(12,0.204543);
   VbbHcc_HPt_all_stack_8->SetBinContent(13,0.2167776);
   VbbHcc_HPt_all_stack_8->SetBinContent(16,0.2310328);
   VbbHcc_HPt_all_stack_8->SetBinContent(17,0.3763938);
   VbbHcc_HPt_all_stack_8->SetBinError(1,3.723607);
   VbbHcc_HPt_all_stack_8->SetBinError(2,7.525159);
   VbbHcc_HPt_all_stack_8->SetBinError(3,4.941134);
   VbbHcc_HPt_all_stack_8->SetBinError(4,3.593725);
   VbbHcc_HPt_all_stack_8->SetBinError(5,2.505436);
   VbbHcc_HPt_all_stack_8->SetBinError(6,1.638093);
   VbbHcc_HPt_all_stack_8->SetBinError(7,1.596973);
   VbbHcc_HPt_all_stack_8->SetBinError(8,0.9413043);
   VbbHcc_HPt_all_stack_8->SetBinError(9,0.5259123);
   VbbHcc_HPt_all_stack_8->SetBinError(10,0.3625104);
   VbbHcc_HPt_all_stack_8->SetBinError(12,0.204543);
   VbbHcc_HPt_all_stack_8->SetBinError(13,0.2167776);
   VbbHcc_HPt_all_stack_8->SetBinError(16,0.2310328);
   VbbHcc_HPt_all_stack_8->SetBinError(17,0.2661506);
   VbbHcc_HPt_all_stack_8->SetEntries(2883);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_HPt_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_all_stack_8->SetLineColor(ci);
   VbbHcc_HPt_all_stack_8->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_all_stack_8,"");
   
   TH1D *VbbHcc_HPt_all_stack_9 = new TH1D("VbbHcc_HPt_all_stack_9","",40,0,2000);
   VbbHcc_HPt_all_stack_9->SetBinContent(1,37.26423);
   VbbHcc_HPt_all_stack_9->SetBinContent(2,164.657);
   VbbHcc_HPt_all_stack_9->SetBinContent(3,92.13076);
   VbbHcc_HPt_all_stack_9->SetBinContent(4,44.60764);
   VbbHcc_HPt_all_stack_9->SetBinContent(5,24.34673);
   VbbHcc_HPt_all_stack_9->SetBinContent(6,13.3692);
   VbbHcc_HPt_all_stack_9->SetBinContent(7,7.452905);
   VbbHcc_HPt_all_stack_9->SetBinContent(8,3.939087);
   VbbHcc_HPt_all_stack_9->SetBinContent(9,1.968367);
   VbbHcc_HPt_all_stack_9->SetBinContent(10,0.9026832);
   VbbHcc_HPt_all_stack_9->SetBinContent(11,0.3916368);
   VbbHcc_HPt_all_stack_9->SetBinContent(12,0.1359976);
   VbbHcc_HPt_all_stack_9->SetBinContent(13,0.0898965);
   VbbHcc_HPt_all_stack_9->SetBinContent(14,0.02855479);
   VbbHcc_HPt_all_stack_9->SetBinContent(15,0.03542695);
   VbbHcc_HPt_all_stack_9->SetBinContent(16,0.02330809);
   VbbHcc_HPt_all_stack_9->SetBinContent(17,0.01076963);
   VbbHcc_HPt_all_stack_9->SetBinContent(18,0.009720931);
   VbbHcc_HPt_all_stack_9->SetBinContent(19,0.002053476);
   VbbHcc_HPt_all_stack_9->SetBinContent(20,0.003689578);
   VbbHcc_HPt_all_stack_9->SetBinContent(21,0.00489913);
   VbbHcc_HPt_all_stack_9->SetBinContent(23,0.00205252);
   VbbHcc_HPt_all_stack_9->SetBinContent(25,0.002294185);
   VbbHcc_HPt_all_stack_9->SetBinError(1,0.2560741);
   VbbHcc_HPt_all_stack_9->SetBinError(2,0.5418087);
   VbbHcc_HPt_all_stack_9->SetBinError(3,0.402857);
   VbbHcc_HPt_all_stack_9->SetBinError(4,0.2801138);
   VbbHcc_HPt_all_stack_9->SetBinError(5,0.2065822);
   VbbHcc_HPt_all_stack_9->SetBinError(6,0.1527714);
   VbbHcc_HPt_all_stack_9->SetBinError(7,0.1136703);
   VbbHcc_HPt_all_stack_9->SetBinError(8,0.08333579);
   VbbHcc_HPt_all_stack_9->SetBinError(9,0.05876775);
   VbbHcc_HPt_all_stack_9->SetBinError(10,0.03928552);
   VbbHcc_HPt_all_stack_9->SetBinError(11,0.02587174);
   VbbHcc_HPt_all_stack_9->SetBinError(12,0.01600019);
   VbbHcc_HPt_all_stack_9->SetBinError(13,0.01204898);
   VbbHcc_HPt_all_stack_9->SetBinError(14,0.006738495);
   VbbHcc_HPt_all_stack_9->SetBinError(15,0.007665925);
   VbbHcc_HPt_all_stack_9->SetBinError(16,0.006079234);
   VbbHcc_HPt_all_stack_9->SetBinError(17,0.004430705);
   VbbHcc_HPt_all_stack_9->SetBinError(18,0.004050766);
   VbbHcc_HPt_all_stack_9->SetBinError(19,0.002053476);
   VbbHcc_HPt_all_stack_9->SetBinError(20,0.002623236);
   VbbHcc_HPt_all_stack_9->SetBinError(21,0.002866731);
   VbbHcc_HPt_all_stack_9->SetBinError(23,0.00205252);
   VbbHcc_HPt_all_stack_9->SetBinError(25,0.002294185);
   VbbHcc_HPt_all_stack_9->SetEntries(249013);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_HPt_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_all_stack_9->SetLineColor(ci);
   VbbHcc_HPt_all_stack_9->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_all_stack_9,"");
   
   TH1D *VbbHcc_HPt_all_stack_10 = new TH1D("VbbHcc_HPt_all_stack_10","",40,0,2000);
   VbbHcc_HPt_all_stack_10->SetBinContent(1,6.882792);
   VbbHcc_HPt_all_stack_10->SetBinContent(2,26.3111);
   VbbHcc_HPt_all_stack_10->SetBinContent(3,24.35745);
   VbbHcc_HPt_all_stack_10->SetBinContent(4,14.83083);
   VbbHcc_HPt_all_stack_10->SetBinContent(5,7.751946);
   VbbHcc_HPt_all_stack_10->SetBinContent(6,3.842331);
   VbbHcc_HPt_all_stack_10->SetBinContent(7,1.986372);
   VbbHcc_HPt_all_stack_10->SetBinContent(8,0.9771394);
   VbbHcc_HPt_all_stack_10->SetBinContent(9,0.5150162);
   VbbHcc_HPt_all_stack_10->SetBinContent(10,0.2703944);
   VbbHcc_HPt_all_stack_10->SetBinContent(11,0.1707792);
   VbbHcc_HPt_all_stack_10->SetBinContent(12,0.101298);
   VbbHcc_HPt_all_stack_10->SetBinContent(13,0.07007623);
   VbbHcc_HPt_all_stack_10->SetBinContent(14,0.04591676);
   VbbHcc_HPt_all_stack_10->SetBinContent(15,0.03269587);
   VbbHcc_HPt_all_stack_10->SetBinContent(16,0.01040767);
   VbbHcc_HPt_all_stack_10->SetBinContent(17,0.00696225);
   VbbHcc_HPt_all_stack_10->SetBinContent(18,0.008697212);
   VbbHcc_HPt_all_stack_10->SetBinContent(19,0.009397364);
   VbbHcc_HPt_all_stack_10->SetBinContent(20,0.003604992);
   VbbHcc_HPt_all_stack_10->SetBinContent(21,0.006065334);
   VbbHcc_HPt_all_stack_10->SetBinContent(22,0.00382591);
   VbbHcc_HPt_all_stack_10->SetBinContent(23,0.001216729);
   VbbHcc_HPt_all_stack_10->SetBinContent(24,0.001187214);
   VbbHcc_HPt_all_stack_10->SetBinContent(26,0.001365663);
   VbbHcc_HPt_all_stack_10->SetBinError(1,0.05310081);
   VbbHcc_HPt_all_stack_10->SetBinError(2,0.1040105);
   VbbHcc_HPt_all_stack_10->SetBinError(3,0.1000572);
   VbbHcc_HPt_all_stack_10->SetBinError(4,0.0780251);
   VbbHcc_HPt_all_stack_10->SetBinError(5,0.05630709);
   VbbHcc_HPt_all_stack_10->SetBinError(6,0.03962894);
   VbbHcc_HPt_all_stack_10->SetBinError(7,0.02850281);
   VbbHcc_HPt_all_stack_10->SetBinError(8,0.02000647);
   VbbHcc_HPt_all_stack_10->SetBinError(9,0.01449332);
   VbbHcc_HPt_all_stack_10->SetBinError(10,0.01044697);
   VbbHcc_HPt_all_stack_10->SetBinError(11,0.008337297);
   VbbHcc_HPt_all_stack_10->SetBinError(12,0.006436301);
   VbbHcc_HPt_all_stack_10->SetBinError(13,0.005356267);
   VbbHcc_HPt_all_stack_10->SetBinError(14,0.004260073);
   VbbHcc_HPt_all_stack_10->SetBinError(15,0.003670745);
   VbbHcc_HPt_all_stack_10->SetBinError(16,0.002019003);
   VbbHcc_HPt_all_stack_10->SetBinError(17,0.001655305);
   VbbHcc_HPt_all_stack_10->SetBinError(18,0.001906529);
   VbbHcc_HPt_all_stack_10->SetBinError(19,0.001928718);
   VbbHcc_HPt_all_stack_10->SetBinError(20,0.001204953);
   VbbHcc_HPt_all_stack_10->SetBinError(21,0.001573506);
   VbbHcc_HPt_all_stack_10->SetBinError(22,0.001279795);
   VbbHcc_HPt_all_stack_10->SetBinError(23,0.0007042356);
   VbbHcc_HPt_all_stack_10->SetBinError(24,0.0006871526);
   VbbHcc_HPt_all_stack_10->SetBinError(26,0.0007904379);
   VbbHcc_HPt_all_stack_10->SetEntries(218730);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_HPt_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_all_stack_10->SetLineColor(ci);
   VbbHcc_HPt_all_stack_10->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_all_stack_10,"");
   
   TH1D *VbbHcc_HPt_all_stack_11 = new TH1D("VbbHcc_HPt_all_stack_11","",40,0,2000);
   VbbHcc_HPt_all_stack_11->SetBinContent(1,1.128064);
   VbbHcc_HPt_all_stack_11->SetBinContent(2,5.200622);
   VbbHcc_HPt_all_stack_11->SetBinContent(3,4.319659);
   VbbHcc_HPt_all_stack_11->SetBinContent(4,2.349815);
   VbbHcc_HPt_all_stack_11->SetBinContent(5,1.196113);
   VbbHcc_HPt_all_stack_11->SetBinContent(6,0.6948945);
   VbbHcc_HPt_all_stack_11->SetBinContent(7,0.4093669);
   VbbHcc_HPt_all_stack_11->SetBinContent(8,0.2545886);
   VbbHcc_HPt_all_stack_11->SetBinContent(9,0.1116171);
   VbbHcc_HPt_all_stack_11->SetBinContent(10,0.08090665);
   VbbHcc_HPt_all_stack_11->SetBinContent(11,0.03396041);
   VbbHcc_HPt_all_stack_11->SetBinContent(12,0.02557271);
   VbbHcc_HPt_all_stack_11->SetBinContent(13,0.01078688);
   VbbHcc_HPt_all_stack_11->SetBinContent(14,0.003067249);
   VbbHcc_HPt_all_stack_11->SetBinContent(16,0.003032301);
   VbbHcc_HPt_all_stack_11->SetBinContent(17,0.002480913);
   VbbHcc_HPt_all_stack_11->SetBinContent(18,0.002764817);
   VbbHcc_HPt_all_stack_11->SetBinContent(19,2.430881e-05);
   VbbHcc_HPt_all_stack_11->SetBinContent(20,0.006044198);
   VbbHcc_HPt_all_stack_11->SetBinContent(27,0.003126434);
   VbbHcc_HPt_all_stack_11->SetBinError(1,0.04818447);
   VbbHcc_HPt_all_stack_11->SetBinError(2,0.1023015);
   VbbHcc_HPt_all_stack_11->SetBinError(3,0.09208347);
   VbbHcc_HPt_all_stack_11->SetBinError(4,0.06830698);
   VbbHcc_HPt_all_stack_11->SetBinError(5,0.04840416);
   VbbHcc_HPt_all_stack_11->SetBinError(6,0.03841964);
   VbbHcc_HPt_all_stack_11->SetBinError(7,0.0284213);
   VbbHcc_HPt_all_stack_11->SetBinError(8,0.02230494);
   VbbHcc_HPt_all_stack_11->SetBinError(9,0.01458929);
   VbbHcc_HPt_all_stack_11->SetBinError(10,0.01194069);
   VbbHcc_HPt_all_stack_11->SetBinError(11,0.007355028);
   VbbHcc_HPt_all_stack_11->SetBinError(12,0.006508637);
   VbbHcc_HPt_all_stack_11->SetBinError(13,0.004374539);
   VbbHcc_HPt_all_stack_11->SetBinError(14,0.002168872);
   VbbHcc_HPt_all_stack_11->SetBinError(16,0.002144161);
   VbbHcc_HPt_all_stack_11->SetBinError(17,0.002480913);
   VbbHcc_HPt_all_stack_11->SetBinError(18,0.002764817);
   VbbHcc_HPt_all_stack_11->SetBinError(19,2.430881e-05);
   VbbHcc_HPt_all_stack_11->SetBinError(20,0.003022106);
   VbbHcc_HPt_all_stack_11->SetBinError(27,0.002210723);
   VbbHcc_HPt_all_stack_11->SetEntries(9805);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_HPt_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_all_stack_11->SetLineColor(ci);
   VbbHcc_HPt_all_stack_11->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_all_stack_11,"");
   
   TH1D *VbbHcc_HPt_all_stack_12 = new TH1D("VbbHcc_HPt_all_stack_12","",40,0,2000);
   VbbHcc_HPt_all_stack_12->SetBinContent(1,0.2525153);
   VbbHcc_HPt_all_stack_12->SetBinContent(2,1.018575);
   VbbHcc_HPt_all_stack_12->SetBinContent(3,1.440069);
   VbbHcc_HPt_all_stack_12->SetBinContent(4,1.060956);
   VbbHcc_HPt_all_stack_12->SetBinContent(5,0.5996078);
   VbbHcc_HPt_all_stack_12->SetBinContent(6,0.2986646);
   VbbHcc_HPt_all_stack_12->SetBinContent(7,0.1723089);
   VbbHcc_HPt_all_stack_12->SetBinContent(8,0.1035894);
   VbbHcc_HPt_all_stack_12->SetBinContent(9,0.04878394);
   VbbHcc_HPt_all_stack_12->SetBinContent(10,0.03275543);
   VbbHcc_HPt_all_stack_12->SetBinContent(11,0.0150361);
   VbbHcc_HPt_all_stack_12->SetBinContent(12,0.01159027);
   VbbHcc_HPt_all_stack_12->SetBinContent(13,0.008032407);
   VbbHcc_HPt_all_stack_12->SetBinContent(14,0.005438285);
   VbbHcc_HPt_all_stack_12->SetBinContent(15,0.004535132);
   VbbHcc_HPt_all_stack_12->SetBinContent(16,0.001899882);
   VbbHcc_HPt_all_stack_12->SetBinContent(17,0.003849818);
   VbbHcc_HPt_all_stack_12->SetBinContent(18,0.001518818);
   VbbHcc_HPt_all_stack_12->SetBinContent(19,0.001978628);
   VbbHcc_HPt_all_stack_12->SetBinContent(20,0.001548611);
   VbbHcc_HPt_all_stack_12->SetBinContent(21,0.001481858);
   VbbHcc_HPt_all_stack_12->SetBinContent(22,0.0002583694);
   VbbHcc_HPt_all_stack_12->SetBinContent(23,0.0003797794);
   VbbHcc_HPt_all_stack_12->SetBinContent(24,0.000425225);
   VbbHcc_HPt_all_stack_12->SetBinContent(27,0.0004236625);
   VbbHcc_HPt_all_stack_12->SetBinContent(28,0.0004254022);
   VbbHcc_HPt_all_stack_12->SetBinContent(32,0.0004115797);
   VbbHcc_HPt_all_stack_12->SetBinContent(34,0.0007646384);
   VbbHcc_HPt_all_stack_12->SetBinContent(38,0.0003830077);
   VbbHcc_HPt_all_stack_12->SetBinError(1,0.007940133);
   VbbHcc_HPt_all_stack_12->SetBinError(2,0.01598453);
   VbbHcc_HPt_all_stack_12->SetBinError(3,0.01895501);
   VbbHcc_HPt_all_stack_12->SetBinError(4,0.01619047);
   VbbHcc_HPt_all_stack_12->SetBinError(5,0.01216344);
   VbbHcc_HPt_all_stack_12->SetBinError(6,0.008393288);
   VbbHcc_HPt_all_stack_12->SetBinError(7,0.006327243);
   VbbHcc_HPt_all_stack_12->SetBinError(8,0.004884269);
   VbbHcc_HPt_all_stack_12->SetBinError(9,0.003349245);
   VbbHcc_HPt_all_stack_12->SetBinError(10,0.002667122);
   VbbHcc_HPt_all_stack_12->SetBinError(11,0.0018233);
   VbbHcc_HPt_all_stack_12->SetBinError(12,0.001617196);
   VbbHcc_HPt_all_stack_12->SetBinError(13,0.001304058);
   VbbHcc_HPt_all_stack_12->SetBinError(14,0.0009939697);
   VbbHcc_HPt_all_stack_12->SetBinError(15,0.0009647341);
   VbbHcc_HPt_all_stack_12->SetBinError(16,0.0005931759);
   VbbHcc_HPt_all_stack_12->SetBinError(17,0.0008610501);
   VbbHcc_HPt_all_stack_12->SetBinError(18,0.000536994);
   VbbHcc_HPt_all_stack_12->SetBinError(19,0.0006264682);
   VbbHcc_HPt_all_stack_12->SetBinError(20,0.0005486832);
   VbbHcc_HPt_all_stack_12->SetBinError(21,0.0005324664);
   VbbHcc_HPt_all_stack_12->SetBinError(22,0.0001826947);
   VbbHcc_HPt_all_stack_12->SetBinError(23,0.0002676044);
   VbbHcc_HPt_all_stack_12->SetBinError(24,0.0003006795);
   VbbHcc_HPt_all_stack_12->SetBinError(27,0.0002995746);
   VbbHcc_HPt_all_stack_12->SetBinError(28,0.0003008048);
   VbbHcc_HPt_all_stack_12->SetBinError(32,0.0002910308);
   VbbHcc_HPt_all_stack_12->SetBinError(34,0.0003823389);
   VbbHcc_HPt_all_stack_12->SetBinError(38,0.0002708273);
   VbbHcc_HPt_all_stack_12->SetEntries(24305);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_HPt_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_all_stack_12->SetLineColor(ci);
   VbbHcc_HPt_all_stack_12->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_HPt_all__31 = new TH1D("VbbHcc_HPt_all__31","",40,0,2000);
   VbbHcc_HPt_all__31->SetBinContent(1,38987);
   VbbHcc_HPt_all__31->SetBinContent(2,108833);
   VbbHcc_HPt_all__31->SetBinContent(3,130828);
   VbbHcc_HPt_all__31->SetBinContent(4,101840);
   VbbHcc_HPt_all__31->SetBinContent(5,65961);
   VbbHcc_HPt_all__31->SetBinContent(6,43174);
   VbbHcc_HPt_all__31->SetBinContent(7,29631);
   VbbHcc_HPt_all__31->SetBinContent(8,19675);
   VbbHcc_HPt_all__31->SetBinContent(9,12251);
   VbbHcc_HPt_all__31->SetBinContent(10,7394);
   VbbHcc_HPt_all__31->SetBinContent(11,4316);
   VbbHcc_HPt_all__31->SetBinContent(12,2602);
   VbbHcc_HPt_all__31->SetBinContent(13,1523);
   VbbHcc_HPt_all__31->SetBinContent(14,1056);
   VbbHcc_HPt_all__31->SetBinContent(15,639);
   VbbHcc_HPt_all__31->SetBinContent(16,439);
   VbbHcc_HPt_all__31->SetBinContent(17,289);
   VbbHcc_HPt_all__31->SetBinContent(18,206);
   VbbHcc_HPt_all__31->SetBinContent(19,108);
   VbbHcc_HPt_all__31->SetBinContent(20,104);
   VbbHcc_HPt_all__31->SetBinContent(21,52);
   VbbHcc_HPt_all__31->SetBinContent(22,28);
   VbbHcc_HPt_all__31->SetBinContent(23,35);
   VbbHcc_HPt_all__31->SetBinContent(24,22);
   VbbHcc_HPt_all__31->SetBinContent(25,7);
   VbbHcc_HPt_all__31->SetBinContent(26,11);
   VbbHcc_HPt_all__31->SetBinContent(27,4);
   VbbHcc_HPt_all__31->SetBinContent(28,3);
   VbbHcc_HPt_all__31->SetBinContent(29,2);
   VbbHcc_HPt_all__31->SetBinContent(30,2);
   VbbHcc_HPt_all__31->SetBinContent(33,2);
   VbbHcc_HPt_all__31->SetBinContent(38,1);
   VbbHcc_HPt_all__31->SetEntries(570025);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_all__31->SetLineColor(ci);
   VbbHcc_HPt_all__31->SetLineWidth(2);
   VbbHcc_HPt_all__31->SetMarkerStyle(20);
   VbbHcc_HPt_all__31->SetMarkerSize(1.2);
   VbbHcc_HPt_all__31->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_all__31->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_all__31->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_all__31->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_all__31->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_all__31->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_all__31->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_all__31->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_all__31->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_all__31->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_all__31->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_all__31->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_all__31->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_all__31->GetZaxis()->SetTitleFont(42);
   VbbHcc_HPt_all__31->Draw("same E");
   
   Double_t Graph_from_VbbHcc_HPt_all_fx1031[40] = {
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
   Double_t Graph_from_VbbHcc_HPt_all_fy1031[40] = {
   179590.7,
   689447.3,
   803461.4,
   470985.7,
   185582.5,
   79491,
   32822.44,
   15957.64,
   8136.578,
   4463.278,
   2675.852,
   1813.013,
   964.1021,
   568.0078,
   382.9232,
   243.5926,
   164.4729,
   105.3628,
   81.19624,
   60.5665,
   29.47489,
   26.06926,
   17.50348,
   11.5615,
   9.21661,
   3.651114,
   4.358065,
   3.027106,
   0.9656191,
   1.81469,
   0.8448869,
   0.2855049,
   0.5895071,
   0.2393826,
   0.0004160054,
   0.0007797215,
   0.0005120318,
   0.0005307722,
   0.0003417247,
   0.0003970803};
   Double_t Graph_from_VbbHcc_HPt_all_fex1031[40] = {
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
   Double_t Graph_from_VbbHcc_HPt_all_fey1031[40] = {
   5845.154,
   12093.87,
   13312.43,
   9706.515,
   4717.576,
   2008.692,
   684.1958,
   326.0126,
   192.0384,
   122.8761,
   83.73122,
   66.3597,
   42.08121,
   27.3232,
   18.23793,
   13.54875,
   6.981894,
   5.290639,
   4.769863,
   3.945529,
   2.188616,
   2.201871,
   1.726154,
   1.484071,
   1.220425,
   0.7971583,
   0.8490792,
   0.7017407,
   0.2724727,
   0.6045339,
   0.392575,
   0.1415571,
   0.3127687,
   0.1390591,
   0.0004160054,
   0.0004041394,
   0.0003817912,
   0.0002902837,
   0.0003417247,
   0.0003970803};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_HPt_all_fx1031,Graph_from_VbbHcc_HPt_all_fy1031,Graph_from_VbbHcc_HPt_all_fex1031,Graph_from_VbbHcc_HPt_all_fey1031);
   gre->SetName("Graph_from_VbbHcc_HPt_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_HPt_all1031 = new TH1F("Graph_Graph_from_VbbHcc_HPt_all1031","",100,0,2200);
   Graph_Graph_from_VbbHcc_HPt_all1031->SetMinimum(-81677.39);
   Graph_Graph_from_VbbHcc_HPt_all1031->SetMaximum(898451.3);
   Graph_Graph_from_VbbHcc_HPt_all1031->SetDirectory(0);
   Graph_Graph_from_VbbHcc_HPt_all1031->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_HPt_all1031->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_HPt_all1031->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_HPt_all1031->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_HPt_all1031->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_HPt_all1031->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_HPt_all1031->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_HPt_all1031->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_HPt_all1031->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_HPt_all1031->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_HPt_all1031->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_HPt_all1031->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_HPt_all1031->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_HPt_all1031->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_HPt_all1031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_HPt_all1031);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_HPt_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_HPt_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_HPt_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_HPt_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_HPt_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_HPt_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_HPt_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_HPt_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_HPt_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_HPt_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_HPt_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_HPt_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_HPt_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_HPt_all","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   HPt_VbbHcc_all->cd();
  
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
   
   TH1D *data_mc_ratio__32 = new TH1D("data_mc_ratio__32","",40,0,2000);
   data_mc_ratio__32->SetBinContent(1,0.217088);
   data_mc_ratio__32->SetBinContent(2,0.1578554);
   data_mc_ratio__32->SetBinContent(3,0.1628305);
   data_mc_ratio__32->SetBinContent(4,0.2162274);
   data_mc_ratio__32->SetBinContent(5,0.3554269);
   data_mc_ratio__32->SetBinContent(6,0.5431306);
   data_mc_ratio__32->SetBinContent(7,0.9027665);
   data_mc_ratio__32->SetBinContent(8,1.232952);
   data_mc_ratio__32->SetBinContent(9,1.50567);
   data_mc_ratio__32->SetBinContent(10,1.65663);
   data_mc_ratio__32->SetBinContent(11,1.612944);
   data_mc_ratio__32->SetBinContent(12,1.43518);
   data_mc_ratio__32->SetBinContent(13,1.579708);
   data_mc_ratio__32->SetBinContent(14,1.859129);
   data_mc_ratio__32->SetBinContent(15,1.668742);
   data_mc_ratio__32->SetBinContent(16,1.80219);
   data_mc_ratio__32->SetBinContent(17,1.757128);
   data_mc_ratio__32->SetBinContent(18,1.955149);
   data_mc_ratio__32->SetBinContent(19,1.330111);
   data_mc_ratio__32->SetBinContent(20,1.717121);
   data_mc_ratio__32->SetBinContent(21,1.764213);
   data_mc_ratio__32->SetBinContent(22,1.074062);
   data_mc_ratio__32->SetBinContent(23,1.999602);
   data_mc_ratio__32->SetBinContent(24,1.902868);
   data_mc_ratio__32->SetBinContent(25,0.7594984);
   data_mc_ratio__32->SetBinContent(26,3.012779);
   data_mc_ratio__32->SetBinContent(27,0.9178386);
   data_mc_ratio__32->SetBinContent(28,0.9910455);
   data_mc_ratio__32->SetBinContent(29,2.07121);
   data_mc_ratio__32->SetBinContent(30,1.102117);
   data_mc_ratio__32->SetBinContent(33,3.392665);
   data_mc_ratio__32->SetBinContent(38,1884.047);
   data_mc_ratio__32->SetBinError(1,0.001099451);
   data_mc_ratio__32->SetBinError(2,0.000478497);
   data_mc_ratio__32->SetBinError(3,0.0004501791);
   data_mc_ratio__32->SetBinError(4,0.0006775658);
   data_mc_ratio__32->SetBinError(5,0.001383906);
   data_mc_ratio__32->SetBinError(6,0.002613925);
   data_mc_ratio__32->SetBinError(7,0.005244478);
   data_mc_ratio__32->SetBinError(8,0.008789998);
   data_mc_ratio__32->SetBinError(9,0.01360329);
   data_mc_ratio__32->SetBinError(10,0.01926574);
   data_mc_ratio__32->SetBinError(11,0.02455153);
   data_mc_ratio__32->SetBinError(12,0.02813537);
   data_mc_ratio__32->SetBinError(13,0.04047874);
   data_mc_ratio__32->SetBinError(14,0.05721075);
   data_mc_ratio__32->SetBinError(15,0.0660144);
   data_mc_ratio__32->SetBinError(16,0.08601382);
   data_mc_ratio__32->SetBinError(17,0.1033605);
   data_mc_ratio__32->SetBinError(18,0.1362217);
   data_mc_ratio__32->SetBinError(19,0.12799);
   data_mc_ratio__32->SetBinError(20,0.1683775);
   data_mc_ratio__32->SetBinError(21,0.2446524);
   data_mc_ratio__32->SetBinError(22,0.2029786);
   data_mc_ratio__32->SetBinError(23,0.3379945);
   data_mc_ratio__32->SetBinError(24,0.4056928);
   data_mc_ratio__32->SetBinError(25,0.2870634);
   data_mc_ratio__32->SetBinError(26,0.908387);
   data_mc_ratio__32->SetBinError(27,0.4589193);
   data_mc_ratio__32->SetBinError(28,0.5721804);
   data_mc_ratio__32->SetBinError(29,1.464567);
   data_mc_ratio__32->SetBinError(30,0.7793143);
   data_mc_ratio__32->SetBinError(33,2.398976);
   data_mc_ratio__32->SetBinError(38,1884.047);
   data_mc_ratio__32->SetMinimum(0.4);
   data_mc_ratio__32->SetMaximum(1.6);
   data_mc_ratio__32->SetEntries(0.8050061);
   data_mc_ratio__32->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__32->SetLineColor(ci);
   data_mc_ratio__32->SetLineWidth(2);
   data_mc_ratio__32->SetMarkerStyle(20);
   data_mc_ratio__32->SetMarkerSize(1.2);
   data_mc_ratio__32->GetXaxis()->SetTitle("H p_{T} [GeV]");
   data_mc_ratio__32->GetXaxis()->SetRange(7,30);
   data_mc_ratio__32->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__32->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__32->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__32->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__32->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__32->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__32->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__32->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__32->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__32->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__32->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__32->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__32->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__32->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__32->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__32->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__32->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1032[40] = {
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
   Double_t Graph_from_mc_statistical_error_fy1032[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1032[40] = {
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
   Double_t Graph_from_mc_statistical_error_fey1032[40] = {
   0.03254708,
   0.0175414,
   0.01656884,
   0.02060894,
   0.02542037,
   0.02526943,
   0.02084537,
   0.02042988,
   0.02360186,
   0.02753046,
   0.03129142,
   0.03660188,
   0.04364809,
   0.04810357,
   0.04762816,
   0.05562054,
   0.04245011,
   0.05021352,
   0.05874488,
   0.06514375,
   0.07425356,
   0.08446235,
   0.09861772,
   0.1283632,
   0.1324158,
   0.2183329,
   0.1948294,
   0.231819,
   0.2821742,
   0.3331335,
   0.464648,
   0.495813,
   0.5305596,
   0.5809072,
   1,
   0.5183125,
   0.7456396,
   0.5469082,
   1,
   1};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1032,Graph_from_mc_statistical_error_fy1032,Graph_from_mc_statistical_error_fex1032,Graph_from_mc_statistical_error_fey1032);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1032 = new TH1F("Graph_Graph_from_mc_statistical_error1032","",100,0,2200);
   Graph_Graph_from_mc_statistical_error1032->SetMinimum(-0.2);
   Graph_Graph_from_mc_statistical_error1032->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1032->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1032->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1032->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1032->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1032->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1032->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1032->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1032->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1032->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1032->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1032->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1032->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1032->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1032->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1032->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1032->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1032);
   
   gre->Draw("e2");
   TLine *line = new TLine(300,1,1500,1);
   line->Draw();
   bottomPad->Modified();
   HPt_VbbHcc_all->cd();
   HPt_VbbHcc_all->Modified();
   HPt_VbbHcc_all->cd();
   HPt_VbbHcc_all->SetSelected(HPt_VbbHcc_all);
}
