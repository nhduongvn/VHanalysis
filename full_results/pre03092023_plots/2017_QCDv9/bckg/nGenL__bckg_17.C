#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nGenL__bckg_17()
{
//=========Macro generated from canvas: nGenL__bckg_17/nGenL__bckg_17
//=========  (Fri Mar  3 13:54:53 2023) by ROOT version 6.26/06
   TCanvas *nGenL__bckg_17 = new TCanvas("nGenL__bckg_17", "nGenL__bckg_17",0,0,600,600);
   nGenL__bckg_17->SetHighLightColor(2);
   nGenL__bckg_17->Range(-2.683529,-0.1538462,11.21633,1.128205);
   nGenL__bckg_17->SetFillColor(0);
   nGenL__bckg_17->SetFillStyle(4000);
   nGenL__bckg_17->SetBorderMode(0);
   nGenL__bckg_17->SetBorderSize(2);
   nGenL__bckg_17->SetLeftMargin(0.15709);
   nGenL__bckg_17->SetRightMargin(0.1234783);
   nGenL__bckg_17->SetBottomMargin(0.12);
   nGenL__bckg_17->SetFrameFillStyle(1000);
   nGenL__bckg_17->SetFrameBorderMode(0);
   nGenL__bckg_17->SetFrameFillStyle(1000);
   nGenL__bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   
   TH1F *st_stack_10 = new TH1F("st_stack_10","",10,-0.5,9.5);
   st_stack_10->SetMinimum(0);
   st_stack_10->SetMaximum(0);
   st_stack_10->SetDirectory(0);
   st_stack_10->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_10->SetLineColor(ci);
   st_stack_10->GetXaxis()->SetTitle("Gen l-jet multiplicity");
   st_stack_10->GetXaxis()->SetLabelFont(42);
   st_stack_10->GetXaxis()->SetTitleOffset(1);
   st_stack_10->GetXaxis()->SetTitleFont(42);
   st_stack_10->GetYaxis()->SetTitle("Events/1.0");
   st_stack_10->GetYaxis()->SetLabelFont(42);
   st_stack_10->GetYaxis()->SetTitleSize(0.037);
   st_stack_10->GetYaxis()->SetTitleFont(42);
   st_stack_10->GetZaxis()->SetLabelFont(42);
   st_stack_10->GetZaxis()->SetTitleOffset(1);
   st_stack_10->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_10);
   
   
   TH1D *nGenL_stack_1 = new TH1D("nGenL_stack_1","",10,-0.5,9.5);

   ci = TColor::GetColor("#ff6600");
   nGenL_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenL_stack_1->SetLineColor(ci);
   nGenL_stack_1->GetXaxis()->SetRange(1,10);
   nGenL_stack_1->GetXaxis()->SetLabelFont(42);
   nGenL_stack_1->GetXaxis()->SetTitleOffset(1);
   nGenL_stack_1->GetXaxis()->SetTitleFont(42);
   nGenL_stack_1->GetYaxis()->SetLabelFont(42);
   nGenL_stack_1->GetYaxis()->SetTitleFont(42);
   nGenL_stack_1->GetZaxis()->SetLabelFont(42);
   nGenL_stack_1->GetZaxis()->SetTitleOffset(1);
   nGenL_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(nGenL_stack_1,"");
   
   TH1D *nGenL_stack_2 = new TH1D("nGenL_stack_2","",10,-0.5,9.5);

   ci = TColor::GetColor("#990099");
   nGenL_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenL_stack_2->SetLineColor(ci);
   nGenL_stack_2->GetXaxis()->SetRange(1,10);
   nGenL_stack_2->GetXaxis()->SetLabelFont(42);
   nGenL_stack_2->GetXaxis()->SetTitleOffset(1);
   nGenL_stack_2->GetXaxis()->SetTitleFont(42);
   nGenL_stack_2->GetYaxis()->SetLabelFont(42);
   nGenL_stack_2->GetYaxis()->SetTitleFont(42);
   nGenL_stack_2->GetZaxis()->SetLabelFont(42);
   nGenL_stack_2->GetZaxis()->SetTitleOffset(1);
   nGenL_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(nGenL_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("nGenL_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("nGenL_stack_1","QCD","F");

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
   nGenL__bckg_17->Modified();
   nGenL__bckg_17->cd();
   nGenL__bckg_17->SetSelected(nGenL__bckg_17);
}
