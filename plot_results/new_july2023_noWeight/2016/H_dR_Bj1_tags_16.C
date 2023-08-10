void H_dR_Bj1_tags_16()
{
//=========Macro generated from canvas: H_dR_Bj1_tags_16/H_dR_Bj1_tags_16
//=========  (Thu Aug 10 12:27:47 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_tags_16 = new TCanvas("H_dR_Bj1_tags_16", "H_dR_Bj1_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_tags_16->SetHighLightColor(2);
   H_dR_Bj1_tags_16->Range(0,0,1,1);
   H_dR_Bj1_tags_16->SetFillColor(0);
   H_dR_Bj1_tags_16->SetFillStyle(4000);
   H_dR_Bj1_tags_16->SetBorderMode(0);
   H_dR_Bj1_tags_16->SetBorderSize(2);
   H_dR_Bj1_tags_16->SetFrameFillStyle(1000);
   H_dR_Bj1_tags_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-62.73375,6.314516,62681.01);
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
   st->SetMaximum(53720.61);
   
   TH1F *st_stack_45 = new TH1F("st_stack_45","",30,0,6);
   st_stack_45->SetMinimum(0.01);
   st_stack_45->SetMaximum(56406.64);
   st_stack_45->SetDirectory(0);
   st_stack_45->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_45->SetLineColor(ci);
   st_stack_45->GetXaxis()->SetRange(1,30);
   st_stack_45->GetXaxis()->SetLabelFont(42);
   st_stack_45->GetXaxis()->SetLabelSize(0.035);
   st_stack_45->GetXaxis()->SetTitleSize(0.035);
   st_stack_45->GetXaxis()->SetTitleFont(42);
   st_stack_45->GetYaxis()->SetTitle("Events/0.2");
   st_stack_45->GetYaxis()->SetLabelFont(42);
   st_stack_45->GetYaxis()->SetLabelSize(0.05);
   st_stack_45->GetYaxis()->SetTitleSize(0.057);
   st_stack_45->GetYaxis()->SetTitleOffset(1.2);
   st_stack_45->GetYaxis()->SetTitleFont(42);
   st_stack_45->GetZaxis()->SetLabelFont(42);
   st_stack_45->GetZaxis()->SetLabelSize(0.035);
   st_stack_45->GetZaxis()->SetTitleSize(0.035);
   st_stack_45->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_45);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(1,6192.319);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(2,22362.98);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(3,18095.38);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(4,18162.27);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(5,15216.1);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(6,8329.809);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(7,10026.18);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(8,7809.393);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(9,7770.951);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(10,8944.2);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(11,7804.826);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(12,8964.065);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(13,7601.179);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(14,5974.53);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(15,2930.635);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(16,3145.047);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(17,2441.678);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(18,1784.202);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(19,1477.485);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(20,2462.452);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(21,1020.619);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(22,1012.113);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(23,715.5956);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(24,509.5286);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(25,1196.191);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(26,159.9823);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(27,605.227);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(28,59.95528);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(29,45.33421);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(30,4.176778);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(31,51.47168);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(1,912.2343);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(2,2642.536);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(3,2142.021);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(4,2235.85);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(5,2115.943);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(6,1073.241);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(7,1339.327);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(8,1731.76);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(9,1769.824);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(10,2592.61);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(11,1770.278);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(12,2237.626);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(13,1769.446);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(14,1663.015);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(15,622.884);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(16,676.872);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(17,615.9348);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(18,547.8966);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(19,400.4649);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(20,1448.446);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(21,390.2736);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(22,390.7358);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(23,382.7833);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(24,276.6451);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(25,538.8666);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(26,48.21526);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(27,380.5817);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(28,26.29244);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(29,15.95971);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(30,3.566773);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(31,31.79544);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetEntries(9717);

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
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(1,28.50715);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(2,82.15476);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(3,88.39879);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(4,75.15277);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(5,70.37165);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(6,54.91609);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(7,45.27923);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(8,35.75581);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(9,35.23586);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(10,29.97744);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(11,28.32709);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(12,24.65028);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(13,23.12625);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(14,21.94182);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(15,18.07292);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(16,14.23119);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(17,8.798124);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(18,9.378836);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(19,8.09423);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(20,7.4062);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(21,7.855088);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(22,6.756171);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(23,3.816781);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(24,3.276573);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(25,3.122303);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(26,1.169976);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(27,0.72072);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(28,0.9006043);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(29,0.3778393);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(30,0.3628219);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(31,0.225662);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(1,2.214443);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(2,3.534795);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(3,3.679993);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(4,3.306918);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(5,3.337654);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(6,2.924577);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(7,2.663494);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(8,2.315823);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(9,2.358007);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(10,2.149088);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(11,2.188756);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(12,1.974937);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(13,1.910415);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(14,1.899541);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(15,1.700457);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(16,1.458002);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(17,1.028974);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(18,1.220176);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(19,0.98109);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(20,1.079248);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(21,1.195265);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(22,1.092507);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(23,0.7677586);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(24,0.6660025);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(25,0.7474345);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(26,0.4156862);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(27,0.1805103);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(28,0.3969933);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(29,0.1339518);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(30,0.2765935);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(31,0.1011127);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetEntries(9491);

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
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(1,396.7963);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(2,1445.265);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(3,1783.364);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(4,1644.467);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(5,1331.747);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(6,1054.996);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(7,847.4083);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(8,701.7536);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(9,620.0549);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(10,544.7405);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(11,496.6348);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(12,448.835);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(13,402.0587);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(14,357.6901);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(15,317.7551);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(16,278.9523);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(17,221.1727);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(18,187.4075);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(19,153.2141);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(20,120.5425);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(21,95.65922);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(22,82.60241);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(23,61.77195);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(24,44.46675);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(25,36.17474);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(26,25.14234);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(27,18.03995);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(28,12.15401);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(29,8.405235);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(30,5.327118);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(31,10.37161);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(1,4.987365);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(2,9.512103);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(3,10.59287);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(4,10.18559);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(5,9.167135);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(6,8.162905);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(7,7.298369);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(8,6.649637);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(9,6.243721);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(10,5.857755);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(11,5.591611);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(12,5.327094);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(13,5.034503);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(14,4.746806);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(15,4.472312);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(16,4.192026);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(17,3.715944);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(18,3.433658);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(19,3.095303);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(20,2.743085);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(21,2.438339);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(22,2.273197);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(23,1.963574);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(24,1.660728);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(25,1.503493);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(26,1.247002);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(27,1.057709);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(28,0.8688528);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(29,0.7314402);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(30,0.5744479);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(31,0.7957182);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetEntries(225965);

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
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(1,74.42514);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(2,240.4169);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(3,278.5052);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(4,237.9743);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(5,175.7405);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(6,151.0132);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(7,108.9473);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(8,101.3825);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(9,85.68337);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(10,72.06507);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(11,66.04459);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(12,65.85432);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(13,57.04313);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(14,62.7136);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(15,39.81855);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(16,42.47363);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(17,33.84651);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(18,28.94392);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(19,22.64241);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(20,18.37288);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(21,11.92532);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(22,5.943639);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(23,7.821144);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(24,7.878799);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(25,3.895688);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(26,4.184631);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(27,2.18557);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(28,1.527079);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(29,0.3680579);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(30,0.581);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(31,1.631004);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(1,4.578718);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(2,9.584079);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(3,14.02294);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(4,13.28785);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(5,12.33044);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(6,10.69671);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(7,7.719637);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(8,8.842729);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(9,7.417436);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(10,6.76928);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(11,5.043928);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(12,6.722813);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(13,5.490539);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(14,6.692136);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(15,4.517987);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(16,5.24232);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(17,5.712682);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(18,4.357264);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(19,4.175013);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(20,3.189498);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(21,2.955427);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(22,0.8490298);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(23,1.171866);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(24,2.813157);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(25,0.7585026);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(26,0.8414835);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(27,0.5748871);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(28,0.3343152);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(29,0.1651011);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(30,0.3177356);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(31,0.5918961);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetEntries(14953);

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
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(1,13.28284);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(2,28.32267);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(3,21.23675);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(4,17.55472);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(5,16.35405);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(6,16.68635);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(7,8.060645);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(8,8.67785);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(9,9.139436);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(10,5.518735);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(11,5.699307);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(12,10.54538);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(13,5.67791);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(14,3.838433);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(15,3.129675);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(16,2.687322);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(17,2.635837);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(18,1.93992);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(19,1.982489);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(20,1.065654);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(21,1.025128);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(22,0.8782007);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(23,0.9125961);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(24,0.2930812);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(25,1.460479);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(26,0.2131258);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(27,0.2135643);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(28,0.3046901);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(29,0.1161944);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(30,0.2627477);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(31,0.0002136538);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(1,1.063165);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(2,6.354017);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(3,2.816435);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(4,2.599544);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(5,2.727844);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(6,6.359422);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(7,1.41494);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(8,1.956516);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(9,2.211149);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(10,1.553084);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(11,1.240732);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(12,2.484172);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(13,1.598666);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(14,1.164873);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(15,1.11924);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(16,0.4825409);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(17,0.6677874);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(18,0.429601);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(19,1.070716);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(20,0.3075911);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(21,0.317875);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(22,0.2855983);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(23,0.2736682);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(24,0.1387184);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(25,1.086889);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(26,0.1229251);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(27,0.1054398);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(28,0.178144);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(29,0.08392643);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(30,0.1690684);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(31,0.0002136538);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetEntries(3420);

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
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(2,0.2687386);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(3,0.2687386);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(5,0.1343693);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(6,0.2687386);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(9,0.1343693);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(11,0.1343693);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(15,0.1343693);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(17,0.1343693);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(2,0.1900269);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(3,0.1900269);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(5,0.1343693);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(6,0.1900269);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(9,0.1343693);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(11,0.1343693);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(15,0.1343693);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(17,0.1343693);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetEntries(11);

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
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(1,0.4362346);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(2,1.090586);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(3,0.5452932);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(4,0.7634105);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(5,0.2181173);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(6,0.6543518);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(7,0.1090586);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(8,0.1090586);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(11,0.2181173);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(12,0.1090586);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(14,0.1090586);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(15,0.2181173);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(16,0.3271759);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(17,0.2181173);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(30,0.1090586);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(1,0.2181173);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(2,0.3448737);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(3,0.2438625);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(4,0.288542);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(5,0.1542322);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(6,0.267138);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(7,0.1090586);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(8,0.1090586);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(11,0.1542322);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(12,0.1090586);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(14,0.1090586);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(15,0.1542322);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(16,0.1888951);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(17,0.1542322);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(30,0.1090586);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetEntries(48);

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
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(1,0.4864143);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(2,7.053007);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(3,3.648107);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(4,3.161693);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(5,4.377729);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(6,3.161693);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(7,2.675279);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(8,2.188864);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(9,1.70245);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(10,1.945657);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(11,1.70245);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(12,1.945657);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(13,0.9728286);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(14,1.216036);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(15,1.216036);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(16,1.216036);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(17,1.459243);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(18,0.2432072);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(19,0.2432072);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(20,0.2432072);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(21,0.4864143);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(23,0.4864143);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(27,0.2432072);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(1,0.3439469);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(2,1.309711);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(3,0.9419372);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(4,0.8768959);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(5,1.031841);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(6,0.8768959);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(7,0.8066269);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(8,0.7296215);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(9,0.6434656);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(10,0.6878937);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(11,0.6434656);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(12,0.6878937);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(13,0.4864143);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(14,0.5438277);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(15,0.5438277);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(16,0.5438277);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(17,0.5957334);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(18,0.2432072);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(19,0.2432072);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(20,0.2432072);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(21,0.3439469);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(23,0.3439469);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(27,0.2432072);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetEntries(173);

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
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(1,1.17885);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(2,4.602735);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(3,5.90524);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(4,4.968206);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(5,3.836071);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(6,2.668212);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(7,2.098023);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(8,1.768275);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(9,1.596531);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(10,1.640497);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(11,1.574548);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(12,1.479745);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(13,1.346472);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(14,1.115648);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(15,0.8697108);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(16,0.6443829);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(17,0.4808828);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(18,0.3366179);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(19,0.2610506);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(20,0.2005968);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(21,0.140143);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(22,0.1250295);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(23,0.1085421);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(24,0.06732359);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(25,0.06594964);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(26,0.04808828);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(27,0.02473111);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(28,0.01099161);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(29,0.006869754);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(30,0.002747902);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(31,0.001373951);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(1,0.04024527);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(2,0.07952315);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(3,0.09007502);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(4,0.08262004);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(5,0.07259871);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(6,0.06054744);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(7,0.05368966);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(8,0.04929019);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(9,0.0468354);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(10,0.04747591);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(11,0.04651184);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(12,0.04508987);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(13,0.04301146);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(14,0.03915157);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(15,0.0345679);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(16,0.02975484);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(17,0.02570427);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(18,0.02150573);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(19,0.0189386);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(20,0.01660151);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(21,0.01387622);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(22,0.01310666);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(23,0.01221194);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(24,0.009617655);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(25,0.00951901);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(26,0.008128402);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(27,0.005829179);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(28,0.00388612);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(29,0.003072247);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(30,0.00194306);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(31,0.001373951);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetEntries(28512);

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
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(1,0.5309825);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(2,2.096003);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(3,2.660641);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(4,2.290064);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(5,1.721128);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(6,1.240272);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(7,0.9792564);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(8,0.8045298);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(9,0.720389);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(10,0.689597);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(11,0.6494958);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(12,0.5943567);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(13,0.5306245);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(14,0.4561509);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(15,0.3601945);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(16,0.2796341);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(17,0.2391749);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(18,0.1686398);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(19,0.1296127);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(20,0.1052656);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(21,0.08772132);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(22,0.06516441);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(23,0.06265809);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(24,0.03974313);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(25,0.02577933);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(26,0.02685347);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(27,0.01074139);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(28,0.007877017);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(29,0.002148277);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(30,0.0003580462);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(31,0.001432185);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(1,0.01378827);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(2,0.02739463);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(3,0.03086475);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(4,0.02863474);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(5,0.02482425);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(6,0.02107308);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(7,0.01872482);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(8,0.0169723);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(9,0.01606028);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(10,0.01571329);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(11,0.01524957);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(12,0.01458791);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(13,0.01378362);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(14,0.01277979);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(15,0.01135633);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(16,0.01000609);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(17,0.009253953);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(18,0.00777051);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(19,0.006812294);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(20,0.006139214);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(21,0.00560431);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(22,0.004830307);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(23,0.004736506);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(24,0.003772251);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(25,0.003038123);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(26,0.003100771);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(27,0.0019611);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(28,0.001679386);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(29,0.0008770305);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(30,0.0003580462);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(31,0.0007160924);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetEntries(49090);

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
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(1,0.002735007);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(2,0.01367504);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(3,0.01367504);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(4,0.01367504);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(5,0.005470015);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(6,0.01094003);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(7,0.002735007);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(8,0.005470015);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(9,0.005470015);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(13,0.008205022);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(14,0.005470015);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(15,0.002735007);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(16,0.002735007);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(18,0.002735007);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(23,0.002735007);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(1,0.002735007);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(2,0.006115663);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(3,0.006115663);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(4,0.006115663);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(5,0.003867885);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(6,0.005470015);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(7,0.002735007);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(8,0.003867885);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(9,0.003867885);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(13,0.004737172);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(14,0.003867885);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(15,0.002735007);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(16,0.002735007);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(18,0.002735007);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(23,0.002735007);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetEntries(36);

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
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(1,0.001071798);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(2,0.00857438);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(3,0.008217114);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(4,0.003929924);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(5,0.005358988);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(6,0.001429063);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(7,0.001429063);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(8,0.002858127);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(9,0.001429063);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(10,0.001786329);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(11,0.0007145317);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(12,0.001786329);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(13,0.001429063);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(14,0.0003572658);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(15,0.001071798);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(16,0.001071798);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(17,0.0007145317);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(20,0.0003572658);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(21,0.0003572658);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(22,0.0003572658);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(24,0.0007145317);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(25,0.0003572658);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(1,0.0006188026);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(2,0.001750238);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(3,0.001713387);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(4,0.001184917);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(5,0.001383685);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(6,0.0007145317);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(7,0.0007145317);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(8,0.0010105);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(9,0.0007145317);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(10,0.0007988707);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(11,0.0005052502);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(12,0.0007988707);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(13,0.0007145317);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(14,0.0003572658);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(15,0.0006188026);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(16,0.0006188026);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(17,0.0005052502);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(20,0.0003572658);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(21,0.0003572658);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(22,0.0003572658);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(24,0.0005052502);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(25,0.0003572658);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetEntries(127);

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
   
   TH1D *VbbHcc_tags_H_dR_Bj1__122 = new TH1D("VbbHcc_tags_H_dR_Bj1__122","",30,0,6);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(1,4594);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(2,12368);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(3,12201);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(4,9889);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(5,8052);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(6,6786);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(7,5389);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(8,4765);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(9,4111);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(10,3733);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(11,3456);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(12,3126);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(13,2919);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(14,2593);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(15,2239);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(16,1917);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(17,1621);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(18,1407);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(19,1135);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(20,841);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(21,820);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(22,639);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(23,521);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(24,424);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(25,277);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(26,212);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(27,174);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(28,115);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(29,77);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(30,50);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(31,94);
   VbbHcc_tags_H_dR_Bj1__122->SetEntries(96574);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1__122->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1__122->SetLineWidth(2);
   VbbHcc_tags_H_dR_Bj1__122->SetMarkerStyle(20);
   VbbHcc_tags_H_dR_Bj1__122->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR_Bj1__122->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1__122->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__122->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1__122->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1__122->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__122->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__122->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1__122->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1__122->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1__122->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__122->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__122->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1__122->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1__122->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__122->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_fx1089[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_fy1089[30] = {
   6707.967,
   24174.27,
   20279.93,
   20148.62,
   16820.62,
   9615.426,
   11041.74,
   8661.842,
   8525.225,
   9600.779,
   8405.811,
   9518.08,
   8091.944,
   6423.617,
   3312.213,
   3485.862,
   2710.663,
   2012.624,
   1664.052,
   2610.389,
   1137.799,
   1108.484,
   790.5784,
   565.5515,
   1240.937,
   190.7673,
   626.6655,
   74.86054,
   54.61055,
   10.82263};
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_fex1089[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_fey1089[30] = {
   912.2628,
   2642.581,
   2142.098,
   2235.917,
   2116.003,
   1073.349,
   1339.373,
   1731.798,
   1769.853,
   2592.627,
   1770.296,
   2237.645,
   1769.464,
   1663.037,
   622.9201,
   676.9073,
   615.974,
   547.9262,
   400.5014,
   1448.452,
   390.2946,
   390.745,
   382.7912,
   276.6652,
   538.8708,
   48.24067,
   380.5837,
   26.31251,
   15.9781,
   3.642774};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_Bj1_fx1089,Graph_from_VbbHcc_tags_H_dR_Bj1_fy1089,Graph_from_VbbHcc_tags_H_dR_Bj1_fex1089,Graph_from_VbbHcc_tags_H_dR_Bj1_fey1089);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->SetMinimum(6.46187);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->SetMaximum(29497.82);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1","Data (JetHT, 2016)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_Bj1_tags_16->cd();
  
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
   
   TH1D *data_mc_ratio__123 = new TH1D("data_mc_ratio__123","",30,0,6);
   data_mc_ratio__123->SetBinContent(1,0.6848573);
   data_mc_ratio__123->SetBinContent(2,0.5116183);
   data_mc_ratio__123->SetBinContent(3,0.6016292);
   data_mc_ratio__123->SetBinContent(4,0.4908029);
   data_mc_ratio__123->SetBinContent(5,0.4786983);
   data_mc_ratio__123->SetBinContent(6,0.7057409);
   data_mc_ratio__123->SetBinContent(7,0.4880572);
   data_mc_ratio__123->SetBinContent(8,0.5501139);
   data_mc_ratio__123->SetBinContent(9,0.482216);
   data_mc_ratio__123->SetBinContent(10,0.3888226);
   data_mc_ratio__123->SetBinContent(11,0.4111441);
   data_mc_ratio__123->SetBinContent(12,0.3284276);
   data_mc_ratio__123->SetBinContent(13,0.3607291);
   data_mc_ratio__123->SetBinContent(14,0.4036667);
   data_mc_ratio__123->SetBinContent(15,0.6759831);
   data_mc_ratio__123->SetBinContent(16,0.5499356);
   data_mc_ratio__123->SetBinContent(17,0.5980086);
   data_mc_ratio__123->SetBinContent(18,0.6990875);
   data_mc_ratio__123->SetBinContent(19,0.6820701);
   data_mc_ratio__123->SetBinContent(20,0.3221743);
   data_mc_ratio__123->SetBinContent(21,0.72069);
   data_mc_ratio__123->SetBinContent(22,0.576463);
   data_mc_ratio__123->SetBinContent(23,0.6590112);
   data_mc_ratio__123->SetBinContent(24,0.7497106);
   data_mc_ratio__123->SetBinContent(25,0.2232185);
   data_mc_ratio__123->SetBinContent(26,1.111302);
   data_mc_ratio__123->SetBinContent(27,0.2776601);
   data_mc_ratio__123->SetBinContent(28,1.53619);
   data_mc_ratio__123->SetBinContent(29,1.409984);
   data_mc_ratio__123->SetBinContent(30,4.619949);
   data_mc_ratio__123->SetBinContent(31,1.475598);
   data_mc_ratio__123->SetBinError(1,0.01010426);
   data_mc_ratio__123->SetBinError(2,0.004600408);
   data_mc_ratio__123->SetBinError(3,0.005446672);
   data_mc_ratio__123->SetBinError(4,0.004935497);
   data_mc_ratio__123->SetBinError(5,0.0053347);
   data_mc_ratio__123->SetBinError(6,0.00856719);
   data_mc_ratio__123->SetBinError(7,0.006648392);
   data_mc_ratio__123->SetBinError(8,0.007969318);
   data_mc_ratio__123->SetBinError(9,0.007520867);
   data_mc_ratio__123->SetBinError(10,0.006363888);
   data_mc_ratio__123->SetBinError(11,0.006993704);
   data_mc_ratio__123->SetBinError(12,0.005874151);
   data_mc_ratio__123->SetBinError(13,0.006676735);
   data_mc_ratio__123->SetBinError(14,0.007927233);
   data_mc_ratio__123->SetBinError(15,0.01428594);
   data_mc_ratio__123->SetBinError(16,0.01256032);
   data_mc_ratio__123->SetBinError(17,0.01485306);
   data_mc_ratio__123->SetBinError(18,0.01863736);
   data_mc_ratio__123->SetBinError(19,0.02024562);
   data_mc_ratio__123->SetBinError(20,0.01110946);
   data_mc_ratio__123->SetBinError(21,0.02516759);
   data_mc_ratio__123->SetBinError(22,0.02280452);
   data_mc_ratio__123->SetBinError(23,0.0288718);
   data_mc_ratio__123->SetBinError(24,0.03640917);
   data_mc_ratio__123->SetBinError(25,0.0134119);
   data_mc_ratio__123->SetBinError(26,0.07632451);
   data_mc_ratio__123->SetBinError(27,0.02104936);
   data_mc_ratio__123->SetBinError(28,0.1432504);
   data_mc_ratio__123->SetBinError(29,0.1606826);
   data_mc_ratio__123->SetBinError(30,0.6533595);
   data_mc_ratio__123->SetBinError(31,0.7524164);
   data_mc_ratio__123->SetMinimum(0.4);
   data_mc_ratio__123->SetMaximum(1.6);
   data_mc_ratio__123->SetEntries(122.5372);
   data_mc_ratio__123->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__123->SetLineColor(ci);
   data_mc_ratio__123->SetLineWidth(2);
   data_mc_ratio__123->SetMarkerStyle(20);
   data_mc_ratio__123->SetMarkerSize(1.2);
   data_mc_ratio__123->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__123->GetXaxis()->SetRange(1,30);
   data_mc_ratio__123->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__123->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__123->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__123->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__123->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__123->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__123->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__123->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__123->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__123->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__123->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__123->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__123->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__123->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__123->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__123->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__123->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1090[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1090[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1090[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1090[30] = {
   0.1359969,
   0.1093138,
   0.1056265,
   0.1109712,
   0.1257982,
   0.1116278,
   0.1213009,
   0.1999341,
   0.207602,
   0.2700434,
   0.2106038,
   0.2350942,
   0.2186698,
   0.2588941,
   0.1880676,
   0.1941865,
   0.2272411,
   0.2722448,
   0.2406784,
   0.5548799,
   0.3430261,
   0.352504,
   0.4841913,
   0.4891953,
   0.4342452,
   0.2528771,
   0.6073156,
   0.3514871,
   0.2925827,
   0.3365886};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1090,Graph_from_mc_statistical_error_fy1090,Graph_from_mc_statistical_error_fex1090,Graph_from_mc_statistical_error_fey1090);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1090 = new TH1F("Graph_Graph_from_mc_statistical_error1090","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1090->SetMinimum(0.2712213);
   Graph_Graph_from_mc_statistical_error1090->SetMaximum(1.728779);
   Graph_Graph_from_mc_statistical_error1090->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1090->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1090->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1090->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1090->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1090->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1090->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1090->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1090->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1090->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1090->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1090->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1090->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1090->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1090->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1090->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1090);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj1_tags_16->cd();
   H_dR_Bj1_tags_16->Modified();
   H_dR_Bj1_tags_16->cd();
   H_dR_Bj1_tags_16->SetSelected(H_dR_Bj1_tags_16);
}
