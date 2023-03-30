void H_jetmass_JEC_algo_noJEC_16()
{
//=========Macro generated from canvas: H_jetmass_JEC_algo_noJEC_16/H_jetmass_JEC_algo_noJEC_16
//=========  (Thu Mar 30 10:44:37 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_JEC_algo_noJEC_16 = new TCanvas("H_jetmass_JEC_algo_noJEC_16", "H_jetmass_JEC_algo_noJEC_16",0,0,600,600);
   H_jetmass_JEC_algo_noJEC_16->SetHighLightColor(2);
   H_jetmass_JEC_algo_noJEC_16->Range(-65.50587,-0.1716681,351.4899,1.258899);
   H_jetmass_JEC_algo_noJEC_16->SetFillColor(0);
   H_jetmass_JEC_algo_noJEC_16->SetFillStyle(4000);
   H_jetmass_JEC_algo_noJEC_16->SetBorderMode(0);
   H_jetmass_JEC_algo_noJEC_16->SetBorderSize(2);
   H_jetmass_JEC_algo_noJEC_16->SetLeftMargin(0.15709);
   H_jetmass_JEC_algo_noJEC_16->SetRightMargin(0.1234783);
   H_jetmass_JEC_algo_noJEC_16->SetBottomMargin(0.12);
   H_jetmass_JEC_algo_noJEC_16->SetFrameFillStyle(1000);
   H_jetmass_JEC_algo_noJEC_16->SetFrameBorderMode(0);
   H_jetmass_JEC_algo_noJEC_16->SetFrameFillStyle(1000);
   H_jetmass_JEC_algo_noJEC_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.062707);
   
   TH1F *st_stack_557 = new TH1F("st_stack_557","",150,0,300);
   st_stack_557->SetMinimum(0);
   st_stack_557->SetMaximum(1.115843);
   st_stack_557->SetDirectory(0);
   st_stack_557->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_557->SetLineColor(ci);
   st_stack_557->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   st_stack_557->GetXaxis()->SetRange(1,150);
   st_stack_557->GetXaxis()->SetLabelFont(42);
   st_stack_557->GetXaxis()->SetLabelSize(0.035);
   st_stack_557->GetXaxis()->SetTitleSize(0.035);
   st_stack_557->GetXaxis()->SetTitleFont(42);
   st_stack_557->GetYaxis()->SetTitle("Event/2.0 GeV");
   st_stack_557->GetYaxis()->SetLabelFont(42);
   st_stack_557->GetYaxis()->SetLabelSize(0.035);
   st_stack_557->GetYaxis()->SetTitleSize(0.037);
   st_stack_557->GetYaxis()->SetTitleOffset(0);
   st_stack_557->GetYaxis()->SetTitleFont(42);
   st_stack_557->GetZaxis()->SetLabelFont(42);
   st_stack_557->GetZaxis()->SetLabelSize(0.035);
   st_stack_557->GetZaxis()->SetTitleSize(0.035);
   st_stack_557->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_557);
   
   
   TH1D *VbbHcc_algo_noJEC_H_jetmass_JEC_stack_1 = new TH1D("VbbHcc_algo_noJEC_H_jetmass_JEC_stack_1","",150,0,300);
   VbbHcc_algo_noJEC_H_jetmass_JEC_stack_1->SetBinContent(2,0.6708204);
   VbbHcc_algo_noJEC_H_jetmass_JEC_stack_1->SetBinContent(3,0.2869799);
   VbbHcc_algo_noJEC_H_jetmass_JEC_stack_1->SetBinError(2,0.04476983);
   VbbHcc_algo_noJEC_H_jetmass_JEC_stack_1->SetBinError(3,0.02935466);
   VbbHcc_algo_noJEC_H_jetmass_JEC_stack_1->SetEntries(339);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_noJEC_H_jetmass_JEC_stack_1->SetFillColor(ci);
   VbbHcc_algo_noJEC_H_jetmass_JEC_stack_1->GetXaxis()->SetRange(1,300);
   VbbHcc_algo_noJEC_H_jetmass_JEC_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_noJEC_H_jetmass_JEC_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_noJEC_H_jetmass_JEC_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_noJEC_H_jetmass_JEC_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_noJEC_H_jetmass_JEC_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_noJEC_H_jetmass_JEC_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_noJEC_H_jetmass_JEC_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_noJEC_H_jetmass_JEC_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_noJEC_H_jetmass_JEC_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_noJEC_H_jetmass_JEC_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_noJEC_H_jetmass_JEC_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_noJEC_H_jetmass_JEC_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_noJEC_H_jetmass_JEC_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_noJEC_H_jetmass_JEC_stack_1,"");
   
   TH1D *VbbHcc_algo_noJEC_H_jetmass_JEC_stack_2 = new TH1D("VbbHcc_algo_noJEC_H_jetmass_JEC_stack_2","",150,0,300);
   VbbHcc_algo_noJEC_H_jetmass_JEC_stack_2->SetBinContent(2,0.2112267);
   VbbHcc_algo_noJEC_H_jetmass_JEC_stack_2->SetBinContent(3,0.1220968);
   VbbHcc_algo_noJEC_H_jetmass_JEC_stack_2->SetBinError(2,0.009004458);
   VbbHcc_algo_noJEC_H_jetmass_JEC_stack_2->SetBinError(3,0.006848452);
   VbbHcc_algo_noJEC_H_jetmass_JEC_stack_2->SetEntries(884);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_noJEC_H_jetmass_JEC_stack_2->SetFillColor(ci);
   VbbHcc_algo_noJEC_H_jetmass_JEC_stack_2->GetXaxis()->SetRange(1,300);
   VbbHcc_algo_noJEC_H_jetmass_JEC_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_noJEC_H_jetmass_JEC_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_noJEC_H_jetmass_JEC_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_noJEC_H_jetmass_JEC_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_noJEC_H_jetmass_JEC_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_noJEC_H_jetmass_JEC_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_noJEC_H_jetmass_JEC_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_noJEC_H_jetmass_JEC_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_noJEC_H_jetmass_JEC_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_noJEC_H_jetmass_JEC_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_noJEC_H_jetmass_JEC_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_noJEC_H_jetmass_JEC_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_noJEC_H_jetmass_JEC_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_noJEC_H_jetmass_JEC_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_noJEC_H_jetmass_JEC_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_noJEC_H_jetmass_JEC_stack_1","ZHcc","F");

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
   H_jetmass_JEC_algo_noJEC_16->Modified();
   H_jetmass_JEC_algo_noJEC_16->cd();
   H_jetmass_JEC_algo_noJEC_16->SetSelected(H_jetmass_JEC_algo_noJEC_16);
}
