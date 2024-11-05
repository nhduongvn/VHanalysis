#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ZccHcc_boosted_PN_med_m_jet_JES()
{
//=========Macro generated from canvas: c1/
//=========  (Mon Oct 21 12:54:54 2024) by ROOT version 6.30/03
   TCanvas *c1 = new TCanvas("c1", "",0,0,600,600);
   gStyle->SetOptStat(0);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.15);
  
// ------------>Primitives in pad: pad1_v1
   TPad *pad1_v1__10 = new TPad("pad1_v1", "pad1_v1",0,0.3,1,1);
   pad1_v1__10->Draw();
   pad1_v1__10->cd();
   pad1_v1__10->Range(-38.75,-4.353076,348.75,39.17768);
   pad1_v1__10->SetBorderSize(2);
   pad1_v1__10->SetFrameFillColor(0);
   
   TH1D *ZccHcc_boosted_PN_med_m_jet__26 = new TH1D("ZccHcc_boosted_PN_med_m_jet__26","",30,0,300);
   ZccHcc_boosted_PN_med_m_jet__26->SetBinContent(8,4.854131);
   ZccHcc_boosted_PN_med_m_jet__26->SetBinContent(9,15.34577);
   ZccHcc_boosted_PN_med_m_jet__26->SetBinContent(10,32.8246);
   ZccHcc_boosted_PN_med_m_jet__26->SetBinContent(11,8.407669);
   ZccHcc_boosted_PN_med_m_jet__26->SetBinContent(12,15.38878);
   ZccHcc_boosted_PN_med_m_jet__26->SetBinContent(13,21.16408);
   ZccHcc_boosted_PN_med_m_jet__26->SetBinContent(14,20.74317);
   ZccHcc_boosted_PN_med_m_jet__26->SetBinContent(15,2.917014);
   ZccHcc_boosted_PN_med_m_jet__26->SetBinContent(17,1.205237);
   ZccHcc_boosted_PN_med_m_jet__26->SetBinError(8,2.532705);
   ZccHcc_boosted_PN_med_m_jet__26->SetBinError(9,5.08006);
   ZccHcc_boosted_PN_med_m_jet__26->SetBinError(10,6.72825);
   ZccHcc_boosted_PN_med_m_jet__26->SetBinError(11,3.245056);
   ZccHcc_boosted_PN_med_m_jet__26->SetBinError(12,4.667229);
   ZccHcc_boosted_PN_med_m_jet__26->SetBinError(13,5.687424);
   ZccHcc_boosted_PN_med_m_jet__26->SetBinError(14,5.311121);
   ZccHcc_boosted_PN_med_m_jet__26->SetBinError(15,2.062644);
   ZccHcc_boosted_PN_med_m_jet__26->SetBinError(17,1.205237);
   ZccHcc_boosted_PN_med_m_jet__26->SetMaximum(34.8246);
   ZccHcc_boosted_PN_med_m_jet__26->SetEntries(98);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   ZccHcc_boosted_PN_med_m_jet__26->SetFillColor(ci);
   ZccHcc_boosted_PN_med_m_jet__26->SetLineWidth(2);
   ZccHcc_boosted_PN_med_m_jet__26->GetXaxis()->SetRange(1,31);
   ZccHcc_boosted_PN_med_m_jet__26->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__26->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__26->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__26->GetYaxis()->SetTitle("Events/10.000000");
   ZccHcc_boosted_PN_med_m_jet__26->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__26->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__26->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__26->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__26->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__26->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_m_jet__27 = new TH1D("ZccHcc_boosted_PN_med_m_jet__27","",30,0,300);
   ZccHcc_boosted_PN_med_m_jet__27->SetBinContent(8,4.713744);
   ZccHcc_boosted_PN_med_m_jet__27->SetBinContent(9,16.65108);
   ZccHcc_boosted_PN_med_m_jet__27->SetBinContent(10,32.8246);
   ZccHcc_boosted_PN_med_m_jet__27->SetBinContent(11,8.282742);
   ZccHcc_boosted_PN_med_m_jet__27->SetBinContent(12,15.24839);
   ZccHcc_boosted_PN_med_m_jet__27->SetBinContent(13,21.16408);
   ZccHcc_boosted_PN_med_m_jet__27->SetBinContent(14,22.04848);
   ZccHcc_boosted_PN_med_m_jet__27->SetBinContent(15,2.917014);
   ZccHcc_boosted_PN_med_m_jet__27->SetBinContent(17,1.08031);
   ZccHcc_boosted_PN_med_m_jet__27->SetBinError(8,2.444237);
   ZccHcc_boosted_PN_med_m_jet__27->SetBinError(9,5.245078);
   ZccHcc_boosted_PN_med_m_jet__27->SetBinError(10,6.72825);
   ZccHcc_boosted_PN_med_m_jet__27->SetBinError(11,3.200759);
   ZccHcc_boosted_PN_med_m_jet__27->SetBinError(12,4.619819);
   ZccHcc_boosted_PN_med_m_jet__27->SetBinError(13,5.687424);
   ZccHcc_boosted_PN_med_m_jet__27->SetBinError(14,5.469172);
   ZccHcc_boosted_PN_med_m_jet__27->SetBinError(15,2.062644);
   ZccHcc_boosted_PN_med_m_jet__27->SetBinError(17,1.08031);
   ZccHcc_boosted_PN_med_m_jet__27->SetEntries(100);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_m_jet__27->SetLineColor(ci);
   ZccHcc_boosted_PN_med_m_jet__27->SetLineWidth(2);
   ZccHcc_boosted_PN_med_m_jet__27->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_m_jet__27->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__27->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__27->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__27->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__27->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__27->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__27->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__27->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__27->Draw("same hist");
   
   TH1D *ZccHcc_boosted_PN_med_m_jet__28 = new TH1D("ZccHcc_boosted_PN_med_m_jet__28","",30,0,300);
   ZccHcc_boosted_PN_med_m_jet__28->SetBinContent(8,4.854131);
   ZccHcc_boosted_PN_med_m_jet__28->SetBinContent(9,15.34577);
   ZccHcc_boosted_PN_med_m_jet__28->SetBinContent(10,31.49499);
   ZccHcc_boosted_PN_med_m_jet__28->SetBinContent(11,8.49299);
   ZccHcc_boosted_PN_med_m_jet__28->SetBinContent(12,14.05916);
   ZccHcc_boosted_PN_med_m_jet__28->SetBinContent(13,21.16408);
   ZccHcc_boosted_PN_med_m_jet__28->SetBinContent(14,20.82849);
   ZccHcc_boosted_PN_med_m_jet__28->SetBinContent(15,2.917014);
   ZccHcc_boosted_PN_med_m_jet__28->SetBinContent(17,1.205237);
   ZccHcc_boosted_PN_med_m_jet__28->SetBinError(8,2.532705);
   ZccHcc_boosted_PN_med_m_jet__28->SetBinError(9,5.08006);
   ZccHcc_boosted_PN_med_m_jet__28->SetBinError(10,6.595565);
   ZccHcc_boosted_PN_med_m_jet__28->SetBinError(11,3.265512);
   ZccHcc_boosted_PN_med_m_jet__28->SetBinError(12,4.473831);
   ZccHcc_boosted_PN_med_m_jet__28->SetBinError(13,5.687424);
   ZccHcc_boosted_PN_med_m_jet__28->SetBinError(14,5.323644);
   ZccHcc_boosted_PN_med_m_jet__28->SetBinError(15,2.062644);
   ZccHcc_boosted_PN_med_m_jet__28->SetBinError(17,1.205237);
   ZccHcc_boosted_PN_med_m_jet__28->SetEntries(96);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_m_jet__28->SetLineColor(ci);
   ZccHcc_boosted_PN_med_m_jet__28->SetLineWidth(2);
   ZccHcc_boosted_PN_med_m_jet__28->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_m_jet__28->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__28->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__28->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__28->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__28->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__28->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__28->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__28->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__28->Draw("same hist");
   
   TLegend *leg = new TLegend(0.53,0.7,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("ZccHcc_boosted_PN_med_m_jet","Nominal","F");

   ci = TColor::GetColor("#cccccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ZccHcc_boosted_PN_med_m_jet","JES Up","F");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ZccHcc_boosted_PN_med_m_jet","JES Down","F");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   pad1_v1__10->Modified();
   c1->cd();
  
// ------------>Primitives in pad: pad1_v2
   TPad *pad1_v2__11 = new TPad("pad1_v2", "pad1_v2",0,0.1,1,0.3);
   pad1_v2__11->Draw();
   pad1_v2__11->cd();
   pad1_v2__11->Range(-38.75,0.75,348.75,1.25);
   pad1_v2__11->SetBorderSize(2);
   pad1_v2__11->SetFrameFillColor(0);
   
   TH1D *ZccHcc_boosted_PN_med_m_jet__29 = new TH1D("ZccHcc_boosted_PN_med_m_jet__29","",30,0,300);
   ZccHcc_boosted_PN_med_m_jet__29->SetBinContent(8,0.971079);
   ZccHcc_boosted_PN_med_m_jet__29->SetBinContent(9,1.08506);
   ZccHcc_boosted_PN_med_m_jet__29->SetBinContent(10,1);
   ZccHcc_boosted_PN_med_m_jet__29->SetBinContent(11,0.9851413);
   ZccHcc_boosted_PN_med_m_jet__29->SetBinContent(12,0.9908773);
   ZccHcc_boosted_PN_med_m_jet__29->SetBinContent(13,1);
   ZccHcc_boosted_PN_med_m_jet__29->SetBinContent(14,1.062927);
   ZccHcc_boosted_PN_med_m_jet__29->SetBinContent(15,1);
   ZccHcc_boosted_PN_med_m_jet__29->SetBinContent(17,0.8963465);
   ZccHcc_boosted_PN_med_m_jet__29->SetBinError(8,0.7143302);
   ZccHcc_boosted_PN_med_m_jet__29->SetBinError(9,0.4958283);
   ZccHcc_boosted_PN_med_m_jet__29->SetBinError(10,0.2898796);
   ZccHcc_boosted_PN_med_m_jet__29->SetBinError(11,0.5380546);
   ZccHcc_boosted_PN_med_m_jet__29->SetBinError(12,0.424779);
   ZccHcc_boosted_PN_med_m_jet__29->SetBinError(13,0.3800416);
   ZccHcc_boosted_PN_med_m_jet__29->SetBinError(14,0.3789263);
   ZccHcc_boosted_PN_med_m_jet__29->SetBinError(15,1.000002);
   ZccHcc_boosted_PN_med_m_jet__29->SetBinError(17,1.267625);
   ZccHcc_boosted_PN_med_m_jet__29->SetMinimum(0.8);
   ZccHcc_boosted_PN_med_m_jet__29->SetMaximum(1.2);
   ZccHcc_boosted_PN_med_m_jet__29->SetEntries(19.22622);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_m_jet__29->SetLineColor(ci);
   ZccHcc_boosted_PN_med_m_jet__29->SetLineWidth(2);
   ZccHcc_boosted_PN_med_m_jet__29->GetXaxis()->SetRange(1,31);
   ZccHcc_boosted_PN_med_m_jet__29->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__29->GetXaxis()->SetLabelSize(0.1);
   ZccHcc_boosted_PN_med_m_jet__29->GetXaxis()->SetTitleSize(0.13);
   ZccHcc_boosted_PN_med_m_jet__29->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__29->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__29->GetYaxis()->SetTitle("#frac{Up/Down}{Nominal}");
   ZccHcc_boosted_PN_med_m_jet__29->GetYaxis()->CenterTitle(true);
   ZccHcc_boosted_PN_med_m_jet__29->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__29->GetYaxis()->SetLabelSize(0.09);
   ZccHcc_boosted_PN_med_m_jet__29->GetYaxis()->SetTitleSize(0.12);
   ZccHcc_boosted_PN_med_m_jet__29->GetYaxis()->SetTitleOffset(0.35);
   ZccHcc_boosted_PN_med_m_jet__29->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__29->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__29->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__29->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__29->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_m_jet__30 = new TH1D("ZccHcc_boosted_PN_med_m_jet__30","",30,0,300);
   ZccHcc_boosted_PN_med_m_jet__30->SetBinContent(8,1);
   ZccHcc_boosted_PN_med_m_jet__30->SetBinContent(9,1);
   ZccHcc_boosted_PN_med_m_jet__30->SetBinContent(10,0.9594934);
   ZccHcc_boosted_PN_med_m_jet__30->SetBinContent(11,1.010148);
   ZccHcc_boosted_PN_med_m_jet__30->SetBinContent(12,0.9135986);
   ZccHcc_boosted_PN_med_m_jet__30->SetBinContent(13,1);
   ZccHcc_boosted_PN_med_m_jet__30->SetBinContent(14,1.004113);
   ZccHcc_boosted_PN_med_m_jet__30->SetBinContent(15,1);
   ZccHcc_boosted_PN_med_m_jet__30->SetBinContent(17,1);
   ZccHcc_boosted_PN_med_m_jet__30->SetBinError(8,0.7378841);
   ZccHcc_boosted_PN_med_m_jet__30->SetBinError(9,0.4681609);
   ZccHcc_boosted_PN_med_m_jet__30->SetBinError(10,0.2811664);
   ZccHcc_boosted_PN_med_m_jet__30->SetBinError(11,0.5503262);
   ZccHcc_boosted_PN_med_m_jet__30->SetBinError(12,0.4016137);
   ZccHcc_boosted_PN_med_m_jet__30->SetBinError(13,0.3800416);
   ZccHcc_boosted_PN_med_m_jet__30->SetBinError(14,0.3632697);
   ZccHcc_boosted_PN_med_m_jet__30->SetBinError(15,1.000002);
   ZccHcc_boosted_PN_med_m_jet__30->SetBinError(17,1.414214);
   ZccHcc_boosted_PN_med_m_jet__30->SetEntries(17.2334);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_m_jet__30->SetLineColor(ci);
   ZccHcc_boosted_PN_med_m_jet__30->SetLineWidth(2);
   ZccHcc_boosted_PN_med_m_jet__30->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_m_jet__30->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__30->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__30->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__30->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__30->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__30->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__30->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__30->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__30->Draw("same hist");
   TLine *line = new TLine(0,1,300,1);
   line->SetLineStyle(2);
   line->Draw();
   pad1_v2__11->Modified();
   c1->cd();
   c1->Modified();
   c1->SetSelected(c1);
}
