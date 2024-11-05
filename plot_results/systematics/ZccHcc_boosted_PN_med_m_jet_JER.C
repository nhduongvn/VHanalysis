#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ZccHcc_boosted_PN_med_m_jet_JER()
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
   TPad *pad1_v1__12 = new TPad("pad1_v1", "pad1_v1",0,0.3,1,1);
   pad1_v1__12->Draw();
   pad1_v1__12->cd();
   pad1_v1__12->Range(-38.75,-4.353076,348.75,39.17768);
   pad1_v1__12->SetBorderSize(2);
   pad1_v1__12->SetFrameFillColor(0);
   
   TH1D *ZccHcc_boosted_PN_med_m_jet__31 = new TH1D("ZccHcc_boosted_PN_med_m_jet__31","",30,0,300);
   ZccHcc_boosted_PN_med_m_jet__31->SetBinContent(8,4.854131);
   ZccHcc_boosted_PN_med_m_jet__31->SetBinContent(9,15.34577);
   ZccHcc_boosted_PN_med_m_jet__31->SetBinContent(10,32.8246);
   ZccHcc_boosted_PN_med_m_jet__31->SetBinContent(11,8.407669);
   ZccHcc_boosted_PN_med_m_jet__31->SetBinContent(12,15.38878);
   ZccHcc_boosted_PN_med_m_jet__31->SetBinContent(13,21.16408);
   ZccHcc_boosted_PN_med_m_jet__31->SetBinContent(14,20.74317);
   ZccHcc_boosted_PN_med_m_jet__31->SetBinContent(15,2.917014);
   ZccHcc_boosted_PN_med_m_jet__31->SetBinContent(17,1.205237);
   ZccHcc_boosted_PN_med_m_jet__31->SetBinError(8,2.532705);
   ZccHcc_boosted_PN_med_m_jet__31->SetBinError(9,5.08006);
   ZccHcc_boosted_PN_med_m_jet__31->SetBinError(10,6.72825);
   ZccHcc_boosted_PN_med_m_jet__31->SetBinError(11,3.245056);
   ZccHcc_boosted_PN_med_m_jet__31->SetBinError(12,4.667229);
   ZccHcc_boosted_PN_med_m_jet__31->SetBinError(13,5.687424);
   ZccHcc_boosted_PN_med_m_jet__31->SetBinError(14,5.311121);
   ZccHcc_boosted_PN_med_m_jet__31->SetBinError(15,2.062644);
   ZccHcc_boosted_PN_med_m_jet__31->SetBinError(17,1.205237);
   ZccHcc_boosted_PN_med_m_jet__31->SetMaximum(34.8246);
   ZccHcc_boosted_PN_med_m_jet__31->SetEntries(98);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   ZccHcc_boosted_PN_med_m_jet__31->SetFillColor(ci);
   ZccHcc_boosted_PN_med_m_jet__31->SetLineWidth(2);
   ZccHcc_boosted_PN_med_m_jet__31->GetXaxis()->SetRange(1,31);
   ZccHcc_boosted_PN_med_m_jet__31->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__31->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__31->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__31->GetYaxis()->SetTitle("Events/10.000000");
   ZccHcc_boosted_PN_med_m_jet__31->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__31->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__31->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__31->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__31->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__31->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_m_jet__32 = new TH1D("ZccHcc_boosted_PN_med_m_jet__32","",30,0,300);
   ZccHcc_boosted_PN_med_m_jet__32->SetBinContent(8,4.854131);
   ZccHcc_boosted_PN_med_m_jet__32->SetBinContent(9,15.34577);
   ZccHcc_boosted_PN_med_m_jet__32->SetBinContent(10,32.8246);
   ZccHcc_boosted_PN_med_m_jet__32->SetBinContent(11,8.407669);
   ZccHcc_boosted_PN_med_m_jet__32->SetBinContent(12,15.38878);
   ZccHcc_boosted_PN_med_m_jet__32->SetBinContent(13,21.16408);
   ZccHcc_boosted_PN_med_m_jet__32->SetBinContent(14,20.74317);
   ZccHcc_boosted_PN_med_m_jet__32->SetBinContent(15,2.917014);
   ZccHcc_boosted_PN_med_m_jet__32->SetBinContent(17,1.205237);
   ZccHcc_boosted_PN_med_m_jet__32->SetBinError(8,2.532705);
   ZccHcc_boosted_PN_med_m_jet__32->SetBinError(9,5.08006);
   ZccHcc_boosted_PN_med_m_jet__32->SetBinError(10,6.72825);
   ZccHcc_boosted_PN_med_m_jet__32->SetBinError(11,3.245056);
   ZccHcc_boosted_PN_med_m_jet__32->SetBinError(12,4.667229);
   ZccHcc_boosted_PN_med_m_jet__32->SetBinError(13,5.687424);
   ZccHcc_boosted_PN_med_m_jet__32->SetBinError(14,5.311121);
   ZccHcc_boosted_PN_med_m_jet__32->SetBinError(15,2.062644);
   ZccHcc_boosted_PN_med_m_jet__32->SetBinError(17,1.205237);
   ZccHcc_boosted_PN_med_m_jet__32->SetEntries(98);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_m_jet__32->SetLineColor(ci);
   ZccHcc_boosted_PN_med_m_jet__32->SetLineWidth(2);
   ZccHcc_boosted_PN_med_m_jet__32->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_m_jet__32->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__32->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__32->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__32->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__32->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__32->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__32->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__32->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__32->Draw("same hist");
   
   TH1D *ZccHcc_boosted_PN_med_m_jet__33 = new TH1D("ZccHcc_boosted_PN_med_m_jet__33","",30,0,300);
   ZccHcc_boosted_PN_med_m_jet__33->SetBinContent(8,4.854131);
   ZccHcc_boosted_PN_med_m_jet__33->SetBinContent(9,16.65108);
   ZccHcc_boosted_PN_med_m_jet__33->SetBinContent(10,32.8246);
   ZccHcc_boosted_PN_med_m_jet__33->SetBinContent(11,8.407669);
   ZccHcc_boosted_PN_med_m_jet__33->SetBinContent(12,15.38878);
   ZccHcc_boosted_PN_med_m_jet__33->SetBinContent(13,21.16408);
   ZccHcc_boosted_PN_med_m_jet__33->SetBinContent(14,22.04848);
   ZccHcc_boosted_PN_med_m_jet__33->SetBinContent(15,2.917014);
   ZccHcc_boosted_PN_med_m_jet__33->SetBinContent(17,1.205237);
   ZccHcc_boosted_PN_med_m_jet__33->SetBinError(8,2.532705);
   ZccHcc_boosted_PN_med_m_jet__33->SetBinError(9,5.245078);
   ZccHcc_boosted_PN_med_m_jet__33->SetBinError(10,6.72825);
   ZccHcc_boosted_PN_med_m_jet__33->SetBinError(11,3.245056);
   ZccHcc_boosted_PN_med_m_jet__33->SetBinError(12,4.667229);
   ZccHcc_boosted_PN_med_m_jet__33->SetBinError(13,5.687424);
   ZccHcc_boosted_PN_med_m_jet__33->SetBinError(14,5.469172);
   ZccHcc_boosted_PN_med_m_jet__33->SetBinError(15,2.062644);
   ZccHcc_boosted_PN_med_m_jet__33->SetBinError(17,1.205237);
   ZccHcc_boosted_PN_med_m_jet__33->SetEntries(100);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_m_jet__33->SetLineColor(ci);
   ZccHcc_boosted_PN_med_m_jet__33->SetLineWidth(2);
   ZccHcc_boosted_PN_med_m_jet__33->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_m_jet__33->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__33->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__33->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__33->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__33->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__33->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__33->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__33->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__33->Draw("same hist");
   
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
   entry=leg->AddEntry("ZccHcc_boosted_PN_med_m_jet","JER Up","F");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ZccHcc_boosted_PN_med_m_jet","JER Down","F");
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
   pad1_v1__12->Modified();
   c1->cd();
  
