#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_algo_17()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_17/H_dR_Bj1_algo_17
//=========  (Thu Feb 16 10:35:20 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_algo_17 = new TCanvas("H_dR_Bj1_algo_17", "H_dR_Bj1_algo_17",0,0,600,600);
   H_dR_Bj1_algo_17->SetHighLightColor(2);
   H_dR_Bj1_algo_17->Range(-1.310117,-0.1002242,7.029799,0.7349775);
   H_dR_Bj1_algo_17->SetFillColor(0);
   H_dR_Bj1_algo_17->SetFillStyle(4000);
   H_dR_Bj1_algo_17->SetBorderMode(0);
   H_dR_Bj1_algo_17->SetBorderSize(2);
   H_dR_Bj1_algo_17->SetLeftMargin(0.15709);
   H_dR_Bj1_algo_17->SetRightMargin(0.1234783);
   H_dR_Bj1_algo_17->SetBottomMargin(0.12);
   H_dR_Bj1_algo_17->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_17->SetFrameBorderMode(0);
   H_dR_Bj1_algo_17->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.6514573);
   
   TH1F *st_stack_110 = new TH1F("st_stack_110","",30,0,6);
   st_stack_110->SetMinimum(0);
   st_stack_110->SetMaximum(0.6514573);
   st_stack_110->SetDirectory(0);
   st_stack_110->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_110->SetLineColor(ci);
   st_stack_110->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_110->GetXaxis()->SetRange(1,30);
   st_stack_110->GetXaxis()->SetLabelFont(42);
   st_stack_110->GetXaxis()->SetTitleOffset(1);
   st_stack_110->GetXaxis()->SetTitleFont(42);
   st_stack_110->GetYaxis()->SetTitle("Events/0.2");
   st_stack_110->GetYaxis()->SetLabelFont(42);
   st_stack_110->GetYaxis()->SetTitleSize(0.037);
   st_stack_110->GetYaxis()->SetTitleFont(42);
   st_stack_110->GetZaxis()->SetLabelFont(42);
   st_stack_110->GetZaxis()->SetTitleOffset(1);
   st_stack_110->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_110);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(2,0.04266678);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(3,0.2117537);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(4,0.3176305);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(5,0.301828);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(6,0.2117537);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(7,0.1106176);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(8,0.06637055);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(9,0.03318527);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(10,0.03792603);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(11,0.02212352);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(12,0.02528402);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(13,0.02212352);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(14,0.02054326);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(15,0.01580251);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(16,0.004740753);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(17,0.004740753);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(19,0.001580251);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(22,0.001580251);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(2,0.008211226);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(3,0.01829273);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(4,0.02240393);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(5,0.02183951);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(6,0.01829273);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(7,0.01322133);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(8,0.0102412);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(9,0.00724162);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(10,0.007741618);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(11,0.005912758);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(12,0.006321005);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(13,0.005912758);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(14,0.005697677);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(15,0.004997193);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(16,0.002737075);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(17,0.002737075);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(19,0.001580251);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(22,0.001580251);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetEntries(919);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(2,0.009757466);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(3,0.06705663);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(4,0.1166744);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(5,0.1127299);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(6,0.06913268);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(7,0.04214395);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(8,0.01993014);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(9,0.0145324);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(10,0.008719438);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(11,0.008927043);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(12,0.008511832);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(13,0.004359719);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(14,0.00477493);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(15,0.00477493);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(16,0.002906479);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(17,0.001868451);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(18,0.0008304226);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(19,0.001038028);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(20,0.0002076057);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(21,0.0002076057);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(23,0.0002076057);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(2,0.001423273);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(3,0.003731131);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(4,0.004921612);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(5,0.004837702);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(6,0.003788448);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(7,0.002957925);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(8,0.002034112);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(9,0.001736954);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(10,0.001345438);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(11,0.001361361);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(12,0.001329325);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(13,0.0009513686);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(14,0.0009956417);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(15,0.0009956417);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(16,0.0007767892);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(17,0.000622817);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(18,0.0004152113);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(19,0.0004642204);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(20,0.0002076057);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(21,0.0002076057);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(23,0.0002076057);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetEntries(2405);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_1","ZHcc","F");

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
   H_dR_Bj1_algo_17->Modified();
   H_dR_Bj1_algo_17->cd();
   H_dR_Bj1_algo_17->SetSelected(H_dR_Bj1_algo_17);
}
