#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ZccHcc_boosted_PN_med_m_jet_PU()
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
   TPad *pad1_v1__16 = new TPad("pad1_v1", "pad1_v1",0,0.3,1,1);
   pad1_v1__16->Draw();
   pad1_v1__16->cd();
   pad1_v1__16->Range(-38.75,-4.579171,348.75,41.21254);
   pad1_v1__16->SetBorderSize(2);
   pad1_v1__16->SetFrameFillColor(0);
   
   TH1D *ZccHcc_boosted_PN_med_m_jet__41 = new TH1D("ZccHcc_boosted_PN_med_m_jet__41","",30,0,300);
   ZccHcc_boosted_PN_med_m_jet__41->SetBinContent(8,4.854131);
   ZccHcc_boosted_PN_med_m_jet__41->SetBinContent(9,15.34577);
   ZccHcc_boosted_PN_med_m_jet__41->SetBinContent(10,32.8246);
   ZccHcc_boosted_PN_med_m_jet__41->SetBinContent(11,8.407669);
   ZccHcc_boosted_PN_med_m_jet__41->SetBinContent(12,15.38878);
   ZccHcc_boosted_PN_med_m_jet__41->SetBinContent(13,21.16408);
   ZccHcc_boosted_PN_med_m_jet__41->SetBinContent(14,20.74317);
   ZccHcc_boosted_PN_med_m_jet__41->SetBinContent(15,2.917014);
   ZccHcc_boosted_PN_med_m_jet__41->SetBinContent(17,1.205237);
   ZccHcc_boosted_PN_med_m_jet__41->SetBinError(8,2.532705);
   ZccHcc_boosted_PN_med_m_jet__41->SetBinError(9,5.08006);
   ZccHcc_boosted_PN_med_m_jet__41->SetBinError(10,6.72825);
   ZccHcc_boosted_PN_med_m_jet__41->SetBinError(11,3.245056);
   ZccHcc_boosted_PN_med_m_jet__41->SetBinError(12,4.667229);
   ZccHcc_boosted_PN_med_m_jet__41->SetBinError(13,5.687424);
   ZccHcc_boosted_PN_med_m_jet__41->SetBinError(14,5.311121);
   ZccHcc_boosted_PN_med_m_jet__41->SetBinError(15,2.062644);
   ZccHcc_boosted_PN_med_m_jet__41->SetBinError(17,1.205237);
   ZccHcc_boosted_PN_med_m_jet__41->SetMaximum(36.63337);
   ZccHcc_boosted_PN_med_m_jet__41->SetEntries(98);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   ZccHcc_boosted_PN_med_m_jet__41->SetFillColor(ci);
   ZccHcc_boosted_PN_med_m_jet__41->SetLineWidth(2);
   ZccHcc_boosted_PN_med_m_jet__41->GetXaxis()->SetRange(1,31);
   ZccHcc_boosted_PN_med_m_jet__41->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__41->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__41->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__41->GetYaxis()->SetTitle("Events/10.000000");
   ZccHcc_boosted_PN_med_m_jet__41->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__41->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__41->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__41->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__41->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__41->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_m_jet__42 = new TH1D("ZccHcc_boosted_PN_med_m_jet__42","",30,0,300);
   ZccHcc_boosted_PN_med_m_jet__42->SetBinContent(8,4.751745);
   ZccHcc_boosted_PN_med_m_jet__42->SetBinContent(9,14.83927);
   ZccHcc_boosted_PN_med_m_jet__42->SetBinContent(10,31.14877);
   ZccHcc_boosted_PN_med_m_jet__42->SetBinContent(11,9.048253);
   ZccHcc_boosted_PN_med_m_jet__42->SetBinContent(12,13.44702);
   ZccHcc_boosted_PN_med_m_jet__42->SetBinContent(13,20.81649);
   ZccHcc_boosted_PN_med_m_jet__42->SetBinContent(14,20.57659);
   ZccHcc_boosted_PN_med_m_jet__42->SetBinContent(15,2.6499);
   ZccHcc_boosted_PN_med_m_jet__42->SetBinContent(17,1.514802);
   ZccHcc_boosted_PN_med_m_jet__42->SetBinError(8,2.519242);
   ZccHcc_boosted_PN_med_m_jet__42->SetBinError(9,4.711203);
   ZccHcc_boosted_PN_med_m_jet__42->SetBinError(10,6.433149);
   ZccHcc_boosted_PN_med_m_jet__42->SetBinError(11,3.334432);
   ZccHcc_boosted_PN_med_m_jet__42->SetBinError(12,4.088802);
   ZccHcc_boosted_PN_med_m_jet__42->SetBinError(13,5.402327);
   ZccHcc_boosted_PN_med_m_jet__42->SetBinError(14,5.217766);
   ZccHcc_boosted_PN_med_m_jet__42->SetBinError(15,1.894439);
   ZccHcc_boosted_PN_med_m_jet__42->SetBinError(17,1.514802);
   ZccHcc_boosted_PN_med_m_jet__42->SetEntries(98);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_m_jet__42->SetLineColor(ci);
   ZccHcc_boosted_PN_med_m_jet__42->SetLineWidth(2);
   ZccHcc_boosted_PN_med_m_jet__42->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_m_jet__42->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__42->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__42->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__42->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__42->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__42->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__42->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__42->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__42->Draw("same hist");
   
   TH1D *ZccHcc_boosted_PN_med_m_jet__43 = new TH1D("ZccHcc_boosted_PN_med_m_jet__43","",30,0,300);
   ZccHcc_boosted_PN_med_m_jet__43->SetBinContent(8,5.158803);
   ZccHcc_boosted_PN_med_m_jet__43->SetBinContent(9,15.84208);
   ZccHcc_boosted_PN_med_m_jet__43->SetBinContent(10,34.63336);
   ZccHcc_boosted_PN_med_m_jet__43->SetBinContent(11,7.909907);
   ZccHcc_boosted_PN_med_m_jet__43->SetBinContent(12,17.79619);
   ZccHcc_boosted_PN_med_m_jet__43->SetBinContent(13,21.41639);
   ZccHcc_boosted_PN_med_m_jet__43->SetBinContent(14,21.19571);
   ZccHcc_boosted_PN_med_m_jet__43->SetBinContent(15,3.225632);
   ZccHcc_boosted_PN_med_m_jet__43->SetBinContent(17,0.8912119);
   ZccHcc_boosted_PN_med_m_jet__43->SetBinError(8,2.730681);
   ZccHcc_boosted_PN_med_m_jet__43->SetBinError(9,5.688544);
   ZccHcc_boosted_PN_med_m_jet__43->SetBinError(10,7.232123);
   ZccHcc_boosted_PN_med_m_jet__43->SetBinError(11,3.273669);
   ZccHcc_boosted_PN_med_m_jet__43->SetBinError(12,5.510904);
   ZccHcc_boosted_PN_med_m_jet__43->SetBinError(13,6.110822);
   ZccHcc_boosted_PN_med_m_jet__43->SetBinError(14,5.657095);
   ZccHcc_boosted_PN_med_m_jet__43->SetBinError(15,2.310692);
   ZccHcc_boosted_PN_med_m_jet__43->SetBinError(17,0.8912119);
   ZccHcc_boosted_PN_med_m_jet__43->SetEntries(98);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_m_jet__43->SetLineColor(ci);
   ZccHcc_boosted_PN_med_m_jet__43->SetLineWidth(2);
   ZccHcc_boosted_PN_med_m_jet__43->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_m_jet__43->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__43->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__43->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__43->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__43->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__43->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__43->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__43->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__43->Draw("same hist");
   
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
   entry=leg->AddEntry("ZccHcc_boosted_PN_med_m_jet","PU Up","F");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ZccHcc_boosted_PN_med_m_jet","PU Down","F");
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
   pad1_v1__16->Modified();
   c1->cd();
  
