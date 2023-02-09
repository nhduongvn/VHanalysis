#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_algo_16()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_16/H_dR_Bj0_algo_16
//=========  (Wed Jan 18 11:40:24 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_algo_16 = new TCanvas("H_dR_Bj0_algo_16", "H_dR_Bj0_algo_16",0,0,600,600);
   H_dR_Bj0_algo_16->SetHighLightColor(2);
   H_dR_Bj0_algo_16->Range(-1.310117,-0.1262435,7.029799,0.925786);
   H_dR_Bj0_algo_16->SetFillColor(0);
   H_dR_Bj0_algo_16->SetFillStyle(4000);
   H_dR_Bj0_algo_16->SetBorderMode(0);
   H_dR_Bj0_algo_16->SetBorderSize(2);
   H_dR_Bj0_algo_16->SetLeftMargin(0.15709);
   H_dR_Bj0_algo_16->SetRightMargin(0.1234783);
   H_dR_Bj0_algo_16->SetBottomMargin(0.12);
   H_dR_Bj0_algo_16->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_16->SetFrameBorderMode(0);
   H_dR_Bj0_algo_16->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.820583);
   
   TH1F *st_stack_105 = new TH1F("st_stack_105","",30,0,6);
   st_stack_105->SetMinimum(0);
   st_stack_105->SetMaximum(0.820583);
   st_stack_105->SetDirectory(0);
   st_stack_105->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_105->SetLineColor(ci);
   st_stack_105->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_105->GetXaxis()->SetRange(1,30);
   st_stack_105->GetXaxis()->SetLabelFont(42);
   st_stack_105->GetXaxis()->SetTitleOffset(1);
   st_stack_105->GetXaxis()->SetTitleFont(42);
   st_stack_105->GetYaxis()->SetTitle("Events/0.2");
   st_stack_105->GetYaxis()->SetLabelFont(42);
   st_stack_105->GetYaxis()->SetTitleSize(0.037);
   st_stack_105->GetYaxis()->SetTitleFont(42);
   st_stack_105->GetZaxis()->SetLabelFont(42);
   st_stack_105->GetZaxis()->SetTitleOffset(1);
   st_stack_105->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_105);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(1,0.1310988);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(2,0.3961777);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(3,0.4264313);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(4,0.301095);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(5,0.118133);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(6,0.08643877);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(7,0.04177874);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(8,0.02737228);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(9,0.02016905);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(10,0.004321938);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(11,0.004321938);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(12,0.005762585);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(13,0.001440646);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(14,0.001440646);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(15,0.001440646);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(1,0.01374289);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(2,0.02389041);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(3,0.02478581);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(4,0.02082718);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(5,0.01304561);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(6,0.0111592);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(7,0.007758117);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(8,0.006279631);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(9,0.005390404);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(10,0.002495272);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(11,0.002495272);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(12,0.002881292);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(13,0.001440646);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(14,0.001440646);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(15,0.001440646);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetEntries(1088);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(1,0.04140827);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(2,0.1431286);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(3,0.1206241);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(4,0.05383075);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(5,0.02430485);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(6,0.01260252);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(7,0.009001798);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(8,0.002520503);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(9,0.002700539);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(10,0.0007201438);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(11,0.0005401079);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(12,0.0003600719);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(13,0.0005401079);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(14,0.0005401079);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(16,0.0005401079);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(17,0.000180036);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(21,0.000180036);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(1,0.00273038);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(2,0.005076248);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(3,0.004660115);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(4,0.003113113);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(5,0.002091829);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(6,0.001506289);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(7,0.001273046);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(8,0.0006736328);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(9,0.0006972762);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(10,0.0003600719);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(11,0.0003118314);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(12,0.0002546093);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(13,0.0003118314);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(14,0.0003118314);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(16,0.0003118314);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(17,0.000180036);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(21,0.000180036);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetEntries(2298);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_1","ZHcc","F");

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
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_algo_16->Modified();
   H_dR_Bj0_algo_16->cd();
   H_dR_Bj0_algo_16->SetSelected(H_dR_Bj0_algo_16);
}
