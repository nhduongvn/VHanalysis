#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_jets_all_16()
{
//=========Macro generated from canvas: nC_medium_jets_all_16/nC_medium_jets_all_16
//=========  (Mon Dec 19 11:03:48 2022) by ROOT version 6.26/06
   TCanvas *nC_medium_jets_all_16 = new TCanvas("nC_medium_jets_all_16", "nC_medium_jets_all_16",0,0,600,600);
   nC_medium_jets_all_16->SetHighLightColor(2);
   nC_medium_jets_all_16->Range(-2.683529,-58.94271,11.21633,432.2465);
   nC_medium_jets_all_16->SetFillColor(0);
   nC_medium_jets_all_16->SetFillStyle(4000);
   nC_medium_jets_all_16->SetBorderMode(0);
   nC_medium_jets_all_16->SetBorderSize(2);
   nC_medium_jets_all_16->SetLeftMargin(0.15709);
   nC_medium_jets_all_16->SetRightMargin(0.1234783);
   nC_medium_jets_all_16->SetBottomMargin(0.12);
   nC_medium_jets_all_16->SetFrameFillStyle(1000);
   nC_medium_jets_all_16->SetFrameBorderMode(0);
   nC_medium_jets_all_16->SetFrameFillStyle(1000);
   nC_medium_jets_all_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(383.1276);
   
   TH1F *st_stack_125 = new TH1F("st_stack_125","",10,-0.5,9.5);
   st_stack_125->SetMinimum(0);
   st_stack_125->SetMaximum(383.1276);
   st_stack_125->SetDirectory(0);
   st_stack_125->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_125->SetLineColor(ci);
   st_stack_125->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   st_stack_125->GetXaxis()->SetRange(1,10);
   st_stack_125->GetXaxis()->SetLabelFont(42);
   st_stack_125->GetXaxis()->SetTitleOffset(1);
   st_stack_125->GetXaxis()->SetTitleFont(42);
   st_stack_125->GetYaxis()->SetTitle("Events/1.0");
   st_stack_125->GetYaxis()->SetLabelFont(42);
   st_stack_125->GetYaxis()->SetTitleSize(0.037);
   st_stack_125->GetYaxis()->SetTitleFont(42);
   st_stack_125->GetZaxis()->SetLabelFont(42);
   st_stack_125->GetZaxis()->SetTitleOffset(1);
   st_stack_125->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_125);
   
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_1 = new TH1D("VbbHcc_jets_all_nC_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(1,112.954);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(2,227.0936);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(3,187.9781);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(4,78.5842);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(5,18.09631);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(6,2.435455);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(7,0.2156053);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(8,0.01980236);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(1,0.4324265);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(2,0.6075181);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(3,0.5483755);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(4,0.3524189);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(5,0.167797);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(6,0.06101601);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(7,0.01773696);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(8,0.005354176);
   VbbHcc_jets_all_nC_medium_stack_1->SetEntries(472445);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_nC_medium_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_2 = new TH1D("VbbHcc_jets_all_nC_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(1,10.60135);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(2,28.32482);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(3,28.78168);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(4,14.61145);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(5,3.966178);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(6,0.5364033);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(7,0.02624215);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(1,0.04495094);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(2,0.07338981);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(3,0.07383398);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(4,0.05247297);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(5,0.02725604);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(6,0.009999518);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(7,0.002200283);
   VbbHcc_jets_all_nC_medium_stack_2->SetEntries(492720);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_nC_medium_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_stack_1","ZHcc","F");

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
   nC_medium_jets_all_16->Modified();
   nC_medium_jets_all_16->cd();
   nC_medium_jets_all_16->SetSelected(nC_medium_jets_all_16);
}
