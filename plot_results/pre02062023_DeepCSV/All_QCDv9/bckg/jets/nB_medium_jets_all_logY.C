#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_jets_all_logY()
{
//=========Macro generated from canvas: nB_medium_jets_all/nB_medium_jets_all
//=========  (Mon Dec 19 11:02:03 2022) by ROOT version 6.26/06
   TCanvas *nB_medium_jets_all = new TCanvas("nB_medium_jets_all", "nB_medium_jets_all",0,0,600,600);
   nB_medium_jets_all->SetHighLightColor(2);
   nB_medium_jets_all->Range(-2.683529,-2.216261,11.21633,17.14343);
   nB_medium_jets_all->SetFillColor(0);
   nB_medium_jets_all->SetFillStyle(4000);
   nB_medium_jets_all->SetBorderMode(0);
   nB_medium_jets_all->SetBorderSize(2);
   nB_medium_jets_all->SetLogy();
   nB_medium_jets_all->SetLeftMargin(0.15709);
   nB_medium_jets_all->SetRightMargin(0.1234783);
   nB_medium_jets_all->SetBottomMargin(0.12);
   nB_medium_jets_all->SetFrameFillStyle(1000);
   nB_medium_jets_all->SetFrameBorderMode(0);
   nB_medium_jets_all->SetFrameFillStyle(1000);
   nB_medium_jets_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(4.325938e+14);
   
   TH1F *st_stack_20 = new TH1F("st_stack_20","",10,-0.5,9.5);
   st_stack_20->SetMinimum(1.279093);
   st_stack_20->SetMaximum(1.612371e+15);
   st_stack_20->SetDirectory(0);
   st_stack_20->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_20->SetLineColor(ci);
   st_stack_20->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   st_stack_20->GetXaxis()->SetRange(1,10);
   st_stack_20->GetXaxis()->SetLabelFont(42);
   st_stack_20->GetXaxis()->SetTitleOffset(1);
   st_stack_20->GetXaxis()->SetTitleFont(42);
   st_stack_20->GetYaxis()->SetTitle("Events/1.0");
   st_stack_20->GetYaxis()->SetLabelFont(42);
   st_stack_20->GetYaxis()->SetTitleSize(0.037);
   st_stack_20->GetYaxis()->SetTitleFont(42);
   st_stack_20->GetZaxis()->SetLabelFont(42);
   st_stack_20->GetZaxis()->SetTitleOffset(1);
   st_stack_20->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_20);
   
   
   TH1D *VbbHcc_jets_nB_medium_all_stack_1 = new TH1D("VbbHcc_jets_nB_medium_all_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_all_stack_1->SetBinContent(1,4.325921e+12);
   VbbHcc_jets_nB_medium_all_stack_1->SetBinContent(2,2.644553e+11);
   VbbHcc_jets_nB_medium_all_stack_1->SetBinContent(3,1.617375e+10);
   VbbHcc_jets_nB_medium_all_stack_1->SetBinContent(4,3.357339e+08);
   VbbHcc_jets_nB_medium_all_stack_1->SetBinContent(5,9293211);
   VbbHcc_jets_nB_medium_all_stack_1->SetBinContent(6,181983.6);
   VbbHcc_jets_nB_medium_all_stack_1->SetBinContent(7,2692.417);
   VbbHcc_jets_nB_medium_all_stack_1->SetBinContent(8,68.20896);
   VbbHcc_jets_nB_medium_all_stack_1->SetBinError(1,3.076187e+08);
   VbbHcc_jets_nB_medium_all_stack_1->SetBinError(2,7.382069e+07);
   VbbHcc_jets_nB_medium_all_stack_1->SetBinError(3,1.71409e+07);
   VbbHcc_jets_nB_medium_all_stack_1->SetBinError(4,2003227);
   VbbHcc_jets_nB_medium_all_stack_1->SetBinError(5,250447.8);
   VbbHcc_jets_nB_medium_all_stack_1->SetBinError(6,21238.24);
   VbbHcc_jets_nB_medium_all_stack_1->SetBinError(7,537.1648);
   VbbHcc_jets_nB_medium_all_stack_1->SetBinError(8,35.09547);
   VbbHcc_jets_nB_medium_all_stack_1->SetEntries(8.490771e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_nB_medium_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nB_medium_all_stack_1->SetLineColor(ci);
   VbbHcc_jets_nB_medium_all_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nB_medium_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nB_medium_all_stack_1,"");
   
   TH1D *VbbHcc_jets_nB_medium_all_stack_2 = new TH1D("VbbHcc_jets_nB_medium_all_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinContent(1,1.746271e+07);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinContent(2,5.269619e+07);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinContent(3,4.383344e+07);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinContent(4,5489957);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinContent(5,343181);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinContent(6,17316.84);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinContent(7,912.9599);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinContent(8,57.03665);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinContent(9,4.552883);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinContent(10,0.8287257);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinContent(11,0.06803299);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinError(1,1152.382);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinError(2,2013.504);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinError(3,1849.323);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinError(4,670.6448);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinError(5,169.5534);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinError(6,37.95599);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinError(7,8.769784);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinError(8,2.198597);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinError(9,0.7092325);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinError(10,0.2640943);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinError(11,0.06803299);
   VbbHcc_jets_nB_medium_all_stack_2->SetEntries(1.869087e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_nB_medium_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nB_medium_all_stack_2->SetLineColor(ci);
   VbbHcc_jets_nB_medium_all_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nB_medium_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nB_medium_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nB_medium_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nB_medium_all_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_jets_all->Modified();
   nB_medium_jets_all->cd();
   nB_medium_jets_all->SetSelected(nB_medium_jets_all);
}
