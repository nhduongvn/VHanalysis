#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_JEC_algo_all_logY()
{
//=========Macro generated from canvas: Z_jetmass_JEC_algo_all/Z_jetmass_JEC_algo_all
//=========  (Mon Mar 20 11:48:17 2023) by ROOT version 6.26/06
   TCanvas *Z_jetmass_JEC_algo_all = new TCanvas("Z_jetmass_JEC_algo_all", "Z_jetmass_JEC_algo_all",0,0,600,600);
   Z_jetmass_JEC_algo_all->SetHighLightColor(2);
   Z_jetmass_JEC_algo_all->Range(-65.50587,-0.2772062,351.4899,0.9072304);
   Z_jetmass_JEC_algo_all->SetFillColor(0);
   Z_jetmass_JEC_algo_all->SetFillStyle(4000);
   Z_jetmass_JEC_algo_all->SetBorderMode(0);
   Z_jetmass_JEC_algo_all->SetBorderSize(2);
   Z_jetmass_JEC_algo_all->SetLogy();
   Z_jetmass_JEC_algo_all->SetLeftMargin(0.15709);
   Z_jetmass_JEC_algo_all->SetRightMargin(0.1234783);
   Z_jetmass_JEC_algo_all->SetBottomMargin(0.12);
   Z_jetmass_JEC_algo_all->SetFrameFillStyle(1000);
   Z_jetmass_JEC_algo_all->SetFrameBorderMode(0);
   Z_jetmass_JEC_algo_all->SetFrameFillStyle(1000);
   Z_jetmass_JEC_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(5.365746);
   
   TH1F *st_stack_192 = new TH1F("st_stack_192","",150,0,300);
   st_stack_192->SetMinimum(0.7327);
   st_stack_192->SetMaximum(6.148749);
   st_stack_192->SetDirectory(0);
   st_stack_192->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_192->SetLineColor(ci);
   st_stack_192->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   st_stack_192->GetXaxis()->SetRange(1,150);
   st_stack_192->GetXaxis()->SetLabelFont(42);
   st_stack_192->GetXaxis()->SetTitleOffset(1);
   st_stack_192->GetXaxis()->SetTitleFont(42);
   st_stack_192->GetYaxis()->SetTitle("Event/2.0 GeV");
   st_stack_192->GetYaxis()->SetLabelFont(42);
   st_stack_192->GetYaxis()->SetTitleSize(0.037);
   st_stack_192->GetYaxis()->SetTitleFont(42);
   st_stack_192->GetZaxis()->SetLabelFont(42);
   st_stack_192->GetZaxis()->SetTitleOffset(1);
   st_stack_192->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_192);
   
   
   TH1D *VbbHcc_algo_Z_jetmass_JEC_all_stack_1 = new TH1D("VbbHcc_algo_Z_jetmass_JEC_all_stack_1","",150,0,300);
   VbbHcc_algo_Z_jetmass_JEC_all_stack_1->SetBinContent(1,0.001576883);
   VbbHcc_algo_Z_jetmass_JEC_all_stack_1->SetBinContent(2,3.368945);
   VbbHcc_algo_Z_jetmass_JEC_all_stack_1->SetBinContent(3,1.358875);
   VbbHcc_algo_Z_jetmass_JEC_all_stack_1->SetBinError(1,0.001576883);
   VbbHcc_algo_Z_jetmass_JEC_all_stack_1->SetBinError(2,0.1003925);
   VbbHcc_algo_Z_jetmass_JEC_all_stack_1->SetBinError(3,0.05836748);
   VbbHcc_algo_Z_jetmass_JEC_all_stack_1->SetEntries(2165);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_jetmass_JEC_all_stack_1->SetFillColor(ci);
   VbbHcc_algo_Z_jetmass_JEC_all_stack_1->GetXaxis()->SetRange(1,300);
   VbbHcc_algo_Z_jetmass_JEC_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_JEC_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_JEC_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_JEC_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_JEC_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_jetmass_JEC_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_jetmass_JEC_all_stack_2 = new TH1D("VbbHcc_algo_Z_jetmass_JEC_all_stack_2","",150,0,300);
   VbbHcc_algo_Z_jetmass_JEC_all_stack_2->SetBinContent(2,1.084625);
   VbbHcc_algo_Z_jetmass_JEC_all_stack_2->SetBinContent(3,0.5742001);
   VbbHcc_algo_Z_jetmass_JEC_all_stack_2->SetBinError(2,0.01918775);
   VbbHcc_algo_Z_jetmass_JEC_all_stack_2->SetBinError(3,0.01388218);
   VbbHcc_algo_Z_jetmass_JEC_all_stack_2->SetEntries(5547);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_jetmass_JEC_all_stack_2->SetFillColor(ci);
   VbbHcc_algo_Z_jetmass_JEC_all_stack_2->GetXaxis()->SetRange(1,300);
   VbbHcc_algo_Z_jetmass_JEC_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_JEC_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_JEC_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_JEC_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_JEC_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_jetmass_JEC_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_jetmass_JEC_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_jetmass_JEC_all_stack_1","ZHcc","F");

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
   Z_jetmass_JEC_algo_all->Modified();
   Z_jetmass_JEC_algo_all->cd();
   Z_jetmass_JEC_algo_all->SetSelected(Z_jetmass_JEC_algo_all);
}
