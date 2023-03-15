#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nGenL__bckg_16()
{
//=========Macro generated from canvas: nGenL__bckg_16/nGenL__bckg_16
//=========  (Fri Mar  3 13:54:53 2023) by ROOT version 6.26/06
   TCanvas *nGenL__bckg_16 = new TCanvas("nGenL__bckg_16", "nGenL__bckg_16",0,0,600,600);
   nGenL__bckg_16->SetHighLightColor(2);
   nGenL__bckg_16->Range(-2.683529,-0.1538462,11.21633,1.128205);
   nGenL__bckg_16->SetFillColor(0);
   nGenL__bckg_16->SetFillStyle(4000);
   nGenL__bckg_16->SetBorderMode(0);
   nGenL__bckg_16->SetBorderSize(2);
   nGenL__bckg_16->SetLeftMargin(0.15709);
   nGenL__bckg_16->SetRightMargin(0.1234783);
   nGenL__bckg_16->SetBottomMargin(0.12);
   nGenL__bckg_16->SetFrameFillStyle(1000);
   nGenL__bckg_16->SetFrameBorderMode(0);
   nGenL__bckg_16->SetFrameFillStyle(1000);
   nGenL__bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   
   TH1F *st_stack_8 = new TH1F("st_stack_8","",10,-0.5,9.5);
   st_stack_8->SetMinimum(0);
   st_stack_8->SetMaximum(0);
   st_stack_8->SetDirectory(0);
   st_stack_8->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_8->SetLineColor(ci);
   st_stack_8->GetXaxis()->SetTitle("Gen l-jet multiplicity");
   st_stack_8->GetXaxis()->SetLabelFont(42);
   st_stack_8->GetXaxis()->SetTitleOffset(1);
   st_stack_8->GetXaxis()->SetTitleFont(42);
   st_stack_8->GetYaxis()->SetTitle("Events/1.0");
   st_stack_8->GetYaxis()->SetLabelFont(42);
   st_stack_8->GetYaxis()->SetTitleSize(0.037);
   st_stack_8->GetYaxis()->SetTitleFont(42);
   st_stack_8->GetZaxis()->SetLabelFont(42);
   st_stack_8->GetZaxis()->SetTitleOffset(1);
   st_stack_8->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_8);
   
   
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nGenL__bckg_16->Modified();
   nGenL__bckg_16->cd();
   nGenL__bckg_16->SetSelected(nGenL__bckg_16);
}
