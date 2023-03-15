#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_VbbHcc_eta_bckg_18()
{
//=========Macro generated from canvas: GenJet_VbbHcc_eta_bckg_18/GenJet_VbbHcc_eta_bckg_18
//=========  (Thu Mar  9 15:52:39 2023) by ROOT version 6.26/06
   TCanvas *GenJet_VbbHcc_eta_bckg_18 = new TCanvas("GenJet_VbbHcc_eta_bckg_18", "GenJet_VbbHcc_eta_bckg_18",0,0,600,600);
   GenJet_VbbHcc_eta_bckg_18->SetHighLightColor(2);
   GenJet_VbbHcc_eta_bckg_18->Range(-3.591764,-0.1538462,3.358166,1.128205);
   GenJet_VbbHcc_eta_bckg_18->SetFillColor(0);
   GenJet_VbbHcc_eta_bckg_18->SetFillStyle(4000);
   GenJet_VbbHcc_eta_bckg_18->SetBorderMode(0);
   GenJet_VbbHcc_eta_bckg_18->SetBorderSize(2);
   GenJet_VbbHcc_eta_bckg_18->SetLeftMargin(0.15709);
   GenJet_VbbHcc_eta_bckg_18->SetRightMargin(0.1234783);
   GenJet_VbbHcc_eta_bckg_18->SetBottomMargin(0.12);
   GenJet_VbbHcc_eta_bckg_18->SetFrameFillStyle(1000);
   GenJet_VbbHcc_eta_bckg_18->SetFrameBorderMode(0);
   GenJet_VbbHcc_eta_bckg_18->SetFrameFillStyle(1000);
   GenJet_VbbHcc_eta_bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0);
   
   TH1F *st_stack_186 = new TH1F("st_stack_186","",250,-2.5,2.5);
   st_stack_186->SetMinimum(0);
   st_stack_186->SetMaximum(0);
   st_stack_186->SetDirectory(0);
   st_stack_186->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_186->SetLineColor(ci);
   st_stack_186->GetXaxis()->SetTitle("#eta");
   st_stack_186->GetXaxis()->SetLabelFont(42);
   st_stack_186->GetXaxis()->SetTitleOffset(1);
   st_stack_186->GetXaxis()->SetTitleFont(42);
   st_stack_186->GetYaxis()->SetTitle("Event/0.02");
   st_stack_186->GetYaxis()->SetLabelFont(42);
   st_stack_186->GetYaxis()->SetTitleSize(0.037);
   st_stack_186->GetYaxis()->SetTitleFont(42);
   st_stack_186->GetZaxis()->SetLabelFont(42);
   st_stack_186->GetZaxis()->SetTitleOffset(1);
   st_stack_186->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_186);
   
   
   TH1D *GenJet_VbbHcc_eta_stack_1 = new TH1D("GenJet_VbbHcc_eta_stack_1","",250,-2.5,2.5);

   ci = TColor::GetColor("#ff6600");
   GenJet_VbbHcc_eta_stack_1->SetFillColor(ci);
   GenJet_VbbHcc_eta_stack_1->GetXaxis()->SetRange(1,500);
   GenJet_VbbHcc_eta_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_VbbHcc_eta_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_eta_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_VbbHcc_eta_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_VbbHcc_eta_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_VbbHcc_eta_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_VbbHcc_eta_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_eta_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_VbbHcc_eta_stack_1,"");
   
   TH1D *GenJet_VbbHcc_eta_stack_2 = new TH1D("GenJet_VbbHcc_eta_stack_2","",250,-2.5,2.5);

   ci = TColor::GetColor("#990099");
   GenJet_VbbHcc_eta_stack_2->SetFillColor(ci);
   GenJet_VbbHcc_eta_stack_2->GetXaxis()->SetRange(1,500);
   GenJet_VbbHcc_eta_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_VbbHcc_eta_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_eta_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_VbbHcc_eta_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_VbbHcc_eta_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_VbbHcc_eta_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_VbbHcc_eta_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_eta_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_VbbHcc_eta_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_VbbHcc_eta_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("GenJet_VbbHcc_eta_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   GenJet_VbbHcc_eta_bckg_18->Modified();
   GenJet_VbbHcc_eta_bckg_18->cd();
   GenJet_VbbHcc_eta_bckg_18->SetSelected(GenJet_VbbHcc_eta_bckg_18);
}
