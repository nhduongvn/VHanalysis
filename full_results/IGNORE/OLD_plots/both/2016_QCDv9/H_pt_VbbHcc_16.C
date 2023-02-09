void H_pt_VbbHcc_16()
{
//=========Macro generated from canvas: H_pt_VbbHcc_16/H_pt_VbbHcc_16
//=========  (Tue Nov 22 09:17:13 2022) by ROOT version 6.14/09
   TCanvas *H_pt_VbbHcc_16 = new TCanvas("H_pt_VbbHcc_16", "H_pt_VbbHcc_16",0,0,600,600);
   H_pt_VbbHcc_16->SetHighLightColor(2);
   H_pt_VbbHcc_16->Range(0,0,1,1);
   H_pt_VbbHcc_16->SetFillColor(0);
   H_pt_VbbHcc_16->SetFillStyle(4000);
   H_pt_VbbHcc_16->SetBorderMode(0);
   H_pt_VbbHcc_16->SetBorderSize(2);
   H_pt_VbbHcc_16->SetFrameFillStyle(1000);
   H_pt_VbbHcc_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(116.1295,-20081.8,1562.903,2.006173e+07);
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
   st->SetMaximum(1.719385e+07);
   
   TH1F *st_stack_13 = new TH1F("st_stack_13","",40,0,2000);
   st_stack_13->SetMinimum(0.01);
   st_stack_13->SetMaximum(1.805355e+07);
   st_stack_13->SetDirectory(0);
   st_stack_13->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_13->SetLineColor(ci);
   st_stack_13->GetXaxis()->SetRange(7,30);
   st_stack_13->GetXaxis()->SetLabelFont(42);
   st_stack_13->GetXaxis()->SetLabelSize(0.035);
   st_stack_13->GetXaxis()->SetTitleSize(0.035);
   st_stack_13->GetXaxis()->SetTitleFont(42);
   st_stack_13->GetYaxis()->SetTitle("Events/50.0");
   st_stack_13->GetYaxis()->SetLabelFont(42);
   st_stack_13->GetYaxis()->SetLabelSize(0.05);
   st_stack_13->GetYaxis()->SetTitleSize(0.057);
   st_stack_13->GetYaxis()->SetTitleOffset(1.2);
   st_stack_13->GetYaxis()->SetTitleFont(42);
   st_stack_13->GetZaxis()->SetLabelFont(42);
   st_stack_13->GetZaxis()->SetLabelSize(0.035);
   st_stack_13->GetZaxis()->SetTitleSize(0.035);
   st_stack_13->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_13);
   
   
   TH1D *VbbHcc_duong_H_pt_stack_1 = new TH1D("VbbHcc_duong_H_pt_stack_1","",40,0,2000);
   VbbHcc_duong_H_pt_stack_1->SetBinContent(1,4219518);
   VbbHcc_duong_H_pt_stack_1->SetBinContent(2,6736735);
   VbbHcc_duong_H_pt_stack_1->SetBinContent(3,2298751);
   VbbHcc_duong_H_pt_stack_1->SetBinContent(4,181507.8);
   VbbHcc_duong_H_pt_stack_1->SetBinContent(5,9535.999);
   VbbHcc_duong_H_pt_stack_1->SetBinContent(6,2066.688);
   VbbHcc_duong_H_pt_stack_1->SetBinError(1,76028.42);
   VbbHcc_duong_H_pt_stack_1->SetBinError(2,96180.31);
   VbbHcc_duong_H_pt_stack_1->SetBinError(3,56129.46);
   VbbHcc_duong_H_pt_stack_1->SetBinError(4,15787.34);
   VbbHcc_duong_H_pt_stack_1->SetBinError(5,3610.396);
   VbbHcc_duong_H_pt_stack_1->SetBinError(6,1518.185);
   VbbHcc_duong_H_pt_stack_1->SetEntries(9997);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_duong_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_stack_1->SetLineColor(ci);
   VbbHcc_duong_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_stack_1,"");
   
   TH1D *VbbHcc_duong_H_pt_stack_2 = new TH1D("VbbHcc_duong_H_pt_stack_2","",40,0,2000);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(1,33074.74);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(2,59109.85);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(3,33705.91);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(4,14240.87);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(5,6557.336);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(6,3410.417);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(7,1867.77);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(8,1110.567);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(9,677.7251);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(10,416.6919);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(11,267.7656);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(12,184.3968);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(13,121.7632);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(14,81.74631);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(15,62.10959);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(16,35.27983);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(17,31.65901);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(18,26.17112);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(19,18.56041);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(20,9.391963);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(21,6.650547);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(22,5.868533);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(23,3.79273);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(24,3.0357);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(25,2.662793);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(26,3.643586);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(27,1.526401);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(28,1.649211);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(29,0.3210492);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(30,0.950011);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(31,0.04652612);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(32,0.2504175);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(33,0.04240939);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(34,0.399246);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(36,0.7071436);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(41,0.05218216);
   VbbHcc_duong_H_pt_stack_2->SetBinError(1,71.02856);
   VbbHcc_duong_H_pt_stack_2->SetBinError(2,95.07604);
   VbbHcc_duong_H_pt_stack_2->SetBinError(3,73.19252);
   VbbHcc_duong_H_pt_stack_2->SetBinError(4,49.01984);
   VbbHcc_duong_H_pt_stack_2->SetBinError(5,33.99962);
   VbbHcc_duong_H_pt_stack_2->SetBinError(6,25.20963);
   VbbHcc_duong_H_pt_stack_2->SetBinError(7,18.99848);
   VbbHcc_duong_H_pt_stack_2->SetBinError(8,14.95522);
   VbbHcc_duong_H_pt_stack_2->SetBinError(9,11.9444);
   VbbHcc_duong_H_pt_stack_2->SetBinError(10,9.480878);
   VbbHcc_duong_H_pt_stack_2->SetBinError(11,7.694398);
   VbbHcc_duong_H_pt_stack_2->SetBinError(12,6.463049);
   VbbHcc_duong_H_pt_stack_2->SetBinError(13,5.28166);
   VbbHcc_duong_H_pt_stack_2->SetBinError(14,4.394609);
   VbbHcc_duong_H_pt_stack_2->SetBinError(15,3.897634);
   VbbHcc_duong_H_pt_stack_2->SetBinError(16,2.986164);
   VbbHcc_duong_H_pt_stack_2->SetBinError(17,2.851704);
   VbbHcc_duong_H_pt_stack_2->SetBinError(18,2.595872);
   VbbHcc_duong_H_pt_stack_2->SetBinError(19,2.199231);
   VbbHcc_duong_H_pt_stack_2->SetBinError(20,1.572814);
   VbbHcc_duong_H_pt_stack_2->SetBinError(21,1.247079);
   VbbHcc_duong_H_pt_stack_2->SetBinError(22,1.195522);
   VbbHcc_duong_H_pt_stack_2->SetBinError(23,1.025199);
   VbbHcc_duong_H_pt_stack_2->SetBinError(24,0.8800338);
   VbbHcc_duong_H_pt_stack_2->SetBinError(25,0.8259096);
   VbbHcc_duong_H_pt_stack_2->SetBinError(26,0.988039);
   VbbHcc_duong_H_pt_stack_2->SetBinError(27,0.6454644);
   VbbHcc_duong_H_pt_stack_2->SetBinError(28,0.6588725);
   VbbHcc_duong_H_pt_stack_2->SetBinError(29,0.2727161);
   VbbHcc_duong_H_pt_stack_2->SetBinError(30,0.5066958);
   VbbHcc_duong_H_pt_stack_2->SetBinError(31,0.04652612);
   VbbHcc_duong_H_pt_stack_2->SetBinError(32,0.2504175);
   VbbHcc_duong_H_pt_stack_2->SetBinError(33,0.04240939);
   VbbHcc_duong_H_pt_stack_2->SetBinError(34,0.3031898);
   VbbHcc_duong_H_pt_stack_2->SetBinError(36,0.4434471);
   VbbHcc_duong_H_pt_stack_2->SetBinError(41,0.05218216);
   VbbHcc_duong_H_pt_stack_2->SetEntries(2341547);

   ci = TColor::GetColor("#660066");
   VbbHcc_duong_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_stack_2->SetLineColor(ci);
   VbbHcc_duong_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_stack_2,"");
   
   TH1D *VbbHcc_duong_H_pt_stack_3 = new TH1D("VbbHcc_duong_H_pt_stack_3","",40,0,2000);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(1,511340.3);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(2,908411.6);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(3,510789.1);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(4,191358.3);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(5,80279.05);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(6,38497.44);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(7,20236.32);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(8,11353.64);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(9,6512.689);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(10,3888.986);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(11,2445.389);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(12,1545.62);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(13,1016.411);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(14,667.9201);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(15,461.6807);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(16,307.3087);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(17,207.001);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(18,146.5771);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(19,101.6281);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(20,73.94274);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(21,52.40994);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(22,36.17236);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(23,26.83165);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(24,18.62596);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(25,14.95931);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(26,10.82303);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(27,7.769148);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(28,6.762596);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(29,4.928854);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(30,3.492837);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(31,2.233205);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(32,1.380447);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(33,1.200665);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(34,0.9453301);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(35,0.4369374);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(36,0.5347906);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(37,0.5152475);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(38,0.5754989);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(39,0.3318544);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(40,0.2322083);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(41,0.6952945);
   VbbHcc_duong_H_pt_stack_3->SetBinError(1,183.6473);
   VbbHcc_duong_H_pt_stack_3->SetBinError(2,244.6362);
   VbbHcc_duong_H_pt_stack_3->SetBinError(3,183.3871);
   VbbHcc_duong_H_pt_stack_3->SetBinError(4,111.7946);
   VbbHcc_duong_H_pt_stack_3->SetBinError(5,72.28386);
   VbbHcc_duong_H_pt_stack_3->SetBinError(6,50.07105);
   VbbHcc_duong_H_pt_stack_3->SetBinError(7,36.35384);
   VbbHcc_duong_H_pt_stack_3->SetBinError(8,27.27552);
   VbbHcc_duong_H_pt_stack_3->SetBinError(9,20.72012);
   VbbHcc_duong_H_pt_stack_3->SetBinError(10,16.02835);
   VbbHcc_duong_H_pt_stack_3->SetBinError(11,12.73264);
   VbbHcc_duong_H_pt_stack_3->SetBinError(12,10.1315);
   VbbHcc_duong_H_pt_stack_3->SetBinError(13,8.238971);
   VbbHcc_duong_H_pt_stack_3->SetBinError(14,6.692994);
   VbbHcc_duong_H_pt_stack_3->SetBinError(15,5.566197);
   VbbHcc_duong_H_pt_stack_3->SetBinError(16,4.548537);
   VbbHcc_duong_H_pt_stack_3->SetBinError(17,3.729609);
   VbbHcc_duong_H_pt_stack_3->SetBinError(18,3.136793);
   VbbHcc_duong_H_pt_stack_3->SetBinError(19,2.616575);
   VbbHcc_duong_H_pt_stack_3->SetBinError(20,2.227875);
   VbbHcc_duong_H_pt_stack_3->SetBinError(21,1.884068);
   VbbHcc_duong_H_pt_stack_3->SetBinError(22,1.572804);
   VbbHcc_duong_H_pt_stack_3->SetBinError(23,1.354951);
   VbbHcc_duong_H_pt_stack_3->SetBinError(24,1.12117);
   VbbHcc_duong_H_pt_stack_3->SetBinError(25,1.010872);
   VbbHcc_duong_H_pt_stack_3->SetBinError(26,0.8502975);
   VbbHcc_duong_H_pt_stack_3->SetBinError(27,0.7185384);
   VbbHcc_duong_H_pt_stack_3->SetBinError(28,0.6754972);
   VbbHcc_duong_H_pt_stack_3->SetBinError(29,0.5818407);
   VbbHcc_duong_H_pt_stack_3->SetBinError(30,0.4918492);
   VbbHcc_duong_H_pt_stack_3->SetBinError(31,0.3793424);
   VbbHcc_duong_H_pt_stack_3->SetBinError(32,0.3116664);
   VbbHcc_duong_H_pt_stack_3->SetBinError(33,0.279669);
   VbbHcc_duong_H_pt_stack_3->SetBinError(34,0.2604878);
   VbbHcc_duong_H_pt_stack_3->SetBinError(35,0.1687331);
   VbbHcc_duong_H_pt_stack_3->SetBinError(36,0.1910362);
   VbbHcc_duong_H_pt_stack_3->SetBinError(37,0.1841786);
   VbbHcc_duong_H_pt_stack_3->SetBinError(38,0.1937998);
   VbbHcc_duong_H_pt_stack_3->SetBinError(39,0.1380437);
   VbbHcc_duong_H_pt_stack_3->SetBinError(40,0.13421);
   VbbHcc_duong_H_pt_stack_3->SetBinError(41,0.2213873);
   VbbHcc_duong_H_pt_stack_3->SetEntries(3.690801e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_duong_H_pt_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_stack_3->SetLineColor(ci);
   VbbHcc_duong_H_pt_stack_3->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_stack_3,"");
   
   TH1D *VbbHcc_duong_H_pt_stack_4 = new TH1D("VbbHcc_duong_H_pt_stack_4","",40,0,2000);
   VbbHcc_duong_H_pt_stack_4->SetBinContent(1,5023.893);
   VbbHcc_duong_H_pt_stack_4->SetBinContent(2,11174.91);
   VbbHcc_duong_H_pt_stack_4->SetBinContent(3,10796.91);
   VbbHcc_duong_H_pt_stack_4->SetBinContent(4,7470.85);
   VbbHcc_duong_H_pt_stack_4->SetBinContent(5,3242.885);
   VbbHcc_duong_H_pt_stack_4->SetBinContent(6,720.0934);
   VbbHcc_duong_H_pt_stack_4->SetBinContent(7,65.42788);
   VbbHcc_duong_H_pt_stack_4->SetBinContent(8,3.042308);
   VbbHcc_duong_H_pt_stack_4->SetBinContent(9,1.449144);
   VbbHcc_duong_H_pt_stack_4->SetBinContent(11,0.2898307);
   VbbHcc_duong_H_pt_stack_4->SetBinError(1,38.61431);
   VbbHcc_duong_H_pt_stack_4->SetBinError(2,57.63022);
   VbbHcc_duong_H_pt_stack_4->SetBinError(3,56.67341);
   VbbHcc_duong_H_pt_stack_4->SetBinError(4,47.17976);
   VbbHcc_duong_H_pt_stack_4->SetBinError(5,31.11136);
   VbbHcc_duong_H_pt_stack_4->SetBinError(6,14.66239);
   VbbHcc_duong_H_pt_stack_4->SetBinError(7,4.413123);
   VbbHcc_duong_H_pt_stack_4->SetBinError(8,0.9637197);
   VbbHcc_duong_H_pt_stack_4->SetBinError(9,0.6489121);
   VbbHcc_duong_H_pt_stack_4->SetBinError(11,0.2898307);
   VbbHcc_duong_H_pt_stack_4->SetEntries(131892);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_duong_H_pt_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_stack_4->SetLineColor(ci);
   VbbHcc_duong_H_pt_stack_4->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_stack_4,"");
   
   TH1D *VbbHcc_duong_H_pt_stack_5 = new TH1D("VbbHcc_duong_H_pt_stack_5","",40,0,2000);
   VbbHcc_duong_H_pt_stack_5->SetBinContent(1,2617.999);
   VbbHcc_duong_H_pt_stack_5->SetBinContent(2,5753.375);
   VbbHcc_duong_H_pt_stack_5->SetBinContent(3,5928.459);
   VbbHcc_duong_H_pt_stack_5->SetBinContent(4,4413.344);
   VbbHcc_duong_H_pt_stack_5->SetBinContent(5,2102.631);
   VbbHcc_duong_H_pt_stack_5->SetBinContent(6,523.0168);
   VbbHcc_duong_H_pt_stack_5->SetBinContent(7,54.73146);
   VbbHcc_duong_H_pt_stack_5->SetBinContent(8,7.224975);
   VbbHcc_duong_H_pt_stack_5->SetBinContent(9,1.082523);
   VbbHcc_duong_H_pt_stack_5->SetBinContent(10,1.120584);
   VbbHcc_duong_H_pt_stack_5->SetBinContent(11,1.157551);
   VbbHcc_duong_H_pt_stack_5->SetBinContent(16,1.070578);
   VbbHcc_duong_H_pt_stack_5->SetBinError(1,53.34387);
   VbbHcc_duong_H_pt_stack_5->SetBinError(2,79.13818);
   VbbHcc_duong_H_pt_stack_5->SetBinError(3,80.59483);
   VbbHcc_duong_H_pt_stack_5->SetBinError(4,69.53093);
   VbbHcc_duong_H_pt_stack_5->SetBinError(5,47.92285);
   VbbHcc_duong_H_pt_stack_5->SetBinError(6,23.93716);
   VbbHcc_duong_H_pt_stack_5->SetBinError(7,7.772322);
   VbbHcc_duong_H_pt_stack_5->SetBinError(8,2.740664);
   VbbHcc_duong_H_pt_stack_5->SetBinError(9,1.082523);
   VbbHcc_duong_H_pt_stack_5->SetBinError(10,1.120584);
   VbbHcc_duong_H_pt_stack_5->SetBinError(11,1.157551);
   VbbHcc_duong_H_pt_stack_5->SetBinError(16,1.070578);
   VbbHcc_duong_H_pt_stack_5->SetEntries(20027);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_duong_H_pt_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_stack_5->SetLineColor(ci);
   VbbHcc_duong_H_pt_stack_5->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_stack_5,"");
   
   TH1D *VbbHcc_duong_H_pt_stack_6 = new TH1D("VbbHcc_duong_H_pt_stack_6","",40,0,2000);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(1,155.657);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(2,230.4691);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(3,120.1992);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(4,53.18847);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(5,30.95006);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(6,16.59245);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(7,11.76711);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(8,5.56442);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(9,4.852678);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(10,2.809558);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(11,2.182763);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(12,1.496278);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(13,0.7395856);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(14,0.8104648);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(15,0.4158122);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(16,0.6049197);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(17,0.3651401);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(18,0.2715466);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(19,0.0857751);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(20,0.3698218);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(21,0.1731067);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(23,0.1015083);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(24,0.06974152);
   VbbHcc_duong_H_pt_stack_6->SetBinError(1,3.780988);
   VbbHcc_duong_H_pt_stack_6->SetBinError(2,4.591039);
   VbbHcc_duong_H_pt_stack_6->SetBinError(3,3.314675);
   VbbHcc_duong_H_pt_stack_6->SetBinError(4,2.201803);
   VbbHcc_duong_H_pt_stack_6->SetBinError(5,1.67446);
   VbbHcc_duong_H_pt_stack_6->SetBinError(6,1.227273);
   VbbHcc_duong_H_pt_stack_6->SetBinError(7,1.036446);
   VbbHcc_duong_H_pt_stack_6->SetBinError(8,0.7086347);
   VbbHcc_duong_H_pt_stack_6->SetBinError(9,0.666321);
   VbbHcc_duong_H_pt_stack_6->SetBinError(10,0.505905);
   VbbHcc_duong_H_pt_stack_6->SetBinError(11,0.4434217);
   VbbHcc_duong_H_pt_stack_6->SetBinError(12,0.3669506);
   VbbHcc_duong_H_pt_stack_6->SetBinError(13,0.2520086);
   VbbHcc_duong_H_pt_stack_6->SetBinError(14,0.2704064);
   VbbHcc_duong_H_pt_stack_6->SetBinError(15,0.1876291);
   VbbHcc_duong_H_pt_stack_6->SetBinError(16,0.2305203);
   VbbHcc_duong_H_pt_stack_6->SetBinError(17,0.1825995);
   VbbHcc_duong_H_pt_stack_6->SetBinError(18,0.1567801);
   VbbHcc_duong_H_pt_stack_6->SetBinError(19,0.0857751);
   VbbHcc_duong_H_pt_stack_6->SetBinError(20,0.1851298);
   VbbHcc_duong_H_pt_stack_6->SetBinError(21,0.1224481);
   VbbHcc_duong_H_pt_stack_6->SetBinError(23,0.1015083);
   VbbHcc_duong_H_pt_stack_6->SetBinError(24,0.06974152);
   VbbHcc_duong_H_pt_stack_6->SetEntries(7131);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_duong_H_pt_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_stack_6->SetLineColor(ci);
   VbbHcc_duong_H_pt_stack_6->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_stack_6,"");
   
   TH1D *VbbHcc_duong_H_pt_stack_7 = new TH1D("VbbHcc_duong_H_pt_stack_7","",40,0,2000);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(1,291.5698);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(2,438.9628);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(3,245.7838);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(4,123.4038);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(5,62.05552);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(6,37.39597);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(7,22.03533);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(8,13.62915);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(9,6.754568);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(10,3.836496);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(11,2.360717);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(12,1.606979);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(13,0.7927282);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(14,0.5322913);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(15,0.6453609);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(16,0.2047343);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(17,0.1430369);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(18,0.1363765);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(19,0.2817614);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(20,0.112402);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(21,0.06534753);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(23,0.03874683);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(27,0.06633925);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(28,0.06981975);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(29,0.09330566);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(35,0.05805015);
   VbbHcc_duong_H_pt_stack_7->SetBinError(1,4.465182);
   VbbHcc_duong_H_pt_stack_7->SetBinError(2,5.470306);
   VbbHcc_duong_H_pt_stack_7->SetBinError(3,4.096117);
   VbbHcc_duong_H_pt_stack_7->SetBinError(4,2.898215);
   VbbHcc_duong_H_pt_stack_7->SetBinError(5,2.052228);
   VbbHcc_duong_H_pt_stack_7->SetBinError(6,1.586356);
   VbbHcc_duong_H_pt_stack_7->SetBinError(7,1.226162);
   VbbHcc_duong_H_pt_stack_7->SetBinError(8,0.9619296);
   VbbHcc_duong_H_pt_stack_7->SetBinError(9,0.673909);
   VbbHcc_duong_H_pt_stack_7->SetBinError(10,0.5046342);
   VbbHcc_duong_H_pt_stack_7->SetBinError(11,0.3962482);
   VbbHcc_duong_H_pt_stack_7->SetBinError(12,0.3292263);
   VbbHcc_duong_H_pt_stack_7->SetBinError(13,0.2326166);
   VbbHcc_duong_H_pt_stack_7->SetBinError(14,0.1892223);
   VbbHcc_duong_H_pt_stack_7->SetBinError(15,0.2054558);
   VbbHcc_duong_H_pt_stack_7->SetBinError(16,0.1182161);
   VbbHcc_duong_H_pt_stack_7->SetBinError(17,0.1013787);
   VbbHcc_duong_H_pt_stack_7->SetBinError(18,0.09646477);
   VbbHcc_duong_H_pt_stack_7->SetBinError(19,0.1410701);
   VbbHcc_duong_H_pt_stack_7->SetBinError(20,0.08098755);
   VbbHcc_duong_H_pt_stack_7->SetBinError(21,0.06534753);
   VbbHcc_duong_H_pt_stack_7->SetBinError(23,0.03874683);
   VbbHcc_duong_H_pt_stack_7->SetBinError(27,0.06633925);
   VbbHcc_duong_H_pt_stack_7->SetBinError(28,0.06981975);
   VbbHcc_duong_H_pt_stack_7->SetBinError(29,0.07236885);
   VbbHcc_duong_H_pt_stack_7->SetBinError(35,0.05805015);
   VbbHcc_duong_H_pt_stack_7->SetEntries(18712);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_duong_H_pt_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_stack_7->SetLineColor(ci);
   VbbHcc_duong_H_pt_stack_7->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_stack_7,"");
   
   TH1D *VbbHcc_duong_H_pt_stack_8 = new TH1D("VbbHcc_duong_H_pt_stack_8","",40,0,2000);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(1,348.9399);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(2,462.8181);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(3,209.2894);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(4,104.4117);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(5,54.23226);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(6,28.68638);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(7,13.14962);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(8,7.575338);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(9,4.853398);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(10,3.316269);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(11,1.854305);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(12,0.7641208);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(13,0.1963523);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(14,0.3701214);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(15,0.3720824);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(16,0.2093382);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(17,0.1881969);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(22,0.2166568);
   VbbHcc_duong_H_pt_stack_8->SetBinError(1,8.205779);
   VbbHcc_duong_H_pt_stack_8->SetBinError(2,9.436322);
   VbbHcc_duong_H_pt_stack_8->SetBinError(3,6.328028);
   VbbHcc_duong_H_pt_stack_8->SetBinError(4,4.467937);
   VbbHcc_duong_H_pt_stack_8->SetBinError(5,3.23427);
   VbbHcc_duong_H_pt_stack_8->SetBinError(6,2.3407);
   VbbHcc_duong_H_pt_stack_8->SetBinError(7,1.594402);
   VbbHcc_duong_H_pt_stack_8->SetBinError(8,1.19394);
   VbbHcc_duong_H_pt_stack_8->SetBinError(9,0.946278);
   VbbHcc_duong_H_pt_stack_8->SetBinError(10,0.7913035);
   VbbHcc_duong_H_pt_stack_8->SetBinError(11,0.5876887);
   VbbHcc_duong_H_pt_stack_8->SetBinError(12,0.3821302);
   VbbHcc_duong_H_pt_stack_8->SetBinError(13,0.1963523);
   VbbHcc_duong_H_pt_stack_8->SetBinError(14,0.2617302);
   VbbHcc_duong_H_pt_stack_8->SetBinError(15,0.2631238);
   VbbHcc_duong_H_pt_stack_8->SetBinError(16,0.2093382);
   VbbHcc_duong_H_pt_stack_8->SetBinError(17,0.1881969);
   VbbHcc_duong_H_pt_stack_8->SetBinError(22,0.2166568);
   VbbHcc_duong_H_pt_stack_8->SetEntries(6580);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_duong_H_pt_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_stack_8->SetLineColor(ci);
   VbbHcc_duong_H_pt_stack_8->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_stack_8,"");
   
   TH1D *VbbHcc_duong_H_pt_stack_9 = new TH1D("VbbHcc_duong_H_pt_stack_9","",40,0,2000);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(1,100.7244);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(2,164.5217);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(3,93.76082);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(4,46.1355);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(5,24.66728);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(6,13.85645);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(7,8.078339);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(8,4.824583);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(9,2.955414);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(10,1.646877);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(11,0.9363184);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(12,0.60051);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(13,0.3204562);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(14,0.2437834);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(15,0.1484354);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(16,0.08489287);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(17,0.05840649);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(18,0.06905994);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(19,0.02045168);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(20,0.0181198);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(21,0.02099386);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(22,0.01712346);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(23,0.008884541);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(24,0.003106949);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(25,0.004517275);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(26,0.005225118);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(27,0.001651026);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(32,0.002888083);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(34,0.00309108);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(35,0.001589949);
   VbbHcc_duong_H_pt_stack_9->SetBinError(1,0.3906077);
   VbbHcc_duong_H_pt_stack_9->SetBinError(2,0.4986742);
   VbbHcc_duong_H_pt_stack_9->SetBinError(3,0.3757486);
   VbbHcc_duong_H_pt_stack_9->SetBinError(4,0.2632684);
   VbbHcc_duong_H_pt_stack_9->SetBinError(5,0.192382);
   VbbHcc_duong_H_pt_stack_9->SetBinError(6,0.1446994);
   VbbHcc_duong_H_pt_stack_9->SetBinError(7,0.1100528);
   VbbHcc_duong_H_pt_stack_9->SetBinError(8,0.08536377);
   VbbHcc_duong_H_pt_stack_9->SetBinError(9,0.06672339);
   VbbHcc_duong_H_pt_stack_9->SetBinError(10,0.04949082);
   VbbHcc_duong_H_pt_stack_9->SetBinError(11,0.03737238);
   VbbHcc_duong_H_pt_stack_9->SetBinError(12,0.02958787);
   VbbHcc_duong_H_pt_stack_9->SetBinError(13,0.02178354);
   VbbHcc_duong_H_pt_stack_9->SetBinError(14,0.01897702);
   VbbHcc_duong_H_pt_stack_9->SetBinError(15,0.01466058);
   VbbHcc_duong_H_pt_stack_9->SetBinError(16,0.01119574);
   VbbHcc_duong_H_pt_stack_9->SetBinError(17,0.009307236);
   VbbHcc_duong_H_pt_stack_9->SetBinError(18,0.01012652);
   VbbHcc_duong_H_pt_stack_9->SetBinError(19,0.005550605);
   VbbHcc_duong_H_pt_stack_9->SetBinError(20,0.005172263);
   VbbHcc_duong_H_pt_stack_9->SetBinError(21,0.0056259);
   VbbHcc_duong_H_pt_stack_9->SetBinError(22,0.004974177);
   VbbHcc_duong_H_pt_stack_9->SetBinError(23,0.003634039);
   VbbHcc_duong_H_pt_stack_9->SetBinError(24,0.002200795);
   VbbHcc_duong_H_pt_stack_9->SetBinError(25,0.00261262);
   VbbHcc_duong_H_pt_stack_9->SetBinError(26,0.002665026);
   VbbHcc_duong_H_pt_stack_9->SetBinError(27,0.001651026);
   VbbHcc_duong_H_pt_stack_9->SetBinError(32,0.002042183);
   VbbHcc_duong_H_pt_stack_9->SetBinError(34,0.002188955);
   VbbHcc_duong_H_pt_stack_9->SetBinError(35,0.001589949);
   VbbHcc_duong_H_pt_stack_9->SetEntries(327490);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_duong_H_pt_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_stack_9->SetLineColor(ci);
   VbbHcc_duong_H_pt_stack_9->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_stack_9,"");
   
   TH1D *VbbHcc_duong_H_pt_stack_10 = new TH1D("VbbHcc_duong_H_pt_stack_10","",40,0,2000);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(1,19.51066);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(2,41.16204);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(3,36.26712);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(4,22.63294);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(5,12.71768);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(6,7.298611);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(7,4.295608);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(8,2.745169);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(9,1.698879);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(10,1.096077);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(11,0.7318963);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(12,0.5081678);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(13,0.3493283);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(14,0.257519);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(15,0.1858527);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(16,0.1261858);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(17,0.09711242);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(18,0.07585073);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(19,0.05453596);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(20,0.03761231);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(21,0.02577199);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(22,0.02515558);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(23,0.01661103);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(24,0.01619599);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(25,0.01088803);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(26,0.01069177);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(27,0.005838908);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(28,0.006005597);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(29,0.004810804);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(30,0.004108158);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(31,0.00195558);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(32,0.001565378);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(33,0.002328402);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(34,0.001143427);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(35,0.0007648273);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(37,0.0007563849);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(38,0.0003657252);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(41,0.001914273);
   VbbHcc_duong_H_pt_stack_10->SetBinError(1,0.08648399);
   VbbHcc_duong_H_pt_stack_10->SetBinError(2,0.12559);
   VbbHcc_duong_H_pt_stack_10->SetBinError(3,0.1178813);
   VbbHcc_duong_H_pt_stack_10->SetBinError(4,0.09305283);
   VbbHcc_duong_H_pt_stack_10->SetBinError(5,0.06969318);
   VbbHcc_duong_H_pt_stack_10->SetBinError(6,0.05275718);
   VbbHcc_duong_H_pt_stack_10->SetBinError(7,0.04046874);
   VbbHcc_duong_H_pt_stack_10->SetBinError(8,0.03234082);
   VbbHcc_duong_H_pt_stack_10->SetBinError(9,0.02543835);
   VbbHcc_duong_H_pt_stack_10->SetBinError(10,0.02043292);
   VbbHcc_duong_H_pt_stack_10->SetBinError(11,0.01670056);
   VbbHcc_duong_H_pt_stack_10->SetBinError(12,0.01394807);
   VbbHcc_duong_H_pt_stack_10->SetBinError(13,0.0115742);
   VbbHcc_duong_H_pt_stack_10->SetBinError(14,0.009944495);
   VbbHcc_duong_H_pt_stack_10->SetBinError(15,0.008423396);
   VbbHcc_duong_H_pt_stack_10->SetBinError(16,0.006963656);
   VbbHcc_duong_H_pt_stack_10->SetBinError(17,0.006085895);
   VbbHcc_duong_H_pt_stack_10->SetBinError(18,0.005374696);
   VbbHcc_duong_H_pt_stack_10->SetBinError(19,0.004567824);
   VbbHcc_duong_H_pt_stack_10->SetBinError(20,0.003821877);
   VbbHcc_duong_H_pt_stack_10->SetBinError(21,0.003142759);
   VbbHcc_duong_H_pt_stack_10->SetBinError(22,0.003095162);
   VbbHcc_duong_H_pt_stack_10->SetBinError(23,0.002515434);
   VbbHcc_duong_H_pt_stack_10->SetBinError(24,0.002494834);
   VbbHcc_duong_H_pt_stack_10->SetBinError(25,0.002025459);
   VbbHcc_duong_H_pt_stack_10->SetBinError(26,0.002002756);
   VbbHcc_duong_H_pt_stack_10->SetBinError(27,0.001478658);
   VbbHcc_duong_H_pt_stack_10->SetBinError(28,0.00155472);
   VbbHcc_duong_H_pt_stack_10->SetBinError(29,0.001348351);
   VbbHcc_duong_H_pt_stack_10->SetBinError(30,0.00124207);
   VbbHcc_duong_H_pt_stack_10->SetBinError(31,0.0008747572);
   VbbHcc_duong_H_pt_stack_10->SetBinError(32,0.0007830573);
   VbbHcc_duong_H_pt_stack_10->SetBinError(33,0.0009518652);
   VbbHcc_duong_H_pt_stack_10->SetBinError(34,0.0006602952);
   VbbHcc_duong_H_pt_stack_10->SetBinError(35,0.0005408833);
   VbbHcc_duong_H_pt_stack_10->SetBinError(37,0.000535041);
   VbbHcc_duong_H_pt_stack_10->SetBinError(38,0.0003657252);
   VbbHcc_duong_H_pt_stack_10->SetBinError(41,0.0008575981);
   VbbHcc_duong_H_pt_stack_10->SetEntries(404395);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_duong_H_pt_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_stack_10->SetLineColor(ci);
   VbbHcc_duong_H_pt_stack_10->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_stack_10,"");
   
   TH1D *VbbHcc_duong_H_pt_stack_11 = new TH1D("VbbHcc_duong_H_pt_stack_11","",40,0,2000);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(1,1.45073);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(2,2.636864);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(3,1.633783);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(4,0.8077804);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(5,0.3783759);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(6,0.2473335);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(7,0.1245358);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(8,0.1089464);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(9,0.04414081);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(10,0.02765235);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(11,0.0180214);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(12,0.01215588);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(13,0.007667447);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(14,0.0007261737);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(15,0.003027773);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(16,0.001503752);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(17,0.00152612);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(19,0.001250184);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(21,0.00152612);
   VbbHcc_duong_H_pt_stack_11->SetBinError(1,0.04785638);
   VbbHcc_duong_H_pt_stack_11->SetBinError(2,0.06413243);
   VbbHcc_duong_H_pt_stack_11->SetBinError(3,0.05048343);
   VbbHcc_duong_H_pt_stack_11->SetBinError(4,0.03535329);
   VbbHcc_duong_H_pt_stack_11->SetBinError(5,0.02421796);
   VbbHcc_duong_H_pt_stack_11->SetBinError(6,0.01930122);
   VbbHcc_duong_H_pt_stack_11->SetBinError(7,0.01369112);
   VbbHcc_duong_H_pt_stack_11->SetBinError(8,0.01287874);
   VbbHcc_duong_H_pt_stack_11->SetBinError(9,0.008193599);
   VbbHcc_duong_H_pt_stack_11->SetBinError(10,0.006453161);
   VbbHcc_duong_H_pt_stack_11->SetBinError(11,0.005251757);
   VbbHcc_duong_H_pt_stack_11->SetBinError(12,0.00430282);
   VbbHcc_duong_H_pt_stack_11->SetBinError(13,0.003429303);
   VbbHcc_duong_H_pt_stack_11->SetBinError(14,0.0007261737);
   VbbHcc_duong_H_pt_stack_11->SetBinError(15,0.002140267);
   VbbHcc_duong_H_pt_stack_11->SetBinError(16,0.001503752);
   VbbHcc_duong_H_pt_stack_11->SetBinError(17,0.00152612);
   VbbHcc_duong_H_pt_stack_11->SetBinError(19,0.001250184);
   VbbHcc_duong_H_pt_stack_11->SetBinError(21,0.00152612);
   VbbHcc_duong_H_pt_stack_11->SetEntries(5485);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_duong_H_pt_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_stack_11->SetLineColor(ci);
   VbbHcc_duong_H_pt_stack_11->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_stack_11,"");
   
   TH1D *VbbHcc_duong_H_pt_stack_12 = new TH1D("VbbHcc_duong_H_pt_stack_12","",40,0,2000);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(1,6610.321);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(2,14708.99);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(3,14984.3);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(4,10120.71);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(5,5532.596);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(6,2891.574);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(7,1899.429);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(8,1259.914);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(9,901.5213);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(10,497.103);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(11,313.7145);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(12,242.0134);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(13,191.4193);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(14,86.35969);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(15,101.6403);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(16,42.87885);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(17,24.8996);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(18,45.17441);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(19,35.91177);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(20,21.0665);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(21,20.92015);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(22,9.6211);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(23,9.715635);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(24,3.69994);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(25,8.444188);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(27,4.381892);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(30,3.977176);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(34,3.151878);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(38,4.029149);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(39,2.715719);
   VbbHcc_duong_H_pt_stack_12->SetBinError(1,163.1361);
   VbbHcc_duong_H_pt_stack_12->SetBinError(2,243.5617);
   VbbHcc_duong_H_pt_stack_12->SetBinError(3,245.9931);
   VbbHcc_duong_H_pt_stack_12->SetBinError(4,201.8768);
   VbbHcc_duong_H_pt_stack_12->SetBinError(5,148.9747);
   VbbHcc_duong_H_pt_stack_12->SetBinError(6,107.4332);
   VbbHcc_duong_H_pt_stack_12->SetBinError(7,86.99972);
   VbbHcc_duong_H_pt_stack_12->SetBinError(8,70.79212);
   VbbHcc_duong_H_pt_stack_12->SetBinError(9,60.21413);
   VbbHcc_duong_H_pt_stack_12->SetBinError(10,44.3997);
   VbbHcc_duong_H_pt_stack_12->SetBinError(11,35.95929);
   VbbHcc_duong_H_pt_stack_12->SetBinError(12,31.15967);
   VbbHcc_duong_H_pt_stack_12->SetBinError(13,27.75923);
   VbbHcc_duong_H_pt_stack_12->SetBinError(14,18.39193);
   VbbHcc_duong_H_pt_stack_12->SetBinError(15,20.37155);
   VbbHcc_duong_H_pt_stack_12->SetBinError(16,13.18244);
   VbbHcc_duong_H_pt_stack_12->SetBinError(17,10.01005);
   VbbHcc_duong_H_pt_stack_12->SetBinError(18,13.31747);
   VbbHcc_duong_H_pt_stack_12->SetBinError(19,12.1266);
   VbbHcc_duong_H_pt_stack_12->SetBinError(20,9.439814);
   VbbHcc_duong_H_pt_stack_12->SetBinError(21,9.365692);
   VbbHcc_duong_H_pt_stack_12->SetBinError(22,5.793152);
   VbbHcc_duong_H_pt_stack_12->SetBinError(23,5.988952);
   VbbHcc_duong_H_pt_stack_12->SetBinError(24,3.69994);
   VbbHcc_duong_H_pt_stack_12->SetBinError(25,5.971595);
   VbbHcc_duong_H_pt_stack_12->SetBinError(27,4.381892);
   VbbHcc_duong_H_pt_stack_12->SetBinError(30,3.977176);
   VbbHcc_duong_H_pt_stack_12->SetBinError(34,3.151878);
   VbbHcc_duong_H_pt_stack_12->SetBinError(38,4.029149);
   VbbHcc_duong_H_pt_stack_12->SetBinError(39,2.715719);
   VbbHcc_duong_H_pt_stack_12->SetEntries(16360);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_duong_H_pt_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_stack_12->SetLineColor(ci);
   VbbHcc_duong_H_pt_stack_12->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_duong_H_pt__25 = new TH1D("VbbHcc_duong_H_pt__25","",40,0,2000);
   VbbHcc_duong_H_pt__25->SetBinContent(1,1125549);
   VbbHcc_duong_H_pt__25->SetBinContent(2,2221355);
   VbbHcc_duong_H_pt__25->SetBinContent(3,1797475);
   VbbHcc_duong_H_pt__25->SetBinContent(4,1128980);
   VbbHcc_duong_H_pt__25->SetBinContent(5,678727);
   VbbHcc_duong_H_pt__25->SetBinContent(6,445671);
   VbbHcc_duong_H_pt__25->SetBinContent(7,312441);
   VbbHcc_duong_H_pt__25->SetBinContent(8,207665);
   VbbHcc_duong_H_pt__25->SetBinContent(9,127868);
   VbbHcc_duong_H_pt__25->SetBinContent(10,77161);
   VbbHcc_duong_H_pt__25->SetBinContent(11,47349);
   VbbHcc_duong_H_pt__25->SetBinContent(12,29467);
   VbbHcc_duong_H_pt__25->SetBinContent(13,18803);
   VbbHcc_duong_H_pt__25->SetBinContent(14,12246);
   VbbHcc_duong_H_pt__25->SetBinContent(15,8167);
   VbbHcc_duong_H_pt__25->SetBinContent(16,5554);
   VbbHcc_duong_H_pt__25->SetBinContent(17,3797);
   VbbHcc_duong_H_pt__25->SetBinContent(18,2556);
   VbbHcc_duong_H_pt__25->SetBinContent(19,1840);
   VbbHcc_duong_H_pt__25->SetBinContent(20,1318);
   VbbHcc_duong_H_pt__25->SetBinContent(21,969);
   VbbHcc_duong_H_pt__25->SetBinContent(22,663);
   VbbHcc_duong_H_pt__25->SetBinContent(23,499);
   VbbHcc_duong_H_pt__25->SetBinContent(24,340);
   VbbHcc_duong_H_pt__25->SetBinContent(25,266);
   VbbHcc_duong_H_pt__25->SetBinContent(26,212);
   VbbHcc_duong_H_pt__25->SetBinContent(27,141);
   VbbHcc_duong_H_pt__25->SetBinContent(28,114);
   VbbHcc_duong_H_pt__25->SetBinContent(29,91);
   VbbHcc_duong_H_pt__25->SetBinContent(30,41);
   VbbHcc_duong_H_pt__25->SetBinContent(31,49);
   VbbHcc_duong_H_pt__25->SetBinContent(32,35);
   VbbHcc_duong_H_pt__25->SetBinContent(33,27);
   VbbHcc_duong_H_pt__25->SetBinContent(34,13);
   VbbHcc_duong_H_pt__25->SetBinContent(35,20);
   VbbHcc_duong_H_pt__25->SetBinContent(36,13);
   VbbHcc_duong_H_pt__25->SetBinContent(37,4);
   VbbHcc_duong_H_pt__25->SetBinContent(38,7);
   VbbHcc_duong_H_pt__25->SetBinContent(39,6);
   VbbHcc_duong_H_pt__25->SetBinContent(40,1);
   VbbHcc_duong_H_pt__25->SetBinContent(41,13);
   VbbHcc_duong_H_pt__25->SetEntries(8257513);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt__25->SetLineColor(ci);
   VbbHcc_duong_H_pt__25->SetLineWidth(2);
   VbbHcc_duong_H_pt__25->SetMarkerStyle(20);
   VbbHcc_duong_H_pt__25->SetMarkerSize(1.2);
   VbbHcc_duong_H_pt__25->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt__25->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt__25->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt__25->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt__25->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt__25->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt__25->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt__25->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt__25->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt__25->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt__25->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt__25->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt__25->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt__25->GetZaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt__25->Draw("same E");
   
   Double_t Graph_from_VbbHcc_duong_H_pt_fx1025[40] = {
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
   Double_t Graph_from_VbbHcc_duong_H_pt_fy1025[40] = {
   4779103,
   7737234,
   2875662,
   409462.5,
   107435.5,
   48213.3,
   24183.13,
   13768.84,
   8115.626,
   4816.634,
   3036.401,
   1977.018,
   1331.999,
   838.241,
   627.2011,
   387.7696,
   264.413,
   218.4755,
   156.544,
   104.9392,
   80.26738,
   51.92092,
   40.50577,
   25.45065,
   26.0817,
   14.48253,
   13.75127,
   8.487633,
   5.34802,
   8.424133,
   2.281687,
   1.635318,
   1.245403,
   4.500689,
   0.4973423,
   1.241934,
   0.5160039,
   4.605013,
   3.047573,
   0.2322083};
   Double_t Graph_from_VbbHcc_duong_H_pt_fex1025[40] = {
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
   Double_t Graph_from_VbbHcc_duong_H_pt_fey1025[40] = {
   76028.88,
   96181.03,
   56130.43,
   15789.32,
   3614.805,
   1523.276,
   96.62564,
   77.39792,
   64.81609,
   48.17182,
   38.94251,
   33.40259,
   29.43651,
   20.06365,
   21.47839,
   14.30525,
   11.05995,
   13.9272,
   12.60019,
   9.827926,
   9.635373,
   6.124587,
   6.226259,
   3.965591,
   6.112606,
   1.303548,
   4.487573,
   0.9461959,
   0.6466465,
   4.03938,
   0.3821859,
   0.399812,
   0.2828678,
   3.177125,
   0.1784474,
   0.4828459,
   0.1841794,
   4.033807,
   2.719225,
   0.13421};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_duong_H_pt_fx1025,Graph_from_VbbHcc_duong_H_pt_fy1025,Graph_from_VbbHcc_duong_H_pt_fex1025,Graph_from_VbbHcc_duong_H_pt_fey1025);
   gre->SetName("Graph_from_VbbHcc_duong_H_pt");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_duong_H_pt1025 = new TH1F("Graph_Graph_from_VbbHcc_duong_H_pt1025","",100,0,2200);
   Graph_Graph_from_VbbHcc_duong_H_pt1025->SetMinimum(0.08819853);
   Graph_Graph_from_VbbHcc_duong_H_pt1025->SetMaximum(8616757);
   Graph_Graph_from_VbbHcc_duong_H_pt1025->SetDirectory(0);
   Graph_Graph_from_VbbHcc_duong_H_pt1025->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_duong_H_pt1025->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_duong_H_pt1025->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_H_pt1025->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_pt1025->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_pt1025->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_duong_H_pt1025->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_H_pt1025->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_pt1025->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_pt1025->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_duong_H_pt1025->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_duong_H_pt1025->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_H_pt1025->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_pt1025->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_pt1025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_duong_H_pt1025);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_duong_H_pt","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_duong_H_pt_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_pt_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_pt_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_pt_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_pt_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_pt_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_pt_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_pt_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_pt_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_pt_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_pt_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_pt_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_duong_H_pt","MC unc. (stat.)","fl");

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
   H_pt_VbbHcc_16->cd();
  
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
   
   TH1D *data_mc_ratio__26 = new TH1D("data_mc_ratio__26","",40,0,2000);
   data_mc_ratio__26->SetBinContent(1,0.2355147);
   data_mc_ratio__26->SetBinContent(2,0.2870994);
   data_mc_ratio__26->SetBinContent(3,0.6250647);
   data_mc_ratio__26->SetBinContent(4,2.757224);
   data_mc_ratio__26->SetBinContent(5,6.31753);
   data_mc_ratio__26->SetBinContent(6,9.243735);
   data_mc_ratio__26->SetBinContent(7,12.91979);
   data_mc_ratio__26->SetBinContent(8,15.08225);
   data_mc_ratio__26->SetBinContent(9,15.75578);
   data_mc_ratio__26->SetBinContent(10,16.01969);
   data_mc_ratio__26->SetBinContent(11,15.59379);
   data_mc_ratio__26->SetBinContent(12,14.90477);
   data_mc_ratio__26->SetBinContent(13,14.11637);
   data_mc_ratio__26->SetBinContent(14,14.60916);
   data_mc_ratio__26->SetBinContent(15,13.02134);
   data_mc_ratio__26->SetBinContent(16,14.32294);
   data_mc_ratio__26->SetBinContent(17,14.36011);
   data_mc_ratio__26->SetBinContent(18,11.69925);
   data_mc_ratio__26->SetBinContent(19,11.75388);
   data_mc_ratio__26->SetBinContent(20,12.55966);
   data_mc_ratio__26->SetBinContent(21,12.07215);
   data_mc_ratio__26->SetBinContent(22,12.76942);
   data_mc_ratio__26->SetBinContent(23,12.31923);
   data_mc_ratio__26->SetBinContent(24,13.35919);
   data_mc_ratio__26->SetBinContent(25,10.19872);
   data_mc_ratio__26->SetBinContent(26,14.63833);
   data_mc_ratio__26->SetBinContent(27,10.2536);
   data_mc_ratio__26->SetBinContent(28,13.43131);
   data_mc_ratio__26->SetBinContent(29,17.01564);
   data_mc_ratio__26->SetBinContent(30,4.86697);
   data_mc_ratio__26->SetBinContent(31,21.47534);
   data_mc_ratio__26->SetBinContent(32,21.40256);
   data_mc_ratio__26->SetBinContent(33,21.67973);
   data_mc_ratio__26->SetBinContent(34,2.888447);
   data_mc_ratio__26->SetBinContent(35,40.21375);
   data_mc_ratio__26->SetBinContent(36,10.46754);
   data_mc_ratio__26->SetBinContent(37,7.751879);
   data_mc_ratio__26->SetBinContent(38,1.520082);
   data_mc_ratio__26->SetBinContent(39,1.96878);
   data_mc_ratio__26->SetBinContent(40,4.306477);
   data_mc_ratio__26->SetBinContent(41,17.34742);
   data_mc_ratio__26->SetBinError(1,0.0002219912);
   data_mc_ratio__26->SetBinError(2,0.0001926297);
   data_mc_ratio__26->SetBinError(3,0.0004662228);
   data_mc_ratio__26->SetBinError(4,0.00259495);
   data_mc_ratio__26->SetBinError(5,0.007668312);
   data_mc_ratio__26->SetBinError(6,0.01384651);
   data_mc_ratio__26->SetBinError(7,0.02311381);
   data_mc_ratio__26->SetBinError(8,0.03309668);
   data_mc_ratio__26->SetBinError(9,0.04406146);
   data_mc_ratio__26->SetBinError(10,0.0576707);
   data_mc_ratio__26->SetBinError(11,0.07166323);
   data_mc_ratio__26->SetBinError(12,0.08682749);
   data_mc_ratio__26->SetBinError(13,0.102946);
   data_mc_ratio__26->SetBinError(14,0.1320165);
   data_mc_ratio__26->SetBinError(15,0.1440869);
   data_mc_ratio__26->SetBinError(16,0.1921893);
   data_mc_ratio__26->SetBinError(17,0.2330438);
   data_mc_ratio__26->SetBinError(18,0.2314076);
   data_mc_ratio__26->SetBinError(19,0.2740138);
   data_mc_ratio__26->SetBinError(20,0.3459554);
   data_mc_ratio__26->SetBinError(21,0.3878134);
   data_mc_ratio__26->SetBinError(22,0.4959231);
   data_mc_ratio__26->SetBinError(23,0.5514846);
   data_mc_ratio__26->SetBinError(24,0.7245037);
   data_mc_ratio__26->SetBinError(25,0.6253238);
   data_mc_ratio__26->SetBinError(26,1.005364);
   data_mc_ratio__26->SetBinError(27,0.8635087);
   data_mc_ratio__26->SetBinError(28,1.257957);
   data_mc_ratio__26->SetBinError(29,1.783724);
   data_mc_ratio__26->SetBinError(30,0.760093);
   data_mc_ratio__26->SetBinError(31,3.067905);
   data_mc_ratio__26->SetBinError(32,3.617693);
   data_mc_ratio__26->SetBinError(33,4.172266);
   data_mc_ratio__26->SetBinError(34,0.8011109);
   data_mc_ratio__26->SetBinError(35,8.992068);
   data_mc_ratio__26->SetBinError(36,2.903174);
   data_mc_ratio__26->SetBinError(37,3.87594);
   data_mc_ratio__26->SetBinError(38,0.5745372);
   data_mc_ratio__26->SetBinError(39,0.8037509);
   data_mc_ratio__26->SetBinError(40,4.306477);
   data_mc_ratio__26->SetBinError(41,7.132467);
   data_mc_ratio__26->SetMinimum(0.4);
   data_mc_ratio__26->SetMaximum(1.6);
   data_mc_ratio__26->SetEntries(416.0392);
   data_mc_ratio__26->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__26->SetLineColor(ci);
   data_mc_ratio__26->SetLineWidth(2);
   data_mc_ratio__26->SetMarkerStyle(20);
   data_mc_ratio__26->SetMarkerSize(1.2);
   data_mc_ratio__26->GetXaxis()->SetTitle("H p_{T} [GeV]");
   data_mc_ratio__26->GetXaxis()->SetRange(7,30);
   data_mc_ratio__26->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__26->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__26->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__26->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__26->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__26->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__26->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__26->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__26->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__26->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__26->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__26->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__26->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__26->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__26->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__26->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__26->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1026[40] = {
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
   Double_t Graph_from_mc_statistical_error_fy1026[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1026[40] = {
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
   Double_t Graph_from_mc_statistical_error_fey1026[40] = {
   0.01590861,
   0.01243093,
   0.01951913,
   0.0385611,
   0.03364628,
   0.03159451,
   0.00399558,
   0.005621239,
   0.00798658,
   0.01000114,
   0.01282522,
   0.01689544,
   0.02209949,
   0.02393541,
   0.03424481,
   0.03689112,
   0.0418283,
   0.0637472,
   0.08048976,
   0.09365356,
   0.1200409,
   0.1179599,
   0.1537129,
   0.1558149,
   0.2343638,
   0.09000832,
   0.3263388,
   0.1114794,
   0.1209133,
   0.479501,
   0.1675015,
   0.2444857,
   0.2271295,
   0.7059196,
   0.358802,
   0.3887854,
   0.3569341,
   0.8759599,
   0.8922591,
   0.5779723};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1026,Graph_from_mc_statistical_error_fy1026,Graph_from_mc_statistical_error_fex1026,Graph_from_mc_statistical_error_fey1026);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1026 = new TH1F("Graph_Graph_from_mc_statistical_error1026","",100,0,2200);
   Graph_Graph_from_mc_statistical_error1026->SetMinimum(0.09696677);
   Graph_Graph_from_mc_statistical_error1026->SetMaximum(2.070711);
   Graph_Graph_from_mc_statistical_error1026->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1026->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1026->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1026->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1026->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1026->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1026->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1026->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1026->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1026->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1026->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1026->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1026->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1026->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1026->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1026->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1026);
   
   gre->Draw("e2");
   TLine *line = new TLine(300,1,1500,1);
   line->Draw();
   bottomPad->Modified();
   H_pt_VbbHcc_16->cd();
   H_pt_VbbHcc_16->Modified();
   H_pt_VbbHcc_16->cd();
   H_pt_VbbHcc_16->SetSelected(H_pt_VbbHcc_16);
}
