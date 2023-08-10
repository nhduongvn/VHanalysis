void Z_dR_tags_16()
{
//=========Macro generated from canvas: Z_dR_tags_16/Z_dR_tags_16
//=========  (Thu Aug 10 12:27:36 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_tags_16 = new TCanvas("Z_dR_tags_16", "Z_dR_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_tags_16->SetHighLightColor(2);
   Z_dR_tags_16->Range(0,0,1,1);
   Z_dR_tags_16->SetFillColor(0);
   Z_dR_tags_16->SetFillStyle(4000);
   Z_dR_tags_16->SetBorderMode(0);
   Z_dR_tags_16->SetBorderSize(2);
   Z_dR_tags_16->SetFrameFillStyle(1000);
   Z_dR_tags_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-35.4726,6.314516,35447.12);
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
   st->SetMaximum(30379.87);
   
   TH1F *st_stack_17 = new TH1F("st_stack_17","",30,0,6);
   st_stack_17->SetMinimum(0.01);
   st_stack_17->SetMaximum(31898.86);
   st_stack_17->SetDirectory(0);
   st_stack_17->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_17->SetLineColor(ci);
   st_stack_17->GetXaxis()->SetRange(1,30);
   st_stack_17->GetXaxis()->SetLabelFont(42);
   st_stack_17->GetXaxis()->SetLabelSize(0.035);
   st_stack_17->GetXaxis()->SetTitleSize(0.035);
   st_stack_17->GetXaxis()->SetTitleFont(42);
   st_stack_17->GetYaxis()->SetTitle("Events/0.2");
   st_stack_17->GetYaxis()->SetLabelFont(42);
   st_stack_17->GetYaxis()->SetLabelSize(0.05);
   st_stack_17->GetYaxis()->SetTitleSize(0.057);
   st_stack_17->GetYaxis()->SetTitleOffset(1.2);
   st_stack_17->GetYaxis()->SetTitleFont(42);
   st_stack_17->GetZaxis()->SetLabelFont(42);
   st_stack_17->GetZaxis()->SetLabelSize(0.035);
   st_stack_17->GetZaxis()->SetTitleSize(0.035);
   st_stack_17->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_17);
   
   
   TH1D *VbbHcc_tags_Z_dR_stack_1 = new TH1D("VbbHcc_tags_Z_dR_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(3,10939.44);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(4,10071.6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(5,6772.807);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(6,6333.088);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(7,6761.601);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(8,8835.474);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(9,4929.252);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(10,4343.832);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(11,6776.368);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(12,5369.098);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(13,8207.072);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(14,7476.56);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(15,12146.99);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(16,12640.14);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(17,9673.573);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(18,10624.13);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(19,6477.459);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(20,7853.817);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(21,5006.441);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(22,3957.419);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(23,5483.051);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(24,886.4325);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(25,2716.411);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(26,2858.279);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(27,2094.388);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(28,1457.258);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(29,697.5798);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(30,985.2582);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(31,501.0663);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(3,1341.937);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(4,1798.613);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(5,995.3796);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(6,1025.57);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(7,1686.477);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(8,2251.407);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(9,907.4061);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(10,737.8913);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(11,1686.994);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(12,875.7502);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(13,1772.281);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(14,1128.703);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(15,2692.877);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(16,2382.712);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(17,1311.259);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(18,2303.522);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(19,1026.282);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(20,1218.607);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(21,1553.069);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(22,822.1356);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(23,1680.501);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(24,113.8656);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(25,1472.264);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(26,768.0998);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(27,610.1785);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(28,476.7391);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(29,278.9379);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(30,389.4981);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(31,275.1596);
   VbbHcc_tags_Z_dR_stack_1->SetEntries(9717);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_2 = new TH1D("VbbHcc_tags_Z_dR_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(3,20.72574);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(4,26.70232);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(5,24.97068);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(6,27.0186);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(7,29.06028);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(8,29.70854);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(9,34.91139);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(10,32.87336);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(11,42.13852);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(12,39.5207);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(13,43.16719);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(14,41.23292);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(15,42.1057);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(16,44.44043);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(17,38.71418);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(18,40.27711);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(19,34.94615);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(20,29.59283);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(21,24.56477);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(22,20.90557);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(23,17.07835);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(24,13.11968);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(25,10.80492);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(26,9.045251);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(27,5.322694);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(28,5.481815);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(29,3.73213);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(30,3.700336);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(31,2.498861);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(3,1.834625);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(4,2.070586);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(5,1.948685);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(6,2.028699);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(7,2.098505);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(8,2.017113);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(9,2.344102);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(10,2.259674);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(11,2.683822);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(12,2.472325);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(13,2.632932);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(14,2.573441);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(15,2.52324);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(16,2.589675);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(17,2.319271);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(18,2.551692);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(19,2.368516);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(20,2.117821);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(21,1.945713);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(22,1.869164);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(23,1.582151);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(24,1.419169);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(25,1.316501);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(26,1.115116);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(27,0.8775643);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(28,0.8857813);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(29,0.7236686);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(30,0.7998832);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(31,0.6845644);
   VbbHcc_tags_Z_dR_stack_2->SetEntries(9491);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_3 = new TH1D("VbbHcc_tags_Z_dR_stack_3","",30,0,6);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(2,0.1392898);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(3,285.344);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(4,435.4292);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(5,467.9903);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(6,515.4814);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(7,553.9939);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(8,570.4923);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(9,604.0018);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(10,629.9584);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(11,669.4797);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(12,730.4967);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(13,782.4135);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(14,814.1318);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(15,853.6673);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(16,861.2956);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(17,811.492);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(18,751.6256);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(19,671.5911);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(20,565.2333);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(21,476.2753);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(22,393.2947);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(23,309.814);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(24,250.4335);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(25,200.0334);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(26,162.4887);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(27,127.0814);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(28,96.35085);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(29,73.25836);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(30,50.59028);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(31,41.09324);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(2,0.09849278);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(3,4.210296);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(4,5.221301);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(5,5.414848);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(6,5.69362);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(7,5.902321);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(8,5.985778);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(9,6.149338);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(10,6.288686);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(11,6.48022);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(12,6.777239);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(13,7.019422);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(14,7.1633);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(15,7.341523);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(16,7.375107);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(17,7.170144);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(18,6.896676);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(19,6.513492);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(20,5.978498);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(21,5.48519);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(22,4.973338);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(23,4.407916);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(24,3.964933);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(25,3.534619);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(26,3.185229);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(27,2.81529);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(28,2.452085);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(29,2.128974);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(30,1.774408);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(31,1.592479);
   VbbHcc_tags_Z_dR_stack_3->SetEntries(225965);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_4 = new TH1D("VbbHcc_tags_Z_dR_stack_4","",30,0,6);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(3,74.7723);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(4,122.2645);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(5,129.6887);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(6,110.8178);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(7,111.2894);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(8,88.33523);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(9,66.29373);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(10,72.53958);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(11,77.41159);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(12,86.85583);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(13,90.88932);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(14,112.2414);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(15,103.3862);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(16,112.341);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(17,119.543);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(18,87.00404);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(19,77.80525);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(20,68.25464);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(21,58.80813);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(22,46.18584);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(23,42.15251);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(24,31.52728);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(25,29.86307);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(26,20.05521);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(27,22.47195);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(28,19.64471);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(29,12.13676);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(30,12.19509);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(31,5.075051);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(3,2.747054);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(4,7.170027);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(5,7.054479);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(6,8.56918);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(7,10.68511);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(8,8.735638);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(9,4.972257);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(10,6.80459);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(11,7.341901);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(12,7.035106);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(13,7.527143);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(14,9.330872);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(15,7.201635);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(16,8.591789);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(17,10.08822);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(18,6.929995);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(19,6.875671);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(20,6.770897);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(21,7.078648);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(22,5.90835);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(23,6.868415);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(24,5.069969);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(25,5.011015);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(26,3.155351);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(27,3.324044);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(28,3.177781);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(29,1.364252);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(30,2.927817);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(31,0.9098425);
   VbbHcc_tags_Z_dR_stack_4->SetEntries(14953);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_5 = new TH1D("VbbHcc_tags_Z_dR_stack_5","",30,0,6);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(3,23.36019);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(4,17.48347);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(5,12.39004);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(6,6.984415);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(7,5.540911);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(8,8.492801);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(9,6.179097);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(10,7.837997);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(11,4.644787);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(12,7.74635);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(13,8.014723);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(14,8.729987);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(15,7.620115);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(16,5.562294);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(17,11.0268);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(18,7.616926);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(19,6.146225);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(20,4.739516);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(21,3.998637);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(22,3.500622);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(23,2.444239);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(24,10.09944);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(25,1.601574);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(26,2.213971);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(27,1.853056);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(28,1.318158);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(29,1.365588);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(30,0.9035573);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(31,0.3005055);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(3,6.452562);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(4,2.617255);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(5,2.280123);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(6,1.288734);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(7,0.6822605);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(8,1.96284);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(9,1.237924);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(10,1.892382);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(11,1.183947);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(12,1.755046);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(13,1.655416);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(14,1.951311);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(15,1.639233);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(16,1.215337);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(17,2.088902);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(18,1.646122);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(19,1.378757);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(20,1.211555);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(21,1.195103);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(22,1.138232);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(23,0.5594433);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(24,6.191279);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(25,0.3863056);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(26,1.07481);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(27,0.5456801);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(28,0.3811437);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(29,0.3487345);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(30,0.262598);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(31,0.1423677);
   VbbHcc_tags_Z_dR_stack_5->SetEntries(3420);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_6 = new TH1D("VbbHcc_tags_Z_dR_stack_6","",30,0,6);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(3,0.1343693);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(7,0.1343693);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(11,0.2687386);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(12,0.2687386);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(13,0.1343693);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(14,0.1343693);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(21,0.1343693);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(22,0.1343693);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(25,0.1343693);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(3,0.1343693);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(7,0.1343693);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(11,0.1900269);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(12,0.1900269);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(13,0.1343693);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(14,0.1343693);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(21,0.1343693);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(22,0.1343693);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(25,0.1343693);
   VbbHcc_tags_Z_dR_stack_6->SetEntries(11);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_7 = new TH1D("VbbHcc_tags_Z_dR_stack_7","",30,0,6);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(3,0.7634105);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(4,0.7634105);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(5,0.4362346);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(6,0.3271759);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(8,0.1090586);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(9,0.1090586);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(10,0.2181173);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(11,0.3271759);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(13,0.2181173);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(14,0.1090586);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(15,0.3271759);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(16,0.4362346);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(17,0.3271759);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(18,0.1090586);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(19,0.2181173);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(21,0.2181173);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(24,0.1090586);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(29,0.1090586);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(3,0.288542);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(4,0.288542);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(5,0.2181173);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(6,0.1888951);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(8,0.1090586);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(9,0.1090586);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(10,0.1542322);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(11,0.1888951);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(13,0.1542322);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(14,0.1090586);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(15,0.1888951);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(16,0.2181173);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(17,0.1888951);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(18,0.1090586);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(19,0.1542322);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(21,0.1542322);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(24,0.1090586);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(29,0.1090586);
   VbbHcc_tags_Z_dR_stack_7->SetEntries(48);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_8 = new TH1D("VbbHcc_tags_Z_dR_stack_8","",30,0,6);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(4,3.891314);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(5,1.945657);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(6,1.945657);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(7,0.9728286);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(8,0.9728286);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(9,2.188864);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(10,0.4864143);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(11,1.70245);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(12,2.918486);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(13,2.675279);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(14,2.432072);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(15,2.675279);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(16,2.675279);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(17,3.891314);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(18,3.4049);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(19,2.188864);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(20,1.216036);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(21,0.2432072);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(22,0.9728286);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(23,0.2432072);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(25,0.4864143);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(26,0.4864143);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(27,0.2432072);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(28,0.2432072);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(29,0.4864143);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(30,0.2432072);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(31,0.2432072);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(4,0.9728286);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(5,0.6878937);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(6,0.6878937);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(7,0.4864143);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(8,0.4864143);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(9,0.7296215);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(10,0.3439469);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(11,0.6434656);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(12,0.8424943);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(13,0.8066269);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(14,0.7690885);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(15,0.8066269);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(16,0.8066269);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(17,0.9728286);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(18,0.9099978);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(19,0.7296215);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(20,0.5438277);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(21,0.2432072);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(22,0.4864143);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(23,0.2432072);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(25,0.3439469);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(26,0.3439469);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(27,0.2432072);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(28,0.2432072);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(29,0.3439469);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(30,0.2432072);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(31,0.2432072);
   VbbHcc_tags_Z_dR_stack_8->SetEntries(173);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_9 = new TH1D("VbbHcc_tags_Z_dR_stack_9","",30,0,6);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(3,1.338228);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(4,2.562418);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(5,2.754771);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(6,2.310985);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(7,1.830102);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(8,1.372577);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(9,1.030463);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(10,1.019471);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(11,1.139005);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(12,1.380821);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(13,1.801249);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(14,2.267019);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(15,2.746528);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(16,2.997961);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(17,2.95949);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(18,2.475859);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(19,1.78751);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(20,1.368455);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(21,0.9466521);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(22,0.6485048);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(23,0.4588996);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(24,0.3146347);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(25,0.2981473);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(26,0.33387);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(27,0.278912);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(28,0.2912776);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(29,0.2624246);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(30,0.1236556);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(31,0.07419334);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(3,0.04287959);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(4,0.05933495);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(5,0.06152171);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(6,0.05634873);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(7,0.0501445);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(8,0.04342641);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(9,0.03762719);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(10,0.03742598);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(11,0.03955929);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(12,0.04355662);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(13,0.04974764);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(14,0.05581014);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(15,0.06142958);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(16,0.06417983);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(17,0.06376671);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(18,0.05832417);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(19,0.04955755);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(20,0.04336116);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(21,0.03606457);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(22,0.02984985);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(23,0.02510987);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(24,0.02079165);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(25,0.02023956);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(26,0.02141777);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(27,0.01957579);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(28,0.02000503);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(29,0.01898838);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(30,0.01303444);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(31,0.01009644);
   VbbHcc_tags_Z_dR_stack_9->SetEntries(28512);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_10 = new TH1D("VbbHcc_tags_Z_dR_stack_10","",30,0,6);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(3,0.5134383);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(4,1.098128);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(5,1.305436);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(6,1.241704);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(7,1.011122);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(8,0.7336367);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(9,0.6004435);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(10,0.5639228);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(11,0.5904182);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(12,0.7368591);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(13,0.8338896);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(14,0.9337845);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(15,0.9831949);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(16,1.051224);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(17,0.9857012);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(18,0.8764971);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(19,0.7261177);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(20,0.5871958);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(21,0.4579411);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(22,0.3379956);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(23,0.2610157);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(24,0.2133955);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(25,0.1818875);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(26,0.1815294);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(27,0.1865421);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(28,0.1528857);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(29,0.1145748);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(30,0.07447361);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(31,0.04153336);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(3,0.01355856);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(4,0.01982878);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(5,0.02161959);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(6,0.02108524);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(7,0.01902705);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(8,0.01620728);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(9,0.01466242);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(10,0.01420952);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(11,0.0145395);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(12,0.01624283);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(13,0.01727921);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(14,0.01828491);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(15,0.01876244);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(16,0.01940069);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(17,0.01878634);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(18,0.01771515);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(19,0.01612401);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(20,0.01449977);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(21,0.01280485);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(22,0.01100082);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(23,0.009667248);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(24,0.008741022);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(25,0.008069952);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(26,0.008062005);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(27,0.008172557);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(28,0.007398659);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(29,0.006404925);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(30,0.005163816);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(31,0.003856276);
   VbbHcc_tags_Z_dR_stack_10->SetEntries(49090);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_11 = new TH1D("VbbHcc_tags_Z_dR_stack_11","",30,0,6);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(3,0.008205022);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(4,0.01094003);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(5,0.008205022);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(6,0.01367504);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(7,0.005470015);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(9,0.005470015);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(10,0.002735007);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(11,0.005470015);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(12,0.002735007);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(14,0.002735007);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(15,0.008205022);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(16,0.002735007);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(17,0.005470015);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(18,0.002735007);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(19,0.002735007);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(23,0.002735007);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(29,0.008205022);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(3,0.004737172);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(4,0.005470015);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(5,0.004737172);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(6,0.006115663);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(7,0.003867885);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(9,0.003867885);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(10,0.002735007);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(11,0.003867885);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(12,0.002735007);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(14,0.002735007);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(15,0.004737172);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(16,0.002735007);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(17,0.003867885);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(18,0.002735007);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(19,0.002735007);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(23,0.002735007);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(29,0.004737172);
   VbbHcc_tags_Z_dR_stack_11->SetEntries(36);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_12 = new TH1D("VbbHcc_tags_Z_dR_stack_12","",30,0,6);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(3,0.003215393);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(4,0.005001722);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(5,0.006073519);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(6,0.006430785);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(7,0.0007145317);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(8,0.001429063);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(9,0.0007145317);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(10,0.001429063);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(11,0.0003572658);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(12,0.001786329);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(13,0.001071798);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(14,0.001071798);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(15,0.002143595);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(16,0.001786329);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(17,0.003572658);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(18,0.001429063);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(19,0.001429063);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(20,0.0007145317);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(21,0.001071798);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(22,0.0003572658);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(23,0.0003572658);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(24,0.0003572658);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(25,0.0007145317);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(26,0.0003572658);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(27,0.0003572658);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(28,0.0003572658);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(29,0.0003572658);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(30,0.0003572658);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(31,0.0003572658);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(3,0.001071798);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(4,0.001336766);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(5,0.001473045);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(6,0.001515751);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(7,0.0005052502);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(8,0.0007145317);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(9,0.0005052502);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(10,0.0007145317);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(11,0.0003572658);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(12,0.0007988707);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(13,0.0006188026);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(14,0.0006188026);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(15,0.000875119);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(16,0.0007988707);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(17,0.001129774);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(18,0.0007145317);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(19,0.0007145317);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(20,0.0005052502);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(21,0.0006188026);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(22,0.0003572658);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(23,0.0003572658);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(24,0.0003572658);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(25,0.0005052502);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(26,0.0003572658);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(27,0.0003572658);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(28,0.0003572658);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(29,0.0003572658);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(30,0.0003572658);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(31,0.0003572658);
   VbbHcc_tags_Z_dR_stack_12->SetEntries(127);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_dR__45 = new TH1D("VbbHcc_tags_Z_dR__45","",30,0,6);
   VbbHcc_tags_Z_dR__45->SetBinContent(2,1);
   VbbHcc_tags_Z_dR__45->SetBinContent(3,5587);
   VbbHcc_tags_Z_dR__45->SetBinContent(4,6411);
   VbbHcc_tags_Z_dR__45->SetBinContent(5,4788);
   VbbHcc_tags_Z_dR__45->SetBinContent(6,4357);
   VbbHcc_tags_Z_dR__45->SetBinContent(7,3897);
   VbbHcc_tags_Z_dR__45->SetBinContent(8,3831);
   VbbHcc_tags_Z_dR__45->SetBinContent(9,3768);
   VbbHcc_tags_Z_dR__45->SetBinContent(10,3862);
   VbbHcc_tags_Z_dR__45->SetBinContent(11,3926);
   VbbHcc_tags_Z_dR__45->SetBinContent(12,4113);
   VbbHcc_tags_Z_dR__45->SetBinContent(13,4507);
   VbbHcc_tags_Z_dR__45->SetBinContent(14,4719);
   VbbHcc_tags_Z_dR__45->SetBinContent(15,5236);
   VbbHcc_tags_Z_dR__45->SetBinContent(16,5137);
   VbbHcc_tags_Z_dR__45->SetBinContent(17,5007);
   VbbHcc_tags_Z_dR__45->SetBinContent(18,4540);
   VbbHcc_tags_Z_dR__45->SetBinContent(19,4156);
   VbbHcc_tags_Z_dR__45->SetBinContent(20,3663);
   VbbHcc_tags_Z_dR__45->SetBinContent(21,3031);
   VbbHcc_tags_Z_dR__45->SetBinContent(22,2410);
   VbbHcc_tags_Z_dR__45->SetBinContent(23,2023);
   VbbHcc_tags_Z_dR__45->SetBinContent(24,1539);
   VbbHcc_tags_Z_dR__45->SetBinContent(25,1284);
   VbbHcc_tags_Z_dR__45->SetBinContent(26,1112);
   VbbHcc_tags_Z_dR__45->SetBinContent(27,1034);
   VbbHcc_tags_Z_dR__45->SetBinContent(28,859);
   VbbHcc_tags_Z_dR__45->SetBinContent(29,811);
   VbbHcc_tags_Z_dR__45->SetBinContent(30,523);
   VbbHcc_tags_Z_dR__45->SetBinContent(31,413);
   VbbHcc_tags_Z_dR__45->SetEntries(96574);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR__45->SetLineColor(ci);
   VbbHcc_tags_Z_dR__45->SetLineWidth(2);
   VbbHcc_tags_Z_dR__45->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR__45->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR__45->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR__45->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__45->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR__45->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR__45->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__45->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__45->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR__45->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR__45->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR__45->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__45->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__45->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR__45->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR__45->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__45->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_fx1033[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_fy1033[30] = {
   0,
   0.1392898,
   11346.4,
   10681.81,
   7414.303,
   6999.236,
   7465.44,
   9535.693,
   5644.573,
   5089.333,
   7574.077,
   6239.027,
   9137.22,
   8458.777,
   13160.51,
   13670.94,
   10662.52,
   11517.52,
   7272.873,
   8524.809,
   5572.089,
   4423.4,
   5855.506,
   1192.25,
   2959.815,
   3053.084,
   2251.826,
   1580.741,
   789.0537,
   1053.089};
   Double_t Graph_from_VbbHcc_tags_Z_dR_fex1033[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_fey1033[30] = {
   0,
   0.09849278,
   1341.963,
   1798.638,
   995.4241,
   1025.625,
   1686.523,
   2251.433,
   907.4447,
   737.9554,
   1687.025,
   875.8104,
   1772.314,
   1128.77,
   2692.898,
   2382.741,
   1311.322,
   2303.545,
   1026.33,
   1218.643,
   1553.096,
   822.1749,
   1680.522,
   114.2241,
   1472.277,
   768.1145,
   610.195,
   476.7571,
   278.9507,
   389.5142};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_Z_dR_fx1033,Graph_from_VbbHcc_tags_Z_dR_fy1033,Graph_from_VbbHcc_tags_Z_dR_fex1033,Graph_from_VbbHcc_tags_Z_dR_fey1033);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR1033 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR1033","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->SetMaximum(17659.05);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_dR1033);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_dR","MC unc. (stat.)","fl");

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
   Z_dR_tags_16->cd();
  
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
   
   TH1D *data_mc_ratio__46 = new TH1D("data_mc_ratio__46","",30,0,6);
   data_mc_ratio__46->SetBinContent(2,7.179275);
   data_mc_ratio__46->SetBinContent(3,0.4924029);
   data_mc_ratio__46->SetBinContent(4,0.6001791);
   data_mc_ratio__46->SetBinContent(5,0.6457789);
   data_mc_ratio__46->SetBinContent(6,0.6224965);
   data_mc_ratio__46->SetBinContent(7,0.5220054);
   data_mc_ratio__46->SetBinContent(8,0.4017537);
   data_mc_ratio__46->SetBinContent(9,0.6675438);
   data_mc_ratio__46->SetBinContent(10,0.7588421);
   data_mc_ratio__46->SetBinContent(11,0.518347);
   data_mc_ratio__46->SetBinContent(12,0.6592374);
   data_mc_ratio__46->SetBinContent(13,0.4932572);
   data_mc_ratio__46->SetBinContent(14,0.5578821);
   data_mc_ratio__46->SetBinContent(15,0.3978569);
   data_mc_ratio__46->SetBinContent(16,0.3757605);
   data_mc_ratio__46->SetBinContent(17,0.4695887);
   data_mc_ratio__46->SetBinContent(18,0.3941821);
   data_mc_ratio__46->SetBinContent(19,0.5714386);
   data_mc_ratio__46->SetBinContent(20,0.429687);
   data_mc_ratio__46->SetBinContent(21,0.5439612);
   data_mc_ratio__46->SetBinContent(22,0.5448298);
   data_mc_ratio__46->SetBinContent(23,0.3454868);
   data_mc_ratio__46->SetBinContent(24,1.290837);
   data_mc_ratio__46->SetBinContent(25,0.4338109);
   data_mc_ratio__46->SetBinContent(26,0.3642218);
   data_mc_ratio__46->SetBinContent(27,0.459183);
   data_mc_ratio__46->SetBinContent(28,0.5434159);
   data_mc_ratio__46->SetBinContent(29,1.027813);
   data_mc_ratio__46->SetBinContent(30,0.4966341);
   data_mc_ratio__46->SetBinContent(31,0.7503726);
   data_mc_ratio__46->SetBinError(2,7.179275);
   data_mc_ratio__46->SetBinError(3,0.006587661);
   data_mc_ratio__46->SetBinError(4,0.007495799);
   data_mc_ratio__46->SetBinError(5,0.009332688);
   data_mc_ratio__46->SetBinError(6,0.009430683);
   data_mc_ratio__46->SetBinError(7,0.008361993);
   data_mc_ratio__46->SetBinError(8,0.006490884);
   data_mc_ratio__46->SetBinError(9,0.01087488);
   data_mc_ratio__46->SetBinError(10,0.01221083);
   data_mc_ratio__46->SetBinError(11,0.008272665);
   data_mc_ratio__46->SetBinError(12,0.01027927);
   data_mc_ratio__46->SetBinError(13,0.007347332);
   data_mc_ratio__46->SetBinError(14,0.008121148);
   data_mc_ratio__46->SetBinError(15,0.005498283);
   data_mc_ratio__46->SetBinError(16,0.005242716);
   data_mc_ratio__46->SetBinError(17,0.006636344);
   data_mc_ratio__46->SetBinError(18,0.005850176);
   data_mc_ratio__46->SetBinError(19,0.008864042);
   data_mc_ratio__46->SetBinError(20,0.007099599);
   data_mc_ratio__46->SetBinError(21,0.009880409);
   data_mc_ratio__46->SetBinError(22,0.01109819);
   data_mc_ratio__46->SetBinError(23,0.007681279);
   data_mc_ratio__46->SetBinError(24,0.03290425);
   data_mc_ratio__46->SetBinError(25,0.01210648);
   data_mc_ratio__46->SetBinError(26,0.01092229);
   data_mc_ratio__46->SetBinError(27,0.01427991);
   data_mc_ratio__46->SetBinError(28,0.01854111);
   data_mc_ratio__46->SetBinError(29,0.03609141);
   data_mc_ratio__46->SetBinError(30,0.02171629);
   data_mc_ratio__46->SetBinError(31,0.3769583);
   data_mc_ratio__46->SetMinimum(0.4);
   data_mc_ratio__46->SetMaximum(1.6);
   data_mc_ratio__46->SetEntries(6.687737);
   data_mc_ratio__46->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__46->SetLineColor(ci);
   data_mc_ratio__46->SetLineWidth(2);
   data_mc_ratio__46->SetMarkerStyle(20);
   data_mc_ratio__46->SetMarkerSize(1.2);
   data_mc_ratio__46->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__46->GetXaxis()->SetRange(1,30);
   data_mc_ratio__46->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__46->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__46->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__46->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__46->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__46->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__46->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__46->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__46->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__46->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__46->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__46->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__46->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__46->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__46->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__46->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__46->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1034[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1034[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1034[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1034[30] = {
   0,
   0.7071068,
   0.1182721,
   0.1683833,
   0.1342573,
   0.1465338,
   0.2259107,
   0.2361059,
   0.1607641,
   0.1450004,
   0.2227367,
   0.1403761,
   0.1939664,
   0.1334436,
   0.2046196,
   0.1742924,
   0.1229842,
   0.2000036,
   0.1411175,
   0.1429525,
   0.2787278,
   0.1858695,
   0.2869986,
   0.09580554,
   0.4974221,
   0.2515864,
   0.2709779,
   0.3016034,
   0.3535257,
   0.3698777};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1034,Graph_from_mc_statistical_error_fy1034,Graph_from_mc_statistical_error_fex1034,Graph_from_mc_statistical_error_fey1034);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1034 = new TH1F("Graph_Graph_from_mc_statistical_error1034","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1034->SetMinimum(0.1514719);
   Graph_Graph_from_mc_statistical_error1034->SetMaximum(1.848528);
   Graph_Graph_from_mc_statistical_error1034->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1034->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1034->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1034->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1034->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1034->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1034->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1034->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1034->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1034->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1034->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1034->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1034->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1034->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1034->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1034->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1034);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_tags_16->cd();
   Z_dR_tags_16->Modified();
   Z_dR_tags_16->cd();
   Z_dR_tags_16->SetSelected(Z_dR_tags_16);
}
