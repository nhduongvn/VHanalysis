#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nGenC_all__bckg_16_logY()
{
//=========Macro generated from canvas: nGenC_all__bckg_16/nGenC_all__bckg_16
//=========  (Mon Mar  6 10:58:23 2023) by ROOT version 6.26/06
   TCanvas *nGenC_all__bckg_16 = new TCanvas("nGenC_all__bckg_16", "nGenC_all__bckg_16",0,0,600,600);
   nGenC_all__bckg_16->SetHighLightColor(2);
   nGenC_all__bckg_16->Range(-3.775293,-1.699761,17.0745,14.03565);
   nGenC_all__bckg_16->SetFillColor(0);
   nGenC_all__bckg_16->SetFillStyle(4000);
   nGenC_all__bckg_16->SetBorderMode(0);
   nGenC_all__bckg_16->SetBorderSize(2);
   nGenC_all__bckg_16->SetLogy();
   nGenC_all__bckg_16->SetLeftMargin(0.15709);
   nGenC_all__bckg_16->SetRightMargin(0.1234783);
   nGenC_all__bckg_16->SetBottomMargin(0.12);
   nGenC_all__bckg_16->SetFrameFillStyle(1000);
   nGenC_all__bckg_16->SetFrameBorderMode(0);
   nGenC_all__bckg_16->SetFrameFillStyle(1000);
   nGenC_all__bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_20 = new TH1F("st_stack_20","",15,-0.5,14.5);
   st_stack_20->SetMinimum(1.543436);
   st_stack_20->SetMaximum(2.898084e+12);
   st_stack_20->SetDirectory(0);
   st_stack_20->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_20->SetLineColor(ci);
   st_stack_20->GetXaxis()->SetTitle("Gen c-jet multiplicity");
   st_stack_20->GetXaxis()->SetLabelFont(42);
   st_stack_20->GetXaxis()->SetTitleOffset(1);
   st_stack_20->GetXaxis()->SetTitleFont(42);
   st_stack_20->GetYaxis()->SetTitle("Events/1.0");
   st_stack_20->GetYaxis()->SetLabelFont(42);
   st_stack_20->GetYaxis()->SetTitleSize(0.037);
   st_stack_20->GetYaxis()->SetTitleFont(42);
   st_stack_20->GetZaxis()->SetLabelFont(42);
   st_stack_20->GetZaxis()->SetTitleOffset(1);
   st_stack_20->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_20);
   
   
   TH1D *nGenC_all_stack_1 = new TH1D("nGenC_all_stack_1","",15,-0.5,14.5);
   nGenC_all_stack_1->SetBinContent(1,9.080177e+11);
   nGenC_all_stack_1->SetBinContent(2,1.758898e+11);
   nGenC_all_stack_1->SetBinContent(3,5.872449e+10);
   nGenC_all_stack_1->SetBinContent(4,8.428371e+09);
   nGenC_all_stack_1->SetBinContent(5,1.332112e+09);
   nGenC_all_stack_1->SetBinContent(6,1.625326e+08);
   nGenC_all_stack_1->SetBinContent(7,2.006082e+07);
   nGenC_all_stack_1->SetBinContent(8,2162666);
   nGenC_all_stack_1->SetBinContent(9,210593.5);
   nGenC_all_stack_1->SetBinContent(10,53465.13);
   nGenC_all_stack_1->SetBinContent(11,450.7238);
   nGenC_all_stack_1->SetBinContent(12,18.21636);
   nGenC_all_stack_1->SetBinError(1,1.38201e+08);
   nGenC_all_stack_1->SetBinError(2,6.042269e+07);
   nGenC_all_stack_1->SetBinError(3,3.461176e+07);
   nGenC_all_stack_1->SetBinError(4,1.294476e+07);
   nGenC_all_stack_1->SetBinError(5,5062849);
   nGenC_all_stack_1->SetBinError(6,1735459);
   nGenC_all_stack_1->SetBinError(7,598304.3);
   nGenC_all_stack_1->SetBinError(8,191195.3);
   nGenC_all_stack_1->SetBinError(9,57683.54);
   nGenC_all_stack_1->SetBinError(10,30792.07);
   nGenC_all_stack_1->SetBinError(11,303.2635);
   nGenC_all_stack_1->SetBinError(12,17.72497);
   nGenC_all_stack_1->SetEntries(2.393713e+08);

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
   nGenC_all_stack_2->SetBinContent(1,1.156639e+07);
   nGenC_all_stack_2->SetBinContent(2,1.239704e+07);
   nGenC_all_stack_2->SetBinContent(3,4707117);
   nGenC_all_stack_2->SetBinContent(4,970180.7);
   nGenC_all_stack_2->SetBinContent(5,187052.9);
   nGenC_all_stack_2->SetBinContent(6,30577.43);
   nGenC_all_stack_2->SetBinContent(7,4704.005);
   nGenC_all_stack_2->SetBinContent(8,663.9061);
   nGenC_all_stack_2->SetBinContent(9,96.07277);
   nGenC_all_stack_2->SetBinContent(10,13.5011);
   nGenC_all_stack_2->SetBinContent(11,1.237161);
   nGenC_all_stack_2->SetBinContent(12,0.3255179);
   nGenC_all_stack_2->SetBinError(1,814.0349);
   nGenC_all_stack_2->SetBinError(2,897.429);
   nGenC_all_stack_2->SetBinError(3,581.3704);
   nGenC_all_stack_2->SetBinError(4,263.82);
   nGenC_all_stack_2->SetBinError(5,116.7035);
   nGenC_all_stack_2->SetBinError(6,47.22947);
   nGenC_all_stack_2->SetBinError(7,18.58057);
   nGenC_all_stack_2->SetBinError(8,6.976526);
   nGenC_all_stack_2->SetBinError(9,2.672817);
   nGenC_all_stack_2->SetBinError(10,0.9978767);
   nGenC_all_stack_2->SetBinError(11,0.3035525);
   nGenC_all_stack_2->SetBinError(12,0.1628767);
   nGenC_all_stack_2->SetEntries(5.126171e+08);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nGenC_all__bckg_16->Modified();
   nGenC_all__bckg_16->cd();
   nGenC_all__bckg_16->SetSelected(nGenC_all__bckg_16);
}
