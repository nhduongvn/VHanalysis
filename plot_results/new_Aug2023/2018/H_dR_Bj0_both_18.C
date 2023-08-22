void H_dR_Bj0_both_18()
{
//=========Macro generated from canvas: H_dR_Bj0_both_18/H_dR_Bj0_both_18
//=========  (Tue Aug 22 09:23:02 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_both_18 = new TCanvas("H_dR_Bj0_both_18", "H_dR_Bj0_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_both_18->SetHighLightColor(2);
   H_dR_Bj0_both_18->Range(0,0,1,1);
   H_dR_Bj0_both_18->SetFillColor(0);
   H_dR_Bj0_both_18->SetFillStyle(4000);
   H_dR_Bj0_both_18->SetBorderMode(0);
   H_dR_Bj0_both_18->SetBorderSize(2);
   H_dR_Bj0_both_18->SetFrameFillStyle(1000);
   H_dR_Bj0_both_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-104.7824,6.314516,104687.6);
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
   st->SetMaximum(89722.22);
   
   TH1F *st_stack_235 = new TH1F("st_stack_235","",30,0,6);
   st_stack_235->SetMinimum(0.01);
   st_stack_235->SetMaximum(94208.33);
   st_stack_235->SetDirectory(0);
   st_stack_235->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_235->SetLineColor(ci);
   st_stack_235->GetXaxis()->SetRange(1,30);
   st_stack_235->GetXaxis()->SetLabelFont(42);
   st_stack_235->GetXaxis()->SetLabelSize(0.035);
   st_stack_235->GetXaxis()->SetTitleSize(0.035);
   st_stack_235->GetXaxis()->SetTitleFont(42);
   st_stack_235->GetYaxis()->SetTitle("Events/0.2");
   st_stack_235->GetYaxis()->SetLabelFont(42);
   st_stack_235->GetYaxis()->SetLabelSize(0.05);
   st_stack_235->GetYaxis()->SetTitleSize(0.057);
   st_stack_235->GetYaxis()->SetTitleOffset(1.2);
   st_stack_235->GetYaxis()->SetTitleFont(42);
   st_stack_235->GetZaxis()->SetLabelFont(42);
   st_stack_235->GetZaxis()->SetLabelSize(0.035);
   st_stack_235->GetZaxis()->SetTitleSize(0.035);
   st_stack_235->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_235);
   
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(1,8571.29);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(2,28933.6);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(3,28104.11);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(4,22888.63);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(5,21323.02);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(6,13732.72);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(7,14852.32);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(8,9804.412);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(9,11006.33);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(10,6066.968);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(11,8390.589);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(12,8963.011);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(13,7324.237);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(14,7802.846);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(15,3937.549);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(16,6274.397);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(17,3329.439);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(18,2516.7);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(19,1431.429);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(20,995.1007);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(21,490.1866);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(22,992.0535);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(23,464.325);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(24,184.9334);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(25,50.03006);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(26,21.61982);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(27,20.80478);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(28,11.21743);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(29,33.30724);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(1,1043.775);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(2,2193.353);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(3,2789.555);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(4,3142.032);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(5,2183.902);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(6,1630.88);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(7,1788.802);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(8,1288.303);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(9,1483.516);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(10,957.6454);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(11,1321.943);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(12,1277.963);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(13,1153.824);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(14,1265.157);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(15,466.4134);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(16,1023.851);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(17,581.4412);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(18,563.7596);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(19,402.6712);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(20,158.4454);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(21,104.5492);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(22,529.3414);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(23,372.7974);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(24,63.91282);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(25,35.38875);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(26,14.73376);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(27,14.7112);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(28,10.43427);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(29,33.30724);
   VbbHcc_both_H_dR_Bj0_stack_1->SetEntries(9895);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(1,40.49472);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(2,137.0899);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(3,166.0432);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(4,147.6949);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(5,116.7825);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(6,101.0424);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(7,86.31252);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(8,78.16855);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(9,69.13298);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(10,69.23089);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(11,52.38121);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(12,52.32679);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(13,48.01618);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(14,49.14558);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(15,43.43931);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(16,43.46685);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(17,26.85055);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(18,19.27005);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(19,13.76978);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(20,8.062848);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(21,6.64914);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(22,3.2721);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(23,2.99099);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(24,1.794545);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(25,0.7614933);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(26,0.3097433);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(27,0.7621298);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(28,0.2168079);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(29,0.05162389);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(30,0.05162389);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(31,0.3898137);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(1,2.629776);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(2,4.724305);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(3,5.25942);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(4,5.018159);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(5,4.445238);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(6,4.056608);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(7,3.758028);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(8,3.62342);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(9,3.42266);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(10,3.55263);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(11,2.927993);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(12,2.995841);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(13,2.775572);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(14,2.840169);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(15,2.628111);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(16,2.66159);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(17,2.083746);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(18,1.844459);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(19,1.474374);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(20,0.9611179);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(21,0.9491948);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(22,0.646029);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(23,0.6752439);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(24,0.465871);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(25,0.3203801);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(26,0.1264522);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(27,0.4006806);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(28,0.1087712);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(29,0.05162389);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(30,0.05162389);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(31,0.2877797);
   VbbHcc_both_H_dR_Bj0_stack_2->SetEntries(14948);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_3 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(1,703.1024);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(2,2825.638);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(3,3502.072);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(4,3118.344);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(5,2595.745);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(6,2129.026);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(7,1785.318);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(8,1518.811);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(9,1338.319);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(10,1185.254);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(11,1068.655);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(12,967.2406);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(13,910.0224);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(14,841.0195);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(15,801.9811);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(16,721.7146);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(17,443.6361);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(18,303.8494);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(19,199.9136);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(20,136.991);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(21,93.67068);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(22,58.78547);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(23,41.24965);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(24,24.96551);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(25,14.54178);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(26,9.849063);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(27,5.178446);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(28,2.789048);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(29,1.675411);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(30,1.297778);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(31,1.771441);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(1,6.915796);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(2,13.88131);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(3,15.48054);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(4,14.59846);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(5,13.30718);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(6,12.03848);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(7,11.01369);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(8,10.15656);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(9,9.531655);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(10,8.966345);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(11,8.519029);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(12,8.098571);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(13,7.867031);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(14,7.561399);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(15,7.389828);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(16,7.003847);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(17,5.482742);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(18,4.543026);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(19,3.668749);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(20,3.042433);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(21,2.524455);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(22,1.978633);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(23,1.667294);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(24,1.298254);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(25,0.9883019);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(26,0.8121615);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(27,0.6001583);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(28,0.4295157);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(29,0.3413358);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(30,0.2950668);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(31,0.3588066);
   VbbHcc_both_H_dR_Bj0_stack_3->SetEntries(416844);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_4 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(1,148.241);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(2,436.7146);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(3,476.4497);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(4,347.1479);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(5,272.4331);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(6,211.7034);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(7,177.0016);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(8,151.3051);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(9,160.814);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(10,134.8258);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(11,124.8443);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(12,115.2338);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(13,107.385);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(14,113.3905);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(15,129.058);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(16,101.8348);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(17,63.72647);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(18,34.0663);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(19,23.80321);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(20,16.39349);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(21,10.56558);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(22,8.909051);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(23,2.88052);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(24,2.44118);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(25,1.941775);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(26,0.2366465);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(27,1.164961);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(28,0.1436599);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(30,0.1436599);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(31,0.2873198);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(1,6.646035);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(2,13.83593);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(3,15.5641);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(4,13.44743);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(5,10.83254);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(6,10.47855);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(7,9.096084);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(8,8.601347);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(9,11.71026);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(10,7.441468);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(11,7.221476);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(12,7.933359);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(13,6.7219);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(14,6.838585);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(15,10.45812);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(16,5.268767);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(17,6.816131);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(18,3.038592);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(19,2.540048);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(20,2.225961);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(21,1.798305);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(22,1.740375);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(23,0.8537112);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(24,0.8071998);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(25,0.8816928);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(26,0.1711277);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(27,0.7046287);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(28,0.1436599);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(30,0.1436599);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(31,0.2031658);
   VbbHcc_both_H_dR_Bj0_stack_4->SetEntries(18425);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_5 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(1,14.55205);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(2,40.55623);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(3,38.88681);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(4,35.85029);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(5,25.15327);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(6,27.97602);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(7,16.44119);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(8,16.68679);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(9,17.77316);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(10,14.48103);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(11,12.00452);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(12,15.54237);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(13,13.97805);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(14,11.86183);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(15,10.46348);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(16,13.10634);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(17,6.324399);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(18,4.195169);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(19,4.080388);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(20,1.387366);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(21,2.047186);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(22,0.5734528);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(23,0.4165116);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(24,0.1495452);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(25,0.04495706);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(29,0.02205352);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(31,0.02205352);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(1,2.214121);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(2,11.56457);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(3,5.016318);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(4,5.729809);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(5,3.695695);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(6,5.578591);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(7,1.885818);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(8,3.47376);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(9,4.498487);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(10,3.910435);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(11,2.610518);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(12,3.960239);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(13,3.323811);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(14,2.627004);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(15,1.476146);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(16,3.300131);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(17,2.315197);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(18,0.9753681);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(19,2.247515);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(20,0.5112495);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(21,0.7206182);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(22,0.3477602);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(23,0.4165116);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(24,0.1284767);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(25,0.04495706);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(29,0.02205352);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(31,0.02205352);
   VbbHcc_both_H_dR_Bj0_stack_5->SetEntries(2210);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_6 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(2,0.5709342);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(16,0.5709342);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(2,0.5709342);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(16,0.5709342);
   VbbHcc_both_H_dR_Bj0_stack_6->SetEntries(2);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_7 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(1,2.479394);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(2,2.833593);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(3,0.7083982);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(4,1.062597);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(5,0.7083982);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(6,0.3541991);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(7,0.7083982);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(8,0.3541991);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(9,0.7083982);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(13,0.7083982);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(15,0.7083982);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(16,0.3541991);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(1,0.9371228);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(2,1.001826);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(3,0.5009132);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(4,0.6134909);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(5,0.5009132);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(6,0.3541991);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(7,0.5009132);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(8,0.3541991);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(9,0.5009132);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(13,0.5009132);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(15,0.5009132);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(16,0.3541991);
   VbbHcc_both_H_dR_Bj0_stack_7->SetEntries(33);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_8 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(1,3.352972);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(2,12.85306);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(3,11.17657);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(4,7.264773);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(5,2.514729);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(6,2.235315);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(7,3.911801);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(8,1.9559);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(9,2.794144);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(10,3.632387);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(11,1.676486);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(12,1.676486);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(13,2.235315);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(14,1.676486);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(15,1.9559);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(16,1.676486);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(17,0.2794144);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(18,1.117657);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(19,0.2794144);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(20,0.2794144);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(22,0.2794144);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(1,0.9679197);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(2,1.89508);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(3,1.767172);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(4,1.424739);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(5,0.8382431);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(6,0.7903031);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(7,1.045473);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(8,0.7392609);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(9,0.8835858);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(10,1.007443);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(11,0.6844226);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(12,0.6844226);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(13,0.7903031);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(14,0.6844226);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(15,0.7392609);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(16,0.6844226);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(17,0.2794144);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(18,0.5588287);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(19,0.2794144);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(20,0.2794144);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(22,0.2794144);
   VbbHcc_both_H_dR_Bj0_stack_8->SetEntries(232);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_9 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(1,2.731008);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(2,11.77481);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(3,10.88149);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(4,7.223132);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(5,4.412718);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(6,3.218789);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(7,2.643094);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(8,2.368008);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(9,2.067398);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(10,2.10143);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(11,2.064562);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(12,1.990828);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(13,1.91993);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(14,1.866047);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(15,1.98232);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(16,1.778133);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(17,0.9613827);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(18,0.5501718);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(19,0.3318047);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(20,0.1729922);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(21,0.0992578);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(22,0.09642187);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(23,0.0226875);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(24,0.01985156);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(25,0.01985156);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(26,0.01701562);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(28,0.005671875);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(29,0.002835937);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(30,0.002835937);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(31,0.002835937);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(1,0.08800549);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(2,0.1827365);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(3,0.1756679);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(4,0.1431235);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(5,0.1118669);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(6,0.09554205);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(7,0.08657741);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(8,0.08194828);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(9,0.07657031);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(10,0.07719794);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(11,0.07651777);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(12,0.07513896);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(13,0.07378889);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(14,0.07274608);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(15,0.07497823);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(16,0.07101178);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(17,0.05221514);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(18,0.03950004);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(19,0.03067535);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(20,0.02214938);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(21,0.01677763);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(22,0.01653621);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(23,0.008021242);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(24,0.007503185);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(25,0.007503185);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(26,0.006946599);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(28,0.004010621);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(29,0.002835937);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(30,0.002835937);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(31,0.002835937);
   VbbHcc_both_H_dR_Bj0_stack_9->SetEntries(22331);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_10 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(1,0.9898037);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(2,4.530473);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(3,5.348475);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(4,4.035571);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(5,2.639948);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(6,1.894767);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(7,1.462788);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(8,1.220994);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(9,1.10858);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(10,0.9905107);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(11,0.8922374);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(12,0.8123461);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(13,0.7508368);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(14,0.7366968);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(15,0.6638755);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(16,0.6278184);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(17,0.3662274);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(18,0.2198778);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(19,0.1293815);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(20,0.07282127);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(21,0.04312716);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(22,0.0254521);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(23,0.02191708);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(24,0.01201905);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(25,0.007777029);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(26,0.004949019);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(27,0.002828011);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(28,0.002121008);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(29,0.001414005);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(31,0.001414005);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(1,0.02645362);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(2,0.05659555);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(3,0.06149298);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(4,0.05341497);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(5,0.04320243);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(6,0.03660062);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(7,0.03215891);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(8,0.02938104);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(9,0.02799588);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(10,0.02646306);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(11,0.02511601);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(12,0.0239652);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(13,0.02304004);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(14,0.02282206);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(15,0.02166476);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(16,0.0210682);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(17,0.01609111);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(18,0.01246813);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(19,0.009564155);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(20,0.007175293);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(21,0.005521867);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(22,0.004242016);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(23,0.003936424);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(24,0.002915047);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(25,0.002344863);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(26,0.001870553);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(27,0.001414005);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(28,0.001224565);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(29,0.0009998527);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(31,0.0009998527);
   VbbHcc_both_H_dR_Bj0_stack_10->SetEntries(41891);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_11 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(1,0.0182061);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(2,0.03641219);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(3,0.02730914);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(4,0.0182061);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(5,0.02048186);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(6,0.01593033);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(7,0.01365457);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(8,0.004551524);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(9,0.009103048);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(10,0.004551524);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(11,0.006827286);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(12,0.002275762);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(13,0.004551524);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(14,0.002275762);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(15,0.002275762);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(16,0.002275762);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(26,0.002275762);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(1,0.006436827);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(2,0.009103048);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(3,0.00788347);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(4,0.006436827);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(5,0.006827286);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(6,0.0060211);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(7,0.005574455);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(8,0.003218413);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(9,0.004551524);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(10,0.003218413);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(11,0.003941735);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(12,0.002275762);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(13,0.003218413);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(14,0.002275762);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(15,0.002275762);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(16,0.002275762);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(26,0.002275762);
   VbbHcc_both_H_dR_Bj0_stack_11->SetEntries(84);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_12 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(1,0.003595882);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(2,0.01378421);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(3,0.01678078);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(4,0.01468318);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(5,0.01018833);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(6,0.00839039);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(7,0.005393822);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(8,0.006292793);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(9,0.002996568);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(10,0.002996568);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(11,0.002397254);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(12,0.002397254);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(13,0.002097598);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(14,0.001198627);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(15,0.002097598);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(16,0.0002996568);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(17,0.002097598);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(18,0.0002996568);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(19,0.0005993136);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(20,0.0002996568);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(1,0.001038042);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(2,0.002032371);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(3,0.002242426);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(4,0.002097598);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(5,0.001747284);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(6,0.001585635);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(7,0.001271336);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(8,0.0013732);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(9,0.000947598);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(10,0.000947598);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(11,0.0008475574);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(12,0.0008475574);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(13,0.0007928174);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(14,0.0005993136);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(15,0.0007928174);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(16,0.0002996568);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(17,0.0007928174);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(18,0.0002996568);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(19,0.0004237787);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(20,0.0002996568);
   VbbHcc_both_H_dR_Bj0_stack_12->SetEntries(330);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_H_dR_Bj0__645 = new TH1D("VbbHcc_both_H_dR_Bj0__645","",30,0,6);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(1,11459);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(2,39990);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(3,40375);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(4,31783);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(5,26065);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(6,22051);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(7,18655);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(8,16284);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(9,14832);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(10,13361);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(11,12420);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(12,11498);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(13,11021);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(14,10508);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(15,10138);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(16,9396);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(17,6076);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(18,4196);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(19,2918);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(20,2101);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(21,1464);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(22,1042);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(23,678);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(24,416);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(25,258);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(26,202);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(27,86);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(28,65);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(29,38);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(30,17);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(31,29);
   VbbHcc_both_H_dR_Bj0__645->SetEntries(319451);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0__645->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0__645->SetLineWidth(2);
   VbbHcc_both_H_dR_Bj0__645->SetMarkerStyle(20);
   VbbHcc_both_H_dR_Bj0__645->SetMarkerSize(1.2);
   VbbHcc_both_H_dR_Bj0__645->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0__645->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0__645->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0__645->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0__645->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0__645->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0__645->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0__645->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0__645->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0__645->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0__645->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0__645->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0__645->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0__645->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0__645->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_fx1469[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_fy1469[30] = {
   9487.255,
   32406.22,
   32315.72,
   26557.28,
   24343.44,
   16210.2,
   16926.14,
   11575.29,
   12599.06,
   7477.492,
   9653.116,
   10117.84,
   8409.259,
   8822.546,
   4927.806,
   7159.53,
   3871.586,
   2879.969,
   1673.737,
   1158.461,
   603.2616,
   1063.995,
   511.9072,
   214.316,
   67.3477,
   32.03951,
   27.91314,
   14.37474,
   35.06058,
   1.495898};
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_fex1469[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_fey1469[30] = {
   1043.825,
   2193.478,
   2789.651,
   3142.104,
   2183.977,
   1630.973,
   1788.865,
   1288.382,
   1483.604,
   957.7314,
   1321.997,
   1278.023,
   1153.879,
   1265.205,
   466.5998,
   1023.898,
   581.5154,
   563.7902,
   402.705,
   158.4942,
   104.602,
   529.3486,
   372.8029,
   63.93293,
   35.415,
   14.75766,
   14.74573,
   10.44466,
   33.30904,
   0.3322283};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_H_dR_Bj0_fx1469,Graph_from_VbbHcc_both_H_dR_Bj0_fy1469,Graph_from_VbbHcc_both_H_dR_Bj0_fex1469,Graph_from_VbbHcc_both_H_dR_Bj0_fey1469);
   gre->SetName("Graph_from_VbbHcc_both_H_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_dR_Bj01469 = new TH1F("Graph_Graph_from_VbbHcc_both_H_dR_Bj01469","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->SetMinimum(1.047303);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->SetMaximum(38615.79);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_H_dR_Bj01469);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_H_dR_Bj0","MC unc. (stat.)","fl");

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
   H_dR_Bj0_both_18->cd();
  
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
   
   TH1D *data_mc_ratio__646 = new TH1D("data_mc_ratio__646","",30,0,6);
   data_mc_ratio__646->SetBinContent(1,1.207831);
   data_mc_ratio__646->SetBinContent(2,1.234022);
   data_mc_ratio__646->SetBinContent(3,1.249392);
   data_mc_ratio__646->SetBinContent(4,1.196772);
   data_mc_ratio__646->SetBinContent(5,1.07072);
   data_mc_ratio__646->SetBinContent(6,1.360317);
   data_mc_ratio__646->SetBinContent(7,1.102141);
   data_mc_ratio__646->SetBinContent(8,1.406789);
   data_mc_ratio__646->SetBinContent(9,1.177231);
   data_mc_ratio__646->SetBinContent(10,1.786829);
   data_mc_ratio__646->SetBinContent(11,1.286631);
   data_mc_ratio__646->SetBinContent(12,1.136409);
   data_mc_ratio__646->SetBinContent(13,1.310579);
   data_mc_ratio__646->SetBinContent(14,1.191039);
   data_mc_ratio__646->SetBinContent(15,2.057305);
   data_mc_ratio__646->SetBinContent(16,1.312377);
   data_mc_ratio__646->SetBinContent(17,1.569383);
   data_mc_ratio__646->SetBinContent(18,1.45696);
   data_mc_ratio__646->SetBinContent(19,1.743404);
   data_mc_ratio__646->SetBinContent(20,1.813613);
   data_mc_ratio__646->SetBinContent(21,2.426808);
   data_mc_ratio__646->SetBinContent(22,0.9793281);
   data_mc_ratio__646->SetBinContent(23,1.324459);
   data_mc_ratio__646->SetBinContent(24,1.941059);
   data_mc_ratio__646->SetBinContent(25,3.830866);
   data_mc_ratio__646->SetBinContent(26,6.304715);
   data_mc_ratio__646->SetBinContent(27,3.080986);
   data_mc_ratio__646->SetBinContent(28,4.521821);
   data_mc_ratio__646->SetBinContent(29,1.083838);
   data_mc_ratio__646->SetBinContent(30,11.36441);
   data_mc_ratio__646->SetBinContent(31,11.71775);
   data_mc_ratio__646->SetBinError(1,0.01128321);
   data_mc_ratio__646->SetBinError(2,0.006170884);
   data_mc_ratio__646->SetBinError(3,0.006217882);
   data_mc_ratio__646->SetBinError(4,0.006712956);
   data_mc_ratio__646->SetBinError(5,0.006632036);
   data_mc_ratio__646->SetBinError(6,0.009160641);
   data_mc_ratio__646->SetBinError(7,0.008069371);
   data_mc_ratio__646->SetBinError(8,0.01102424);
   data_mc_ratio__646->SetBinError(9,0.009666336);
   data_mc_ratio__646->SetBinError(10,0.01545836);
   data_mc_ratio__646->SetBinError(11,0.01154498);
   data_mc_ratio__646->SetBinError(12,0.01059799);
   data_mc_ratio__646->SetBinError(13,0.01248397);
   data_mc_ratio__646->SetBinError(14,0.01161893);
   data_mc_ratio__646->SetBinError(15,0.02043255);
   data_mc_ratio__646->SetBinError(16,0.01353901);
   data_mc_ratio__646->SetBinError(17,0.02013353);
   data_mc_ratio__646->SetBinError(18,0.0224921);
   data_mc_ratio__646->SetBinError(19,0.0322742);
   data_mc_ratio__646->SetBinError(20,0.03956686);
   data_mc_ratio__646->SetBinError(21,0.06342564);
   data_mc_ratio__646->SetBinError(22,0.03033852);
   data_mc_ratio__646->SetBinError(23,0.05086553);
   data_mc_ratio__646->SetBinError(24,0.09516824);
   data_mc_ratio__646->SetBinError(25,0.2384993);
   data_mc_ratio__646->SetBinError(26,0.4435982);
   data_mc_ratio__646->SetBinError(27,0.3322312);
   data_mc_ratio__646->SetBinError(28,0.5608629);
   data_mc_ratio__646->SetBinError(29,0.1758218);
   data_mc_ratio__646->SetBinError(30,2.756274);
   data_mc_ratio__646->SetBinError(31,3.227018);
   data_mc_ratio__646->SetMinimum(0.4);
   data_mc_ratio__646->SetMaximum(1.6);
   data_mc_ratio__646->SetEntries(94.35585);
   data_mc_ratio__646->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__646->SetLineColor(ci);
   data_mc_ratio__646->SetLineWidth(2);
   data_mc_ratio__646->SetMarkerStyle(20);
   data_mc_ratio__646->SetMarkerSize(1.2);
   data_mc_ratio__646->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   data_mc_ratio__646->GetXaxis()->SetRange(1,30);
   data_mc_ratio__646->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__646->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__646->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__646->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__646->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__646->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__646->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__646->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__646->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__646->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__646->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__646->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__646->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__646->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__646->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__646->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__646->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1470[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1470[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1470[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1470[30] = {
   0.110024,
   0.06768694,
   0.0863249,
   0.1183142,
   0.08971522,
   0.100614,
   0.1056865,
   0.1113045,
   0.1177552,
   0.1280819,
   0.1369502,
   0.1263139,
   0.1372153,
   0.1434058,
   0.09468712,
   0.1430119,
   0.1502008,
   0.1957626,
   0.2406023,
   0.1368145,
   0.173394,
   0.4975105,
   0.7282627,
   0.2983115,
   0.5258532,
   0.4606082,
   0.528272,
   0.7265984,
   0.9500424,
   0.2220929};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1470,Graph_from_mc_statistical_error_fy1470,Graph_from_mc_statistical_error_fex1470,Graph_from_mc_statistical_error_fey1470);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1470 = new TH1F("Graph_Graph_from_mc_statistical_error1470","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1470->SetMinimum(0.04496182);
   Graph_Graph_from_mc_statistical_error1470->SetMaximum(2.140051);
   Graph_Graph_from_mc_statistical_error1470->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1470->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1470->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1470->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1470->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1470->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1470->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1470->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1470->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1470->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1470->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1470->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1470->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1470->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1470->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1470->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1470);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj0_both_18->cd();
   H_dR_Bj0_both_18->Modified();
   H_dR_Bj0_both_18->cd();
   H_dR_Bj0_both_18->SetSelected(H_dR_Bj0_both_18);
}
