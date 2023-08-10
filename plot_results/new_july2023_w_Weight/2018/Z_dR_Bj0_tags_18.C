void Z_dR_Bj0_tags_18()
{
//=========Macro generated from canvas: Z_dR_Bj0_tags_18/Z_dR_Bj0_tags_18
//=========  (Thu Aug 10 12:23:32 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_tags_18 = new TCanvas("Z_dR_Bj0_tags_18", "Z_dR_Bj0_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_tags_18->SetHighLightColor(2);
   Z_dR_Bj0_tags_18->Range(0,0,1,1);
   Z_dR_Bj0_tags_18->SetFillColor(0);
   Z_dR_Bj0_tags_18->SetFillStyle(4000);
   Z_dR_Bj0_tags_18->SetBorderMode(0);
   Z_dR_Bj0_tags_18->SetBorderSize(2);
   Z_dR_Bj0_tags_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_tags_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-111.8602,6.314516,111758.4);
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
   st->SetMaximum(95782.22);
   
   TH1F *st_stack_51 = new TH1F("st_stack_51","",30,0,6);
   st_stack_51->SetMinimum(0.01);
   st_stack_51->SetMaximum(100571.3);
   st_stack_51->SetDirectory(0);
   st_stack_51->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_51->SetLineColor(ci);
   st_stack_51->GetXaxis()->SetRange(1,30);
   st_stack_51->GetXaxis()->SetLabelFont(42);
   st_stack_51->GetXaxis()->SetLabelSize(0.035);
   st_stack_51->GetXaxis()->SetTitleSize(0.035);
   st_stack_51->GetXaxis()->SetTitleFont(42);
   st_stack_51->GetYaxis()->SetTitle("Events/0.2");
   st_stack_51->GetYaxis()->SetLabelFont(42);
   st_stack_51->GetYaxis()->SetLabelSize(0.05);
   st_stack_51->GetYaxis()->SetTitleSize(0.057);
   st_stack_51->GetYaxis()->SetTitleOffset(1.2);
   st_stack_51->GetYaxis()->SetTitleFont(42);
   st_stack_51->GetZaxis()->SetLabelFont(42);
   st_stack_51->GetZaxis()->SetLabelSize(0.035);
   st_stack_51->GetZaxis()->SetTitleSize(0.035);
   st_stack_51->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_51);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(1,5596.524);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(2,29739.77);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(3,30806.5);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(4,20346.52);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(5,20774.12);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(6,15837.53);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(7,14530.29);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(8,7603.985);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(9,8473.269);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(10,9208.268);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(11,8989.868);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(12,6349.352);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(13,6897.73);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(14,5235.919);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(15,4555.971);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(16,3570.568);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(17,3114.483);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(18,2139.614);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(19,3113.19);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(20,2126.076);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(21,1509.672);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(22,1318.409);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(23,989.6075);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(24,351.0274);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(25,336.331);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(26,539.3933);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(27,548.9109);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(28,904.5179);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(29,40.78213);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(30,41.76347);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(31,31.88759);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(1,495.5538);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(2,2193.627);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(3,3217.925);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(4,1890.854);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(5,2057.252);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(6,1756.618);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(7,2744.182);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(8,1098.365);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(9,1221.014);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(10,1375.89);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(11,1373.934);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(12,1087.324);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(13,1204.283);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(14,947.5758);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(15,865.0146);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(16,774.818);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(17,766.0764);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(18,426.1707);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(19,847.4091);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(20,659.4419);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(21,539.9748);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(22,536.3159);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(23,389.3115);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(24,89.7477);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(25,84.70759);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(26,374.4421);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(27,375.6564);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(28,527.655);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(29,32.22935);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(30,33.18002);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(31,31.57951);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetEntries(10038);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(1,29.4353);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(2,127.263);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(3,171.8778);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(4,149.291);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(5,120.5815);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(6,99.7308);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(7,85.71605);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(8,63.44089);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(9,60.9918);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(10,56.92407);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(11,46.88384);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(12,45.78625);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(13,35.92435);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(14,31.08743);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(15,30.11508);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(16,28.11241);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(17,17.80954);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(18,16.27125);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(19,15.57767);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(20,12.59894);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(21,9.475884);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(22,6.400482);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(23,5.726207);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(24,5.54201);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(25,2.985296);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(26,1.413768);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(27,2.509162);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(28,1.902637);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(29,0.8475278);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(30,0.4835651);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(31,0.24911);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(1,2.247457);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(2,4.501052);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(3,5.33845);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(4,4.964452);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(5,4.444348);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(6,4.066294);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(7,3.771862);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(8,3.133761);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(9,3.181643);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(10,3.073874);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(11,2.695925);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(12,2.801852);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(13,2.427179);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(14,2.191114);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(15,2.252697);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(16,2.104438);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(17,1.608387);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(18,1.708063);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(19,1.65888);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(20,1.477971);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(21,1.212102);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(22,0.9689546);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(23,0.9506298);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(24,1.044073);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(25,0.6412549);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(26,0.3727245);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(27,0.7032716);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(28,0.5850083);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(29,0.3212411);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(30,0.2899542);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(31,0.1114054);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetEntries(14154);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_3 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(1,387.3098);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(2,2246.969);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(3,3123.467);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(4,3005.999);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(5,2514.917);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(6,2033.077);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(7,1661.646);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(8,1404.126);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(9,1215.974);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(10,1068.923);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(11,968.7345);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(12,885.0578);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(13,809.5475);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(14,693.3634);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(15,603.6275);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(16,516.8588);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(17,425.0204);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(18,352.0933);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(19,284.9765);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(20,222.1703);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(21,179.4643);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(22,137.0826);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(23,108.0242);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(24,79.88161);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(25,58.84219);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(26,42.24007);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(27,27.68894);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(28,19.19481);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(29,13.1119);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(30,7.803119);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(31,15.91025);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(1,5.282804);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(2,12.72136);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(3,15.01655);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(4,14.73694);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(5,13.4841);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(6,12.11896);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(7,10.96142);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(8,10.07024);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(9,9.368753);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(10,8.791039);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(11,8.368288);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(12,8.006324);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(13,7.654494);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(14,7.080173);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(15,6.606781);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(16,6.115148);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(17,5.546952);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(18,5.048416);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(19,4.539155);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(20,4.003229);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(21,3.597341);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(22,3.138694);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(23,2.791484);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(24,2.399326);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(25,2.057951);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(26,1.748265);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(27,1.413915);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(28,1.164825);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(29,0.9700463);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(30,0.7466927);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(31,1.068492);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetEntries(352917);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_4 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(1,105.7564);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(2,450.8839);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(3,504.5106);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(4,379.2005);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(5,292.6344);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(6,223.0603);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(7,168.408);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(8,129.3202);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(9,139.5306);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(10,132.7223);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(11,117.0191);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(12,101.4985);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(13,88.01601);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(14,91.31802);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(15,67.97916);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(16,61.69599);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(17,47.4971);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(18,39.25052);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(19,31.59522);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(20,29.06281);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(21,21.99095);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(22,18.57489);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(23,8.567573);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(24,13.00148);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(25,9.590638);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(26,3.872332);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(27,4.377274);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(28,2.714165);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(29,1.025346);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(30,0.8401998);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(31,1.645366);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(1,4.234843);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(2,14.47043);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(3,16.45354);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(4,12.95101);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(5,12.41697);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(6,10.76226);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(7,9.052091);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(8,8.125478);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(9,9.458951);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(10,8.576732);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(11,9.056058);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(12,9.484242);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(13,7.500237);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(14,8.629454);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(15,4.436359);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(16,5.688723);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(17,3.688112);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(18,3.459819);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(19,3.179101);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(20,2.991364);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(21,2.627438);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(22,2.335185);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(23,1.254522);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(24,1.937245);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(25,1.594493);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(26,0.9195262);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(27,0.8259279);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(28,0.8420676);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(29,0.3277939);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(30,0.3005151);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(31,0.6324718);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetEntries(18490);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_5 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(1,20.46329);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(2,49.10873);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(3,56.44405);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(4,36.48499);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(5,27.95713);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(6,18.19247);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(7,12.4476);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(8,11.06298);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(9,11.2305);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(10,9.373509);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(11,5.102132);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(12,10.59509);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(13,8.009624);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(14,5.120462);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(15,10.24098);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(16,2.604373);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(17,4.730827);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(18,3.020252);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(19,3.439093);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(20,5.510463);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(21,2.838881);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(22,3.182999);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(23,0.06944348);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(24,0.4172866);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(25,0.7717575);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(26,1.419649);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(27,0.3257868);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(28,2.652536);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(29,0.3099974);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(30,0.0009154413);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(31,0.2527972);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(1,4.406063);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(2,4.162991);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(3,11.95333);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(4,5.873589);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(5,4.591278);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(6,3.358797);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(7,2.195673);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(8,2.456419);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(9,2.506883);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(10,2.368702);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(11,0.9348123);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(12,3.727452);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(13,2.385183);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(14,0.9150431);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(15,3.135695);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(16,0.6281969);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(17,0.9378357);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(18,0.7535983);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(19,0.9235888);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(20,2.974317);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(21,2.110373);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(22,2.108208);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(23,0.04817603);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(24,0.2072797);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(25,0.4362997);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(26,0.5949151);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(27,0.165639);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(28,2.106069);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(29,0.1847275);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(30,0.0009154413);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(31,0.1787546);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetEntries(2375);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_6 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(1,0.4520427);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(3,0.9040853);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(8,0.4520427);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(1,0.4520427);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(3,0.6392849);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(8,0.4520427);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetEntries(4);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_7 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(1,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(2,2.833593);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(3,2.479394);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(4,1.062597);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(5,1.062597);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(7,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(8,0.7083982);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(9,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(10,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(11,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(12,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(13,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(22,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(24,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(1,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(2,1.001826);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(3,0.9371228);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(4,0.6134909);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(5,0.6134909);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(7,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(8,0.5009132);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(9,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(10,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(11,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(12,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(13,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(22,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(24,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetEntries(32);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_8 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(1,2.794144);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(2,9.500088);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(3,8.382431);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(4,9.500088);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(5,4.47063);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(6,2.794144);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(7,3.632387);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(8,2.235315);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(9,3.073558);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(10,2.235315);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(11,2.514729);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(12,2.794144);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(13,2.514729);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(14,3.073558);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(15,1.676486);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(16,1.117657);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(18,0.5588287);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(19,0.5588287);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(20,0.2794144);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(23,0.2794144);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(25,0.2794144);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(1,0.8835858);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(2,1.629252);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(3,1.530415);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(4,1.629252);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(5,1.117657);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(6,0.8835858);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(7,1.007443);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(8,0.7903031);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(9,0.9267126);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(10,0.7903031);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(11,0.8382431);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(12,0.8835858);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(13,0.8382431);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(14,0.9267126);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(15,0.6844226);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(16,0.5588287);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(18,0.3951516);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(19,0.3951516);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(20,0.2794144);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(23,0.2794144);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(25,0.2794144);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetEntries(230);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_9 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(1,1.71662);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(2,8.487096);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(3,9.95228);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(4,7.693931);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(5,5.408152);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(6,4.130402);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(7,3.145231);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(8,2.80465);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(9,2.553215);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(10,2.505213);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(11,2.450355);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(12,2.541786);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(13,2.054915);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(14,1.684619);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(15,1.275464);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(16,1.060601);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(17,0.7680216);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(18,0.5211575);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(19,0.3565815);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(20,0.2811508);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(21,0.1988627);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(22,0.1851481);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(23,0.1394325);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(24,0.1211463);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(25,0.1120032);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(26,0.07085914);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(27,0.02971512);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(28,0.02514357);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(29,0.009143115);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(30,0.004571557);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(31,0.009143115);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(1,0.06264034);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(2,0.1392825);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(3,0.1508268);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(4,0.1326146);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(5,0.1111838);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(6,0.09716576);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(7,0.08478976);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(8,0.08006753);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(9,0.07639427);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(10,0.07567274);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(11,0.07483962);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(12,0.07622309);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(13,0.06853525);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(14,0.06205373);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(15,0.05399472);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(16,0.04923718);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(17,0.04189901);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(18,0.0345145);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(19,0.02854937);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(20,0.02535051);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(21,0.02132032);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(22,0.02057201);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(23,0.0178525);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(24,0.01664072);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(25,0.01600045);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(26,0.01272668);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(27,0.008241492);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(28,0.00758107);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(29,0.004571557);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(30,0.003232579);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(31,0.004571557);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetEntries(27254);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_10 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(1,0.6489706);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(2,3.608181);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(3,4.750752);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(4,3.960155);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(5,2.926344);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(6,2.089733);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(7,1.574023);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(8,1.324235);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(9,1.149742);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(10,1.138985);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(11,1.035007);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(12,0.9507479);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(13,0.8437813);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(14,0.6848253);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(15,0.5682975);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(16,0.4571478);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(17,0.3639255);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(18,0.2898257);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(19,0.2115429);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(20,0.1667245);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(21,0.1392359);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(22,0.1117472);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(23,0.09441746);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(24,0.05975788);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(25,0.04063536);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(26,0.02987894);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(27,0.02509831);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(28,0.008963682);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(29,0.005975788);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(30,0.001195158);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(31,0.002390315);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(1,0.01969292);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(2,0.04643461);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(3,0.05328179);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(4,0.04864673);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(5,0.04181771);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(6,0.03533809);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(7,0.03066925);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(8,0.02813067);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(9,0.02621185);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(10,0.02608895);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(11,0.02486962);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(12,0.02383583);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(13,0.02245497);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(14,0.02022961);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(15,0.01842831);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(16,0.01652821);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(17,0.01474701);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(18,0.01316031);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(19,0.01124338);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(20,0.009981534);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(21,0.009121645);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(22,0.008171768);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(23,0.007511449);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(24,0.005975788);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(25,0.004927761);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(26,0.00422552);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(27,0.003872753);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(28,0.002314413);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(29,0.00188971);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(30,0.0008451041);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(31,0.001195158);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetEntries(48968);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_11 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(1,0.01313895);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(2,0.03941684);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(3,0.03416126);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(4,0.0236501);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(5,0.007883368);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(6,0.007883368);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(7,0.002627789);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(8,0.005255579);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(9,0.005255579);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(10,0.005255579);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(12,0.005255579);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(15,0.002627789);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(16,0.002627789);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(17,0.007883368);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(18,0.005255579);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(1,0.005875916);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(2,0.01017738);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(3,0.009474629);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(4,0.007883368);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(5,0.004551465);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(6,0.004551465);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(7,0.002627789);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(8,0.003716255);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(9,0.003716255);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(10,0.003716255);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(12,0.003716255);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(15,0.002627789);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(16,0.002627789);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(17,0.004551465);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(18,0.003716255);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetEntries(64);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_12 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(1,0.002996568);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(2,0.02547083);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(3,0.01857872);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(4,0.009589018);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(5,0.006292793);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(6,0.002996568);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(7,0.002397254);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(8,0.003296225);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(9,0.002696911);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(10,0.002097598);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(11,0.001797941);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(12,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(13,0.001797941);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(14,0.001198627);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(15,0.0005993136);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(16,0.001198627);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(17,0.001198627);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(18,0.0008989704);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(19,0.0005993136);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(20,0.001198627);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(22,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(23,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(24,0.0008989704);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(25,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(27,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(1,0.000947598);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(2,0.002762699);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(3,0.0023595);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(4,0.001695115);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(5,0.0013732);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(6,0.000947598);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(7,0.0008475574);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(8,0.0009938492);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(9,0.0008989704);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(10,0.0007928174);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(11,0.0007340063);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(12,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(13,0.0007340063);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(14,0.0005993136);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(15,0.0004237787);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(16,0.0005993136);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(17,0.0005993136);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(18,0.0005190208);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(19,0.0004237787);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(20,0.0005993136);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(22,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(23,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(24,0.0005190208);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(25,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(27,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetEntries(298);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0__139 = new TH1D("VbbHcc_tags_Z_dR_Bj0__139","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(1,9422);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(2,42813);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(3,43102);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(4,34546);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(5,27612);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(6,22020);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(7,18094);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(8,15063);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(9,13256);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(10,11828);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(11,10726);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(12,10040);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(13,8917);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(14,8008);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(15,7033);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(16,6023);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(17,4922);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(18,4119);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(19,3484);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(20,2773);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(21,2361);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(22,1892);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(23,1555);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(24,1187);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(25,949);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(26,706);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(27,465);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(28,253);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(29,196);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(30,102);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(31,178);
   VbbHcc_tags_Z_dR_Bj0__139->SetEntries(313674);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0__139->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0__139->SetLineWidth(2);
   VbbHcc_tags_Z_dR_Bj0__139->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR_Bj0__139->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR_Bj0__139->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0__139->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__139->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__139->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__139->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__139->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__139->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__139->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__139->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0__139->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__139->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__139->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__139->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__139->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__139->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fx1101[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fy1101[30] = {
   6145.471,
   32638.49,
   34689.32,
   23939.74,
   23744.1,
   18220.62,
   16467.22,
   9219.469,
   9908.134,
   10482.45,
   10133.96,
   7398.936,
   7844.997,
   6062.252,
   5271.457,
   4182.479,
   3610.681,
   2551.625,
   3449.906,
   2396.147,
   1723.78,
   1484.302,
   1112.509,
   450.4058,
   408.9533,
   588.4399,
   583.8672,
   931.0162,
   56.09202,
   50.89703};
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fex1101[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fey1101[30] = {
   495.6259,
   2193.721,
   3218.029,
   1890.972,
   2057.344,
   1756.701,
   2744.222,
   1098.449,
   1221.094,
   1375.951,
   1373.992,
   1087.405,
   1204.336,
   947.645,
   865.0601,
   774.8664,
   766.1076,
   426.2189,
   847.4295,
   659.4692,
   539.9987,
   536.3353,
   389.3248,
   89.80768,
   84.7516,
   374.448,
   375.6606,
   527.6615,
   32.24774,
   33.19105};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_Z_dR_Bj0_fx1101,Graph_from_VbbHcc_tags_Z_dR_Bj0_fy1101,Graph_from_VbbHcc_tags_Z_dR_Bj0_fex1101,Graph_from_VbbHcc_tags_Z_dR_Bj0_fey1101);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->SetMinimum(15.93539);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->SetMaximum(41696.31);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_dR_Bj0","MC unc. (stat.)","fl");

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
   Z_dR_Bj0_tags_18->cd();
  
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
   
   TH1D *data_mc_ratio__140 = new TH1D("data_mc_ratio__140","",30,0,6);
   data_mc_ratio__140->SetBinContent(1,1.533162);
   data_mc_ratio__140->SetBinContent(2,1.311734);
   data_mc_ratio__140->SetBinContent(3,1.242515);
   data_mc_ratio__140->SetBinContent(4,1.44304);
   data_mc_ratio__140->SetBinContent(5,1.1629);
   data_mc_ratio__140->SetBinContent(6,1.208521);
   data_mc_ratio__140->SetBinContent(7,1.098789);
   data_mc_ratio__140->SetBinContent(8,1.633825);
   data_mc_ratio__140->SetBinContent(9,1.337891);
   data_mc_ratio__140->SetBinContent(10,1.128362);
   data_mc_ratio__140->SetBinContent(11,1.058421);
   data_mc_ratio__140->SetBinContent(12,1.356952);
   data_mc_ratio__140->SetBinContent(13,1.136648);
   data_mc_ratio__140->SetBinContent(14,1.320961);
   data_mc_ratio__140->SetBinContent(15,1.334166);
   data_mc_ratio__140->SetBinContent(16,1.440055);
   data_mc_ratio__140->SetBinContent(17,1.363178);
   data_mc_ratio__140->SetBinContent(18,1.614265);
   data_mc_ratio__140->SetBinContent(19,1.009883);
   data_mc_ratio__140->SetBinContent(20,1.157275);
   data_mc_ratio__140->SetBinContent(21,1.369664);
   data_mc_ratio__140->SetBinContent(22,1.274674);
   data_mc_ratio__140->SetBinContent(23,1.397742);
   data_mc_ratio__140->SetBinContent(24,2.635401);
   data_mc_ratio__140->SetBinContent(25,2.320558);
   data_mc_ratio__140->SetBinContent(26,1.199783);
   data_mc_ratio__140->SetBinContent(27,0.796414);
   data_mc_ratio__140->SetBinContent(28,0.2717461);
   data_mc_ratio__140->SetBinContent(29,3.494258);
   data_mc_ratio__140->SetBinContent(30,2.004046);
   data_mc_ratio__140->SetBinContent(31,3.56309);
   data_mc_ratio__140->SetBinError(1,0.01579488);
   data_mc_ratio__140->SetBinError(2,0.006339541);
   data_mc_ratio__140->SetBinError(3,0.005984845);
   data_mc_ratio__140->SetBinError(4,0.007763891);
   data_mc_ratio__140->SetBinError(5,0.006998312);
   data_mc_ratio__140->SetBinError(6,0.008144147);
   data_mc_ratio__140->SetBinError(7,0.008168589);
   data_mc_ratio__140->SetBinError(8,0.0133122);
   data_mc_ratio__140->SetBinError(9,0.01162022);
   data_mc_ratio__140->SetBinError(10,0.01037511);
   data_mc_ratio__140->SetBinError(11,0.01021973);
   data_mc_ratio__140->SetBinError(12,0.01354246);
   data_mc_ratio__140->SetBinError(13,0.01203695);
   data_mc_ratio__140->SetBinError(14,0.01476142);
   data_mc_ratio__140->SetBinError(15,0.01590888);
   data_mc_ratio__140->SetBinError(16,0.0185555);
   data_mc_ratio__140->SetBinError(17,0.0194304);
   data_mc_ratio__140->SetBinError(18,0.02515238);
   data_mc_ratio__140->SetBinError(19,0.01710928);
   data_mc_ratio__140->SetBinError(20,0.02197665);
   data_mc_ratio__140->SetBinError(21,0.02818812);
   data_mc_ratio__140->SetBinError(22,0.02930478);
   data_mc_ratio__140->SetBinError(23,0.03544556);
   data_mc_ratio__140->SetBinError(24,0.07649294);
   data_mc_ratio__140->SetBinError(25,0.07532852);
   data_mc_ratio__140->SetBinError(26,0.04515442);
   data_mc_ratio__140->SetBinError(27,0.03693282);
   data_mc_ratio__140->SetBinError(28,0.01708453);
   data_mc_ratio__140->SetBinError(29,0.2495899);
   data_mc_ratio__140->SetBinError(30,0.1984301);
   data_mc_ratio__140->SetBinError(31,2.269922);
   data_mc_ratio__140->SetMinimum(0.4);
   data_mc_ratio__140->SetMaximum(1.6);
   data_mc_ratio__140->SetEntries(210.4818);
   data_mc_ratio__140->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__140->SetLineColor(ci);
   data_mc_ratio__140->SetLineWidth(2);
   data_mc_ratio__140->SetMarkerStyle(20);
   data_mc_ratio__140->SetMarkerSize(1.2);
   data_mc_ratio__140->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   data_mc_ratio__140->GetXaxis()->SetRange(1,30);
   data_mc_ratio__140->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__140->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__140->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__140->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__140->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__140->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__140->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__140->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__140->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__140->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__140->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__140->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__140->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__140->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__140->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__140->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__140->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1102[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1102[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1102[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1102[30] = {
   0.08064896,
   0.0672127,
   0.09276713,
   0.07898882,
   0.08664655,
   0.09641284,
   0.1666476,
   0.1191445,
   0.1232416,
   0.1312623,
   0.1355829,
   0.1469678,
   0.1535165,
   0.156319,
   0.1641026,
   0.1852648,
   0.2121781,
   0.1670382,
   0.2456384,
   0.2752207,
   0.3132643,
   0.3613385,
   0.3499522,
   0.1993928,
   0.2072403,
   0.6363402,
   0.6434009,
   0.5667586,
   0.5749077,
   0.6521215};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1102,Graph_from_mc_statistical_error_fy1102,Graph_from_mc_statistical_error_fex1102,Graph_from_mc_statistical_error_fey1102);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1102 = new TH1F("Graph_Graph_from_mc_statistical_error1102","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1102->SetMinimum(0.2174542);
   Graph_Graph_from_mc_statistical_error1102->SetMaximum(1.782546);
   Graph_Graph_from_mc_statistical_error1102->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1102->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1102->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1102->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1102->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1102->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1102->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1102->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1102->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1102->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1102->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1102->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1102->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1102->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1102->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1102->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1102);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj0_tags_18->cd();
   Z_dR_Bj0_tags_18->Modified();
   Z_dR_Bj0_tags_18->cd();
   Z_dR_Bj0_tags_18->SetSelected(Z_dR_Bj0_tags_18);
}
