#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_algo_17_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_17/H_dR_Bj0_algo_17
//=========  (Tue Feb 14 10:43:07 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_algo_17 = new TCanvas("H_dR_Bj0_algo_17", "H_dR_Bj0_algo_17",0,0,600,600);
   H_dR_Bj0_algo_17->SetHighLightColor(2);
   H_dR_Bj0_algo_17->Range(-1.310117,0.5895511,7.029799,2.394172);
   H_dR_Bj0_algo_17->SetFillColor(0);
   H_dR_Bj0_algo_17->SetFillStyle(4000);
   H_dR_Bj0_algo_17->SetBorderMode(0);
   H_dR_Bj0_algo_17->SetBorderSize(2);
   H_dR_Bj0_algo_17->SetLogy();
   H_dR_Bj0_algo_17->SetLeftMargin(0.15709);
   H_dR_Bj0_algo_17->SetRightMargin(0.1234783);
   H_dR_Bj0_algo_17->SetBottomMargin(0.12);
   H_dR_Bj0_algo_17->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_17->SetFrameBorderMode(0);
   H_dR_Bj0_algo_17->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(133.5167);
   
   TH1F *st_stack_106 = new TH1F("st_stack_106","",30,0,6);
   st_stack_106->SetMinimum(6.398903);
   st_stack_106->SetMaximum(163.5722);
   st_stack_106->SetDirectory(0);
   st_stack_106->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_106->SetLineColor(ci);
   st_stack_106->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_106->GetXaxis()->SetRange(1,30);
   st_stack_106->GetXaxis()->SetLabelFont(42);
   st_stack_106->GetXaxis()->SetTitleOffset(1);
   st_stack_106->GetXaxis()->SetTitleFont(42);
   st_stack_106->GetYaxis()->SetTitle("Events/0.2");
   st_stack_106->GetYaxis()->SetLabelFont(42);
   st_stack_106->GetYaxis()->SetTitleSize(0.037);
   st_stack_106->GetYaxis()->SetTitleFont(42);
   st_stack_106->GetZaxis()->SetLabelFont(42);
   st_stack_106->GetZaxis()->SetTitleOffset(1);
   st_stack_106->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_106);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(1,0.289186);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(2,1.000299);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(3,0.9228667);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(4,0.5594089);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(5,0.3192107);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(6,0.1596054);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(7,0.09323482);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(8,0.03160502);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(9,0.01738276);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(10,0.02370377);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(11,0.01106176);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(12,0.004740753);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(13,0.001580251);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(14,0.001580251);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(16,0.003160502);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(20,0.001580251);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(1,0.02137724);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(2,0.03975831);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(3,0.03818849);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(4,0.02973225);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(5,0.02245959);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(6,0.01588133);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(7,0.01213814);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(8,0.007067098);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(9,0.0052411);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(10,0.006120286);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(11,0.004180952);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(12,0.002737075);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(13,0.001580251);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(14,0.001580251);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(16,0.002234813);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(20,0.001580251);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetEntries(2177);

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
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(1,0.0807586);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(2,0.3348679);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(3,0.2781916);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(4,0.1370197);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(5,0.05231663);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(6,0.02117578);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(7,0.01245634);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(8,0.007058592);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(9,0.004567324);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(10,0.001868451);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(11,0.002283662);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(12,0.0004152113);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(13,0.001038028);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(14,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(15,0.0004152113);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(17,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(18,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(19,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(21,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(23,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(1,0.004094624);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(2,0.008337894);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(3,0.007599615);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(4,0.005333486);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(5,0.003295638);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(6,0.002096714);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(7,0.001608106);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(8,0.001210539);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(9,0.0009737568);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(10,0.000622817);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(11,0.0006885501);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(12,0.0002935987);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(13,0.0004642204);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(14,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(15,0.0002935987);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(17,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(18,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(19,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(21,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(23,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetEntries(4507);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_algo_17->Modified();
   H_dR_Bj0_algo_17->cd();
   H_dR_Bj0_algo_17->SetSelected(H_dR_Bj0_algo_17);
}