// ------------>Primitives in pad: pad1_v2
   TPad *pad1_v2__13 = new TPad("pad1_v2", "pad1_v2",0,0.1,1,0.3);
   pad1_v2__13->Draw();
   pad1_v2__13->cd();
   pad1_v2__13->Range(-38.75,0.75,348.75,1.25);
   pad1_v2__13->SetBorderSize(2);
   pad1_v2__13->SetFrameFillColor(0);
   
   TH1D *ZccHcc_boosted_PN_med_m_jet__34 = new TH1D("ZccHcc_boosted_PN_med_m_jet__34","",30,0,300);
   ZccHcc_boosted_PN_med_m_jet__34->SetBinContent(8,1);
   ZccHcc_boosted_PN_med_m_jet__34->SetBinContent(9,1);
   ZccHcc_boosted_PN_med_m_jet__34->SetBinContent(10,1);
   ZccHcc_boosted_PN_med_m_jet__34->SetBinContent(11,1);
   ZccHcc_boosted_PN_med_m_jet__34->SetBinContent(12,1);
   ZccHcc_boosted_PN_med_m_jet__34->SetBinContent(13,1);
   ZccHcc_boosted_PN_med_m_jet__34->SetBinContent(14,1);
   ZccHcc_boosted_PN_med_m_jet__34->SetBinContent(15,1);
   ZccHcc_boosted_PN_med_m_jet__34->SetBinContent(17,1);
   ZccHcc_boosted_PN_med_m_jet__34->SetBinError(8,0.7378841);
   ZccHcc_boosted_PN_med_m_jet__34->SetBinError(9,0.4681609);
   ZccHcc_boosted_PN_med_m_jet__34->SetBinError(10,0.2898796);
   ZccHcc_boosted_PN_med_m_jet__34->SetBinError(11,0.5458352);
   ZccHcc_boosted_PN_med_m_jet__34->SetBinError(12,0.4289139);
   ZccHcc_boosted_PN_med_m_jet__34->SetBinError(13,0.3800416);
   ZccHcc_boosted_PN_med_m_jet__34->SetBinError(14,0.362098);
   ZccHcc_boosted_PN_med_m_jet__34->SetBinError(15,1.000002);
   ZccHcc_boosted_PN_med_m_jet__34->SetBinError(17,1.414214);
   ZccHcc_boosted_PN_med_m_jet__34->SetMinimum(0.8);
   ZccHcc_boosted_PN_med_m_jet__34->SetMaximum(1.2);
   ZccHcc_boosted_PN_med_m_jet__34->SetEntries(17.58908);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_m_jet__34->SetLineColor(ci);
   ZccHcc_boosted_PN_med_m_jet__34->SetLineWidth(2);
   ZccHcc_boosted_PN_med_m_jet__34->GetXaxis()->SetRange(1,31);
   ZccHcc_boosted_PN_med_m_jet__34->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__34->GetXaxis()->SetLabelSize(0.1);
   ZccHcc_boosted_PN_med_m_jet__34->GetXaxis()->SetTitleSize(0.13);
   ZccHcc_boosted_PN_med_m_jet__34->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__34->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__34->GetYaxis()->SetTitle("#frac{Up/Down}{Nominal}");
   ZccHcc_boosted_PN_med_m_jet__34->GetYaxis()->CenterTitle(true);
   ZccHcc_boosted_PN_med_m_jet__34->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__34->GetYaxis()->SetLabelSize(0.09);
   ZccHcc_boosted_PN_med_m_jet__34->GetYaxis()->SetTitleSize(0.12);
   ZccHcc_boosted_PN_med_m_jet__34->GetYaxis()->SetTitleOffset(0.35);
   ZccHcc_boosted_PN_med_m_jet__34->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__34->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__34->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__34->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__34->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_m_jet__35 = new TH1D("ZccHcc_boosted_PN_med_m_jet__35","",30,0,300);
   ZccHcc_boosted_PN_med_m_jet__35->SetBinContent(8,1);
   ZccHcc_boosted_PN_med_m_jet__35->SetBinContent(9,1.08506);
   ZccHcc_boosted_PN_med_m_jet__35->SetBinContent(10,1);
   ZccHcc_boosted_PN_med_m_jet__35->SetBinContent(11,1);
   ZccHcc_boosted_PN_med_m_jet__35->SetBinContent(12,1);
   ZccHcc_boosted_PN_med_m_jet__35->SetBinContent(13,1);
   ZccHcc_boosted_PN_med_m_jet__35->SetBinContent(14,1.062927);
   ZccHcc_boosted_PN_med_m_jet__35->SetBinContent(15,1);
   ZccHcc_boosted_PN_med_m_jet__35->SetBinContent(17,1);
   ZccHcc_boosted_PN_med_m_jet__35->SetBinError(8,0.7378841);
   ZccHcc_boosted_PN_med_m_jet__35->SetBinError(9,0.4958283);
   ZccHcc_boosted_PN_med_m_jet__35->SetBinError(10,0.2898796);
   ZccHcc_boosted_PN_med_m_jet__35->SetBinError(11,0.5458352);
   ZccHcc_boosted_PN_med_m_jet__35->SetBinError(12,0.4289139);
   ZccHcc_boosted_PN_med_m_jet__35->SetBinError(13,0.3800416);
   ZccHcc_boosted_PN_med_m_jet__35->SetBinError(14,0.3789263);
   ZccHcc_boosted_PN_med_m_jet__35->SetBinError(15,1.000002);
   ZccHcc_boosted_PN_med_m_jet__35->SetBinError(17,1.414214);
   ZccHcc_boosted_PN_med_m_jet__35->SetEntries(18.01911);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_m_jet__35->SetLineColor(ci);
   ZccHcc_boosted_PN_med_m_jet__35->SetLineWidth(2);
   ZccHcc_boosted_PN_med_m_jet__35->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_m_jet__35->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__35->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__35->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__35->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__35->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__35->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__35->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__35->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__35->Draw("same hist");
   TLine *line = new TLine(0,1,300,1);
   line->SetLineStyle(2);
   line->Draw();
   pad1_v2__13->Modified();
   c1->cd();
   c1->Modified();
   c1->SetSelected(c1);
}
