#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nGenL_all__bckg_16_logY()
{
//=========Macro generated from canvas: nGenL_all__bckg_16/nGenL_all__bckg_16
//=========  (Mon Mar  6 10:58:23 2023) by ROOT version 6.26/06
   TCanvas *nGenL_all__bckg_16 = new TCanvas("nGenL_all__bckg_16", "nGenL_all__bckg_16",0,0,600,600);
   nGenL_all__bckg_16->SetHighLightColor(2);
   nGenL_all__bckg_16->Range(-3.775293,-0.513443,17.0745,13.50806);
   nGenL_all__bckg_16->SetFillColor(0);
   nGenL_all__bckg_16->SetFillStyle(4000);
   nGenL_all__bckg_16->SetBorderMode(0);
   nGenL_all__bckg_16->SetBorderSize(2);
   nGenL_all__bckg_16->SetLogy();
   nGenL_all__bckg_16->SetLeftMargin(0.15709);
   nGenL_all__bckg_16->SetRightMargin(0.1234783);
   nGenL_all__bckg_16->SetBottomMargin(0.12);
   nGenL_all__bckg_16->SetFrameFillStyle(1000);
   nGenL_all__bckg_16->SetFrameBorderMode(0);
   nGenL_all__bckg_16->SetFrameFillStyle(1000);
   nGenL_all__bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(86.36504);
   
   TH1F *st_stack_8 = new TH1F("st_stack_8","",15,-0.5,14.5);
   st_stack_8->SetMinimum(14.76175);
   st_stack_8->SetMaximum(1.276183e+12);
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
   
   
   TH1D *nGenL_all_stack_1 = new TH1D("nGenL_all_stack_1","",15,-0.5,14.5);
   nGenL_all_stack_1->SetBinContent(1,3.999385e+11);
   nGenL_all_stack_1->SetBinContent(2,4.340384e+11);
   nGenL_all_stack_1->SetBinContent(3,2.13958e+11);
   nGenL_all_stack_1->SetBinContent(4,7.524172e+10);
   nGenL_all_stack_1->SetBinContent(5,2.177229e+10);
   nGenL_all_stack_1->SetBinContent(6,5.724208e+09);
   nGenL_all_stack_1->SetBinContent(7,1.43409e+09);
   nGenL_all_stack_1->SetBinContent(8,3.562898e+08);
   nGenL_all_stack_1->SetBinContent(9,8.623381e+07);
   nGenL_all_stack_1->SetBinContent(10,2.107211e+07);
   nGenL_all_stack_1->SetBinContent(11,4938620);
   nGenL_all_stack_1->SetBinContent(12,1217540);
   nGenL_all_stack_1->SetBinContent(13,367337.4);
   nGenL_all_stack_1->SetBinContent(14,86256.43);
   nGenL_all_stack_1->SetBinContent(15,65573.63);
   nGenL_all_stack_1->SetBinContent(16,305.3939);
   nGenL_all_stack_1->SetBinError(1,9.236814e+07);
   nGenL_all_stack_1->SetBinError(2,9.5327e+07);
   nGenL_all_stack_1->SetBinError(3,6.642421e+07);
   nGenL_all_stack_1->SetBinError(4,3.909315e+07);
   nGenL_all_stack_1->SetBinError(5,2.086383e+07);
   nGenL_all_stack_1->SetBinError(6,1.062884e+07);
   nGenL_all_stack_1->SetBinError(7,5293172);
   nGenL_all_stack_1->SetBinError(8,2635515);
   nGenL_all_stack_1->SetBinError(9,1293687);
   nGenL_all_stack_1->SetBinError(10,637579.4);
   nGenL_all_stack_1->SetBinError(11,308655.6);
   nGenL_all_stack_1->SetBinError(12,150387.6);
   nGenL_all_stack_1->SetBinError(13,85631.71);
   nGenL_all_stack_1->SetBinError(14,38742.96);
   nGenL_all_stack_1->SetBinError(15,36142.84);
   nGenL_all_stack_1->SetBinError(16,278.7769);
   nGenL_all_stack_1->SetEntries(2.393713e+08);

   ci = TColor::GetColor("#ff6600");
   nGenL_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenL_all_stack_1->SetLineColor(ci);
   nGenL_all_stack_1->GetXaxis()->SetRange(1,15);
   nGenL_all_stack_1->GetXaxis()->SetLabelFont(42);
   nGenL_all_stack_1->GetXaxis()->SetTitleOffset(1);
   nGenL_all_stack_1->GetXaxis()->SetTitleFont(42);
   nGenL_all_stack_1->GetYaxis()->SetLabelFont(42);
   nGenL_all_stack_1->GetYaxis()->SetTitleFont(42);
   nGenL_all_stack_1->GetZaxis()->SetLabelFont(42);
   nGenL_all_stack_1->GetZaxis()->SetTitleOffset(1);
   nGenL_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(nGenL_all_stack_1,"");
   
   TH1D *nGenL_all_stack_2 = new TH1D("nGenL_all_stack_2","",15,-0.5,14.5);
   nGenL_all_stack_2->SetBinContent(1,188649.5);
   nGenL_all_stack_2->SetBinContent(2,2139999);
   nGenL_all_stack_2->SetBinContent(3,7406896);
   nGenL_all_stack_2->SetBinContent(4,9222805);
   nGenL_all_stack_2->SetBinContent(5,6314917);
   nGenL_all_stack_2->SetBinContent(6,2973876);
   nGenL_all_stack_2->SetBinContent(7,1113258);
   nGenL_all_stack_2->SetBinContent(8,359691);
   nGenL_all_stack_2->SetBinContent(9,105154.1);
   nGenL_all_stack_2->SetBinContent(10,28683.53);
   nGenL_all_stack_2->SetBinContent(11,7451.609);
   nGenL_all_stack_2->SetBinContent(12,1866.657);
   nGenL_all_stack_2->SetBinContent(13,451.4296);
   nGenL_all_stack_2->SetBinContent(14,108.606);
   nGenL_all_stack_2->SetBinContent(15,26.17643);
   nGenL_all_stack_2->SetBinContent(16,6.466356);
   nGenL_all_stack_2->SetBinError(1,101.9925);
   nGenL_all_stack_2->SetBinError(2,349.4387);
   nGenL_all_stack_2->SetBinError(3,664.1411);
   nGenL_all_stack_2->SetBinError(4,764.3552);
   nGenL_all_stack_2->SetBinError(5,647.5898);
   nGenL_all_stack_2->SetBinError(6,450.0751);
   nGenL_all_stack_2->SetBinError(7,277.3707);
   nGenL_all_stack_2->SetBinError(8,158.3553);
   nGenL_all_stack_2->SetBinError(9,85.86601);
   nGenL_all_stack_2->SetBinError(10,44.94195);
   nGenL_all_stack_2->SetBinError(11,22.93418);
   nGenL_all_stack_2->SetBinError(12,11.50504);
   nGenL_all_stack_2->SetBinError(13,5.682754);
   nGenL_all_stack_2->SetBinError(14,2.776524);
   nGenL_all_stack_2->SetBinError(15,1.372802);
   nGenL_all_stack_2->SetBinError(16,0.6724665);
   nGenL_all_stack_2->SetEntries(5.126171e+08);

   ci = TColor::GetColor("#990099");
   nGenL_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenL_all_stack_2->SetLineColor(ci);
   nGenL_all_stack_2->GetXaxis()->SetRange(1,15);
   nGenL_all_stack_2->GetXaxis()->SetLabelFont(42);
   nGenL_all_stack_2->GetXaxis()->SetTitleOffset(1);
   nGenL_all_stack_2->GetXaxis()->SetTitleFont(42);
   nGenL_all_stack_2->GetYaxis()->SetLabelFont(42);
   nGenL_all_stack_2->GetYaxis()->SetTitleFont(42);
   nGenL_all_stack_2->GetZaxis()->SetLabelFont(42);
   nGenL_all_stack_2->GetZaxis()->SetTitleOffset(1);
   nGenL_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(nGenL_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("nGenL_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("nGenL_all_stack_1","QCD","F");

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
   nGenL_all__bckg_16->Modified();
   nGenL_all__bckg_16->cd();
   nGenL_all__bckg_16->SetSelected(nGenL_all__bckg_16);
}
