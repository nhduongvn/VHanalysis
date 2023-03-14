#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nGenJet__bckg_16()
{
//=========Macro generated from canvas: nGenJet__bckg_16/nGenJet__bckg_16
//=========  (Fri Mar  3 13:54:53 2023) by ROOT version 6.26/06
   TCanvas *nGenJet__bckg_16 = new TCanvas("nGenJet__bckg_16", "nGenJet__bckg_16",0,0,600,600);
   nGenJet__bckg_16->SetHighLightColor(2);
   nGenJet__bckg_16->Range(-3.775293,-0.1538462,17.0745,1.128205);
   nGenJet__bckg_16->SetFillColor(0);
   nGenJet__bckg_16->SetFillStyle(4000);
   nGenJet__bckg_16->SetBorderMode(0);
   nGenJet__bckg_16->SetBorderSize(2);
   nGenJet__bckg_16->SetLeftMargin(0.15709);
   nGenJet__bckg_16->SetRightMargin(0.1234783);
   nGenJet__bckg_16->SetBottomMargin(0.12);
   nGenJet__bckg_16->SetFrameFillStyle(1000);
   nGenJet__bckg_16->SetFrameBorderMode(0);
   nGenJet__bckg_16->SetFrameFillStyle(1000);
   nGenJet__bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   
   TH1F *st_stack_2 = new TH1F("st_stack_2","",15,-0.5,14.5);
   st_stack_2->SetMinimum(0);
   st_stack_2->SetMaximum(0);
   st_stack_2->SetDirectory(0);
   st_stack_2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_2->SetLineColor(ci);
   st_stack_2->GetXaxis()->SetTitle("Gen Jet multiplicity");
   st_stack_2->GetXaxis()->SetLabelFont(42);
   st_stack_2->GetXaxis()->SetTitleOffset(1);
   st_stack_2->GetXaxis()->SetTitleFont(42);
   st_stack_2->GetYaxis()->SetTitle("Events/1.0");
   st_stack_2->GetYaxis()->SetLabelFont(42);
   st_stack_2->GetYaxis()->SetTitleSize(0.037);
   st_stack_2->GetYaxis()->SetTitleFont(42);
   st_stack_2->GetZaxis()->SetLabelFont(42);
   st_stack_2->GetZaxis()->SetTitleOffset(1);
   st_stack_2->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_2);
   
   
   TH1D *nGenJet_stack_1 = new TH1D("nGenJet_stack_1","",15,-0.5,14.5);

   ci = TColor::GetColor("#ff6600");
   nGenJet_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenJet_stack_1->SetLineColor(ci);
   nGenJet_stack_1->GetXaxis()->SetRange(1,15);
   nGenJet_stack_1->GetXaxis()->SetLabelFont(42);
   nGenJet_stack_1->GetXaxis()->SetTitleOffset(1);
   nGenJet_stack_1->GetXaxis()->SetTitleFont(42);
   nGenJet_stack_1->GetYaxis()->SetLabelFont(42);
   nGenJet_stack_1->GetYaxis()->SetTitleFont(42);
   nGenJet_stack_1->GetZaxis()->SetLabelFont(42);
   nGenJet_stack_1->GetZaxis()->SetTitleOffset(1);
   nGenJet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(nGenJet_stack_1,"");
   
   TH1D *nGenJet_stack_2 = new TH1D("nGenJet_stack_2","",15,-0.5,14.5);

   ci = TColor::GetColor("#990099");
   nGenJet_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenJet_stack_2->SetLineColor(ci);
   nGenJet_stack_2->GetXaxis()->SetRange(1,15);
   nGenJet_stack_2->GetXaxis()->SetLabelFont(42);
   nGenJet_stack_2->GetXaxis()->SetTitleOffset(1);
   nGenJet_stack_2->GetXaxis()->SetTitleFont(42);
   nGenJet_stack_2->GetYaxis()->SetLabelFont(42);
   nGenJet_stack_2->GetYaxis()->SetTitleFont(42);
   nGenJet_stack_2->GetZaxis()->SetLabelFont(42);
   nGenJet_stack_2->GetZaxis()->SetTitleOffset(1);
   nGenJet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(nGenJet_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("nGenJet_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("nGenJet_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nGenJet__bckg_16->Modified();
   nGenJet__bckg_16->cd();
   nGenJet__bckg_16->SetSelected(nGenJet__bckg_16);
}
