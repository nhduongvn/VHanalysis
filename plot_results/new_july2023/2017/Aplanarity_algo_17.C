void Aplanarity_algo_17()
{
//=========Macro generated from canvas: Aplanarity_algo_17/Aplanarity_algo_17
//=========  (Fri Jul 14 13:38:27 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_17 = new TCanvas("Aplanarity_algo_17", "Aplanarity_algo_17",0,0,600,600);
   Aplanarity_algo_17->SetHighLightColor(2);
   Aplanarity_algo_17->Range(0,0,1,1);
   Aplanarity_algo_17->SetFillColor(0);
   Aplanarity_algo_17->SetFillStyle(4000);
   Aplanarity_algo_17->SetBorderMode(0);
   Aplanarity_algo_17->SetBorderSize(2);
   Aplanarity_algo_17->SetFrameFillStyle(1000);
   Aplanarity_algo_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-459.2533,1.052419,458804);
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
   st->SetMaximum(393216.8);
   
   TH1F *st_stack_158 = new TH1F("st_stack_158","",50,0,1);
   st_stack_158->SetMinimum(0.01);
   st_stack_158->SetMaximum(412877.6);
   st_stack_158->SetDirectory(0);
   st_stack_158->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_158->SetLineColor(ci);
   st_stack_158->GetXaxis()->SetRange(1,50);
   st_stack_158->GetXaxis()->SetLabelFont(42);
   st_stack_158->GetXaxis()->SetLabelSize(0.035);
   st_stack_158->GetXaxis()->SetTitleSize(0.035);
   st_stack_158->GetXaxis()->SetTitleFont(42);
   st_stack_158->GetYaxis()->SetTitle("Events/0.02");
   st_stack_158->GetYaxis()->SetLabelFont(42);
   st_stack_158->GetYaxis()->SetLabelSize(0.05);
   st_stack_158->GetYaxis()->SetTitleSize(0.057);
   st_stack_158->GetYaxis()->SetTitleOffset(1.2);
   st_stack_158->GetYaxis()->SetTitleFont(42);
   st_stack_158->GetZaxis()->SetLabelFont(42);
   st_stack_158->GetZaxis()->SetLabelSize(0.035);
   st_stack_158->GetZaxis()->SetTitleSize(0.035);
   st_stack_158->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_158);
   
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,159643.7);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,17550.02);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,3586.252);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,466.9595);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,1461.429);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,6.414697);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,5379.651);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,2268.699);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,844.2257);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,280.9858);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,1424.01);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,6.414697);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(13510);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,1215.518);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,159.7488);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,36.51669);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,6.528155);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,3.131114);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,0.4806127);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,0.4518989);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,0.03933795);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,0.06589663);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,-0.05424871);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,0.02523178);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,0.02883262);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,14.83679);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,5.332259);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,2.632537);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,0.9855017);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,0.8491512);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,0.1809087);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,0.3303835);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,0.03933795);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,0.06589663);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,0.05424871);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,0.04974487);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,0.02883262);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(19837);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_2,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_3 = new TH1D("VbbHcc_algo_Aplanarity_stack_3","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(1,14136.5);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(2,1940.138);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(3,422.774);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(4,117.6164);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(5,37.36703);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(6,15.07831);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(7,6.428502);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(8,2.962186);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(9,1.865663);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(10,0.9603896);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(11,0.6858829);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(12,0.2881129);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(13,0.1435697);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(14,0.1208578);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(15,0.05830831);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(17,0.07731977);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(1,32.19862);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(2,11.90342);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(3,5.506478);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(4,2.861743);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(5,1.615835);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(6,1.001481);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(7,0.6369076);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(8,0.4416648);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(9,0.3296599);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(10,0.2180848);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(11,0.2127398);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(12,0.1354647);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(13,0.08303732);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(14,0.09138899);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(15,0.05830831);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(17,0.0579425);
   VbbHcc_algo_Aplanarity_stack_3->SetEntries(257832);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_3->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_3,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_4 = new TH1D("VbbHcc_algo_Aplanarity_stack_4","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(1,1257.202);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(2,111.8263);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(3,24.5797);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(4,9.523456);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(5,0.6101848);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(6,0.0965487);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(7,0.04983454);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(1,28.45926);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(2,7.903234);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(3,5.41596);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(4,4.826603);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(5,0.2371966);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(6,0.0965487);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(7,0.04983454);
   VbbHcc_algo_Aplanarity_stack_4->SetEntries(8463);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_4->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_4,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_5 = new TH1D("VbbHcc_algo_Aplanarity_stack_5","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(1,641.8217);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(2,57.77597);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(3,9.479928);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(4,6.602232);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(5,1.360304);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(7,0.1074258);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(1,27.50629);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(2,10.40789);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(3,2.787008);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(4,5.53244);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(5,1.348684);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(7,0.1074258);
   VbbHcc_algo_Aplanarity_stack_5->SetEntries(3604);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_5->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_5,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_6 = new TH1D("VbbHcc_algo_Aplanarity_stack_6","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(1,4.630946);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(2,0.232992);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(1,1.034738);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(2,0.232992);
   VbbHcc_algo_Aplanarity_stack_6->SetEntries(22);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_6->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_6,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_7 = new TH1D("VbbHcc_algo_Aplanarity_stack_7","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(1,16.14239);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(2,1.421055);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(3,0.1817758);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(1,1.675332);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(2,0.4819333);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(3,0.1817758);
   VbbHcc_algo_Aplanarity_stack_7->SetEntries(106);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_7->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_7,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_8 = new TH1D("VbbHcc_algo_Aplanarity_stack_8","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(1,16.30748);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(2,1.601672);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(3,0.2375455);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(1,1.895376);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(2,0.5714431);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(3,0.2375455);
   VbbHcc_algo_Aplanarity_stack_8->SetEntries(86);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_8->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_8,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_9 = new TH1D("VbbHcc_algo_Aplanarity_stack_9","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(1,8.852012);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(2,0.6689351);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(3,0.1202657);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(4,0.02331434);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(5,0.007501768);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(6,0.002044665);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(1,0.1312347);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(2,0.03615785);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(3,0.01501675);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(4,0.006862383);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(5,0.003754704);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(6,0.002044665);
   VbbHcc_algo_Aplanarity_stack_9->SetEntries(5585);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_9->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_9,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_10 = new TH1D("VbbHcc_algo_Aplanarity_stack_10","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(1,6.254778);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(2,0.637315);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(3,0.108242);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(4,0.02321693);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(5,0.005417272);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(6,0.002340081);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(7,0.001205401);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(8,0.0003734022);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(9,0.000434458);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(1,0.05265501);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(2,0.01682605);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(3,0.006907205);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(4,0.003223324);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(5,0.001567935);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(6,0.0009755535);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(7,0.000700857);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(8,0.0003734022);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(9,0.000434458);
   VbbHcc_algo_Aplanarity_stack_10->SetEntries(16167);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_10->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_10,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_11 = new TH1D("VbbHcc_algo_Aplanarity_stack_11","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(1,0.4386785);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(2,0.01880031);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(3,0.003496184);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(5,0.002129593);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(1,0.02900266);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(2,0.00592795);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(3,0.002497218);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(5,0.002129593);
   VbbHcc_algo_Aplanarity_stack_11->SetEntries(279);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_11->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_11,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_12 = new TH1D("VbbHcc_algo_Aplanarity_stack_12","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(1,0.1688409);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(2,0.01629402);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(3,0.002601322);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(4,0.0001532781);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(7,0.0002137836);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(1,0.006358611);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(2,0.001991596);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(3,0.000803852);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(4,0.0001532781);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(7,0.0002137836);
   VbbHcc_algo_Aplanarity_stack_12->SetEntries(816);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_12->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Aplanarity__315 = new TH1D("VbbHcc_algo_Aplanarity__315","",50,0,1);
   VbbHcc_algo_Aplanarity__315->SetBinContent(1,26074);
   VbbHcc_algo_Aplanarity__315->SetBinContent(2,2823);
   VbbHcc_algo_Aplanarity__315->SetBinContent(3,594);
   VbbHcc_algo_Aplanarity__315->SetBinContent(4,185);
   VbbHcc_algo_Aplanarity__315->SetBinContent(5,40);
   VbbHcc_algo_Aplanarity__315->SetBinContent(6,14);
   VbbHcc_algo_Aplanarity__315->SetBinContent(7,2);
   VbbHcc_algo_Aplanarity__315->SetBinContent(8,6);
   VbbHcc_algo_Aplanarity__315->SetBinContent(9,3);
   VbbHcc_algo_Aplanarity__315->SetBinContent(10,1);
   VbbHcc_algo_Aplanarity__315->SetBinContent(11,1);
   VbbHcc_algo_Aplanarity__315->SetEntries(29743);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity__315->SetLineColor(ci);
   VbbHcc_algo_Aplanarity__315->SetLineWidth(2);
   VbbHcc_algo_Aplanarity__315->SetMarkerStyle(20);
   VbbHcc_algo_Aplanarity__315->SetMarkerSize(1.2);
   VbbHcc_algo_Aplanarity__315->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity__315->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__315->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity__315->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity__315->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__315->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__315->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity__315->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity__315->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity__315->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__315->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__315->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity__315->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity__315->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__315->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fx1315[50] = {
   0.01,
   0.03,
   0.05,
   0.07,
   0.09,
   0.11,
   0.13,
   0.15,
   0.17,
   0.19,
   0.21,
   0.23,
   0.25,
   0.27,
   0.29,
   0.31,
   0.33,
   0.35,
   0.37,
   0.39,
   0.41,
   0.43,
   0.45,
   0.47,
   0.49,
   0.51,
   0.53,
   0.55,
   0.57,
   0.59,
   0.61,
   0.63,
   0.65,
   0.67,
   0.69,
   0.71,
   0.73,
   0.75,
   0.77,
   0.79,
   0.81,
   0.83,
   0.85,
   0.87,
   0.89,
   0.91,
   0.93,
   0.95,
   0.97,
   0.99};
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fy1315[50] = {
   176947.6,
   19824.11,
   4080.256,
   607.2764,
   1503.913,
   15.65986,
   13.45378,
   3.001898,
   1.931994,
   0.9061409,
   0.7111147,
   0.3169455,
   0.1435697,
   0.1208578,
   0.05830831,
   0,
   0.07731977,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fex1315[50] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fey1315[50] = {
   5379.914,
   2268.774,
   844.2697,
   281.098,
   1424.011,
   1.022262,
   6.455786,
   0.4434133,
   0.3361818,
   0.2247307,
   0.2184783,
   0.1384991,
   0.08303732,
   0.09138899,
   0.05830831,
   0,
   0.0579425,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_algo_Aplanarity_fx1315,Graph_from_VbbHcc_algo_Aplanarity_fy1315,Graph_from_VbbHcc_algo_Aplanarity_fex1315,Graph_from_VbbHcc_algo_Aplanarity_fey1315);
   gre->SetName("Graph_from_VbbHcc_algo_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Aplanarity1315 = new TH1F("Graph_Graph_from_VbbHcc_algo_Aplanarity1315","",100,0,1.1);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->SetMaximum(200560.2);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Aplanarity1315);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Aplanarity","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Aplanarity","MC unc. (stat.)","fl");

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
   Aplanarity_algo_17->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.1532254,-0.2774193,1.052419,1.658065);
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
   
   TH1D *data_mc_ratio__316 = new TH1D("data_mc_ratio__316","",50,0,1);
   data_mc_ratio__316->SetBinContent(1,0.1473544);
   data_mc_ratio__316->SetBinContent(2,0.1424024);
   data_mc_ratio__316->SetBinContent(3,0.1455791);
   data_mc_ratio__316->SetBinContent(4,0.3046389);
   data_mc_ratio__316->SetBinContent(5,0.02659729);
   data_mc_ratio__316->SetBinContent(6,0.8940054);
   data_mc_ratio__316->SetBinContent(7,0.1486571);
   data_mc_ratio__316->SetBinContent(8,1.998736);
   data_mc_ratio__316->SetBinContent(9,1.5528);
   data_mc_ratio__316->SetBinContent(10,1.103581);
   data_mc_ratio__316->SetBinContent(11,1.406243);
   data_mc_ratio__316->SetBinError(1,0.0009125554);
   data_mc_ratio__316->SetBinError(2,0.002680166);
   data_mc_ratio__316->SetBinError(3,0.005973182);
   data_mc_ratio__316->SetBinError(4,0.02239749);
   data_mc_ratio__316->SetBinError(5,0.0042054);
   data_mc_ratio__316->SetBinError(6,0.238933);
   data_mc_ratio__316->SetBinError(7,0.1051165);
   data_mc_ratio__316->SetBinError(8,0.8159804);
   data_mc_ratio__316->SetBinError(9,0.8965092);
   data_mc_ratio__316->SetBinError(10,1.103581);
   data_mc_ratio__316->SetBinError(11,1.406243);
   data_mc_ratio__316->SetMinimum(0.4);
   data_mc_ratio__316->SetMaximum(1.6);
   data_mc_ratio__316->SetEntries(11.94578);
   data_mc_ratio__316->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__316->SetLineColor(ci);
   data_mc_ratio__316->SetLineWidth(2);
   data_mc_ratio__316->SetMarkerStyle(20);
   data_mc_ratio__316->SetMarkerSize(1.2);
   data_mc_ratio__316->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__316->GetXaxis()->SetRange(1,50);
   data_mc_ratio__316->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__316->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__316->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__316->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__316->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__316->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__316->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__316->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__316->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__316->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__316->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__316->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__316->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__316->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__316->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__316->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__316->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1316[50] = {
   0.01,
   0.03,
   0.05,
   0.07,
   0.09,
   0.11,
   0.13,
   0.15,
   0.17,
   0.19,
   0.21,
   0.23,
   0.25,
   0.27,
   0.29,
   0.31,
   0.33,
   0.35,
   0.37,
   0.39,
   0.41,
   0.43,
   0.45,
   0.47,
   0.49,
   0.51,
   0.53,
   0.55,
   0.57,
   0.59,
   0.61,
   0.63,
   0.65,
   0.67,
   0.69,
   0.71,
   0.73,
   0.75,
   0.77,
   0.79,
   0.81,
   0.83,
   0.85,
   0.87,
   0.89,
   0.91,
   0.93,
   0.95,
   0.97,
   0.99};
   Double_t Graph_from_mc_statistical_error_fy1316[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1316[50] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t Graph_from_mc_statistical_error_fey1316[50] = {
   0.030404,
   0.1144452,
   0.2069159,
   0.462883,
   0.946871,
   0.06527912,
   0.4798493,
   0.147711,
   0.1740077,
   0.2480086,
   0.3072336,
   0.4369808,
   0.5783765,
   0.7561694,
   1,
   0,
   0.7493879,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1316,Graph_from_mc_statistical_error_fy1316,Graph_from_mc_statistical_error_fex1316,Graph_from_mc_statistical_error_fey1316);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1316 = new TH1F("Graph_Graph_from_mc_statistical_error1316","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1316->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1316->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1316->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1316->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1316->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1316->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1316->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1316->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1316->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1316->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1316->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1316->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1316->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1316->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1316->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1316->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1316->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1316->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1316);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_algo_17->cd();
   Aplanarity_algo_17->Modified();
   Aplanarity_algo_17->cd();
   Aplanarity_algo_17->SetSelected(Aplanarity_algo_17);
}
