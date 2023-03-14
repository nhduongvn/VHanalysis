#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_algo_16_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_16/Z_dR_Bj0_algo_16
//=========  (Thu Mar  9 13:18:02 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_algo_16 = new TCanvas("Z_dR_Bj0_algo_16", "Z_dR_Bj0_algo_16",0,0,600,600);
   Z_dR_Bj0_algo_16->SetHighLightColor(2);
   Z_dR_Bj0_algo_16->Range(-1.310117,-0.3313816,7.029799,6.484791);
   Z_dR_Bj0_algo_16->SetFillColor(0);
   Z_dR_Bj0_algo_16->SetFillStyle(4000);
   Z_dR_Bj0_algo_16->SetBorderMode(0);
   Z_dR_Bj0_algo_16->SetBorderSize(2);
   Z_dR_Bj0_algo_16->SetLogy();
   Z_dR_Bj0_algo_16->SetLeftMargin(0.15709);
   Z_dR_Bj0_algo_16->SetRightMargin(0.1234783);
   Z_dR_Bj0_algo_16->SetBottomMargin(0.12);
   Z_dR_Bj0_algo_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_16->SetFrameBorderMode(0);
   Z_dR_Bj0_algo_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(333698);
   
   TH1F *st_stack_113 = new TH1F("st_stack_113","",30,0,6);
   st_stack_113->SetMinimum(3.065908);
   st_stack_113->SetMaximum(635584.8);
   st_stack_113->SetDirectory(0);
   st_stack_113->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_113->SetLineColor(ci);
   st_stack_113->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_113->GetXaxis()->SetRange(1,30);
   st_stack_113->GetXaxis()->SetLabelFont(42);
   st_stack_113->GetXaxis()->SetTitleOffset(1);
   st_stack_113->GetXaxis()->SetTitleFont(42);
   st_stack_113->GetYaxis()->SetTitle("Event/0.2");
   st_stack_113->GetYaxis()->SetLabelFont(42);
   st_stack_113->GetYaxis()->SetTitleSize(0.037);
   st_stack_113->GetYaxis()->SetTitleFont(42);
   st_stack_113->GetZaxis()->SetLabelFont(42);
   st_stack_113->GetZaxis()->SetTitleOffset(1);
   st_stack_113->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_113);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(1,63959.37);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(2,270213.6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(3,157748.1);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(4,99343.51);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(5,73154.5);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(6,55715.31);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(7,24277.88);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(8,19247.96);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(9,13085.94);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(10,10872.44);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(11,10132.96);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(12,6363.839);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(13,4119.817);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(14,1513.927);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(15,1316.1);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(16,2099.494);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(17,612.1153);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(18,1488.547);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(19,42.20764);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(20,555.1277);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(21,1441.542);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(22,312.0225);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(23,8.005494);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(24,23.44761);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(25,8.005494);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(1,3991.948);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(2,23240.55);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(3,9313.298);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(4,7291.139);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(5,7040.299);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(6,20869.68);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(7,3719.041);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(8,3332.74);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(9,2524.328);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(10,3037.314);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(11,2727.834);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(12,2551.088);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(13,1624.055);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(14,622.5288);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(15,558.4439);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(16,1472.667);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(17,393.9713);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(18,1418.994);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(19,25.80138);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(20,392.5346);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(21,1418.74);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(22,278.6458);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(23,8.005494);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(24,22.99287);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(25,8.005494);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetEntries(22714);

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
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(1,973.0272);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(2,6755.722);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(3,9893.41);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(4,8834.534);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(5,6260.868);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(6,3989.809);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(7,2480.232);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(8,1611.792);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(9,1056.299);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(10,712.0693);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(11,489.578);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(12,335.5781);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(13,234.0993);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(14,159.7563);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(15,115.9473);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(16,78.28402);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(17,52.60731);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(18,36.85061);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(19,24.60618);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(20,17.5777);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(21,11.16964);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(22,9.749992);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(23,5.787816);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(24,3.940338);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(25,2.769959);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(26,1.872856);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(27,1.161437);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(28,0.9893744);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(29,0.3644794);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(30,0.3956048);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(31,0.7125235);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(1,7.807624);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(2,20.55551);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(3,24.84629);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(4,23.45957);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(5,19.72334);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(6,15.72851);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(7,12.38935);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(8,9.970798);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(9,8.062719);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(10,6.621902);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(11,5.480733);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(12,4.532017);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(13,3.784303);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(14,3.129457);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(15,2.674716);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(16,2.196494);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(17,1.79757);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(18,1.505924);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(19,1.240383);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(20,1.035908);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(21,0.8238738);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(22,0.7739029);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(23,0.5951045);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(24,0.4907049);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(25,0.4083282);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(26,0.3322673);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(27,0.270695);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(28,0.2447983);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(29,0.1414985);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(30,0.1531005);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(31,0.2092457);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetEntries(736178);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_algo_16->Modified();
   Z_dR_Bj0_algo_16->cd();
   Z_dR_Bj0_algo_16->SetSelected(Z_dR_Bj0_algo_16);
}
