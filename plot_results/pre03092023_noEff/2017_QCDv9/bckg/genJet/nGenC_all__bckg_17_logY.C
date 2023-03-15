#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nGenC_all__bckg_17_logY()
{
//=========Macro generated from canvas: nGenC_all__bckg_17/nGenC_all__bckg_17
//=========  (Mon Mar  6 10:58:23 2023) by ROOT version 6.26/06
   TCanvas *nGenC_all__bckg_17 = new TCanvas("nGenC_all__bckg_17", "nGenC_all__bckg_17",0,0,600,600);
   nGenC_all__bckg_17->SetHighLightColor(2);
   nGenC_all__bckg_17->Range(-3.775293,-1.716994,17.0745,14.13762);
   nGenC_all__bckg_17->SetFillColor(0);
   nGenC_all__bckg_17->SetFillStyle(4000);
   nGenC_all__bckg_17->SetBorderMode(0);
   nGenC_all__bckg_17->SetBorderSize(2);
   nGenC_all__bckg_17->SetLogy();
   nGenC_all__bckg_17->SetLeftMargin(0.15709);
   nGenC_all__bckg_17->SetRightMargin(0.1234783);
   nGenC_all__bckg_17->SetBottomMargin(0.12);
   nGenC_all__bckg_17->SetFrameFillStyle(1000);
   nGenC_all__bckg_17->SetFrameBorderMode(0);
   nGenC_all__bckg_17->SetFrameFillStyle(1000);
   nGenC_all__bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_22 = new TH1F("st_stack_22","",15,-0.5,14.5);
   st_stack_22->SetMinimum(1.533064);
   st_stack_22->SetMaximum(3.565837e+12);
   st_stack_22->SetDirectory(0);
   st_stack_22->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_22->SetLineColor(ci);
   st_stack_22->GetXaxis()->SetTitle("Gen c-jet multiplicity");
   st_stack_22->GetXaxis()->SetLabelFont(42);
   st_stack_22->GetXaxis()->SetTitleOffset(1);
   st_stack_22->GetXaxis()->SetTitleFont(42);
   st_stack_22->GetYaxis()->SetTitle("Events/1.0");
   st_stack_22->GetYaxis()->SetLabelFont(42);
   st_stack_22->GetYaxis()->SetTitleSize(0.037);
   st_stack_22->GetYaxis()->SetTitleFont(42);
   st_stack_22->GetZaxis()->SetLabelFont(42);
   st_stack_22->GetZaxis()->SetTitleOffset(1);
   st_stack_22->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_22);
   
   
   TH1D *nGenC_all_stack_1 = new TH1D("nGenC_all_stack_1","",15,-0.5,14.5);
   nGenC_all_stack_1->SetBinContent(1,1.111131e+12);
   nGenC_all_stack_1->SetBinContent(2,2.151873e+11);
   nGenC_all_stack_1->SetBinContent(3,7.16521e+10);
   nGenC_all_stack_1->SetBinContent(4,1.03103e+10);
   nGenC_all_stack_1->SetBinContent(5,1.6258e+09);
   nGenC_all_stack_1->SetBinContent(6,2.003462e+08);
   nGenC_all_stack_1->SetBinContent(7,2.465703e+07);
   nGenC_all_stack_1->SetBinContent(8,2730303);
   nGenC_all_stack_1->SetBinContent(9,292128.3);
   nGenC_all_stack_1->SetBinContent(10,11460.51);
   nGenC_all_stack_1->SetBinContent(11,989.87);
   nGenC_all_stack_1->SetBinContent(12,0.4762869);
   nGenC_all_stack_1->SetBinError(1,1.35826e+08);
   nGenC_all_stack_1->SetBinError(2,5.939531e+07);
   nGenC_all_stack_1->SetBinError(3,3.398775e+07);
   nGenC_all_stack_1->SetBinError(4,1.27392e+07);
   nGenC_all_stack_1->SetBinError(5,4978919);
   nGenC_all_stack_1->SetBinError(6,1719794);
   nGenC_all_stack_1->SetBinError(7,592718.8);
   nGenC_all_stack_1->SetBinError(8,194484.9);
   nGenC_all_stack_1->SetBinError(9,61186.95);
   nGenC_all_stack_1->SetBinError(10,3271.447);
   nGenC_all_stack_1->SetBinError(11,522.3419);
   nGenC_all_stack_1->SetBinError(12,0.4762869);
   nGenC_all_stack_1->SetEntries(2.975996e+08);

   ci = TColor::GetColor("#ff6600");
   nGenC_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenC_all_stack_1->SetLineColor(ci);
   nGenC_all_stack_1->GetXaxis()->SetRange(1,15);
   nGenC_all_stack_1->GetXaxis()->SetLabelFont(42);
   nGenC_all_stack_1->GetXaxis()->SetTitleOffset(1);
   nGenC_all_stack_1->GetXaxis()->SetTitleFont(42);
   nGenC_all_stack_1->GetYaxis()->SetLabelFont(42);
   nGenC_all_stack_1->GetYaxis()->SetTitleFont(42);
   nGenC_all_stack_1->GetZaxis()->SetLabelFont(42);
   nGenC_all_stack_1->GetZaxis()->SetTitleOffset(1);
   nGenC_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(nGenC_all_stack_1,"");
   
   TH1D *nGenC_all_stack_2 = new TH1D("nGenC_all_stack_2","",15,-0.5,14.5);
   nGenC_all_stack_2->SetBinContent(1,1.403364e+07);
   nGenC_all_stack_2->SetBinContent(2,1.506192e+07);
   nGenC_all_stack_2->SetBinContent(3,5724857);
   nGenC_all_stack_2->SetBinContent(4,1178903);
   nGenC_all_stack_2->SetBinContent(5,227170.5);
   nGenC_all_stack_2->SetBinContent(6,36989.17);
   nGenC_all_stack_2->SetBinContent(7,5679.743);
   nGenC_all_stack_2->SetBinContent(8,824.9279);
   nGenC_all_stack_2->SetBinContent(9,112.6663);
   nGenC_all_stack_2->SetBinContent(10,13.36558);
   nGenC_all_stack_2->SetBinContent(11,1.75747);
   nGenC_all_stack_2->SetBinContent(12,0.2258776);
   nGenC_all_stack_2->SetBinError(1,903.6179);
   nGenC_all_stack_2->SetBinError(2,1005.705);
   nGenC_all_stack_2->SetBinError(3,655.2126);
   nGenC_all_stack_2->SetBinError(4,297.1932);
   nGenC_all_stack_2->SetBinError(5,131.493);
   nGenC_all_stack_2->SetBinError(6,53.12155);
   nGenC_all_stack_2->SetBinError(7,20.85373);
   nGenC_all_stack_2->SetBinError(8,7.947258);
   nGenC_all_stack_2->SetBinError(9,2.947199);
   nGenC_all_stack_2->SetBinError(10,1.011823);
   nGenC_all_stack_2->SetBinError(11,0.3664686);
   nGenC_all_stack_2->SetBinError(12,0.1316658);
   nGenC_all_stack_2->SetEntries(6.301685e+08);

   ci = TColor::GetColor("#990099");
   nGenC_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenC_all_stack_2->SetLineColor(ci);
   nGenC_all_stack_2->GetXaxis()->SetRange(1,15);
   nGenC_all_stack_2->GetXaxis()->SetLabelFont(42);
   nGenC_all_stack_2->GetXaxis()->SetTitleOffset(1);
   nGenC_all_stack_2->GetXaxis()->SetTitleFont(42);
   nGenC_all_stack_2->GetYaxis()->SetLabelFont(42);
   nGenC_all_stack_2->GetYaxis()->SetTitleFont(42);
   nGenC_all_stack_2->GetZaxis()->SetLabelFont(42);
   nGenC_all_stack_2->GetZaxis()->SetTitleOffset(1);
   nGenC_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(nGenC_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("nGenC_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("nGenC_all_stack_1","QCD","F");

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
   nGenC_all__bckg_17->Modified();
   nGenC_all__bckg_17->cd();
   nGenC_all__bckg_17->SetSelected(nGenC_all__bckg_17);
}