// ------------>Primitives in pad: pad1_v2
   TPad *pad1_v2__17 = new TPad("pad1_v2", "pad1_v2",0,0.1,1,0.3);
   pad1_v2__17->Draw();
   pad1_v2__17->cd();
   pad1_v2__17->Range(-38.75,0.75,348.75,1.25);
   pad1_v2__17->SetBorderSize(2);
   pad1_v2__17->SetFrameFillColor(0);
   
   TH1D *ZccHcc_boosted_PN_med_m_jet__44 = new TH1D("ZccHcc_boosted_PN_med_m_jet__44","",30,0,300);
   ZccHcc_boosted_PN_med_m_jet__44->SetBinContent(8,0.9789076);
   ZccHcc_boosted_PN_med_m_jet__44->SetBinContent(9,0.9669943);
   ZccHcc_boosted_PN_med_m_jet__44->SetBinContent(10,0.9489459);
   ZccHcc_boosted_PN_med_m_jet__44->SetBinContent(11,1.07619);
   ZccHcc_boosted_PN_med_m_jet__44->SetBinContent(12,0.8738202);
   ZccHcc_boosted_PN_med_m_jet__44->SetBinContent(13,0.9835762);
   ZccHcc_boosted_PN_med_m_jet__44->SetBinContent(14,0.9919697);
   ZccHcc_boosted_PN_med_m_jet__44->SetBinContent(15,0.9084291);
   ZccHcc_boosted_PN_med_m_jet__44->SetBinContent(17,1.25685);
   ZccHcc_boosted_PN_med_m_jet__44->SetBinError(8,0.7281643);
   ZccHcc_boosted_PN_med_m_jet__44->SetBinError(9,0.4435355);
   ZccHcc_boosted_PN_med_m_jet__44->SetBinError(10,0.2761247);
   ZccHcc_boosted_PN_med_m_jet__44->SetBinError(11,0.5742992);
   ZccHcc_boosted_PN_med_m_jet__44->SetBinError(12,0.3752756);
   ZccHcc_boosted_PN_med_m_jet__44->SetBinError(13,0.3674513);
   ZccHcc_boosted_PN_med_m_jet__44->SetBinError(14,0.357466);
   ZccHcc_boosted_PN_med_m_jet__44->SetBinError(15,0.9134558);
   ZccHcc_boosted_PN_med_m_jet__44->SetBinError(17,1.777454);
   ZccHcc_boosted_PN_med_m_jet__44->SetMinimum(0.8);
   ZccHcc_boosted_PN_med_m_jet__44->SetMaximum(1.2);
   ZccHcc_boosted_PN_med_m_jet__44->SetEntries(14.59979);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_m_jet__44->SetLineColor(ci);
   ZccHcc_boosted_PN_med_m_jet__44->SetLineWidth(2);
   ZccHcc_boosted_PN_med_m_jet__44->GetXaxis()->SetRange(1,31);
   ZccHcc_boosted_PN_med_m_jet__44->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__44->GetXaxis()->SetLabelSize(0.1);
   ZccHcc_boosted_PN_med_m_jet__44->GetXaxis()->SetTitleSize(0.13);
   ZccHcc_boosted_PN_med_m_jet__44->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__44->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__44->GetYaxis()->SetTitle("#frac{Up/Down}{Nominal}");
   ZccHcc_boosted_PN_med_m_jet__44->GetYaxis()->CenterTitle(true);
   ZccHcc_boosted_PN_med_m_jet__44->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__44->GetYaxis()->SetLabelSize(0.09);
   ZccHcc_boosted_PN_med_m_jet__44->GetYaxis()->SetTitleSize(0.12);
   ZccHcc_boosted_PN_med_m_jet__44->GetYaxis()->SetTitleOffset(0.35);
   ZccHcc_boosted_PN_med_m_jet__44->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__44->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__44->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__44->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__44->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_m_jet__45 = new TH1D("ZccHcc_boosted_PN_med_m_jet__45","",30,0,300);
   ZccHcc_boosted_PN_med_m_jet__45->SetBinContent(8,1.062766);
   ZccHcc_boosted_PN_med_m_jet__45->SetBinContent(9,1.032342);
   ZccHcc_boosted_PN_med_m_jet__45->SetBinContent(10,1.055104);
   ZccHcc_boosted_PN_med_m_jet__45->SetBinContent(11,0.9407967);
   ZccHcc_boosted_PN_med_m_jet__45->SetBinContent(12,1.156439);
   ZccHcc_boosted_PN_med_m_jet__45->SetBinContent(13,1.011921);
   ZccHcc_boosted_PN_med_m_jet__45->SetBinContent(14,1.021817);
   ZccHcc_boosted_PN_med_m_jet__45->SetBinContent(15,1.105799);
   ZccHcc_boosted_PN_med_m_jet__45->SetBinContent(17,0.7394492);
   ZccHcc_boosted_PN_med_m_jet__45->SetBinError(8,0.7899008);
   ZccHcc_boosted_PN_med_m_jet__45->SetBinError(9,0.5041851);
   ZccHcc_boosted_PN_med_m_jet__45->SetBinError(10,0.308734);
   ZccHcc_boosted_PN_med_m_jet__45->SetBinError(11,0.5324078);
   ZccHcc_boosted_PN_med_m_jet__45->SetBinError(12,0.501257);
   ZccHcc_boosted_PN_med_m_jet__45->SetBinError(13,0.3966309);
   ZccHcc_boosted_PN_med_m_jet__45->SetBinError(14,0.3779231);
   ZccHcc_boosted_PN_med_m_jet__45->SetBinError(15,1.113054);
   ZccHcc_boosted_PN_med_m_jet__45->SetBinError(17,1.045739);
   ZccHcc_boosted_PN_med_m_jet__45->SetEntries(20.115);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_m_jet__45->SetLineColor(ci);
   ZccHcc_boosted_PN_med_m_jet__45->SetLineWidth(2);
   ZccHcc_boosted_PN_med_m_jet__45->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_m_jet__45->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__45->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__45->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__45->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__45->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__45->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_m_jet__45->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_m_jet__45->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_m_jet__45->Draw("same hist");
   TLine *line = new TLine(0,1,300,1);
   line->SetLineStyle(2);
   line->Draw();
   pad1_v2__17->Modified();
   c1->cd();
   c1->Modified();
   c1->SetSelected(c1);
}
