#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ZccHcc_boosted_PN_med_m_jet_L1Prefiring()
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
   TPad *pad1_v1__14 = new TPad("pad1_v1", "pad1_v1",0,0.3,1,1);
   pad1_v1__14->Draw();
   pad1_v1__14->cd();
   pad1_v1__14->Range(-38.75,-4.35902,348.75,39.23117);
   pad1_v1__14->SetBorderSize(2);
   pad1_v1__14->SetFrameFillColor(0);
   
   TH1D *ZccHcc_boosted_PN_med_m_jet__36 = new TH1D("ZccHcc_boosted_PN_med_m_jet__36","",30,0,300);
   ZccHcc_boosted_PN_med_m_jet__36->SetBinContent(8,4.854131);
   ZccHcc_boosted_PN_med_m_jet__36->SetBinContent(9,15.34577);
   ZccHcc_boosted_PN_med_m_jet__36->SetBinContent(10,32.8246);
   ZccHcc_boosted_PN_med_m_jet__36->SetBinContent(11,8.407669);
   ZccHcc_boosted_PN_med_m_jet__36->SetBinContent(12,15.38878);
   ZccHcc_boosted_PN_med_m_jet__36->SetBinContent(13,21.16408);
   ZccHcc_boosted_PN_med_m_jet__36->SetBinContent(14,20.74317);
   ZccHcc_boosted_PN_med_m_jet__36->SetBinContent(15,2.917014);
   ZccHcc_boosted_PN_med_m_jet__36->SetBinContent(17,1.205237);
   ZccHcc_boosted_PN_med_m_jet__36->SetBinError(8,2.532705);
   ZccHcc_boosted_PN_med_m_jet__36->SetBinError(9,5.08006);
   ZccHcc_boosted_PN_med_m_jet__36->SetBinError(10,6.72825);
   ZccHcc_boosted_PN_med_m_jet__36->SetBinError(11,3.245056);
   ZccHcc_boosted_PN_med_m_jet__36->SetBinError(12,4.667229);
   ZccHcc_boosted_PN_med_m_jet__36->SetBinError(13,5.687424);
   ZccHcc_boosted_PN_med_m_jet__36->SetBinError(14,5.311121);
   ZccHcc_boosted_PN_med_m_jet__36->SetBinError(15,2.062644);
   ZccHcc_boosted_PN_med_m_jet__36->SetBinError(17,1.205237);
   ZccHcc_boosted_PN_med_m_jet__36->SetMaximum(34.87215);
   ZccHcc_boosted_PN_med_m_jet__36->SetEntries(98);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   ZccHcc_boosted_PN_med_m_jet__36->SetFillColor(ci);
   ZccHcc_boosted_PN_med_m_jet__36->SetLineWidth(2);
   ZccHcc_boosted_PN_med_m_jet__36->GetXaxis()->SetRange(1,31);
   ZccHcc_boosted_PN_med_m_jet__36->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__36->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__36->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__36->GetYaxis()->SetTitle("Events/10.000000");
   ZccHcc_boosted_PN_med_m_jet__36->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__36->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__36->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__36->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__36->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__36->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_m_jet__37 = new TH1D("ZccHcc_boosted_PN_med_m_jet__37","",30,0,300);
   ZccHcc_boosted_PN_med_m_jet__37->SetBinContent(8,4.853363);
   ZccHcc_boosted_PN_med_m_jet__37->SetBinContent(9,15.32842);
   ZccHcc_boosted_PN_med_m_jet__37->SetBinContent(10,32.77338);
   ZccHcc_boosted_PN_med_m_jet__37->SetBinContent(11,8.386055);
   ZccHcc_boosted_PN_med_m_jet__37->SetBinContent(12,15.35701);
   ZccHcc_boosted_PN_med_m_jet__37->SetBinContent(13,21.14632);
   ZccHcc_boosted_PN_med_m_jet__37->SetBinContent(14,20.69793);
   ZccHcc_boosted_PN_med_m_jet__37->SetBinContent(15,2.917014);
   ZccHcc_boosted_PN_med_m_jet__37->SetBinContent(17,1.199466);
   ZccHcc_boosted_PN_med_m_jet__37->SetBinError(8,2.532209);
   ZccHcc_boosted_PN_med_m_jet__37->SetBinError(9,5.075638);
   ZccHcc_boosted_PN_med_m_jet__37->SetBinError(10,6.71888);
   ZccHcc_boosted_PN_med_m_jet__37->SetBinError(11,3.237564);
   ZccHcc_boosted_PN_med_m_jet__37->SetBinError(12,4.658341);
   ZccHcc_boosted_PN_med_m_jet__37->SetBinError(13,5.683289);
   ZccHcc_boosted_PN_med_m_jet__37->SetBinError(14,5.301543);
   ZccHcc_boosted_PN_med_m_jet__37->SetBinError(15,2.062644);
   ZccHcc_boosted_PN_med_m_jet__37->SetBinError(17,1.199466);
   ZccHcc_boosted_PN_med_m_jet__37->SetEntries(98);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_m_jet__37->SetLineColor(ci);
   ZccHcc_boosted_PN_med_m_jet__37->SetLineWidth(2);
   ZccHcc_boosted_PN_med_m_jet__37->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_m_jet__37->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__37->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__37->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__37->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__37->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__37->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__37->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__37->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__37->Draw("same hist");
   
   TH1D *ZccHcc_boosted_PN_med_m_jet__38 = new TH1D("ZccHcc_boosted_PN_med_m_jet__38","",30,0,300);
   ZccHcc_boosted_PN_med_m_jet__38->SetBinContent(8,4.854898);
   ZccHcc_boosted_PN_med_m_jet__38->SetBinContent(9,15.35577);
   ZccHcc_boosted_PN_med_m_jet__38->SetBinContent(10,32.87215);
   ZccHcc_boosted_PN_med_m_jet__38->SetBinContent(11,8.428059);
   ZccHcc_boosted_PN_med_m_jet__38->SetBinContent(12,15.41636);
   ZccHcc_boosted_PN_med_m_jet__38->SetBinContent(13,21.18023);
   ZccHcc_boosted_PN_med_m_jet__38->SetBinContent(14,20.78504);
   ZccHcc_boosted_PN_med_m_jet__38->SetBinContent(15,2.917014);
   ZccHcc_boosted_PN_med_m_jet__38->SetBinContent(17,1.211009);
   ZccHcc_boosted_PN_med_m_jet__38->SetBinError(8,2.533201);
   ZccHcc_boosted_PN_med_m_jet__38->SetBinError(9,5.082539);
   ZccHcc_boosted_PN_med_m_jet__38->SetBinError(10,6.736996);
   ZccHcc_boosted_PN_med_m_jet__38->SetBinError(11,3.252278);
   ZccHcc_boosted_PN_med_m_jet__38->SetBinError(12,4.675013);
   ZccHcc_boosted_PN_med_m_jet__38->SetBinError(13,5.691161);
   ZccHcc_boosted_PN_med_m_jet__38->SetBinError(14,5.320088);
   ZccHcc_boosted_PN_med_m_jet__38->SetBinError(15,2.062644);
   ZccHcc_boosted_PN_med_m_jet__38->SetBinError(17,1.211009);
   ZccHcc_boosted_PN_med_m_jet__38->SetEntries(98);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_m_jet__38->SetLineColor(ci);
   ZccHcc_boosted_PN_med_m_jet__38->SetLineWidth(2);
   ZccHcc_boosted_PN_med_m_jet__38->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_m_jet__38->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__38->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__38->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__38->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__38->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__38->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__38->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__38->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__38->Draw("same hist");
   
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
   entry=leg->AddEntry("ZccHcc_boosted_PN_med_m_jet","L1Prefiring Up","F");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ZccHcc_boosted_PN_med_m_jet","L1Prefiring Down","F");
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
   pad1_v1__14->Modified();
   c1->cd();
  
