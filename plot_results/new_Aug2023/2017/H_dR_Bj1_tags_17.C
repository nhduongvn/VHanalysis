void H_dR_Bj1_tags_17()
{
//=========Macro generated from canvas: H_dR_Bj1_tags_17/H_dR_Bj1_tags_17
//=========  (Tue Aug 22 09:20:35 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_tags_17 = new TCanvas("H_dR_Bj1_tags_17", "H_dR_Bj1_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_tags_17->SetHighLightColor(2);
   H_dR_Bj1_tags_17->Range(0,0,1,1);
   H_dR_Bj1_tags_17->SetFillColor(0);
   H_dR_Bj1_tags_17->SetFillStyle(4000);
   H_dR_Bj1_tags_17->SetBorderMode(0);
   H_dR_Bj1_tags_17->SetBorderSize(2);
   H_dR_Bj1_tags_17->SetFrameFillStyle(1000);
   H_dR_Bj1_tags_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-78.57071,6.314516,78502.13);
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
   st->SetMaximum(67280.06);
   
   TH1F *st_stack_46 = new TH1F("st_stack_46","",30,0,6);
   st_stack_46->SetMinimum(0.01);
   st_stack_46->SetMaximum(70644.06);
   st_stack_46->SetDirectory(0);
   st_stack_46->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_46->SetLineColor(ci);
   st_stack_46->GetXaxis()->SetRange(1,30);
   st_stack_46->GetXaxis()->SetLabelFont(42);
   st_stack_46->GetXaxis()->SetLabelSize(0.035);
   st_stack_46->GetXaxis()->SetTitleSize(0.035);
   st_stack_46->GetXaxis()->SetTitleFont(42);
   st_stack_46->GetYaxis()->SetTitle("Events/0.2");
   st_stack_46->GetYaxis()->SetLabelFont(42);
   st_stack_46->GetYaxis()->SetLabelSize(0.05);
   st_stack_46->GetYaxis()->SetTitleSize(0.057);
   st_stack_46->GetYaxis()->SetTitleOffset(1.2);
   st_stack_46->GetYaxis()->SetTitleFont(42);
   st_stack_46->GetZaxis()->SetLabelFont(42);
   st_stack_46->GetZaxis()->SetLabelSize(0.035);
   st_stack_46->GetZaxis()->SetTitleSize(0.035);
   st_stack_46->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_46);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(1,5605.197);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(2,24506.84);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(3,23233.83);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(4,16582.47);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(5,13613.35);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(6,28594.73);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(7,12338.32);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(8,11653.8);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(9,5606.207);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(10,7363.225);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(11,23230.62);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(12,5301.941);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(13,6972.734);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(14,4292.12);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(15,4749.753);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(16,5080.537);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(17,3210.833);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(18,2362.315);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(19,1468.753);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(20,1672.214);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(21,404.3295);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(22,718.8808);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(23,680.2707);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(24,514.0201);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(25,688.1261);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(26,523.4083);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(27,660.1013);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(28,71.08048);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(29,80.89311);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(30,4.962806);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(31,58.75178);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(1,597.211);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(2,2170.573);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(3,1923.654);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(4,1584.384);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(5,1500.243);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(6,17084.71);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(7,1471.666);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(8,1467.178);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(9,800.2951);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(10,1096.582);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(11,17056.54);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(12,873.185);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(13,1544.604);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(14,782.9032);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(15,870.0808);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(16,945.6318);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(17,769.2071);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(18,614.9154);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(19,400.1645);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(20,481.8073);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(21,80.12513);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(22,282.4292);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(23,281.7743);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(24,276.576);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(25,381.4648);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(26,276.6028);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(27,380.6052);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(28,30.58231);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(29,31.98303);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(30,4.140838);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(31,36.22388);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetEntries(9351);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(1,36.74175);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(2,114.9733);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(3,124.266);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(4,106.5603);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(5,84.95029);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(6,69.79521);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(7,58.78383);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(8,52.70236);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(9,43.79577);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(10,40.12696);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(11,30.132);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(12,26.61759);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(13,23.53182);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(14,23.20591);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(15,22.79154);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(16,20.15697);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(17,19.64816);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(18,13.41677);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(19,8.748089);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(20,8.824731);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(21,7.506888);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(22,7.049589);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(23,4.533493);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(24,3.680038);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(25,3.425441);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(26,3.254123);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(27,1.712942);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(28,1.188737);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(29,0.8700545);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(30,0.684458);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(31,1.600444);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(1,2.424438);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(2,4.237527);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(3,4.342074);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(4,4.063525);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(5,3.592644);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(6,3.276428);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(7,3.003922);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(8,2.97852);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(9,2.650625);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(10,2.516458);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(11,2.050618);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(12,1.964324);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(13,1.789865);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(14,1.878212);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(15,1.84212);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(16,1.740972);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(17,1.872711);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(18,1.401542);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(19,1.027767);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(20,1.134372);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(21,1.077749);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(22,1.069033);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(23,0.7503911);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(24,0.7215042);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(25,0.6750323);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(26,0.747434);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(27,0.6041039);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(28,0.415633);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(29,0.3166156);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(30,0.3830516);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(31,0.4980776);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetEntries(11598);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_3 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(1,544.8874);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(2,2062.679);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(3,2518.09);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(4,2226.454);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(5,1808.293);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(6,1430.8);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(7,1162.322);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(8,960.0085);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(9,835.4105);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(10,730.209);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(11,663.1464);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(12,613.6342);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(13,551.1421);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(14,487.2257);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(15,429.8938);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(16,369.0011);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(17,296.7235);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(18,246.0793);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(19,208.9821);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(20,169.0496);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(21,135.152);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(22,104.1641);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(23,83.15385);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(24,65.953);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(25,48.11835);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(26,34.40762);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(27,25.47589);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(28,17.39479);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(29,10.85619);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(30,7.431802);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(31,12.97179);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(1,5.910952);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(2,11.50216);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(3,12.74983);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(4,12.00581);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(5,10.81595);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(6,9.622681);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(7,8.664849);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(8,7.871757);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(9,7.351961);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(10,6.860846);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(11,6.550909);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(12,6.308368);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(13,5.968862);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(14,5.618976);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(15,5.272682);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(16,4.879842);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(17,4.368213);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(18,3.979181);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(19,3.666928);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(20,3.293403);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(21,2.942304);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(22,2.575075);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(23,2.300495);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(24,2.06237);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(25,1.747414);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(26,1.472715);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(27,1.261884);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(28,1.057638);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(29,0.8295349);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(30,0.6841824);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(31,0.8969347);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetEntries(305979);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_4 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(1,100.3063);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(2,314.8899);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(3,323.5409);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(4,269.4687);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(5,199.8733);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(6,159.9352);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(7,140.9998);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(8,118.7624);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(9,95.93136);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(10,97.12081);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(11,80.48775);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(12,84.6408);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(13,72.2094);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(14,56.28854);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(15,55.31579);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(16,45.22154);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(17,36.57365);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(18,34.58356);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(19,18.94917);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(20,18.95135);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(21,16.72162);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(22,9.809088);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(23,10.45735);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(24,8.276962);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(25,4.989334);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(26,3.437459);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(27,3.103287);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(28,2.245747);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(29,0.6422223);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(30,0.3698055);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(31,0.7967094);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(1,3.494874);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(2,10.90218);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(3,11.60764);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(4,11.21975);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(5,9.243226);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(6,8.18809);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(7,9.951902);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(8,8.223914);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(9,6.761548);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(10,7.372138);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(11,6.535056);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(12,7.812144);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(13,6.38835);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(14,3.383031);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(15,4.454109);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(16,4.176753);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(17,4.031955);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(18,4.992848);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(19,1.874723);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(20,1.982634);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(21,1.935175);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(22,1.313526);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(23,1.520467);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(24,1.19393);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(25,0.9328396);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(26,0.7665185);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(27,0.639105);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(28,0.6483343);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(29,0.232377);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(30,0.1685038);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(31,0.3850635);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetEntries(17592);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_5 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(1,16.39739);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(2,36.94706);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(3,37.96471);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(4,22.20606);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(5,24.50377);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(6,14.9466);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(7,12.36532);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(8,10.83336);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(9,8.65841);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(10,10.363);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(11,5.638858);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(12,7.633548);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(13,10.36799);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(14,5.14963);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(15,5.456637);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(16,6.037192);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(17,2.889706);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(18,2.796842);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(19,1.912517);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(20,2.164769);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(21,2.718616);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(22,1.648326);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(23,1.097411);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(24,0.9353437);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(25,0.5646304);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(26,0.2137013);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(27,0.3355794);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(28,0.09122051);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(30,0.2429669);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(1,1.274661);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(2,4.054828);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(3,8.236846);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(4,3.056812);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(5,7.944646);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(6,2.499966);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(7,2.584106);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(8,2.322503);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(9,1.582861);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(10,2.289156);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(11,1.45172);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(12,1.511077);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(13,2.678364);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(14,1.745041);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(15,1.523341);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(16,2.107201);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(17,0.5779348);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(18,1.256789);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(19,0.5952282);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(20,1.214322);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(21,1.436392);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(22,1.197332);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(23,0.3349809);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(24,0.3490191);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(25,0.4299115);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(26,0.1308853);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(27,0.1735397);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(28,0.09122051);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(30,0.1374856);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetEntries(2041);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_6 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(1,0.6306118);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(2,0.6306118);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(4,0.3153059);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(1,0.4459099);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(2,0.4459099);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(4,0.3153059);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_7 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(1,0.2651865);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(2,0.2651865);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(3,1.060746);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(4,0.2651865);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(5,1.060746);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(6,0.2651865);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(7,0.5303731);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(8,0.2651865);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(9,0.2651865);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(11,0.2651865);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(13,0.2651865);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(14,0.2651865);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(15,0.2651865);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(17,0.5303731);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(18,0.5303731);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(1,0.2651865);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(2,0.2651865);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(3,0.5303731);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(4,0.2651865);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(5,0.5303731);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(6,0.2651865);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(7,0.3750304);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(8,0.2651865);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(9,0.2651865);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(11,0.2651865);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(13,0.2651865);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(14,0.2651865);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(15,0.2651865);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(17,0.3750304);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(18,0.3750304);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetEntries(24);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_8 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(1,1.519354);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(2,6.077415);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(3,9.875799);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(4,4.811287);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(5,2.785482);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(6,1.012902);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(7,3.038707);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(8,1.266128);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(9,2.025805);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(10,2.025805);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(11,1.012902);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(12,2.27903);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(13,2.025805);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(14,1.772579);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(15,0.7596768);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(16,0.5064512);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(17,0.7596768);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(18,0.2532256);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(19,0.5064512);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(24,0.5064512);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(26,0.2532256);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(1,0.6202735);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(2,1.240547);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(3,1.581393);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(4,1.103785);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(5,0.8398543);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(6,0.5064512);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(7,0.8771992);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(8,0.5662297);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(9,0.7162302);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(10,0.7162302);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(11,0.5064512);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(12,0.7596768);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(13,0.7162302);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(14,0.669972);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(15,0.4385996);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(16,0.3581151);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(17,0.4385996);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(18,0.2532256);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(19,0.3581151);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(24,0.3581151);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(26,0.2532256);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetEntries(178);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_9 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(1,1.579584);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(2,6.181052);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(3,7.006377);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(4,5.778888);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(5,4.095936);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(6,3.097794);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(7,2.501816);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(8,2.104497);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(9,1.954291);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(10,1.921989);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(11,1.831543);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(12,1.804086);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(13,1.574739);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(14,1.251716);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(15,1.012678);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(16,0.8059433);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(17,0.5232979);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(18,0.3714769);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(19,0.276185);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(20,0.2115803);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(21,0.1566663);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(22,0.1485908);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(23,0.09367678);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(24,0.08398608);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(25,0.05975932);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(26,0.04522327);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(27,0.03876281);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(28,0.01776629);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(29,0.003230234);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(30,0.004845351);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(31,0.008075584);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(1,0.05050954);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(2,0.09991557);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(3,0.1063772);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(4,0.09661045);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(5,0.08133521);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(6,0.07073401);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(7,0.0635667);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(8,0.05830102);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(9,0.05618193);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(10,0.05571568);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(11,0.05438893);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(12,0.05397971);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(13,0.05043201);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(14,0.04496295);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(15,0.04044248);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(16,0.03607898);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(17,0.0290721);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(18,0.02449446);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(19,0.02112039);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(20,0.01848586);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(21,0.01590706);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(22,0.01549166);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(23,0.01230036);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(24,0.01164677);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(25,0.009824372);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(26,0.008546395);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(27,0.007912424);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(28,0.005356737);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(29,0.00228412);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(30,0.002797464);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(31,0.003611511);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetEntries(28819);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_10 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(1,0.6053179);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(2,2.39521);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(3,3.047734);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(4,2.639599);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(5,1.968389);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(6,1.429455);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(7,1.117207);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(8,0.905764);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(9,0.8108604);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(10,0.7828319);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(11,0.7449688);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(12,0.6869448);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(13,0.6161359);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(14,0.532542);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(15,0.4219031);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(16,0.3245409);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(17,0.2778266);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(18,0.1927576);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(19,0.1465351);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(20,0.1204735);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(21,0.09392016);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(22,0.0757262);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(23,0.06785854);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(24,0.04523903);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(25,0.02802853);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(26,0.03048717);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(27,0.01278494);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(28,0.0103263);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(29,0.002458643);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(30,0.0004917286);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(31,0.0009834572);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(1,0.0172526);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(2,0.03431899);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(3,0.0387125);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(4,0.0360273);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(5,0.03111131);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(6,0.02651233);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(7,0.02343849);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(8,0.02110427);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(9,0.01996806);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(10,0.01961991);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(11,0.01913955);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(12,0.01837908);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(13,0.01740608);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(14,0.01618228);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(15,0.01440353);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(16,0.01263274);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(17,0.01168825);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(18,0.009735729);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(19,0.008488551);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(20,0.00769677);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(21,0.006795824);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(22,0.006102191);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(23,0.005776503);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(24,0.004716495);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(25,0.003712469);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(26,0.003871875);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(27,0.002507334);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(28,0.002253383);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(29,0.001099539);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(30,0.0004917286);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(31,0.0006954092);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetEntries(40948);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_11 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(1,0.007901256);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(2,0.02370377);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(3,0.02528402);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(4,0.01896301);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(5,0.01264201);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(6,0.009481507);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(7,0.007901256);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(8,0.003160502);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(9,0.003160502);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(10,0.004740753);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(11,0.003160502);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(12,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(13,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(14,0.003160502);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(18,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(19,0.003160502);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(20,0.003160502);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(23,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(25,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(1,0.003533549);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(2,0.006120286);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(3,0.006321005);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(4,0.005474151);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(5,0.004469625);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(6,0.003870809);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(7,0.003533549);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(8,0.002234813);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(9,0.002234813);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(10,0.002737075);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(11,0.002234813);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(12,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(13,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(14,0.002234813);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(18,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(19,0.002234813);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(20,0.002234813);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(23,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(25,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetEntries(87);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_12 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(1,0.001660845);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(2,0.006643381);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(3,0.008927043);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(4,0.009134649);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(5,0.007058592);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(6,0.002906479);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(7,0.003944507);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(8,0.002283662);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(9,0.001868451);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(10,0.00145324);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(11,0.00145324);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(12,0.001038028);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(13,0.001245634);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(14,0.001038028);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(15,0.0008304226);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(16,0.001038028);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(17,0.001038028);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(18,0.0008304226);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(19,0.0004152113);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(20,0.0002076057);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(21,0.000622817);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(22,0.0004152113);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(23,0.000622817);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(24,0.0002076057);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(25,0.0004152113);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(27,0.0002076057);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(1,0.0005871975);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(2,0.001174395);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(3,0.001361361);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(4,0.0013771);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(5,0.001210539);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(6,0.0007767892);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(7,0.0009049321);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(8,0.0006885501);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(9,0.000622817);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(10,0.0005492729);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(11,0.0005492729);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(12,0.0004642204);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(13,0.0005085279);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(14,0.0004642204);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(15,0.0004152113);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(16,0.0004642204);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(17,0.0004642204);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(18,0.0004152113);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(19,0.0002935987);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(20,0.0002076057);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(21,0.0003595835);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(22,0.0002935987);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(23,0.0003595835);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(24,0.0002076057);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(25,0.0002935987);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(27,0.0002076057);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetEntries(277);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_dR_Bj1__125 = new TH1D("VbbHcc_tags_H_dR_Bj1__125","",30,0,6);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(1,3015);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(2,8488);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(3,8164);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(4,6535);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(5,5328);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(6,4394);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(7,3605);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(8,3027);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(9,2630);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(10,2365);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(11,2192);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(12,2003);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(13,1709);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(14,1644);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(15,1398);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(16,1242);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(17,976);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(18,876);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(19,726);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(20,580);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(21,495);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(22,436);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(23,349);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(24,248);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(25,217);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(26,157);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(27,113);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(28,76);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(29,50);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(30,27);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(31,54);
   VbbHcc_tags_H_dR_Bj1__125->SetEntries(63148);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1__125->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1__125->SetLineWidth(2);
   VbbHcc_tags_H_dR_Bj1__125->SetMarkerStyle(20);
   VbbHcc_tags_H_dR_Bj1__125->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR_Bj1__125->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1__125->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__125->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1__125->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1__125->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__125->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__125->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1__125->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1__125->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1__125->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__125->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__125->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1__125->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1__125->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__125->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_fx1091[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_fy1091[30] = {
   6308.14,
   27051.91,
   26258.71,
   19221,
   15740.9,
   30276.03,
   13719.99,
   12800.65,
   6595.064,
   8245.782,
   24013.88,
   6039.24,
   7634.47,
   4867.816,
   5265.671,
   5522.592,
   3568.76,
   2660.542,
   1708.278,
   1871.54,
   566.6798,
   841.7766,
   779.6766,
   593.5013,
   745.3137,
   565.0502,
   690.7808,
   92.02906,
   93.26727,
   13.69717};
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_fex1091[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_fey1091[30] = {
   597.2573,
   2170.639,
   1923.755,
   1584.478,
   1500.336,
   17084.71,
   1471.731,
   1467.227,
   800.3638,
   1096.633,
   17056.54,
   873.2465,
   1544.632,
   782.9353,
   870.1116,
   945.6577,
   769.2328,
   614.9516,
   400.1876,
   481.8255,
   80.22258,
   282.4486,
   281.789,
   276.5877,
   381.4708,
   276.609,
   380.6084,
   30.61041,
   31.9962,
   4.220033};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_Bj1_fx1091,Graph_from_VbbHcc_tags_H_dR_Bj1_fy1091,Graph_from_VbbHcc_tags_H_dR_Bj1_fex1091,Graph_from_VbbHcc_tags_H_dR_Bj1_fey1091);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->SetMinimum(8.529428);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->SetMaximum(52095.86);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_dR_Bj1","MC unc. (stat.)","fl");

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
   H_dR_Bj1_tags_17->cd();
  
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
   
   TH1D *data_mc_ratio__126 = new TH1D("data_mc_ratio__126","",30,0,6);
   data_mc_ratio__126->SetBinContent(1,0.4779539);
   data_mc_ratio__126->SetBinContent(2,0.3137671);
   data_mc_ratio__126->SetBinContent(3,0.3109063);
   data_mc_ratio__126->SetBinContent(4,0.3399928);
   data_mc_ratio__126->SetBinContent(5,0.3384814);
   data_mc_ratio__126->SetBinContent(6,0.1451313);
   data_mc_ratio__126->SetBinContent(7,0.2627553);
   data_mc_ratio__126->SetBinContent(8,0.2364723);
   data_mc_ratio__126->SetBinContent(9,0.3987831);
   data_mc_ratio__126->SetBinContent(10,0.2868133);
   data_mc_ratio__126->SetBinContent(11,0.09128053);
   data_mc_ratio__126->SetBinContent(12,0.3316643);
   data_mc_ratio__126->SetBinContent(13,0.2238531);
   data_mc_ratio__126->SetBinContent(14,0.3377284);
   data_mc_ratio__126->SetBinContent(15,0.2654932);
   data_mc_ratio__126->SetBinContent(16,0.2248944);
   data_mc_ratio__126->SetBinContent(17,0.2734844);
   data_mc_ratio__126->SetBinContent(18,0.3292562);
   data_mc_ratio__126->SetBinContent(19,0.4249894);
   data_mc_ratio__126->SetBinContent(20,0.3099052);
   data_mc_ratio__126->SetBinContent(21,0.8735091);
   data_mc_ratio__126->SetBinContent(22,0.5179521);
   data_mc_ratio__126->SetBinContent(23,0.4476215);
   data_mc_ratio__126->SetBinContent(24,0.4178592);
   data_mc_ratio__126->SetBinContent(25,0.2911526);
   data_mc_ratio__126->SetBinContent(26,0.2778514);
   data_mc_ratio__126->SetBinContent(27,0.163583);
   data_mc_ratio__126->SetBinContent(28,0.8258261);
   data_mc_ratio__126->SetBinContent(29,0.5360937);
   data_mc_ratio__126->SetBinContent(30,1.971209);
   data_mc_ratio__126->SetBinContent(31,0.7284522);
   data_mc_ratio__126->SetBinError(1,0.00870447);
   data_mc_ratio__126->SetBinError(2,0.003405687);
   data_mc_ratio__126->SetBinError(3,0.003440947);
   data_mc_ratio__126->SetBinError(4,0.004205783);
   data_mc_ratio__126->SetBinError(5,0.004637166);
   data_mc_ratio__126->SetBinError(6,0.00218943);
   data_mc_ratio__126->SetBinError(7,0.004376216);
   data_mc_ratio__126->SetBinError(8,0.004298076);
   data_mc_ratio__126->SetBinError(9,0.007776046);
   data_mc_ratio__126->SetBinError(10,0.005897714);
   data_mc_ratio__126->SetBinError(11,0.001949655);
   data_mc_ratio__126->SetBinError(12,0.007410683);
   data_mc_ratio__126->SetBinError(13,0.005414921);
   data_mc_ratio__126->SetBinError(14,0.008329458);
   data_mc_ratio__126->SetBinError(15,0.007100678);
   data_mc_ratio__126->SetBinError(16,0.006381428);
   data_mc_ratio__126->SetBinError(17,0.008754021);
   data_mc_ratio__126->SetBinError(18,0.01112454);
   data_mc_ratio__126->SetBinError(19,0.01577284);
   data_mc_ratio__126->SetBinError(20,0.01286811);
   data_mc_ratio__126->SetBinError(21,0.03926132);
   data_mc_ratio__126->SetBinError(22,0.02480541);
   data_mc_ratio__126->SetBinError(23,0.02396063);
   data_mc_ratio__126->SetBinError(24,0.02653409);
   data_mc_ratio__126->SetBinError(25,0.01976473);
   data_mc_ratio__126->SetBinError(26,0.02217496);
   data_mc_ratio__126->SetBinError(27,0.0153886);
   data_mc_ratio__126->SetBinError(28,0.09472875);
   data_mc_ratio__126->SetBinError(29,0.0758151);
   data_mc_ratio__126->SetBinError(30,0.3793594);
   data_mc_ratio__126->SetBinError(31,0.369664);
   data_mc_ratio__126->SetMinimum(0.4);
   data_mc_ratio__126->SetMaximum(1.6);
   data_mc_ratio__126->SetEntries(174.7143);
   data_mc_ratio__126->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__126->SetLineColor(ci);
   data_mc_ratio__126->SetLineWidth(2);
   data_mc_ratio__126->SetMarkerStyle(20);
   data_mc_ratio__126->SetMarkerSize(1.2);
   data_mc_ratio__126->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__126->GetXaxis()->SetRange(1,30);
   data_mc_ratio__126->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__126->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__126->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__126->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__126->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__126->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__126->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__126->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__126->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__126->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__126->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__126->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__126->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__126->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__126->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__126->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__126->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1092[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1092[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1092[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1092[30] = {
   0.09468041,
   0.08023976,
   0.07326157,
   0.08243473,
   0.09531454,
   0.5642983,
   0.1072691,
   0.1146213,
   0.121358,
   0.1329932,
   0.7102783,
   0.1445954,
   0.2023234,
   0.1608391,
   0.1652423,
   0.1712344,
   0.2155463,
   0.2311377,
   0.2342637,
   0.2574487,
   0.141566,
   0.3355386,
   0.3614178,
   0.4660271,
   0.5118259,
   0.4895299,
   0.5509829,
   0.3326168,
   0.3430592,
   0.3080951};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1092,Graph_from_mc_statistical_error_fy1092,Graph_from_mc_statistical_error_fex1092,Graph_from_mc_statistical_error_fey1092);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1092 = new TH1F("Graph_Graph_from_mc_statistical_error1092","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1092->SetMinimum(0.147666);
   Graph_Graph_from_mc_statistical_error1092->SetMaximum(1.852334);
   Graph_Graph_from_mc_statistical_error1092->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1092->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1092->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1092->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1092->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1092->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1092->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1092->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1092->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1092->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1092->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1092);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj1_tags_17->cd();
   H_dR_Bj1_tags_17->Modified();
   H_dR_Bj1_tags_17->cd();
   H_dR_Bj1_tags_17->SetSelected(H_dR_Bj1_tags_17);
}
