#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HMass_PU()
{
//=========Macro generated from canvas: c1_n6/
//=========  (Fri Nov  1 13:56:20 2024) by ROOT version 6.30/03
   TCanvas *c1_n6 = new TCanvas("c1_n6", "",0,0,600,600);
   gStyle->SetOptStat(0);
   c1_n6->SetHighLightColor(2);
   c1_n6->Range(0,0,1,1);
   c1_n6->SetFillColor(0);
   c1_n6->SetBorderMode(0);
   c1_n6->SetBorderSize(2);
   c1_n6->SetLeftMargin(0.15);
   c1_n6->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1_v1
   TPad *pad1_v1__10 = new TPad("pad1_v1", "pad1_v1",0,0.3,1,1);
   pad1_v1__10->Draw();
   pad1_v1__10->cd();
   pad1_v1__10->Range(-37.5,-2.927049,337.5,26.34344);
   pad1_v1__10->SetFillColor(0);
   pad1_v1__10->SetBorderMode(0);
   pad1_v1__10->SetBorderSize(2);
   pad1_v1__10->SetFrameBorderMode(0);
   pad1_v1__10->SetFrameBorderMode(0);
   
   TH1D *ZccHcc_boosted_PN_med_HMass__26 = new TH1D("ZccHcc_boosted_PN_med_HMass__26","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__26->SetBinContent(10,2.80211);
   ZccHcc_boosted_PN_med_HMass__26->SetBinContent(11,1.468997);
   ZccHcc_boosted_PN_med_HMass__26->SetBinContent(12,11.12462);
   ZccHcc_boosted_PN_med_HMass__26->SetBinContent(13,21.16408);
   ZccHcc_boosted_PN_med_HMass__26->SetBinContent(14,20.74317);
   ZccHcc_boosted_PN_med_HMass__26->SetBinContent(15,2.917014);
   ZccHcc_boosted_PN_med_HMass__26->SetBinContent(17,1.205237);
   ZccHcc_boosted_PN_med_HMass__26->SetBinError(10,1.981682);
   ZccHcc_boosted_PN_med_HMass__26->SetBinError(11,1.468997);
   ZccHcc_boosted_PN_med_HMass__26->SetBinError(12,3.960583);
   ZccHcc_boosted_PN_med_HMass__26->SetBinError(13,5.687424);
   ZccHcc_boosted_PN_med_HMass__26->SetBinError(14,5.311121);
   ZccHcc_boosted_PN_med_HMass__26->SetBinError(15,2.062644);
   ZccHcc_boosted_PN_med_HMass__26->SetBinError(17,1.205237);
   ZccHcc_boosted_PN_med_HMass__26->SetMaximum(23.41639);
   ZccHcc_boosted_PN_med_HMass__26->SetEntries(49);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   ZccHcc_boosted_PN_med_HMass__26->SetFillColor(ci);
   ZccHcc_boosted_PN_med_HMass__26->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__26->GetXaxis()->SetTitle("M_{H} [GeV]");
   ZccHcc_boosted_PN_med_HMass__26->GetXaxis()->SetRange(1,30);
   ZccHcc_boosted_PN_med_HMass__26->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__26->GetXaxis()->SetTitleOffset(1.15);
   ZccHcc_boosted_PN_med_HMass__26->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__26->GetYaxis()->SetTitle("Events/10.0 GeV");
   ZccHcc_boosted_PN_med_HMass__26->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__26->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__26->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__26->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__26->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__26->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_HMass__27 = new TH1D("ZccHcc_boosted_PN_med_HMass__27","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__27->SetBinContent(10,2.884322);
   ZccHcc_boosted_PN_med_HMass__27->SetBinContent(11,1.249606);
   ZccHcc_boosted_PN_med_HMass__27->SetBinContent(12,9.704712);
   ZccHcc_boosted_PN_med_HMass__27->SetBinContent(13,20.81649);
   ZccHcc_boosted_PN_med_HMass__27->SetBinContent(14,20.57659);
   ZccHcc_boosted_PN_med_HMass__27->SetBinContent(15,2.6499);
   ZccHcc_boosted_PN_med_HMass__27->SetBinContent(17,1.514802);
   ZccHcc_boosted_PN_med_HMass__27->SetBinError(10,2.043621);
   ZccHcc_boosted_PN_med_HMass__27->SetBinError(11,1.249606);
   ZccHcc_boosted_PN_med_HMass__27->SetBinError(12,3.463712);
   ZccHcc_boosted_PN_med_HMass__27->SetBinError(13,5.402327);
   ZccHcc_boosted_PN_med_HMass__27->SetBinError(14,5.217766);
   ZccHcc_boosted_PN_med_HMass__27->SetBinError(15,1.894439);
   ZccHcc_boosted_PN_med_HMass__27->SetBinError(17,1.514802);
   ZccHcc_boosted_PN_med_HMass__27->SetEntries(49);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_HMass__27->SetLineColor(ci);
   ZccHcc_boosted_PN_med_HMass__27->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__27->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_HMass__27->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__27->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__27->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__27->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__27->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__27->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__27->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__27->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__27->Draw("same hist");
   
   TH1D *ZccHcc_boosted_PN_med_HMass__28 = new TH1D("ZccHcc_boosted_PN_med_HMass__28","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__28->SetBinContent(10,2.664697);
   ZccHcc_boosted_PN_med_HMass__28->SetBinContent(11,1.677848);
   ZccHcc_boosted_PN_med_HMass__28->SetBinContent(12,12.96315);
   ZccHcc_boosted_PN_med_HMass__28->SetBinContent(13,21.41639);
   ZccHcc_boosted_PN_med_HMass__28->SetBinContent(14,21.19571);
   ZccHcc_boosted_PN_med_HMass__28->SetBinContent(15,3.225632);
   ZccHcc_boosted_PN_med_HMass__28->SetBinContent(17,0.8912119);
   ZccHcc_boosted_PN_med_HMass__28->SetBinError(10,1.89579);
   ZccHcc_boosted_PN_med_HMass__28->SetBinError(11,1.677848);
   ZccHcc_boosted_PN_med_HMass__28->SetBinError(12,4.738666);
   ZccHcc_boosted_PN_med_HMass__28->SetBinError(13,6.110822);
   ZccHcc_boosted_PN_med_HMass__28->SetBinError(14,5.657095);
   ZccHcc_boosted_PN_med_HMass__28->SetBinError(15,2.310692);
   ZccHcc_boosted_PN_med_HMass__28->SetBinError(17,0.8912119);
   ZccHcc_boosted_PN_med_HMass__28->SetEntries(49);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_HMass__28->SetLineColor(ci);
   ZccHcc_boosted_PN_med_HMass__28->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__28->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_HMass__28->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__28->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__28->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__28->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__28->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__28->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__28->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__28->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__28->Draw("same hist");
   
   TLegend *leg = new TLegend(0.53,0.7,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("ZccHcc_boosted_PN_med_HMass","Nominal","F");

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
   entry=leg->AddEntry("ZccHcc_boosted_PN_med_HMass","PU Up","F");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ZccHcc_boosted_PN_med_HMass","PU Down","F");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   pad1_v1__10->Modified();
   c1_n6->cd();
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
  
// ------------>Primitives in pad: pad1_v2
   TPad *pad1_v2__11 = new TPad("pad1_v2", "pad1_v2",0,0.1,1,0.3);
   pad1_v2__11->Draw();
   pad1_v2__11->cd();
   pad1_v2__11->Range(-37.5,0.75,337.5,1.25);
   pad1_v2__11->SetFillColor(0);
   pad1_v2__11->SetBorderMode(0);
   pad1_v2__11->SetBorderSize(2);
   pad1_v2__11->SetFrameBorderMode(0);
   pad1_v2__11->SetFrameBorderMode(0);
   
   TH1D *ZccHcc_boosted_PN_med_HMass__29 = new TH1D("ZccHcc_boosted_PN_med_HMass__29","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__29->SetBinContent(10,1.029339);
   ZccHcc_boosted_PN_med_HMass__29->SetBinContent(11,0.8506526);
   ZccHcc_boosted_PN_med_HMass__29->SetBinContent(12,0.8723638);
   ZccHcc_boosted_PN_med_HMass__29->SetBinContent(13,0.9835762);
   ZccHcc_boosted_PN_med_HMass__29->SetBinContent(14,0.9919697);
   ZccHcc_boosted_PN_med_HMass__29->SetBinContent(15,0.9084291);
   ZccHcc_boosted_PN_med_HMass__29->SetBinContent(17,1.25685);
   ZccHcc_boosted_PN_med_HMass__29->SetBinError(10,1.030449);
   ZccHcc_boosted_PN_med_HMass__29->SetBinError(11,1.203004);
   ZccHcc_boosted_PN_med_HMass__29->SetBinError(12,0.4397744);
   ZccHcc_boosted_PN_med_HMass__29->SetBinError(13,0.3674513);
   ZccHcc_boosted_PN_med_HMass__29->SetBinError(14,0.357466);
   ZccHcc_boosted_PN_med_HMass__29->SetBinError(15,0.9134558);
   ZccHcc_boosted_PN_med_HMass__29->SetBinError(17,1.777454);
   ZccHcc_boosted_PN_med_HMass__29->SetMinimum(0.8);
   ZccHcc_boosted_PN_med_HMass__29->SetMaximum(1.2);
   ZccHcc_boosted_PN_med_HMass__29->SetEntries(6.827991);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_HMass__29->SetLineColor(ci);
   ZccHcc_boosted_PN_med_HMass__29->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__29->GetXaxis()->SetTitle("M_{H} [GeV]");
   ZccHcc_boosted_PN_med_HMass__29->GetXaxis()->SetRange(1,30);
   ZccHcc_boosted_PN_med_HMass__29->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__29->GetXaxis()->SetLabelSize(0.1);
   ZccHcc_boosted_PN_med_HMass__29->GetXaxis()->SetTitleSize(0.13);
   ZccHcc_boosted_PN_med_HMass__29->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__29->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__29->GetYaxis()->SetTitle("#frac{Up/Down}{Nominal}");
   ZccHcc_boosted_PN_med_HMass__29->GetYaxis()->CenterTitle(true);
   ZccHcc_boosted_PN_med_HMass__29->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__29->GetYaxis()->SetLabelSize(0.09);
   ZccHcc_boosted_PN_med_HMass__29->GetYaxis()->SetTitleSize(0.12);
   ZccHcc_boosted_PN_med_HMass__29->GetYaxis()->SetTitleOffset(0.35);
   ZccHcc_boosted_PN_med_HMass__29->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__29->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__29->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__29->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__29->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_HMass__30 = new TH1D("ZccHcc_boosted_PN_med_HMass__30","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__30->SetBinContent(10,0.9509607);
   ZccHcc_boosted_PN_med_HMass__30->SetBinContent(11,1.142173);
   ZccHcc_boosted_PN_med_HMass__30->SetBinContent(12,1.165268);
   ZccHcc_boosted_PN_med_HMass__30->SetBinContent(13,1.011921);
   ZccHcc_boosted_PN_med_HMass__30->SetBinContent(14,1.021817);
   ZccHcc_boosted_PN_med_HMass__30->SetBinContent(15,1.105799);
   ZccHcc_boosted_PN_med_HMass__30->SetBinContent(17,0.7394492);
   ZccHcc_boosted_PN_med_HMass__30->SetBinError(10,0.9539529);
   ZccHcc_boosted_PN_med_HMass__30->SetBinError(11,1.615276);
   ZccHcc_boosted_PN_med_HMass__30->SetBinError(12,0.5946018);
   ZccHcc_boosted_PN_med_HMass__30->SetBinError(13,0.3966309);
   ZccHcc_boosted_PN_med_HMass__30->SetBinError(14,0.3779231);
   ZccHcc_boosted_PN_med_HMass__30->SetBinError(15,1.113054);
   ZccHcc_boosted_PN_med_HMass__30->SetBinError(17,1.045739);
   ZccHcc_boosted_PN_med_HMass__30->SetEntries(7.830897);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_HMass__30->SetLineColor(ci);
   ZccHcc_boosted_PN_med_HMass__30->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__30->GetXaxis()->SetTitle("M_{H} [GeV]");
   ZccHcc_boosted_PN_med_HMass__30->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_HMass__30->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__30->GetXaxis()->SetTitleSize(0.13);
   ZccHcc_boosted_PN_med_HMass__30->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__30->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__30->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__30->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__30->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__30->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__30->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__30->Draw("same hist");
   TLine *line = new TLine(0,1,300,1);
   line->SetLineStyle(2);
   line->Draw();
   pad1_v2__11->Modified();
   c1_n6->cd();
   c1_n6->Modified();
   c1_n6->SetSelected(c1_n6);
}
