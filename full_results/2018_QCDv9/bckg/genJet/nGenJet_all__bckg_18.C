#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nGenJet_all__bckg_18()
{
//=========Macro generated from canvas: nGenJet_all__bckg_18/nGenJet_all__bckg_18
//=========  (Mon Mar  6 10:53:08 2023) by ROOT version 6.26/06
   TCanvas *nGenJet_all__bckg_18 = new TCanvas("nGenJet_all__bckg_18", "nGenJet_all__bckg_18",0,0,600,600);
   nGenJet_all__bckg_18->SetHighLightColor(2);
   nGenJet_all__bckg_18->Range(-3.775293,-8.668104e+10,17.0745,6.35661e+11);
   nGenJet_all__bckg_18->SetFillColor(0);
   nGenJet_all__bckg_18->SetFillStyle(4000);
   nGenJet_all__bckg_18->SetBorderMode(0);
   nGenJet_all__bckg_18->SetBorderSize(2);
   nGenJet_all__bckg_18->SetLeftMargin(0.15709);
   nGenJet_all__bckg_18->SetRightMargin(0.1234783);
   nGenJet_all__bckg_18->SetBottomMargin(0.12);
   nGenJet_all__bckg_18->SetFrameFillStyle(1000);
   nGenJet_all__bckg_18->SetFrameBorderMode(0);
   nGenJet_all__bckg_18->SetFrameFillStyle(1000);
   nGenJet_all__bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   
   TH1F *st_stack_6 = new TH1F("st_stack_6","",15,-0.5,14.5);
   st_stack_6->SetMinimum(0);
   st_stack_6->SetMaximum(5.634268e+11);
   st_stack_6->SetDirectory(0);
   st_stack_6->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_6->SetLineColor(ci);
   st_stack_6->GetXaxis()->SetTitle("Gen Jet multiplicity");
   st_stack_6->GetXaxis()->SetLabelFont(42);
   st_stack_6->GetXaxis()->SetTitleOffset(1);
   st_stack_6->GetXaxis()->SetTitleFont(42);
   st_stack_6->GetYaxis()->SetTitle("Events/1.0");
   st_stack_6->GetYaxis()->SetLabelFont(42);
   st_stack_6->GetYaxis()->SetTitleSize(0.037);
   st_stack_6->GetYaxis()->SetTitleFont(42);
   st_stack_6->GetZaxis()->SetLabelFont(42);
   st_stack_6->GetZaxis()->SetTitleOffset(1);
   st_stack_6->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_6);
   
   
   TH1D *nGenJet_all_stack_1 = new TH1D("nGenJet_all_stack_1","",15,-0.5,14.5);
   nGenJet_all_stack_1->SetBinContent(1,91499.8);
   nGenJet_all_stack_1->SetBinContent(2,8.434656e+07);
   nGenJet_all_stack_1->SetBinContent(3,2.10134e+11);
   nGenJet_all_stack_1->SetBinContent(4,4.962756e+11);
   nGenJet_all_stack_1->SetBinContent(5,5.365955e+11);
   nGenJet_all_stack_1->SetBinContent(6,3.74241e+11);
   nGenJet_all_stack_1->SetBinContent(7,2.143622e+11);
   nGenJet_all_stack_1->SetBinContent(8,1.113353e+11);
   nGenJet_all_stack_1->SetBinContent(9,5.479747e+10);
   nGenJet_all_stack_1->SetBinContent(10,2.593531e+10);
   nGenJet_all_stack_1->SetBinContent(11,1.19496e+10);
   nGenJet_all_stack_1->SetBinContent(12,5.346562e+09);
   nGenJet_all_stack_1->SetBinContent(13,2.345663e+09);
   nGenJet_all_stack_1->SetBinContent(14,1.018156e+09);
   nGenJet_all_stack_1->SetBinContent(15,4.256614e+08);
   nGenJet_all_stack_1->SetBinContent(16,3.034321e+08);
   nGenJet_all_stack_1->SetBinError(1,46178.18);
   nGenJet_all_stack_1->SetBinError(2,1528158);
   nGenJet_all_stack_1->SetBinError(3,7.936183e+07);
   nGenJet_all_stack_1->SetBinError(4,1.217272e+08);
   nGenJet_all_stack_1->SetBinError(5,1.252936e+08);
   nGenJet_all_stack_1->SetBinError(6,1.031756e+08);
   nGenJet_all_stack_1->SetBinError(7,7.67794e+07);
   nGenJet_all_stack_1->SetBinError(8,5.438972e+07);
   nGenJet_all_stack_1->SetBinError(9,3.761125e+07);
   nGenJet_all_stack_1->SetBinError(10,2.556194e+07);
   nGenJet_all_stack_1->SetBinError(11,1.742974e+07);
   nGenJet_all_stack_1->SetBinError(12,1.158069e+07);
   nGenJet_all_stack_1->SetBinError(13,7328715);
   nGenJet_all_stack_1->SetBinError(14,4950250);
   nGenJet_all_stack_1->SetBinError(15,3042034);
   nGenJet_all_stack_1->SetBinError(16,2802095);
   nGenJet_all_stack_1->SetEntries(3.035979e+08);

   ci = TColor::GetColor("#ff6600");
   nGenJet_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenJet_all_stack_1->SetLineColor(ci);
   nGenJet_all_stack_1->GetXaxis()->SetRange(1,15);
   nGenJet_all_stack_1->GetXaxis()->SetLabelFont(42);
   nGenJet_all_stack_1->GetXaxis()->SetTitleOffset(1);
   nGenJet_all_stack_1->GetXaxis()->SetTitleFont(42);
   nGenJet_all_stack_1->GetYaxis()->SetLabelFont(42);
   nGenJet_all_stack_1->GetYaxis()->SetTitleFont(42);
   nGenJet_all_stack_1->GetZaxis()->SetLabelFont(42);
   nGenJet_all_stack_1->GetZaxis()->SetTitleOffset(1);
   nGenJet_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(nGenJet_all_stack_1,"");
   
   TH1D *nGenJet_all_stack_2 = new TH1D("nGenJet_all_stack_2","",15,-0.5,14.5);
   nGenJet_all_stack_2->SetBinContent(1,4.757941);
   nGenJet_all_stack_2->SetBinContent(2,532.0439);
   nGenJet_all_stack_2->SetBinContent(3,18781.97);
   nGenJet_all_stack_2->SetBinContent(4,244744.2);
   nGenJet_all_stack_2->SetBinContent(5,1442368);
   nGenJet_all_stack_2->SetBinContent(6,4351632);
   nGenJet_all_stack_2->SetBinContent(7,7884093);
   nGenJet_all_stack_2->SetBinContent(8,9883222);
   nGenJet_all_stack_2->SetBinContent(9,9587273);
   nGenJet_all_stack_2->SetBinContent(10,7695264);
   nGenJet_all_stack_2->SetBinContent(11,5353515);
   nGenJet_all_stack_2->SetBinContent(12,3338008);
   nGenJet_all_stack_2->SetBinContent(13,1911705);
   nGenJet_all_stack_2->SetBinContent(14,1024657);
   nGenJet_all_stack_2->SetBinContent(15,519937.3);
   nGenJet_all_stack_2->SetBinContent(16,463014);
   nGenJet_all_stack_2->SetBinError(1,0.462783);
   nGenJet_all_stack_2->SetBinError(2,5.030316);
   nGenJet_all_stack_2->SetBinError(3,31.8029);
   nGenJet_all_stack_2->SetBinError(4,117.7282);
   nGenJet_all_stack_2->SetBinError(5,295.0813);
   nGenJet_all_stack_2->SetBinError(6,538.0959);
   nGenJet_all_stack_2->SetBinError(7,756.297);
   nGenJet_all_stack_2->SetBinError(8,868.9623);
   nGenJet_all_stack_2->SetBinError(9,870.5215);
   nGenJet_all_stack_2->SetBinError(10,789.3887);
   nGenJet_all_stack_2->SetBinError(11,663.7925);
   nGenJet_all_stack_2->SetBinError(12,527.5489);
   nGenJet_all_stack_2->SetBinError(13,400.3329);
   nGenJet_all_stack_2->SetBinError(14,294.4423);
   nGenJet_all_stack_2->SetBinError(15,210.8335);
   nGenJet_all_stack_2->SetBinError(16,199.6375);
   nGenJet_all_stack_2->SetEntries(8.905796e+08);

   ci = TColor::GetColor("#990099");
   nGenJet_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenJet_all_stack_2->SetLineColor(ci);
   nGenJet_all_stack_2->GetXaxis()->SetRange(1,15);
   nGenJet_all_stack_2->GetXaxis()->SetLabelFont(42);
   nGenJet_all_stack_2->GetXaxis()->SetTitleOffset(1);
   nGenJet_all_stack_2->GetXaxis()->SetTitleFont(42);
   nGenJet_all_stack_2->GetYaxis()->SetLabelFont(42);
   nGenJet_all_stack_2->GetYaxis()->SetTitleFont(42);
   nGenJet_all_stack_2->GetZaxis()->SetLabelFont(42);
   nGenJet_all_stack_2->GetZaxis()->SetTitleOffset(1);
   nGenJet_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(nGenJet_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("nGenJet_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("nGenJet_all_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nGenJet_all__bckg_18->Modified();
   nGenJet_all__bckg_18->cd();
   nGenJet_all__bckg_18->SetSelected(nGenJet_all__bckg_18);
}
