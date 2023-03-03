#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nGenGlu__bckg_17_logY()
{
//=========Macro generated from canvas: nGenGlu__bckg_17/nGenGlu__bckg_17
//=========  (Fri Mar  3 13:54:36 2023) by ROOT version 6.26/06
   TCanvas *nGenGlu__bckg_17 = new TCanvas("nGenGlu__bckg_17", "nGenGlu__bckg_17",0,0,600,600);
   nGenGlu__bckg_17->SetHighLightColor(2);
   nGenGlu__bckg_17->Range(-2.683529,-nan,11.21633,-nan);
   nGenGlu__bckg_17->SetFillColor(0);
   nGenGlu__bckg_17->SetFillStyle(4000);
   nGenGlu__bckg_17->SetBorderMode(0);
   nGenGlu__bckg_17->SetBorderSize(2);
   nGenGlu__bckg_17->SetLogy();
   nGenGlu__bckg_17->SetLeftMargin(0.15709);
   nGenGlu__bckg_17->SetRightMargin(0.1234783);
   nGenGlu__bckg_17->SetBottomMargin(0.12);
   nGenGlu__bckg_17->SetFrameFillStyle(1000);
   nGenGlu__bckg_17->SetFrameBorderMode(0);
   nGenGlu__bckg_17->SetFrameFillStyle(1000);
   nGenGlu__bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_28 = new TH1F("st_stack_28","",10,-0.5,9.5);
   st_stack_28->SetMinimum(-0);
   st_stack_28->SetMaximum(-nan);
   st_stack_28->SetDirectory(0);
   st_stack_28->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_28->SetLineColor(ci);
   st_stack_28->GetXaxis()->SetTitle("Gen gluon jet multiplicity");
   st_stack_28->GetXaxis()->SetLabelFont(42);
   st_stack_28->GetXaxis()->SetTitleOffset(1);
   st_stack_28->GetXaxis()->SetTitleFont(42);
   st_stack_28->GetYaxis()->SetTitle("Events/1.0");
   st_stack_28->GetYaxis()->SetLabelFont(42);
   st_stack_28->GetYaxis()->SetTitleSize(0.037);
   st_stack_28->GetYaxis()->SetTitleFont(42);
   st_stack_28->GetZaxis()->SetLabelFont(42);
   st_stack_28->GetZaxis()->SetTitleOffset(1);
   st_stack_28->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_28);
   
   
   TH1D *nGenGlu_stack_1 = new TH1D("nGenGlu_stack_1","",10,-0.5,9.5);

   ci = TColor::GetColor("#ff6600");
   nGenGlu_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenGlu_stack_1->SetLineColor(ci);
   nGenGlu_stack_1->GetXaxis()->SetRange(1,10);
   nGenGlu_stack_1->GetXaxis()->SetLabelFont(42);
   nGenGlu_stack_1->GetXaxis()->SetTitleOffset(1);
   nGenGlu_stack_1->GetXaxis()->SetTitleFont(42);
   nGenGlu_stack_1->GetYaxis()->SetLabelFont(42);
   nGenGlu_stack_1->GetYaxis()->SetTitleFont(42);
   nGenGlu_stack_1->GetZaxis()->SetLabelFont(42);
   nGenGlu_stack_1->GetZaxis()->SetTitleOffset(1);
   nGenGlu_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(nGenGlu_stack_1,"");
   
   TH1D *nGenGlu_stack_2 = new TH1D("nGenGlu_stack_2","",10,-0.5,9.5);

   ci = TColor::GetColor("#990099");
   nGenGlu_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenGlu_stack_2->SetLineColor(ci);
   nGenGlu_stack_2->GetXaxis()->SetRange(1,10);
   nGenGlu_stack_2->GetXaxis()->SetLabelFont(42);
   nGenGlu_stack_2->GetXaxis()->SetTitleOffset(1);
   nGenGlu_stack_2->GetXaxis()->SetTitleFont(42);
   nGenGlu_stack_2->GetYaxis()->SetLabelFont(42);
   nGenGlu_stack_2->GetYaxis()->SetTitleFont(42);
   nGenGlu_stack_2->GetZaxis()->SetLabelFont(42);
   nGenGlu_stack_2->GetZaxis()->SetTitleOffset(1);
   nGenGlu_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(nGenGlu_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("nGenGlu_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("nGenGlu_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nGenGlu__bckg_17->Modified();
   nGenGlu__bckg_17->cd();
   nGenGlu__bckg_17->SetSelected(nGenGlu__bckg_17);
}
