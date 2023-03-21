#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetpt_JEC_algo_17_logY()
{
//=========Macro generated from canvas: Z_jetpt_JEC_algo_17/Z_jetpt_JEC_algo_17
//=========  (Mon Mar 20 11:48:17 2023) by ROOT version 6.26/06
   TCanvas *Z_jetpt_JEC_algo_17 = new TCanvas("Z_jetpt_JEC_algo_17", "Z_jetpt_JEC_algo_17",0,0,600,600);
   Z_jetpt_JEC_algo_17->SetHighLightColor(2);
   Z_jetpt_JEC_algo_17->Range(-65.50587,-0.01605871,351.4899,0.04846356);
   Z_jetpt_JEC_algo_17->SetFillColor(0);
   Z_jetpt_JEC_algo_17->SetFillStyle(4000);
   Z_jetpt_JEC_algo_17->SetBorderMode(0);
   Z_jetpt_JEC_algo_17->SetBorderSize(2);
   Z_jetpt_JEC_algo_17->SetLogy();
   Z_jetpt_JEC_algo_17->SetLeftMargin(0.15709);
   Z_jetpt_JEC_algo_17->SetRightMargin(0.1234783);
   Z_jetpt_JEC_algo_17->SetBottomMargin(0.12);
   Z_jetpt_JEC_algo_17->SetFrameFillStyle(1000);
   Z_jetpt_JEC_algo_17->SetFrameBorderMode(0);
   Z_jetpt_JEC_algo_17->SetFrameFillStyle(1000);
   Z_jetpt_JEC_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(1.093115);
   
   TH1F *st_stack_182 = new TH1F("st_stack_182","",150,0,300);
   st_stack_182->SetMinimum(0.9810338);
   st_stack_182->SetMaximum(1.101568);
   st_stack_182->SetDirectory(0);
   st_stack_182->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_182->SetLineColor(ci);
   st_stack_182->GetXaxis()->SetTitle("b-jet p_{T} (w/ JEC) [GeV]");
   st_stack_182->GetXaxis()->SetRange(1,150);
   st_stack_182->GetXaxis()->SetLabelFont(42);
   st_stack_182->GetXaxis()->SetTitleOffset(1);
   st_stack_182->GetXaxis()->SetTitleFont(42);
   st_stack_182->GetYaxis()->SetTitle("Event/2.0 GeV");
   st_stack_182->GetYaxis()->SetLabelFont(42);
   st_stack_182->GetYaxis()->SetTitleSize(0.037);
   st_stack_182->GetYaxis()->SetTitleFont(42);
   st_stack_182->GetZaxis()->SetLabelFont(42);
   st_stack_182->GetZaxis()->SetTitleOffset(1);
   st_stack_182->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_182);
   
   
   TH1D *VbbHcc_algo_Z_jetpt_JEC_stack_1 = new TH1D("VbbHcc_algo_Z_jetpt_JEC_stack_1","",150,0,300);
   VbbHcc_algo_Z_jetpt_JEC_stack_1->SetBinContent(0,0.7354956);
   VbbHcc_algo_Z_jetpt_JEC_stack_1->SetBinContent(1,0.008720667);
   VbbHcc_algo_Z_jetpt_JEC_stack_1->SetBinContent(2,0.6791305);
   VbbHcc_algo_Z_jetpt_JEC_stack_1->SetBinContent(3,0.1214683);
   VbbHcc_algo_Z_jetpt_JEC_stack_1->SetBinError(0,0.03766137);
   VbbHcc_algo_Z_jetpt_JEC_stack_1->SetBinError(1,0.003940708);
   VbbHcc_algo_Z_jetpt_JEC_stack_1->SetBinError(2,0.03569351);
   VbbHcc_algo_Z_jetpt_JEC_stack_1->SetBinError(3,0.01550964);
   VbbHcc_algo_Z_jetpt_JEC_stack_1->SetEntries(919);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_jetpt_JEC_stack_1->SetFillColor(ci);
   VbbHcc_algo_Z_jetpt_JEC_stack_1->GetXaxis()->SetRange(1,300);
   VbbHcc_algo_Z_jetpt_JEC_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetpt_JEC_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetpt_JEC_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetpt_JEC_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetpt_JEC_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetpt_JEC_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetpt_JEC_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetpt_JEC_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_jetpt_JEC_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_jetpt_JEC_stack_2 = new TH1D("VbbHcc_algo_Z_jetpt_JEC_stack_2","",150,0,300);
   VbbHcc_algo_Z_jetpt_JEC_stack_2->SetBinContent(0,0.2795841);
   VbbHcc_algo_Z_jetpt_JEC_stack_2->SetBinContent(1,0.001467411);
   VbbHcc_algo_Z_jetpt_JEC_stack_2->SetBinContent(2,0.2281549);
   VbbHcc_algo_Z_jetpt_JEC_stack_2->SetBinContent(3,0.04822288);
   VbbHcc_algo_Z_jetpt_JEC_stack_2->SetBinError(0,0.008244094);
   VbbHcc_algo_Z_jetpt_JEC_stack_2->SetBinError(1,0.0005637715);
   VbbHcc_algo_Z_jetpt_JEC_stack_2->SetBinError(2,0.007389941);
   VbbHcc_algo_Z_jetpt_JEC_stack_2->SetBinError(3,0.003410533);
   VbbHcc_algo_Z_jetpt_JEC_stack_2->SetEntries(2405);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_jetpt_JEC_stack_2->SetFillColor(ci);
   VbbHcc_algo_Z_jetpt_JEC_stack_2->GetXaxis()->SetRange(1,300);
   VbbHcc_algo_Z_jetpt_JEC_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetpt_JEC_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetpt_JEC_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetpt_JEC_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetpt_JEC_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetpt_JEC_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetpt_JEC_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetpt_JEC_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_jetpt_JEC_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_jetpt_JEC_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_jetpt_JEC_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetpt_JEC_algo_17->Modified();
   Z_jetpt_JEC_algo_17->cd();
   Z_jetpt_JEC_algo_17->SetSelected(Z_jetpt_JEC_algo_17);
}
