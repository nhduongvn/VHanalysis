#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_both_all()
{
//=========Macro generated from canvas: H_pt_both_all/H_pt_both_all
//=========  (Thu Feb 16 10:35:20 2023) by ROOT version 6.26/06
   TCanvas *H_pt_both_all = new TCanvas("H_pt_both_all", "H_pt_both_all",0,0,600,600);
   H_pt_both_all->SetHighLightColor(2);
   H_pt_both_all->Range(37.97653,-1.011035,1705.96,7.414256);
   H_pt_both_all->SetFillColor(0);
   H_pt_both_all->SetFillStyle(4000);
   H_pt_both_all->SetBorderMode(0);
   H_pt_both_all->SetBorderSize(2);
   H_pt_both_all->SetLeftMargin(0.15709);
   H_pt_both_all->SetRightMargin(0.1234783);
   H_pt_both_all->SetBottomMargin(0.12);
   H_pt_both_all->SetFrameFillStyle(1000);
   H_pt_both_all->SetFrameBorderMode(0);
   H_pt_both_all->SetFrameFillStyle(1000);
   H_pt_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(6.571727);
   
   TH1F *st_stack_144 = new TH1F("st_stack_144","",40,0,2000);
   st_stack_144->SetMinimum(0);
   st_stack_144->SetMaximum(6.571727);
   st_stack_144->SetDirectory(0);
   st_stack_144->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_144->SetLineColor(ci);
   st_stack_144->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_144->GetXaxis()->SetRange(7,30);
   st_stack_144->GetXaxis()->SetLabelFont(42);
   st_stack_144->GetXaxis()->SetTitleOffset(1);
   st_stack_144->GetXaxis()->SetTitleFont(42);
   st_stack_144->GetYaxis()->SetTitle("Events/50.0");
   st_stack_144->GetYaxis()->SetLabelFont(42);
   st_stack_144->GetYaxis()->SetTitleSize(0.037);
   st_stack_144->GetYaxis()->SetTitleFont(42);
   st_stack_144->GetZaxis()->SetLabelFont(42);
   st_stack_144->GetZaxis()->SetTitleOffset(1);
   st_stack_144->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_144);
   
   
   TH1D *VbbHcc_both_H_pt_all_stack_1 = new TH1D("VbbHcc_both_H_pt_all_stack_1","",40,0,2000);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(1,1.881701);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(2,3.751235);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(3,4.381151);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(4,3.136316);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(5,2.073783);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(6,1.254553);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(7,0.7241924);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(8,0.4307272);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(9,0.2253049);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(10,0.1150951);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(11,0.04832234);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(12,0.03772192);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(13,0.02009004);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(14,0.009377362);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(15,0.006379813);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(16,0.01511962);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(17,0.003333383);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(18,0.001115582);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(19,0.004907163);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(20,0.001227937);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(23,0.002930821);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(24,0.002001313);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(1,0.06899996);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(2,0.1012555);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(3,0.1057993);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(4,0.0887171);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(5,0.08562859);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(6,0.06012229);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(7,0.04219492);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(8,0.03290559);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(9,0.02414739);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(10,0.01673999);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(11,0.01098986);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(12,0.009908075);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(13,0.007222637);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(14,0.004813529);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(15,0.003916946);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(16,0.007724475);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(17,0.003333383);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(18,0.001115582);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(19,0.00357586);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(20,0.001227937);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(23,0.002930821);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(24,0.002001313);
   VbbHcc_both_H_pt_all_stack_1->SetEntries(8153);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_pt_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_pt_all_stack_1->SetLineColor(ci);
   VbbHcc_both_H_pt_all_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_H_pt_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_pt_all_stack_1,"");
   
   TH1D *VbbHcc_both_H_pt_all_stack_2 = new TH1D("VbbHcc_both_H_pt_all_stack_2","",40,0,2000);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(1,0.6165477);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(2,1.358877);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(3,1.962699);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(4,1.683692);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(5,1.011269);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(6,0.5567289);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(7,0.2799848);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(8,0.1512585);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(9,0.07561462);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(10,0.03583446);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(11,0.01538881);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(12,0.01033837);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(13,0.004422587);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(14,0.002776977);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(16,0.0001728116);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(17,0.0003895316);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(19,0.0006273928);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(20,0.0004374943);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(23,0.0002225569);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(24,0.0002536154);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(1,0.01519061);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(2,0.02115047);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(3,0.02536777);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(4,0.02418552);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(5,0.01845592);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(6,0.01349543);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(7,0.00976979);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(8,0.007044401);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(9,0.004859093);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(10,0.003434497);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(11,0.002189695);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(12,0.001823716);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(13,0.001214662);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(14,0.0009269769);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(16,0.0001728116);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(17,0.0003895316);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(19,0.000455775);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(20,0.0004374943);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(23,0.0002225569);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(24,0.0002536154);
   VbbHcc_both_H_pt_all_stack_2->SetEntries(26049);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_pt_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_pt_all_stack_2->SetLineColor(ci);
   VbbHcc_both_H_pt_all_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_H_pt_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_pt_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_pt_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_pt_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_pt_both_all->Modified();
   H_pt_both_all->cd();
   H_pt_both_all->SetSelected(H_pt_both_all);
}
