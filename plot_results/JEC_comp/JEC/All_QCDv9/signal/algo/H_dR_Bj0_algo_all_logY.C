#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_algo_all_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_all/H_dR_Bj0_algo_all
//=========  (Mon Mar 20 11:49:48 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_algo_all = new TCanvas("H_dR_Bj0_algo_all", "H_dR_Bj0_algo_all",0,0,600,600);
   H_dR_Bj0_algo_all->SetHighLightColor(2);
   H_dR_Bj0_algo_all->Range(-1.310117,-0.1433586,7.029799,0.450709);
   H_dR_Bj0_algo_all->SetFillColor(0);
   H_dR_Bj0_algo_all->SetFillStyle(4000);
   H_dR_Bj0_algo_all->SetBorderMode(0);
   H_dR_Bj0_algo_all->SetBorderSize(2);
   H_dR_Bj0_algo_all->SetLogy();
   H_dR_Bj0_algo_all->SetLeftMargin(0.15709);
   H_dR_Bj0_algo_all->SetRightMargin(0.1234783);
   H_dR_Bj0_algo_all->SetBottomMargin(0.12);
   H_dR_Bj0_algo_all->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_all->SetFrameBorderMode(0);
   H_dR_Bj0_algo_all->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(2.296278);
   
   TH1F *st_stack_140 = new TH1F("st_stack_140","",30,0,6);
   st_stack_140->SetMinimum(0.8470899);
   st_stack_140->SetMaximum(2.46208);
   st_stack_140->SetDirectory(0);
   st_stack_140->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_140->SetLineColor(ci);
   st_stack_140->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_140->GetXaxis()->SetRange(1,30);
   st_stack_140->GetXaxis()->SetLabelFont(42);
   st_stack_140->GetXaxis()->SetTitleOffset(1);
   st_stack_140->GetXaxis()->SetTitleFont(42);
   st_stack_140->GetYaxis()->SetTitle("Event/0.2");
   st_stack_140->GetYaxis()->SetLabelFont(42);
   st_stack_140->GetYaxis()->SetTitleSize(0.037);
   st_stack_140->GetYaxis()->SetTitleFont(42);
   st_stack_140->GetZaxis()->SetLabelFont(42);
   st_stack_140->GetZaxis()->SetTitleOffset(1);
   st_stack_140->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_140);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(1,0.4185094);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(2,1.421897);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(3,1.056447);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(4,0.5342705);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(5,0.339593);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(6,0.1873306);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(7,0.105936);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(8,0.07817375);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(9,0.06111523);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(10,0.03797916);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(11,0.03739209);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(12,0.02841686);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(13,0.01360754);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(14,0.02678958);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(15,0.02745134);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(16,0.02131956);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(17,0.005436264);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(18,0.0250201);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(19,0.007286531);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(20,0.006827286);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(21,0.002735007);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(1,0.03010683);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(2,0.05537153);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(3,0.0473152);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(4,0.03383407);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(5,0.02689267);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(6,0.0200495);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(7,0.01476496);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(8,0.01331451);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(9,0.01153083);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(10,0.009322145);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(11,0.008562681);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(12,0.0079928);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(13,0.005275152);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(14,0.007624981);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(15,0.007485665);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(16,0.006571134);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(17,0.003189589);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(18,0.007649166);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(19,0.004223559);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(20,0.003941735);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(21,0.002735007);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetEntries(2165);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetFillColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(1,0.09913983);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(2,0.4840134);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(3,0.3756255);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(4,0.2028466);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(5,0.1099777);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(6,0.05570273);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(7,0.0333733);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(8,0.02282675);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(9,0.01535559);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(10,0.01886935);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(11,0.009429708);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(12,0.008946285);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(13,0.01043329);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(14,0.008149632);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(15,0.009072442);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(16,0.00704272);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(17,0.007158947);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(18,0.004703747);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(19,0.006178528);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(20,0.001821444);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(21,0.001072134);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(1,0.005280084);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(2,0.01166672);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(3,0.01027797);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(4,0.007535653);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(5,0.00555896);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(6,0.003968745);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(7,0.003062473);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(8,0.002491605);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(9,0.002061572);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(10,0.002361759);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(11,0.001624949);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(12,0.001542074);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(13,0.001687338);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(14,0.001540457);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(15,0.001585188);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(16,0.001462809);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(17,0.001406289);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(18,0.001140497);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(19,0.001341638);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(20,0.0006989114);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(21,0.0005510293);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetEntries(5547);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetFillColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_algo_all->Modified();
   H_dR_Bj0_algo_all->cd();
   H_dR_Bj0_algo_all->SetSelected(H_dR_Bj0_algo_all);
}
