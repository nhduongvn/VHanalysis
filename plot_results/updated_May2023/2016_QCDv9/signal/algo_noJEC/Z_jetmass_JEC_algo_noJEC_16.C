#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_JEC_algo_noJEC_16()
{
//=========Macro generated from canvas: Z_jetmass_JEC_algo_noJEC_16/Z_jetmass_JEC_algo_noJEC_16
//=========  (Thu May 25 11:52:41 2023) by ROOT version 6.26/06
   TCanvas *Z_jetmass_JEC_algo_noJEC_16 = new TCanvas("Z_jetmass_JEC_algo_noJEC_16", "Z_jetmass_JEC_algo_noJEC_16",0,0,600,600);
   Z_jetmass_JEC_algo_noJEC_16->SetHighLightColor(2);
   Z_jetmass_JEC_algo_noJEC_16->Range(-65.50587,-0.1634934,351.4899,1.198952);
   Z_jetmass_JEC_algo_noJEC_16->SetFillColor(0);
   Z_jetmass_JEC_algo_noJEC_16->SetFillStyle(4000);
   Z_jetmass_JEC_algo_noJEC_16->SetBorderMode(0);
   Z_jetmass_JEC_algo_noJEC_16->SetBorderSize(2);
   Z_jetmass_JEC_algo_noJEC_16->SetLeftMargin(0.15709);
   Z_jetmass_JEC_algo_noJEC_16->SetRightMargin(0.1234783);
   Z_jetmass_JEC_algo_noJEC_16->SetBottomMargin(0.12);
   Z_jetmass_JEC_algo_noJEC_16->SetFrameFillStyle(1000);
   Z_jetmass_JEC_algo_noJEC_16->SetFrameBorderMode(0);
   Z_jetmass_JEC_algo_noJEC_16->SetFrameFillStyle(1000);
   Z_jetmass_JEC_algo_noJEC_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.062707);
   
   TH1F *st_stack_144 = new TH1F("st_stack_144","",150,0,300);
   st_stack_144->SetMinimum(0);
   st_stack_144->SetMaximum(1.062707);
   st_stack_144->SetDirectory(0);
   st_stack_144->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_144->SetLineColor(ci);
   st_stack_144->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   st_stack_144->GetXaxis()->SetRange(1,150);
   st_stack_144->GetXaxis()->SetLabelFont(42);
   st_stack_144->GetXaxis()->SetTitleOffset(1);
   st_stack_144->GetXaxis()->SetTitleFont(42);
   st_stack_144->GetYaxis()->SetTitle("Event/2.0 GeV");
   st_stack_144->GetYaxis()->SetLabelFont(42);
   st_stack_144->GetYaxis()->SetTitleSize(0.037);
   st_stack_144->GetYaxis()->SetTitleFont(42);
   st_stack_144->GetZaxis()->SetLabelFont(42);
   st_stack_144->GetZaxis()->SetTitleOffset(1);
   st_stack_144->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_144);
   
   
   TH1D *VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_1 = new TH1D("VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_1","",150,0,300);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_1->SetBinContent(2,0.6708204);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_1->SetBinContent(3,0.2869799);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_1->SetBinError(2,0.04476983);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_1->SetBinError(3,0.02935466);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_1->SetEntries(339);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_1->SetFillColor(ci);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_1->GetXaxis()->SetRange(1,300);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_1,"");
   
   TH1D *VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_2 = new TH1D("VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_2","",150,0,300);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_2->SetBinContent(2,0.2112267);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_2->SetBinContent(3,0.1220968);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_2->SetBinError(2,0.009004458);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_2->SetBinError(3,0.006848452);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_2->SetEntries(884);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_2->SetFillColor(ci);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_2->GetXaxis()->SetRange(1,300);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_noJEC_Z_jetmass_JEC_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_algo_noJEC_16->Modified();
   Z_jetmass_JEC_algo_noJEC_16->cd();
   Z_jetmass_JEC_algo_noJEC_16->SetSelected(Z_jetmass_JEC_algo_noJEC_16);
}
