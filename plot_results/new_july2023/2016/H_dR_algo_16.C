void H_dR_algo_16()
{
//=========Macro generated from canvas: H_dR_algo_16/H_dR_algo_16
//=========  (Mon Jul 24 10:11:42 2023) by ROOT version 6.14/09
   TCanvas *H_dR_algo_16 = new TCanvas("H_dR_algo_16", "H_dR_algo_16",0,0,600,600);
   H_dR_algo_16->SetHighLightColor(2);
   H_dR_algo_16->Range(0,0,1,1);
   H_dR_algo_16->SetFillColor(0);
   H_dR_algo_16->SetFillStyle(4000);
   H_dR_algo_16->SetBorderMode(0);
   H_dR_algo_16->SetBorderSize(2);
   H_dR_algo_16->SetFrameFillStyle(1000);
   H_dR_algo_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9499975,-109.1866,6.525,109087.5);
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
   st->SetMaximum(93493.13);
   
   TH1F *st_stack_117 = new TH1F("st_stack_117","",30,0,6);
   st_stack_117->SetMinimum(0.01);
   st_stack_117->SetMaximum(98167.79);
   st_stack_117->SetDirectory(0);
   st_stack_117->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_117->SetLineColor(ci);
   st_stack_117->GetXaxis()->SetRange(1,31);
   st_stack_117->GetXaxis()->SetLabelFont(42);
   st_stack_117->GetXaxis()->SetLabelSize(0.035);
   st_stack_117->GetXaxis()->SetTitleSize(0.035);
   st_stack_117->GetXaxis()->SetTitleFont(42);
   st_stack_117->GetYaxis()->SetTitle("Events/0.2");
   st_stack_117->GetYaxis()->SetLabelFont(42);
   st_stack_117->GetYaxis()->SetLabelSize(0.05);
   st_stack_117->GetYaxis()->SetTitleSize(0.057);
   st_stack_117->GetYaxis()->SetTitleOffset(1.2);
   st_stack_117->GetYaxis()->SetTitleFont(42);
   st_stack_117->GetZaxis()->SetLabelFont(42);
   st_stack_117->GetZaxis()->SetLabelSize(0.035);
   st_stack_117->GetZaxis()->SetTitleSize(0.035);
   st_stack_117->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_117);
   
   
   TH1D *VbbHcc_algo_H_dR_stack_1 = new TH1D("VbbHcc_algo_H_dR_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,23919.45);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,23525.84);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,23233.61);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,15466.32);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,16633.1);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,23156.65);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,15251.29);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,19467.81);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,24328.66);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,40310.96);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,20481.23);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,18094.7);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,18238.79);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,16208.97);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,17375.76);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,14201.25);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(19,14296.03);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(20,13803);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(21,10819.42);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(22,10063.55);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(23,7462.43);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(24,6898.503);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(25,5830.635);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(26,5858.144);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(27,4879.457);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(28,5043.872);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(29,2883.951);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(30,1561.227);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(31,671.9285);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,2619.296);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,2549.904);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,3685.3);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,2258.471);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,2786.525);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,3960.387);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,1804.255);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,3024.225);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,4524.649);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,22529.84);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,3071.877);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,2765.147);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,2647.06);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,1721.69);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,2933.275);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,1520.152);
   VbbHcc_algo_H_dR_stack_1->SetBinError(19,2094.102);
   VbbHcc_algo_H_dR_stack_1->SetBinError(20,2100.92);
   VbbHcc_algo_H_dR_stack_1->SetBinError(21,1396.838);
   VbbHcc_algo_H_dR_stack_1->SetBinError(22,1429.947);
   VbbHcc_algo_H_dR_stack_1->SetBinError(23,1182.28);
   VbbHcc_algo_H_dR_stack_1->SetBinError(24,1191.157);
   VbbHcc_algo_H_dR_stack_1->SetBinError(25,1063.257);
   VbbHcc_algo_H_dR_stack_1->SetBinError(26,1133.435);
   VbbHcc_algo_H_dR_stack_1->SetBinError(27,1045.877);
   VbbHcc_algo_H_dR_stack_1->SetBinError(28,1764.082);
   VbbHcc_algo_H_dR_stack_1->SetBinError(29,772.9115);
   VbbHcc_algo_H_dR_stack_1->SetBinError(30,502.3297);
   VbbHcc_algo_H_dR_stack_1->SetBinError(31,304.5238);
   VbbHcc_algo_H_dR_stack_1->SetEntries(15710);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_2 = new TH1D("VbbHcc_algo_H_dR_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,71.83218);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,102.4622);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,82.413);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,72.61633);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,66.43349);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,69.68716);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,79.91504);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,95.07861);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,105.9357);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,122.151);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,139.6076);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,146.0887);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,141.8344);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,150.6331);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,148.5404);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,137.3094);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,128.7798);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(20,113.7896);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(21,96.14292);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(22,77.88524);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(23,61.51277);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(24,49.80498);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(25,38.73135);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(26,32.73617);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(27,24.33252);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(28,17.95662);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(29,14.26222);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(30,9.841569);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(31,5.033033);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,4.111883);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,4.813735);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,4.08341);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,3.58455);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,3.25395);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,3.366604);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,3.435632);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,4.071786);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,4.002351);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,4.388422);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,4.564013);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,4.69819);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,4.412957);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,4.737967);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,4.610512);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,4.393111);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,4.385704);
   VbbHcc_algo_H_dR_stack_2->SetBinError(20,3.923621);
   VbbHcc_algo_H_dR_stack_2->SetBinError(21,3.685732);
   VbbHcc_algo_H_dR_stack_2->SetBinError(22,3.211474);
   VbbHcc_algo_H_dR_stack_2->SetBinError(23,2.872002);
   VbbHcc_algo_H_dR_stack_2->SetBinError(24,2.520028);
   VbbHcc_algo_H_dR_stack_2->SetBinError(25,2.320497);
   VbbHcc_algo_H_dR_stack_2->SetBinError(26,2.140978);
   VbbHcc_algo_H_dR_stack_2->SetBinError(27,1.977105);
   VbbHcc_algo_H_dR_stack_2->SetBinError(28,1.649851);
   VbbHcc_algo_H_dR_stack_2->SetBinError(29,1.650547);
   VbbHcc_algo_H_dR_stack_2->SetBinError(30,1.339031);
   VbbHcc_algo_H_dR_stack_2->SetBinError(31,0.8413518);
   VbbHcc_algo_H_dR_stack_2->SetEntries(39281);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_2,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_3 = new TH1D("VbbHcc_algo_H_dR_stack_3","",30,0,6);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(2,0.1656869);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(3,640.2143);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(4,1194.051);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(5,1353.791);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(6,1370.128);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(7,1315.83);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(8,1308.366);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(9,1322.528);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(10,1342.003);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(11,1395.252);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(12,1450.012);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(13,1447.016);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(14,1397.213);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(15,1318.402);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(16,1215.013);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(17,1132.439);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(18,1066.839);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(19,1034.782);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(20,994.357);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(21,908.4617);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(22,802.1161);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(23,697.2915);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(24,588.6657);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(25,501.6604);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(26,400.9893);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(27,321.5514);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(28,252.8993);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(29,177.4986);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(30,111.4338);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(31,86.6336);
   VbbHcc_algo_H_dR_stack_3->SetBinError(2,0.09790408);
   VbbHcc_algo_H_dR_stack_3->SetBinError(3,6.401078);
   VbbHcc_algo_H_dR_stack_3->SetBinError(4,8.753085);
   VbbHcc_algo_H_dR_stack_3->SetBinError(5,9.348839);
   VbbHcc_algo_H_dR_stack_3->SetBinError(6,9.448581);
   VbbHcc_algo_H_dR_stack_3->SetBinError(7,9.287479);
   VbbHcc_algo_H_dR_stack_3->SetBinError(8,9.267839);
   VbbHcc_algo_H_dR_stack_3->SetBinError(9,9.302068);
   VbbHcc_algo_H_dR_stack_3->SetBinError(10,9.365541);
   VbbHcc_algo_H_dR_stack_3->SetBinError(11,9.510549);
   VbbHcc_algo_H_dR_stack_3->SetBinError(12,9.700196);
   VbbHcc_algo_H_dR_stack_3->SetBinError(13,9.682532);
   VbbHcc_algo_H_dR_stack_3->SetBinError(14,9.503399);
   VbbHcc_algo_H_dR_stack_3->SetBinError(15,9.207476);
   VbbHcc_algo_H_dR_stack_3->SetBinError(16,8.829284);
   VbbHcc_algo_H_dR_stack_3->SetBinError(17,8.534243);
   VbbHcc_algo_H_dR_stack_3->SetBinError(18,8.287192);
   VbbHcc_algo_H_dR_stack_3->SetBinError(19,8.181556);
   VbbHcc_algo_H_dR_stack_3->SetBinError(20,8.026988);
   VbbHcc_algo_H_dR_stack_3->SetBinError(21,7.667782);
   VbbHcc_algo_H_dR_stack_3->SetBinError(22,7.201014);
   VbbHcc_algo_H_dR_stack_3->SetBinError(23,6.728331);
   VbbHcc_algo_H_dR_stack_3->SetBinError(24,6.182393);
   VbbHcc_algo_H_dR_stack_3->SetBinError(25,5.71273);
   VbbHcc_algo_H_dR_stack_3->SetBinError(26,5.104992);
   VbbHcc_algo_H_dR_stack_3->SetBinError(27,4.549239);
   VbbHcc_algo_H_dR_stack_3->SetBinError(28,4.033468);
   VbbHcc_algo_H_dR_stack_3->SetBinError(29,3.3722);
   VbbHcc_algo_H_dR_stack_3->SetBinError(30,2.658032);
   VbbHcc_algo_H_dR_stack_3->SetBinError(31,2.331558);
   VbbHcc_algo_H_dR_stack_3->SetEntries(446835);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_H_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_3->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_3,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_4 = new TH1D("VbbHcc_algo_H_dR_stack_4","",30,0,6);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(3,112.9593);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(4,146.7062);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(5,137.4064);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(6,134.7487);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(7,140.0434);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(8,128.5344);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(9,123.1506);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(10,137.5943);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(11,133.0797);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(12,123.5626);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(13,136.0654);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(14,102.0211);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(15,108.0985);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(16,113.5333);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(17,86.79115);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(18,80.22316);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(19,100.7076);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(20,89.75437);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(21,75.06955);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(22,72.02189);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(23,77.18299);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(24,65.90705);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(25,39.14004);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(26,38.46905);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(27,31.48617);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(28,20.33355);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(29,19.54087);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(30,12.61513);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(31,7.73125);
   VbbHcc_algo_H_dR_stack_4->SetBinError(3,5.224838);
   VbbHcc_algo_H_dR_stack_4->SetBinError(4,9.007621);
   VbbHcc_algo_H_dR_stack_4->SetBinError(5,9.950001);
   VbbHcc_algo_H_dR_stack_4->SetBinError(6,10.76658);
   VbbHcc_algo_H_dR_stack_4->SetBinError(7,12.19979);
   VbbHcc_algo_H_dR_stack_4->SetBinError(8,10.48134);
   VbbHcc_algo_H_dR_stack_4->SetBinError(9,10.24948);
   VbbHcc_algo_H_dR_stack_4->SetBinError(10,12.35711);
   VbbHcc_algo_H_dR_stack_4->SetBinError(11,12.07347);
   VbbHcc_algo_H_dR_stack_4->SetBinError(12,10.82615);
   VbbHcc_algo_H_dR_stack_4->SetBinError(13,11.20431);
   VbbHcc_algo_H_dR_stack_4->SetBinError(14,7.626697);
   VbbHcc_algo_H_dR_stack_4->SetBinError(15,9.2612);
   VbbHcc_algo_H_dR_stack_4->SetBinError(16,9.8632);
   VbbHcc_algo_H_dR_stack_4->SetBinError(17,6.190393);
   VbbHcc_algo_H_dR_stack_4->SetBinError(18,5.734041);
   VbbHcc_algo_H_dR_stack_4->SetBinError(19,9.587321);
   VbbHcc_algo_H_dR_stack_4->SetBinError(20,7.462131);
   VbbHcc_algo_H_dR_stack_4->SetBinError(21,7.44029);
   VbbHcc_algo_H_dR_stack_4->SetBinError(22,7.151241);
   VbbHcc_algo_H_dR_stack_4->SetBinError(23,10.40001);
   VbbHcc_algo_H_dR_stack_4->SetBinError(24,9.310995);
   VbbHcc_algo_H_dR_stack_4->SetBinError(25,5.368304);
   VbbHcc_algo_H_dR_stack_4->SetBinError(26,6.836514);
   VbbHcc_algo_H_dR_stack_4->SetBinError(27,6.224132);
   VbbHcc_algo_H_dR_stack_4->SetBinError(28,4.226319);
   VbbHcc_algo_H_dR_stack_4->SetBinError(29,4.354518);
   VbbHcc_algo_H_dR_stack_4->SetBinError(30,3.766509);
   VbbHcc_algo_H_dR_stack_4->SetBinError(31,2.959198);
   VbbHcc_algo_H_dR_stack_4->SetEntries(15848);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_H_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_4->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_4,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_5 = new TH1D("VbbHcc_algo_H_dR_stack_5","",30,0,6);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(2,0.07769939);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(3,74.58903);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(4,90.66672);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(5,96.20484);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(6,135.3652);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(7,72.20824);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(8,54.68744);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(9,64.62909);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(10,56.33191);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(11,48.05991);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(12,62.36904);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(13,68.78201);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(14,54.82521);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(15,74.59607);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(16,47.54074);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(17,48.57349);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(18,48.08985);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(19,34.30108);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(20,52.32853);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(21,49.81306);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(22,35.73723);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(23,26.95298);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(24,22.61599);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(25,26.15864);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(26,12.59325);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(27,17.396);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(28,21.48354);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(29,10.67173);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(30,3.360036);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(31,2.633744);
   VbbHcc_algo_H_dR_stack_5->SetBinError(2,0.07769939);
   VbbHcc_algo_H_dR_stack_5->SetBinError(3,8.734028);
   VbbHcc_algo_H_dR_stack_5->SetBinError(4,8.497233);
   VbbHcc_algo_H_dR_stack_5->SetBinError(5,16.39838);
   VbbHcc_algo_H_dR_stack_5->SetBinError(6,24.33402);
   VbbHcc_algo_H_dR_stack_5->SetBinError(7,12.52982);
   VbbHcc_algo_H_dR_stack_5->SetBinError(8,8.499053);
   VbbHcc_algo_H_dR_stack_5->SetBinError(9,12.6416);
   VbbHcc_algo_H_dR_stack_5->SetBinError(10,8.501884);
   VbbHcc_algo_H_dR_stack_5->SetBinError(11,8.865353);
   VbbHcc_algo_H_dR_stack_5->SetBinError(12,10.69914);
   VbbHcc_algo_H_dR_stack_5->SetBinError(13,11.51157);
   VbbHcc_algo_H_dR_stack_5->SetBinError(14,8.280702);
   VbbHcc_algo_H_dR_stack_5->SetBinError(15,12.48639);
   VbbHcc_algo_H_dR_stack_5->SetBinError(16,8.330151);
   VbbHcc_algo_H_dR_stack_5->SetBinError(17,9.928272);
   VbbHcc_algo_H_dR_stack_5->SetBinError(18,7.974936);
   VbbHcc_algo_H_dR_stack_5->SetBinError(19,4.434542);
   VbbHcc_algo_H_dR_stack_5->SetBinError(20,11.38325);
   VbbHcc_algo_H_dR_stack_5->SetBinError(21,10.19699);
   VbbHcc_algo_H_dR_stack_5->SetBinError(22,4.852336);
   VbbHcc_algo_H_dR_stack_5->SetBinError(23,4.122744);
   VbbHcc_algo_H_dR_stack_5->SetBinError(24,3.112843);
   VbbHcc_algo_H_dR_stack_5->SetBinError(25,9.167086);
   VbbHcc_algo_H_dR_stack_5->SetBinError(26,2.735316);
   VbbHcc_algo_H_dR_stack_5->SetBinError(27,8.865569);
   VbbHcc_algo_H_dR_stack_5->SetBinError(28,10.00266);
   VbbHcc_algo_H_dR_stack_5->SetBinError(29,2.54604);
   VbbHcc_algo_H_dR_stack_5->SetBinError(30,1.169722);
   VbbHcc_algo_H_dR_stack_5->SetBinError(31,1.147909);
   VbbHcc_algo_H_dR_stack_5->SetEntries(9338);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_H_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_5->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_5,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_6 = new TH1D("VbbHcc_algo_H_dR_stack_6","",30,0,6);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(3,0.6315644);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(4,0.447545);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(5,0.2062261);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(6,0.3614694);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(7,0.09701335);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(8,0.3197901);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(9,0.2648882);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(10,0.3508782);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(12,0.09021234);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(13,0.2562973);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(14,0.1790498);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(15,0.3636143);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(16,0.2720823);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(17,0.2701499);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(18,0.08913754);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(19,0.1708894);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(20,0.08867616);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(21,0.09013566);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(22,0.182303);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(23,0.1741503);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(26,0.08949604);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(28,0.09139225);
   VbbHcc_algo_H_dR_stack_6->SetBinError(3,0.2387907);
   VbbHcc_algo_H_dR_stack_6->SetBinError(4,0.2003638);
   VbbHcc_algo_H_dR_stack_6->SetBinError(5,0.145824);
   VbbHcc_algo_H_dR_stack_6->SetBinError(6,0.1807901);
   VbbHcc_algo_H_dR_stack_6->SetBinError(7,0.09701335);
   VbbHcc_algo_H_dR_stack_6->SetBinError(8,0.1631289);
   VbbHcc_algo_H_dR_stack_6->SetBinError(9,0.1530793);
   VbbHcc_algo_H_dR_stack_6->SetBinError(10,0.1781352);
   VbbHcc_algo_H_dR_stack_6->SetBinError(12,0.09021234);
   VbbHcc_algo_H_dR_stack_6->SetBinError(13,0.1499927);
   VbbHcc_algo_H_dR_stack_6->SetBinError(14,0.1270241);
   VbbHcc_algo_H_dR_stack_6->SetBinError(15,0.1818429);
   VbbHcc_algo_H_dR_stack_6->SetBinError(16,0.1572031);
   VbbHcc_algo_H_dR_stack_6->SetBinError(17,0.156111);
   VbbHcc_algo_H_dR_stack_6->SetBinError(18,0.08913754);
   VbbHcc_algo_H_dR_stack_6->SetBinError(19,0.1214643);
   VbbHcc_algo_H_dR_stack_6->SetBinError(20,0.08867616);
   VbbHcc_algo_H_dR_stack_6->SetBinError(21,0.09013566);
   VbbHcc_algo_H_dR_stack_6->SetBinError(22,0.1289146);
   VbbHcc_algo_H_dR_stack_6->SetBinError(23,0.1232941);
   VbbHcc_algo_H_dR_stack_6->SetBinError(26,0.08949604);
   VbbHcc_algo_H_dR_stack_6->SetBinError(28,0.09139225);
   VbbHcc_algo_H_dR_stack_6->SetEntries(57);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_6->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_6,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_7 = new TH1D("VbbHcc_algo_H_dR_stack_7","",30,0,6);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(3,4.550135);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(4,5.805654);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(5,4.072544);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(6,2.29863);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(7,1.688814);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(8,1.477381);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(9,0.399843);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(10,0.1447908);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(11,1.016049);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(12,0.9066534);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(13,0.8657057);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(14,0.7151272);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(15,0.8681541);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(16,0.6784022);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(17,0.4934242);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(18,0.2703422);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(19,0.5684445);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(20,0.2822749);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(21,0.3453101);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(22,0.3171918);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(23,0.3400972);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(24,0.3589284);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(25,0.481536);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(26,0.2017788);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(27,0.3512929);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(28,0.3526084);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(29,0.4839979);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(30,0.3468042);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(31,0.1987961);
   VbbHcc_algo_H_dR_stack_7->SetBinError(3,0.5580494);
   VbbHcc_algo_H_dR_stack_7->SetBinError(4,0.6322195);
   VbbHcc_algo_H_dR_stack_7->SetBinError(5,0.5243068);
   VbbHcc_algo_H_dR_stack_7->SetBinError(6,0.4017838);
   VbbHcc_algo_H_dR_stack_7->SetBinError(7,0.3357608);
   VbbHcc_algo_H_dR_stack_7->SetBinError(8,0.323101);
   VbbHcc_algo_H_dR_stack_7->SetBinError(9,0.1636837);
   VbbHcc_algo_H_dR_stack_7->SetBinError(10,0.102419);
   VbbHcc_algo_H_dR_stack_7->SetBinError(11,0.2615684);
   VbbHcc_algo_H_dR_stack_7->SetBinError(12,0.2449978);
   VbbHcc_algo_H_dR_stack_7->SetBinError(13,0.2446885);
   VbbHcc_algo_H_dR_stack_7->SetBinError(14,0.2168341);
   VbbHcc_algo_H_dR_stack_7->SetBinError(15,0.2421513);
   VbbHcc_algo_H_dR_stack_7->SetBinError(16,0.2150902);
   VbbHcc_algo_H_dR_stack_7->SetBinError(17,0.1867309);
   VbbHcc_algo_H_dR_stack_7->SetBinError(18,0.1351978);
   VbbHcc_algo_H_dR_stack_7->SetBinError(19,0.1926755);
   VbbHcc_algo_H_dR_stack_7->SetBinError(20,0.1413088);
   VbbHcc_algo_H_dR_stack_7->SetBinError(21,0.1545825);
   VbbHcc_algo_H_dR_stack_7->SetBinError(22,0.143608);
   VbbHcc_algo_H_dR_stack_7->SetBinError(23,0.1522075);
   VbbHcc_algo_H_dR_stack_7->SetBinError(24,0.1606303);
   VbbHcc_algo_H_dR_stack_7->SetBinError(25,0.1824057);
   VbbHcc_algo_H_dR_stack_7->SetBinError(26,0.1164998);
   VbbHcc_algo_H_dR_stack_7->SetBinError(27,0.1573575);
   VbbHcc_algo_H_dR_stack_7->SetBinError(28,0.1578171);
   VbbHcc_algo_H_dR_stack_7->SetBinError(29,0.1833804);
   VbbHcc_algo_H_dR_stack_7->SetBinError(30,0.1554527);
   VbbHcc_algo_H_dR_stack_7->SetBinError(31,0.1147834);
   VbbHcc_algo_H_dR_stack_7->SetEntries(458);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_7->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_7,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_8 = new TH1D("VbbHcc_algo_H_dR_stack_8","",30,0,6);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(3,3.236494);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(4,3.606635);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(5,4.526842);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(6,4.458276);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(7,1.397646);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(8,1.418154);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(9,1.052251);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(10,0.7737065);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(12,1.175807);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(13,0.7664652);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(14,0.5713149);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(15,1.206848);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(16,1.123255);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(17,0.1850475);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(18,0.5493636);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(19,0.3891429);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(20,0.1994381);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(21,0.2155588);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(22,0.3949103);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(23,0.1885333);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(24,0.1944687);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(25,0.3809305);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(26,0.3780262);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(27,0.1963909);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(28,0.7896425);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(29,0.1979351);
   VbbHcc_algo_H_dR_stack_8->SetBinError(3,0.7770815);
   VbbHcc_algo_H_dR_stack_8->SetBinError(4,0.8354793);
   VbbHcc_algo_H_dR_stack_8->SetBinError(5,0.9291308);
   VbbHcc_algo_H_dR_stack_8->SetBinError(6,0.9384241);
   VbbHcc_algo_H_dR_stack_8->SetBinError(7,0.528885);
   VbbHcc_algo_H_dR_stack_8->SetBinError(8,0.5054079);
   VbbHcc_algo_H_dR_stack_8->SetBinError(9,0.4554008);
   VbbHcc_algo_H_dR_stack_8->SetBinError(10,0.3871178);
   VbbHcc_algo_H_dR_stack_8->SetBinError(12,0.4812435);
   VbbHcc_algo_H_dR_stack_8->SetBinError(13,0.3841095);
   VbbHcc_algo_H_dR_stack_8->SetBinError(14,0.3298864);
   VbbHcc_algo_H_dR_stack_8->SetBinError(15,0.493247);
   VbbHcc_algo_H_dR_stack_8->SetBinError(16,0.4588653);
   VbbHcc_algo_H_dR_stack_8->SetBinError(17,0.1850475);
   VbbHcc_algo_H_dR_stack_8->SetBinError(18,0.3174419);
   VbbHcc_algo_H_dR_stack_8->SetBinError(19,0.2755639);
   VbbHcc_algo_H_dR_stack_8->SetBinError(20,0.1994381);
   VbbHcc_algo_H_dR_stack_8->SetBinError(21,0.2155588);
   VbbHcc_algo_H_dR_stack_8->SetBinError(22,0.2794466);
   VbbHcc_algo_H_dR_stack_8->SetBinError(23,0.1885333);
   VbbHcc_algo_H_dR_stack_8->SetBinError(24,0.1944687);
   VbbHcc_algo_H_dR_stack_8->SetBinError(25,0.2693724);
   VbbHcc_algo_H_dR_stack_8->SetBinError(26,0.2673058);
   VbbHcc_algo_H_dR_stack_8->SetBinError(27,0.1963909);
   VbbHcc_algo_H_dR_stack_8->SetBinError(28,0.3956363);
   VbbHcc_algo_H_dR_stack_8->SetBinError(29,0.1979351);
   VbbHcc_algo_H_dR_stack_8->SetEntries(156);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_8->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_8,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_9 = new TH1D("VbbHcc_algo_H_dR_stack_9","",30,0,6);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(2,0.002549);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(3,1.764719);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(4,2.257291);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(5,1.809936);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(6,1.35861);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(7,0.7949839);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(8,0.563032);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(9,0.448469);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(10,0.4169905);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(11,0.4299616);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(12,0.4377778);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(13,0.4359318);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(14,0.401648);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(15,0.3922287);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(16,0.2986014);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(17,0.3096957);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(18,0.3009068);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(19,0.2916395);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(20,0.2853227);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(21,0.2592828);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(22,0.2241114);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(23,0.1568123);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(24,0.1725849);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(25,0.1785268);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(26,0.1931311);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(27,0.2159851);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(28,0.2463939);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(29,0.2008578);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(30,0.1178166);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(31,0.05686224);
   VbbHcc_algo_H_dR_stack_9->SetBinError(2,0.001844666);
   VbbHcc_algo_H_dR_stack_9->SetBinError(3,0.05229142);
   VbbHcc_algo_H_dR_stack_9->SetBinError(4,0.05966379);
   VbbHcc_algo_H_dR_stack_9->SetBinError(5,0.05302533);
   VbbHcc_algo_H_dR_stack_9->SetBinError(6,0.04590419);
   VbbHcc_algo_H_dR_stack_9->SetBinError(7,0.03494814);
   VbbHcc_algo_H_dR_stack_9->SetBinError(8,0.02896205);
   VbbHcc_algo_H_dR_stack_9->SetBinError(9,0.02595324);
   VbbHcc_algo_H_dR_stack_9->SetBinError(10,0.02474839);
   VbbHcc_algo_H_dR_stack_9->SetBinError(11,0.02539712);
   VbbHcc_algo_H_dR_stack_9->SetBinError(12,0.02536075);
   VbbHcc_algo_H_dR_stack_9->SetBinError(13,0.02548659);
   VbbHcc_algo_H_dR_stack_9->SetBinError(14,0.02451316);
   VbbHcc_algo_H_dR_stack_9->SetBinError(15,0.02410974);
   VbbHcc_algo_H_dR_stack_9->SetBinError(16,0.02099116);
   VbbHcc_algo_H_dR_stack_9->SetBinError(17,0.02134733);
   VbbHcc_algo_H_dR_stack_9->SetBinError(18,0.02101867);
   VbbHcc_algo_H_dR_stack_9->SetBinError(19,0.02081811);
   VbbHcc_algo_H_dR_stack_9->SetBinError(20,0.02064153);
   VbbHcc_algo_H_dR_stack_9->SetBinError(21,0.01962214);
   VbbHcc_algo_H_dR_stack_9->SetBinError(22,0.01846876);
   VbbHcc_algo_H_dR_stack_9->SetBinError(23,0.01547708);
   VbbHcc_algo_H_dR_stack_9->SetBinError(24,0.01603751);
   VbbHcc_algo_H_dR_stack_9->SetBinError(25,0.01632468);
   VbbHcc_algo_H_dR_stack_9->SetBinError(26,0.01707903);
   VbbHcc_algo_H_dR_stack_9->SetBinError(27,0.01798709);
   VbbHcc_algo_H_dR_stack_9->SetBinError(28,0.01936227);
   VbbHcc_algo_H_dR_stack_9->SetBinError(29,0.0173498);
   VbbHcc_algo_H_dR_stack_9->SetBinError(30,0.01339669);
   VbbHcc_algo_H_dR_stack_9->SetBinError(31,0.009326876);
   VbbHcc_algo_H_dR_stack_9->SetEntries(10635);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_H_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_9->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_9,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_10 = new TH1D("VbbHcc_algo_H_dR_stack_10","",30,0,6);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(3,0.3342161);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(4,0.6638169);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(5,0.7002898);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(6,0.5532723);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(7,0.3695664);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(8,0.2315373);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(9,0.1911663);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(10,0.1834397);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(11,0.1972574);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(12,0.2298555);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(13,0.2261377);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(14,0.2245436);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(15,0.2034396);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(16,0.17155);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(17,0.1733406);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(18,0.1534043);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(19,0.1808544);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(20,0.1627189);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(21,0.1529917);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(22,0.1216246);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(23,0.1072878);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(24,0.09234375);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(25,0.08120978);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(26,0.08025746);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(27,0.07491492);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(28,0.07843046);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(29,0.07158428);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(30,0.03752476);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(31,0.02498738);
   VbbHcc_algo_H_dR_stack_10->SetBinError(3,0.01131143);
   VbbHcc_algo_H_dR_stack_10->SetBinError(4,0.01595111);
   VbbHcc_algo_H_dR_stack_10->SetBinError(5,0.01644039);
   VbbHcc_algo_H_dR_stack_10->SetBinError(6,0.01462578);
   VbbHcc_algo_H_dR_stack_10->SetBinError(7,0.01193491);
   VbbHcc_algo_H_dR_stack_10->SetBinError(8,0.009446592);
   VbbHcc_algo_H_dR_stack_10->SetBinError(9,0.008523657);
   VbbHcc_algo_H_dR_stack_10->SetBinError(10,0.008375461);
   VbbHcc_algo_H_dR_stack_10->SetBinError(11,0.008685236);
   VbbHcc_algo_H_dR_stack_10->SetBinError(12,0.009344548);
   VbbHcc_algo_H_dR_stack_10->SetBinError(13,0.009277965);
   VbbHcc_algo_H_dR_stack_10->SetBinError(14,0.009247046);
   VbbHcc_algo_H_dR_stack_10->SetBinError(15,0.008802831);
   VbbHcc_algo_H_dR_stack_10->SetBinError(16,0.008081087);
   VbbHcc_algo_H_dR_stack_10->SetBinError(17,0.008132534);
   VbbHcc_algo_H_dR_stack_10->SetBinError(18,0.007645955);
   VbbHcc_algo_H_dR_stack_10->SetBinError(19,0.008296709);
   VbbHcc_algo_H_dR_stack_10->SetBinError(20,0.007864243);
   VbbHcc_algo_H_dR_stack_10->SetBinError(21,0.007639333);
   VbbHcc_algo_H_dR_stack_10->SetBinError(22,0.006812704);
   VbbHcc_algo_H_dR_stack_10->SetBinError(23,0.006357947);
   VbbHcc_algo_H_dR_stack_10->SetBinError(24,0.005916117);
   VbbHcc_algo_H_dR_stack_10->SetBinError(25,0.005536551);
   VbbHcc_algo_H_dR_stack_10->SetBinError(26,0.005524219);
   VbbHcc_algo_H_dR_stack_10->SetBinError(27,0.005350257);
   VbbHcc_algo_H_dR_stack_10->SetBinError(28,0.005488408);
   VbbHcc_algo_H_dR_stack_10->SetBinError(29,0.00525026);
   VbbHcc_algo_H_dR_stack_10->SetBinError(30,0.003795922);
   VbbHcc_algo_H_dR_stack_10->SetBinError(31,0.003086474);
   VbbHcc_algo_H_dR_stack_10->SetEntries(16167);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_H_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_10->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_10,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_11 = new TH1D("VbbHcc_algo_H_dR_stack_11","",30,0,6);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(3,0.01494518);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(4,0.03221097);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(5,0.1163974);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(6,0.08470807);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(7,0.06959311);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(8,0.07378926);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(9,0.06068051);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(10,0.008705176);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(11,0.01145052);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(12,0.009165627);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(13,0.01294763);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(14,0.004614222);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(15,0.001272995);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(16,0.006174961);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(17,0.003212378);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(18,0.009463252);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(19,0.005771868);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(21,0.009040846);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(23,0.008593901);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(24,0.01527281);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(25,0.01202114);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(26,0.01220612);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(27,0.0144749);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(28,0.01549103);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(29,0.01696088);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(31,0.006105571);
   VbbHcc_algo_H_dR_stack_11->SetBinError(3,0.00669341);
   VbbHcc_algo_H_dR_stack_11->SetBinError(4,0.009769855);
   VbbHcc_algo_H_dR_stack_11->SetBinError(5,0.01849459);
   VbbHcc_algo_H_dR_stack_11->SetBinError(6,0.01554677);
   VbbHcc_algo_H_dR_stack_11->SetBinError(7,0.01499829);
   VbbHcc_algo_H_dR_stack_11->SetBinError(8,0.01472192);
   VbbHcc_algo_H_dR_stack_11->SetBinError(9,0.0133593);
   VbbHcc_algo_H_dR_stack_11->SetBinError(10,0.005027516);
   VbbHcc_algo_H_dR_stack_11->SetBinError(11,0.005731529);
   VbbHcc_algo_H_dR_stack_11->SetBinError(12,0.005300547);
   VbbHcc_algo_H_dR_stack_11->SetBinError(13,0.006473988);
   VbbHcc_algo_H_dR_stack_11->SetBinError(14,0.003518317);
   VbbHcc_algo_H_dR_stack_11->SetBinError(15,0.001272995);
   VbbHcc_algo_H_dR_stack_11->SetBinError(16,0.004377011);
   VbbHcc_algo_H_dR_stack_11->SetBinError(17,0.003212378);
   VbbHcc_algo_H_dR_stack_11->SetBinError(18,0.00546893);
   VbbHcc_algo_H_dR_stack_11->SetBinError(19,0.004119198);
   VbbHcc_algo_H_dR_stack_11->SetBinError(21,0.005219798);
   VbbHcc_algo_H_dR_stack_11->SetBinError(23,0.004962057);
   VbbHcc_algo_H_dR_stack_11->SetBinError(24,0.006834802);
   VbbHcc_algo_H_dR_stack_11->SetBinError(25,0.00601619);
   VbbHcc_algo_H_dR_stack_11->SetBinError(26,0.006111415);
   VbbHcc_algo_H_dR_stack_11->SetBinError(27,0.006474052);
   VbbHcc_algo_H_dR_stack_11->SetBinError(28,0.006752492);
   VbbHcc_algo_H_dR_stack_11->SetBinError(29,0.00693823);
   VbbHcc_algo_H_dR_stack_11->SetBinError(31,0.004324661);
   VbbHcc_algo_H_dR_stack_11->SetEntries(222);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_11->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_11,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_12 = new TH1D("VbbHcc_algo_H_dR_stack_12","",30,0,6);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(3,0.003367429);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(4,0.009758669);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(5,0.0243452);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(6,0.03431274);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(7,0.04427454);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(8,0.0290784);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(9,0.01345616);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(10,0.007622849);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(11,0.006162535);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(12,0.003927143);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(13,0.003985445);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(14,0.004263139);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(15,0.002617576);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(16,0.002003901);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(17,0.002331764);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(18,0.0025728);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(19,0.0008551098);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(20,0.002662829);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(21,0.001207564);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(22,0.002820308);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(23,0.001967571);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(24,0.004084969);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(25,0.005617275);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(26,0.008162363);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(27,0.004796079);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(28,0.003871036);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(29,0.001757688);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(30,0.0007967958);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(31,0.001211703);
   VbbHcc_algo_H_dR_stack_12->SetBinError(3,0.001124388);
   VbbHcc_algo_H_dR_stack_12->SetBinError(4,0.001916354);
   VbbHcc_algo_H_dR_stack_12->SetBinError(5,0.003064155);
   VbbHcc_algo_H_dR_stack_12->SetBinError(6,0.003635295);
   VbbHcc_algo_H_dR_stack_12->SetBinError(7,0.00414075);
   VbbHcc_algo_H_dR_stack_12->SetBinError(8,0.003332238);
   VbbHcc_algo_H_dR_stack_12->SetBinError(9,0.002267232);
   VbbHcc_algo_H_dR_stack_12->SetBinError(10,0.001709702);
   VbbHcc_algo_H_dR_stack_12->SetBinError(11,0.001545858);
   VbbHcc_algo_H_dR_stack_12->SetBinError(12,0.00124633);
   VbbHcc_algo_H_dR_stack_12->SetBinError(13,0.001262415);
   VbbHcc_algo_H_dR_stack_12->SetBinError(14,0.001288819);
   VbbHcc_algo_H_dR_stack_12->SetBinError(15,0.001000602);
   VbbHcc_algo_H_dR_stack_12->SetBinError(16,0.0008655863);
   VbbHcc_algo_H_dR_stack_12->SetBinError(17,0.000954506);
   VbbHcc_algo_H_dR_stack_12->SetBinError(18,0.0009753707);
   VbbHcc_algo_H_dR_stack_12->SetBinError(19,0.0005537612);
   VbbHcc_algo_H_dR_stack_12->SetBinError(20,0.001006649);
   VbbHcc_algo_H_dR_stack_12->SetBinError(21,0.0006674261);
   VbbHcc_algo_H_dR_stack_12->SetBinError(22,0.001067214);
   VbbHcc_algo_H_dR_stack_12->SetBinError(23,0.0008812856);
   VbbHcc_algo_H_dR_stack_12->SetBinError(24,0.001240935);
   VbbHcc_algo_H_dR_stack_12->SetBinError(25,0.001478788);
   VbbHcc_algo_H_dR_stack_12->SetBinError(26,0.001751199);
   VbbHcc_algo_H_dR_stack_12->SetBinError(27,0.001355791);
   VbbHcc_algo_H_dR_stack_12->SetBinError(28,0.001225305);
   VbbHcc_algo_H_dR_stack_12->SetBinError(29,0.0007943862);
   VbbHcc_algo_H_dR_stack_12->SetBinError(30,0.0005646095);
   VbbHcc_algo_H_dR_stack_12->SetBinError(31,0.0007006558);
   VbbHcc_algo_H_dR_stack_12->SetEntries(620);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_12->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_H_dR__233 = new TH1D("VbbHcc_algo_H_dR__233","",30,0,6);
   VbbHcc_algo_H_dR__233->SetBinContent(2,4);
   VbbHcc_algo_H_dR__233->SetBinContent(3,4952);
   VbbHcc_algo_H_dR__233->SetBinContent(4,5524);
   VbbHcc_algo_H_dR__233->SetBinContent(5,4276);
   VbbHcc_algo_H_dR__233->SetBinContent(6,3938);
   VbbHcc_algo_H_dR__233->SetBinContent(7,3894);
   VbbHcc_algo_H_dR__233->SetBinContent(8,3998);
   VbbHcc_algo_H_dR__233->SetBinContent(9,4137);
   VbbHcc_algo_H_dR__233->SetBinContent(10,4407);
   VbbHcc_algo_H_dR__233->SetBinContent(11,4945);
   VbbHcc_algo_H_dR__233->SetBinContent(12,5292);
   VbbHcc_algo_H_dR__233->SetBinContent(13,5639);
   VbbHcc_algo_H_dR__233->SetBinContent(14,5874);
   VbbHcc_algo_H_dR__233->SetBinContent(15,6054);
   VbbHcc_algo_H_dR__233->SetBinContent(16,5942);
   VbbHcc_algo_H_dR__233->SetBinContent(17,5662);
   VbbHcc_algo_H_dR__233->SetBinContent(18,5324);
   VbbHcc_algo_H_dR__233->SetBinContent(19,5011);
   VbbHcc_algo_H_dR__233->SetBinContent(20,4536);
   VbbHcc_algo_H_dR__233->SetBinContent(21,3786);
   VbbHcc_algo_H_dR__233->SetBinContent(22,3033);
   VbbHcc_algo_H_dR__233->SetBinContent(23,2535);
   VbbHcc_algo_H_dR__233->SetBinContent(24,2038);
   VbbHcc_algo_H_dR__233->SetBinContent(25,1639);
   VbbHcc_algo_H_dR__233->SetBinContent(26,1239);
   VbbHcc_algo_H_dR__233->SetBinContent(27,1059);
   VbbHcc_algo_H_dR__233->SetBinContent(28,801);
   VbbHcc_algo_H_dR__233->SetBinContent(29,701);
   VbbHcc_algo_H_dR__233->SetBinContent(30,464);
   VbbHcc_algo_H_dR__233->SetBinContent(31,329);
   VbbHcc_algo_H_dR__233->SetEntries(107062);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR__233->SetLineColor(ci);
   VbbHcc_algo_H_dR__233->SetLineWidth(2);
   VbbHcc_algo_H_dR__233->SetMarkerStyle(20);
   VbbHcc_algo_H_dR__233->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR__233->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR__233->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__233->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR__233->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR__233->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__233->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__233->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR__233->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR__233->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR__233->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__233->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__233->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR__233->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR__233->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__233->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_dR_fx1233[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_fy1233[30] = {
   0,
   0.2459353,
   24829.58,
   25072.55,
   24914.88,
   17188.33,
   18232.07,
   24722.04,
   16843.95,
   21100.71,
   26012.65,
   42071.91,
   22275.27,
   19796.95,
   19884.76,
   17738.25,
   18793.54,
   15535.09,
   15596.21,
   15054.26,
   11949.98,
   11052.56,
   8326.348,
   7626.335,
   6437.465,
   6343.895,
   5275.081,
   5358.123,
   3106.897,
   1698.981};
   Double_t Graph_from_VbbHcc_algo_H_dR_fex1233[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_algo_H_dR_fey1233[30] = {
   0,
   0.1250032,
   2619.327,
   2549.954,
   3685.364,
   2258.65,
   2786.597,
   3960.423,
   1804.356,
   3024.28,
   4524.685,
   22529.85,
   3071.937,
   2765.19,
   2647.125,
   1721.768,
   2933.314,
   1520.212,
   2094.149,
   2100.983,
   1396.921,
   1429.995,
   1182.355,
   1191.216,
   1063.328,
   1133.473,
   1045.945,
   1764.12,
   772.9371,
   502.354};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_H_dR_fx1233,Graph_from_VbbHcc_algo_H_dR_fy1233,Graph_from_VbbHcc_algo_H_dR_fex1233,Graph_from_VbbHcc_algo_H_dR_fey1233);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR1233 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR1233","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->SetMaximum(71061.94);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_dR1233->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_dR1233);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_H_dR","MC unc. (stat.)","fl");

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
   H_dR_algo_16->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9499975,-0.2774193,6.525,1.658065);
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
   
   TH1D *data_mc_ratio__234 = new TH1D("data_mc_ratio__234","",30,0,6);
   data_mc_ratio__234->SetBinContent(2,16.26444);
   data_mc_ratio__234->SetBinContent(3,0.1994396);
   data_mc_ratio__234->SetBinContent(4,0.2203206);
   data_mc_ratio__234->SetBinContent(5,0.1716243);
   data_mc_ratio__234->SetBinContent(6,0.229109);
   data_mc_ratio__234->SetBinContent(7,0.2135797);
   data_mc_ratio__234->SetBinContent(8,0.1617181);
   data_mc_ratio__234->SetBinContent(9,0.2456075);
   data_mc_ratio__234->SetBinContent(10,0.2088556);
   data_mc_ratio__234->SetBinContent(11,0.1900998);
   data_mc_ratio__234->SetBinContent(12,0.1257846);
   data_mc_ratio__234->SetBinContent(13,0.2531507);
   data_mc_ratio__234->SetBinContent(14,0.2967124);
   data_mc_ratio__234->SetBinContent(15,0.3044543);
   data_mc_ratio__234->SetBinContent(16,0.3349824);
   data_mc_ratio__234->SetBinContent(17,0.3012737);
   data_mc_ratio__234->SetBinContent(18,0.342708);
   data_mc_ratio__234->SetBinContent(19,0.321296);
   data_mc_ratio__234->SetBinContent(20,0.3013102);
   data_mc_ratio__234->SetBinContent(21,0.3168207);
   data_mc_ratio__234->SetBinContent(22,0.2744162);
   data_mc_ratio__234->SetBinContent(23,0.3044552);
   data_mc_ratio__234->SetBinContent(24,0.2672319);
   data_mc_ratio__234->SetBinContent(25,0.2546033);
   data_mc_ratio__234->SetBinContent(26,0.1953059);
   data_mc_ratio__234->SetBinContent(27,0.2007552);
   data_mc_ratio__234->SetBinContent(28,0.1494927);
   data_mc_ratio__234->SetBinContent(29,0.225627);
   data_mc_ratio__234->SetBinContent(30,0.2731049);
   data_mc_ratio__234->SetBinContent(31,0.4249284);
   data_mc_ratio__234->SetBinError(2,8.132221);
   data_mc_ratio__234->SetBinError(3,0.002834138);
   data_mc_ratio__234->SetBinError(4,0.002964342);
   data_mc_ratio__234->SetBinError(5,0.002624581);
   data_mc_ratio__234->SetBinError(6,0.003650936);
   data_mc_ratio__234->SetBinError(7,0.003422645);
   data_mc_ratio__234->SetBinError(8,0.002557626);
   data_mc_ratio__234->SetBinError(9,0.003818554);
   data_mc_ratio__234->SetBinError(10,0.003146115);
   data_mc_ratio__234->SetBinError(11,0.002703327);
   data_mc_ratio__234->SetBinError(12,0.00172909);
   data_mc_ratio__234->SetBinError(13,0.00337115);
   data_mc_ratio__234->SetBinError(14,0.003871406);
   data_mc_ratio__234->SetBinError(15,0.003912919);
   data_mc_ratio__234->SetBinError(16,0.004345659);
   data_mc_ratio__234->SetBinError(17,0.004003836);
   data_mc_ratio__234->SetBinError(18,0.004696834);
   data_mc_ratio__234->SetBinError(19,0.004538821);
   data_mc_ratio__234->SetBinError(20,0.004473807);
   data_mc_ratio__234->SetBinError(21,0.005149005);
   data_mc_ratio__234->SetBinError(22,0.004982801);
   data_mc_ratio__234->SetBinError(23,0.006046923);
   data_mc_ratio__234->SetBinError(24,0.005919516);
   data_mc_ratio__234->SetBinError(25,0.006288899);
   data_mc_ratio__234->SetBinError(26,0.005548552);
   data_mc_ratio__234->SetBinError(27,0.006169058);
   data_mc_ratio__234->SetBinError(28,0.005282063);
   data_mc_ratio__234->SetBinError(29,0.008521815);
   data_mc_ratio__234->SetBinError(30,0.01267858);
   data_mc_ratio__234->SetBinError(31,0.1687793);
   data_mc_ratio__234->SetMinimum(0.4);
   data_mc_ratio__234->SetMaximum(1.6);
   data_mc_ratio__234->SetEntries(3.98333);
   data_mc_ratio__234->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__234->SetLineColor(ci);
   data_mc_ratio__234->SetLineWidth(2);
   data_mc_ratio__234->SetMarkerStyle(20);
   data_mc_ratio__234->SetMarkerSize(1.2);
   data_mc_ratio__234->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__234->GetXaxis()->SetRange(1,31);
   data_mc_ratio__234->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__234->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__234->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__234->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__234->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__234->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__234->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__234->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__234->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__234->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__234->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__234->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__234->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__234->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__234->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__234->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__234->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1234[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1234[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1234[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1234[30] = {
   0,
   0.5082769,
   0.1054922,
   0.101703,
   0.1479182,
   0.1314061,
   0.1528404,
   0.1601981,
   0.1071219,
   0.143326,
   0.1739417,
   0.5355081,
   0.137908,
   0.1396776,
   0.1331233,
   0.09706528,
   0.156081,
   0.09785667,
   0.134273,
   0.1395607,
   0.1168974,
   0.1293814,
   0.1420017,
   0.1561977,
   0.165178,
   0.1786714,
   0.1982803,
   0.3292423,
   0.248781,
   0.2956796};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1234,Graph_from_mc_statistical_error_fy1234,Graph_from_mc_statistical_error_fex1234,Graph_from_mc_statistical_error_fey1234);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1234 = new TH1F("Graph_Graph_from_mc_statistical_error1234","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1234->SetMinimum(0.3573902);
   Graph_Graph_from_mc_statistical_error1234->SetMaximum(1.64261);
   Graph_Graph_from_mc_statistical_error1234->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1234->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1234->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1234->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1234->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1234->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1234->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1234->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1234->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1234->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1234->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1234->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1234->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1234->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1234->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1234->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1234);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_algo_16->cd();
   H_dR_algo_16->Modified();
   H_dR_algo_16->cd();
   H_dR_algo_16->SetSelected(H_dR_algo_16);
}
