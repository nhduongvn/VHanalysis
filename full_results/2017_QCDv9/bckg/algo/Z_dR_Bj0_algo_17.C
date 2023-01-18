#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_algo_17()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_17/Z_dR_Bj0_algo_17
//=========  (Wed Jan 18 11:43:12 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_algo_17 = new TCanvas("Z_dR_Bj0_algo_17", "Z_dR_Bj0_algo_17",0,0,600,600);
   Z_dR_Bj0_algo_17->SetHighLightColor(2);
   Z_dR_Bj0_algo_17->Range(-1.310117,-543104.1,7.029799,3982763);
   Z_dR_Bj0_algo_17->SetFillColor(0);
   Z_dR_Bj0_algo_17->SetFillStyle(4000);
   Z_dR_Bj0_algo_17->SetBorderMode(0);
   Z_dR_Bj0_algo_17->SetBorderSize(2);
   Z_dR_Bj0_algo_17->SetLeftMargin(0.15709);
   Z_dR_Bj0_algo_17->SetRightMargin(0.1234783);
   Z_dR_Bj0_algo_17->SetBottomMargin(0.12);
   Z_dR_Bj0_algo_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_17->SetFrameBorderMode(0);
   Z_dR_Bj0_algo_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3530176);
   
   TH1F *st_stack_114 = new TH1F("st_stack_114","",30,0,6);
   st_stack_114->SetMinimum(0);
   st_stack_114->SetMaximum(3530176);
   st_stack_114->SetDirectory(0);
   st_stack_114->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_114->SetLineColor(ci);
   st_stack_114->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_114->GetXaxis()->SetRange(1,30);
   st_stack_114->GetXaxis()->SetLabelFont(42);
   st_stack_114->GetXaxis()->SetTitleOffset(1);
   st_stack_114->GetXaxis()->SetTitleFont(42);
   st_stack_114->GetYaxis()->SetTitle("Events/0.2");
   st_stack_114->GetYaxis()->SetLabelFont(42);
   st_stack_114->GetYaxis()->SetTitleSize(0.037);
   st_stack_114->GetYaxis()->SetTitleFont(42);
   st_stack_114->GetZaxis()->SetLabelFont(42);
   st_stack_114->GetZaxis()->SetTitleOffset(1);
   st_stack_114->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_114);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(1,433030.2);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(2,2330320);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(3,1629619);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(4,1451708);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(5,815372.9);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(6,572694.6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(7,531874.5);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(8,224375.5);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(9,220679.7);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(10,109807.6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(11,85771.31);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(12,85424.1);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(13,78849.69);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(14,45222.55);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(15,40361.43);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(16,4537.105);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(17,19349.2);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(18,2764.808);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(19,4033.651);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(20,2667.138);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(21,17847.16);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(22,296.4629);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(23,1497.615);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(24,21.4345);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(25,2962.905);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(26,21.4345);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(1,25102.14);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(2,111451.5);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(3,93004.42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(4,110573.8);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(5,78094.45);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(6,68177.67);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(7,75106.11);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(8,40666.95);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(9,47618.49);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(10,30474.8);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(11,30018.61);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(12,30075.55);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(13,29972.31);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(14,21335.23);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(15,21199.37);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(16,2131.707);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(17,14983.25);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(18,1720.469);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(19,2099.063);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(20,1719.964);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(21,14932.62);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(22,264.5382);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(23,1230.617);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(24,21.4345);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(25,1740.189);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(26,21.4345);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetEntries(41411);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(1,3243.96);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(2,23131.41);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(3,31785.7);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(4,26322.83);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(5,17805.59);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(6,11036.35);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(7,6803.407);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(8,4344.326);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(9,2853.638);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(10,1926.428);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(11,1299.827);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(12,891.7837);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(13,612.2222);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(14,427.2701);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(15,285.74);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(16,200.685);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(17,140.1979);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(18,98.47906);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(19,63.94407);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(20,47.58045);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(21,30.35038);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(22,22.50581);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(23,14.22661);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(24,9.886536);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(25,7.105319);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(26,4.624843);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(27,3.166684);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(28,1.909243);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(29,1.174083);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(30,0.959907);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(31,1.589771);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(1,13.94702);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(2,37.40489);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(3,43.92684);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(4,39.97968);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(5,32.85838);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(6,25.82594);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(7,20.23957);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(8,16.14653);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(9,13.06351);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(10,10.72552);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(11,8.78984);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(12,7.266573);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(13,6.010906);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(14,5.024655);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(15,4.101049);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(16,3.452316);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(17,2.873631);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(18,2.415424);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(19,1.930064);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(20,1.674231);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(21,1.352253);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(22,1.157608);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(23,0.9141627);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(24,0.7629901);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(25,0.6481455);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(26,0.5274019);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(27,0.4337209);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(28,0.3299322);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(29,0.2624688);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(30,0.2315155);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(31,0.3012223);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetEntries(2316312);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_1","QCD","F");

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
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_algo_17->Modified();
   Z_dR_Bj0_algo_17->cd();
   Z_dR_Bj0_algo_17->SetSelected(Z_dR_Bj0_algo_17);
}
