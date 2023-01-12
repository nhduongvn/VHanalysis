#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_algo_16()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_16/H_dR_Bj0_algo_16
//=========  (Mon Dec 19 11:11:22 2022) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_algo_16 = new TCanvas("H_dR_Bj0_algo_16", "H_dR_Bj0_algo_16",0,0,600,600);
   H_dR_Bj0_algo_16->SetHighLightColor(2);
   H_dR_Bj0_algo_16->Range(-1.310117,-0.126576,7.029799,0.928224);
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
   st->SetMaximum(0.822744);
   
   TH1F *st_stack_97 = new TH1F("st_stack_97","",30,0,6);
   st_stack_97->SetMinimum(0);
   st_stack_97->SetMaximum(0.822744);
   st_stack_97->SetDirectory(0);
   st_stack_97->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_97->SetLineColor(ci);
   st_stack_97->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_97->GetXaxis()->SetRange(1,30);
   st_stack_97->GetXaxis()->SetLabelFont(42);
   st_stack_97->GetXaxis()->SetTitleOffset(1);
   st_stack_97->GetXaxis()->SetTitleFont(42);
   st_stack_97->GetYaxis()->SetTitle("Events/0.2");
   st_stack_97->GetYaxis()->SetLabelFont(42);
   st_stack_97->GetYaxis()->SetTitleSize(0.037);
   st_stack_97->GetYaxis()->SetTitleFont(42);
   st_stack_97->GetZaxis()->SetLabelFont(42);
   st_stack_97->GetZaxis()->SetTitleOffset(1);
   st_stack_97->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_97);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(1,0.1282175);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(2,0.3976183);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(3,0.4278719);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(4,0.3025357);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(5,0.1195736);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(6,0.08787941);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(7,0.04177874);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(8,0.02737228);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(9,0.02016905);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(10,0.004321938);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(11,0.004321938);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(12,0.005762585);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(13,0.001440646);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(14,0.001440646);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(15,0.001440646);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(1,0.01359103);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(2,0.02393381);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(3,0.02482765);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(4,0.02087695);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(5,0.01312491);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(6,0.01125181);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(7,0.007758117);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(8,0.006279631);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(9,0.005390404);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(10,0.002495272);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(11,0.002495272);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(12,0.002881292);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(13,0.001440646);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(14,0.001440646);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(15,0.001440646);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetEntries(1091);

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
