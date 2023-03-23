#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_algo_all()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_all/H_dR_Bj0_algo_all
//=========  (Thu Mar 23 11:25:13 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_algo_all = new TCanvas("H_dR_Bj0_algo_all", "H_dR_Bj0_algo_all",0,0,600,600);
   H_dR_Bj0_algo_all->SetHighLightColor(2);
   H_dR_Bj0_algo_all->Range(-1.310117,-0.1602467,7.029799,1.175143);
   H_dR_Bj0_algo_all->SetFillColor(0);
   H_dR_Bj0_algo_all->SetFillStyle(4000);
   H_dR_Bj0_algo_all->SetBorderMode(0);
   H_dR_Bj0_algo_all->SetBorderSize(2);
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
   st->SetMaximum(1.041604);
   
   TH1F *st_stack_140 = new TH1F("st_stack_140","",30,0,6);
   st_stack_140->SetMinimum(0);
   st_stack_140->SetMaximum(1.041604);
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
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(1,0.1978861);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(2,0.6488637);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(3,0.3975478);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(4,0.1467177);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(5,0.09073498);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(6,0.03061184);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(7,0.01928007);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(8,0.01997558);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(9,0.01341831);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(10,0.01973931);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(11,0.01202728);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(12,0.005436264);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(1,0.02034488);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(2,0.0375866);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(3,0.02917502);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(4,0.01794327);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(5,0.01375571);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(6,0.007812142);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(7,0.006195275);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(8,0.006408067);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(9,0.005540201);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(10,0.006378292);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(11,0.005032895);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(12,0.003189589);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetEntries(781);

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
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(1,0.05410123);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(2,0.2156675);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(3,0.1302655);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(4,0.06360997);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(5,0.02827819);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(6,0.01586251);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(7,0.01023629);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(8,0.005810996);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(9,0.005395448);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(10,0.002386316);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(11,0.003032636);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(12,0.001729057);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(13,0.00170589);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(14,0.0003572658);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(18,0.0003572658);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(20,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(1,0.003849637);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(2,0.007759066);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(3,0.006070591);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(4,0.004260431);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(5,0.002803968);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(6,0.002112406);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(7,0.001715351);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(8,0.001206088);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(9,0.001203218);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(10,0.0008119212);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(11,0.0008592022);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(12,0.0007218493);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(13,0.0007014778);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(14,0.0003572658);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(18,0.0003572658);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(20,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetEntries(2012);

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