// ------------>Primitives in pad: pad1_v2
   TPad *pad1_v2__15 = new TPad("pad1_v2", "pad1_v2",0,0.1,1,0.3);
   pad1_v2__15->Draw();
   pad1_v2__15->cd();
   pad1_v2__15->Range(-38.75,0.75,348.75,1.25);
   pad1_v2__15->SetBorderSize(2);
   pad1_v2__15->SetFrameFillColor(0);
   
   TH1D *ZccHcc_boosted_PN_med_m_jet__39 = new TH1D("ZccHcc_boosted_PN_med_m_jet__39","",30,0,300);
   ZccHcc_boosted_PN_med_m_jet__39->SetBinContent(8,0.999842);
   ZccHcc_boosted_PN_med_m_jet__39->SetBinContent(9,0.9988696);
   ZccHcc_boosted_PN_med_m_jet__39->SetBinContent(10,0.9984396);
   ZccHcc_boosted_PN_med_m_jet__39->SetBinContent(11,0.9974292);
   ZccHcc_boosted_PN_med_m_jet__39->SetBinContent(12,0.9979358);
   ZccHcc_boosted_PN_med_m_jet__39->SetBinContent(13,0.9991608);
   ZccHcc_boosted_PN_med_m_jet__39->SetBinContent(14,0.9978192);
   ZccHcc_boosted_PN_med_m_jet__39->SetBinContent(15,1);
   ZccHcc_boosted_PN_med_m_jet__39->SetBinContent(17,0.9952116);
   ZccHcc_boosted_PN_med_m_jet__39->SetBinError(8,0.7377536);
   ZccHcc_boosted_PN_med_m_jet__39->SetBinError(9,0.4676926);
   ZccHcc_boosted_PN_med_m_jet__39->SetBinError(10,0.2894516);
   ZccHcc_boosted_PN_med_m_jet__39->SetBinError(11,0.5445036);
   ZccHcc_boosted_PN_med_m_jet__39->SetBinError(12,0.4280628);
   ZccHcc_boosted_PN_med_m_jet__39->SetBinError(13,0.379744);
   ZccHcc_boosted_PN_med_m_jet__39->SetBinError(14,0.3613767);
   ZccHcc_boosted_PN_med_m_jet__39->SetBinError(15,1.000002);
   ZccHcc_boosted_PN_med_m_jet__39->SetBinError(17,1.407442);
   ZccHcc_boosted_PN_med_m_jet__39->SetMinimum(0.8);
   ZccHcc_boosted_PN_med_m_jet__39->SetMaximum(1.2);
   ZccHcc_boosted_PN_med_m_jet__39->SetEntries(17.61702);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_m_jet__39->SetLineColor(ci);
   ZccHcc_boosted_PN_med_m_jet__39->SetLineWidth(2);
   ZccHcc_boosted_PN_med_m_jet__39->GetXaxis()->SetRange(1,31);
   ZccHcc_boosted_PN_med_m_jet__39->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__39->GetXaxis()->SetLabelSize(0.1);
   ZccHcc_boosted_PN_med_m_jet__39->GetXaxis()->SetTitleSize(0.13);
   ZccHcc_boosted_PN_med_m_jet__39->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__39->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__39->GetYaxis()->SetTitle("#frac{Up/Down}{Nominal}");
   ZccHcc_boosted_PN_med_m_jet__39->GetYaxis()->CenterTitle(true);
   ZccHcc_boosted_PN_med_m_jet__39->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__39->GetYaxis()->SetLabelSize(0.09);
   ZccHcc_boosted_PN_med_m_jet__39->GetYaxis()->SetTitleSize(0.12);
   ZccHcc_boosted_PN_med_m_jet__39->GetYaxis()->SetTitleOffset(0.35);
   ZccHcc_boosted_PN_med_m_jet__39->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__39->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__39->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__39->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__39->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_m_jet__40 = new TH1D("ZccHcc_boosted_PN_med_m_jet__40","",30,0,300);
   ZccHcc_boosted_PN_med_m_jet__40->SetBinContent(8,1.000158);
   ZccHcc_boosted_PN_med_m_jet__40->SetBinContent(9,1.000651);
   ZccHcc_boosted_PN_med_m_jet__40->SetBinContent(10,1.001449);
   ZccHcc_boosted_PN_med_m_jet__40->SetBinContent(11,1.002425);
   ZccHcc_boosted_PN_med_m_jet__40->SetBinContent(12,1.001792);
   ZccHcc_boosted_PN_med_m_jet__40->SetBinContent(13,1.000763);
   ZccHcc_boosted_PN_med_m_jet__40->SetBinContent(14,1.002019);
   ZccHcc_boosted_PN_med_m_jet__40->SetBinContent(15,1);
   ZccHcc_boosted_PN_med_m_jet__40->SetBinContent(17,1.004788);
   ZccHcc_boosted_PN_med_m_jet__40->SetBinError(8,0.7380147);
   ZccHcc_boosted_PN_med_m_jet__40->SetBinError(9,0.4684277);
   ZccHcc_boosted_PN_med_m_jet__40->SetBinError(10,0.2902779);
   ZccHcc_boosted_PN_med_m_jet__40->SetBinError(11,0.5471045);
   ZccHcc_boosted_PN_med_m_jet__40->SetBinError(12,0.4296559);
   ZccHcc_boosted_PN_med_m_jet__40->SetBinError(13,0.3803114);
   ZccHcc_boosted_PN_med_m_jet__40->SetBinError(14,0.3627691);
   ZccHcc_boosted_PN_med_m_jet__40->SetBinError(15,1.000002);
   ZccHcc_boosted_PN_med_m_jet__40->SetBinError(17,1.420985);
   ZccHcc_boosted_PN_med_m_jet__40->SetEntries(17.55789);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_m_jet__40->SetLineColor(ci);
   ZccHcc_boosted_PN_med_m_jet__40->SetLineWidth(2);
   ZccHcc_boosted_PN_med_m_jet__40->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_m_jet__40->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__40->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__40->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__40->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__40->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__40->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__40->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__40->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__40->Draw("same hist");
   TLine *line = new TLine(0,1,300,1);
   line->SetLineStyle(2);
   line->Draw();
   pad1_v2__15->Modified();
   c1->cd();
   c1->Modified();
   c1->SetSelected(c1);
}
