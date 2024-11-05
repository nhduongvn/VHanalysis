#ifdef __CLING__
#pragma cling optimize(0)
#endif
void VHcc_boosted_PN_med_HMass_L1Prefiring()
{
//=========Macro generated from canvas: c1/
//=========  (Mon Oct 21 12:54:55 2024) by ROOT version 6.30/03
   TCanvas *c1 = new TCanvas("c1", "",0,0,600,600);
   gStyle->SetOptStat(0);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.15);
  
// ------------>Primitives in pad: pad1_v1
   TPad *pad1_v1__64 = new TPad("pad1_v1", "pad1_v1",0,0.3,1,1);
   pad1_v1__64->Draw();
   pad1_v1__64->cd();
   pad1_v1__64->Range(-38.75,-5.180492,348.75,46.62443);
   pad1_v1__64->SetBorderSize(2);
   pad1_v1__64->SetFrameFillColor(0);
   
   TH1D *VHcc_boosted_PN_med_HMass__161 = new TH1D("VHcc_boosted_PN_med_HMass__161","",30,0,300);
   VHcc_boosted_PN_med_HMass__161->SetBinContent(8,2.327649);
   VHcc_boosted_PN_med_HMass__161->SetBinContent(9,3.424545);
   VHcc_boosted_PN_med_HMass__161->SetBinContent(10,10.98909);
   VHcc_boosted_PN_med_HMass__161->SetBinContent(11,7.880025);
   VHcc_boosted_PN_med_HMass__161->SetBinContent(12,17.10883);
   VHcc_boosted_PN_med_HMass__161->SetBinContent(13,39.4076);
   VHcc_boosted_PN_med_HMass__161->SetBinContent(14,28.33915);
   VHcc_boosted_PN_med_HMass__161->SetBinContent(15,9.942373);
   VHcc_boosted_PN_med_HMass__161->SetBinContent(16,1.12284);
   VHcc_boosted_PN_med_HMass__161->SetBinError(8,1.648516);
   VHcc_boosted_PN_med_HMass__161->SetBinError(9,2.012203);
   VHcc_boosted_PN_med_HMass__161->SetBinError(10,3.673365);
   VHcc_boosted_PN_med_HMass__161->SetBinError(11,3.537899);
   VHcc_boosted_PN_med_HMass__161->SetBinError(12,4.588861);
   VHcc_boosted_PN_med_HMass__161->SetBinError(13,7.075363);
   VHcc_boosted_PN_med_HMass__161->SetBinError(14,5.806747);
   VHcc_boosted_PN_med_HMass__161->SetBinError(15,3.524047);
   VHcc_boosted_PN_med_HMass__161->SetBinError(16,1.12284);
   VHcc_boosted_PN_med_HMass__161->SetMaximum(41.44394);
   VHcc_boosted_PN_med_HMass__161->SetEntries(105);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   VHcc_boosted_PN_med_HMass__161->SetFillColor(ci);
   VHcc_boosted_PN_med_HMass__161->SetLineWidth(2);
   VHcc_boosted_PN_med_HMass__161->GetXaxis()->SetRange(1,31);
   VHcc_boosted_PN_med_HMass__161->GetXaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__161->GetXaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__161->GetXaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__161->GetYaxis()->SetTitle("Events/10.000000");
   VHcc_boosted_PN_med_HMass__161->GetYaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__161->GetYaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__161->GetZaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__161->GetZaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__161->GetZaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__161->Draw("hist");
   
   TH1D *VHcc_boosted_PN_med_HMass__162 = new TH1D("VHcc_boosted_PN_med_HMass__162","",30,0,300);
   VHcc_boosted_PN_med_HMass__162->SetBinContent(8,2.321062);
   VHcc_boosted_PN_med_HMass__162->SetBinContent(9,3.422703);
   VHcc_boosted_PN_med_HMass__162->SetBinContent(10,10.98417);
   VHcc_boosted_PN_med_HMass__162->SetBinContent(11,7.859716);
   VHcc_boosted_PN_med_HMass__162->SetBinContent(12,17.0997);
   VHcc_boosted_PN_med_HMass__162->SetBinContent(13,39.36736);
   VHcc_boosted_PN_med_HMass__162->SetBinContent(14,28.18049);
   VHcc_boosted_PN_med_HMass__162->SetBinContent(15,9.938005);
   VHcc_boosted_PN_med_HMass__162->SetBinContent(16,1.12284);
   VHcc_boosted_PN_med_HMass__162->SetBinError(8,1.644135);
   VHcc_boosted_PN_med_HMass__162->SetBinError(9,2.010947);
   VHcc_boosted_PN_med_HMass__162->SetBinError(10,3.671673);
   VHcc_boosted_PN_med_HMass__162->SetBinError(11,3.530386);
   VHcc_boosted_PN_med_HMass__162->SetBinError(12,4.586512);
   VHcc_boosted_PN_med_HMass__162->SetBinError(13,7.06843);
   VHcc_boosted_PN_med_HMass__162->SetBinError(14,5.781008);
   VHcc_boosted_PN_med_HMass__162->SetBinError(15,3.522466);
   VHcc_boosted_PN_med_HMass__162->SetBinError(16,1.12284);
   VHcc_boosted_PN_med_HMass__162->SetEntries(105);

   ci = TColor::GetColor("#ff0000");
   VHcc_boosted_PN_med_HMass__162->SetLineColor(ci);
   VHcc_boosted_PN_med_HMass__162->SetLineWidth(2);
   VHcc_boosted_PN_med_HMass__162->GetXaxis()->SetRange(1,300);
   VHcc_boosted_PN_med_HMass__162->GetXaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__162->GetXaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__162->GetXaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__162->GetYaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__162->GetYaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__162->GetZaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__162->GetZaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__162->GetZaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__162->Draw("same hist");
   
   TH1D *VHcc_boosted_PN_med_HMass__163 = new TH1D("VHcc_boosted_PN_med_HMass__163","",30,0,300);
   VHcc_boosted_PN_med_HMass__163->SetBinContent(8,2.334235);
   VHcc_boosted_PN_med_HMass__163->SetBinContent(9,3.424556);
   VHcc_boosted_PN_med_HMass__163->SetBinContent(10,10.99211);
   VHcc_boosted_PN_med_HMass__163->SetBinContent(11,7.89713);
   VHcc_boosted_PN_med_HMass__163->SetBinContent(12,17.1177);
   VHcc_boosted_PN_med_HMass__163->SetBinContent(13,39.44393);
   VHcc_boosted_PN_med_HMass__163->SetBinContent(14,28.49551);
   VHcc_boosted_PN_med_HMass__163->SetBinContent(15,9.946742);
   VHcc_boosted_PN_med_HMass__163->SetBinContent(16,1.12284);
   VHcc_boosted_PN_med_HMass__163->SetBinError(8,1.652911);
   VHcc_boosted_PN_med_HMass__163->SetBinError(9,2.012211);
   VHcc_boosted_PN_med_HMass__163->SetBinError(10,3.674368);
   VHcc_boosted_PN_med_HMass__163->SetBinError(11,3.544294);
   VHcc_boosted_PN_med_HMass__163->SetBinError(12,4.591148);
   VHcc_boosted_PN_med_HMass__163->SetBinError(13,7.081644);
   VHcc_boosted_PN_med_HMass__163->SetBinError(14,5.83382);
   VHcc_boosted_PN_med_HMass__163->SetBinError(15,3.525631);
   VHcc_boosted_PN_med_HMass__163->SetBinError(16,1.12284);
   VHcc_boosted_PN_med_HMass__163->SetEntries(105);

   ci = TColor::GetColor("#0000ff");
   VHcc_boosted_PN_med_HMass__163->SetLineColor(ci);
   VHcc_boosted_PN_med_HMass__163->SetLineWidth(2);
   VHcc_boosted_PN_med_HMass__163->GetXaxis()->SetRange(1,300);
   VHcc_boosted_PN_med_HMass__163->GetXaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__163->GetXaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__163->GetXaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__163->GetYaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__163->GetYaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__163->GetZaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__163->GetZaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__163->GetZaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__163->Draw("same hist");
   
   TLegend *leg = new TLegend(0.53,0.7,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VHcc_boosted_PN_med_HMass","Nominal","F");

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
   entry=leg->AddEntry("VHcc_boosted_PN_med_HMass","L1Prefiring Up","F");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VHcc_boosted_PN_med_HMass","L1Prefiring Down","F");
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
   pad1_v1__64->Modified();
   c1->cd();
  
// ------------>Primitives in pad: pad1_v2
   TPad *pad1_v2__65 = new TPad("pad1_v2", "pad1_v2",0,0.1,1,0.3);
   pad1_v2__65->Draw();
   pad1_v2__65->cd();
   pad1_v2__65->Range(-38.75,0.75,348.75,1.25);
   pad1_v2__65->SetBorderSize(2);
   pad1_v2__65->SetFrameFillColor(0);
   
   TH1D *VHcc_boosted_PN_med_HMass__164 = new TH1D("VHcc_boosted_PN_med_HMass__164","",30,0,300);
   VHcc_boosted_PN_med_HMass__164->SetBinContent(8,0.9971702);
   VHcc_boosted_PN_med_HMass__164->SetBinContent(9,0.9994621);
   VHcc_boosted_PN_med_HMass__164->SetBinContent(10,0.9995525);
   VHcc_boosted_PN_med_HMass__164->SetBinContent(11,0.9974227);
   VHcc_boosted_PN_med_HMass__164->SetBinContent(12,0.9994661);
   VHcc_boosted_PN_med_HMass__164->SetBinContent(13,0.9989789);
   VHcc_boosted_PN_med_HMass__164->SetBinContent(14,0.9944015);
   VHcc_boosted_PN_med_HMass__164->SetBinContent(15,0.9995606);
   VHcc_boosted_PN_med_HMass__164->SetBinContent(16,1);
   VHcc_boosted_PN_med_HMass__164->SetBinError(8,0.9988439);
   VHcc_boosted_PN_med_HMass__164->SetBinError(9,0.8304845);
   VHcc_boosted_PN_med_HMass__164->SetBinError(10,0.4725198);
   VHcc_boosted_PN_med_HMass__164->SetBinError(11,0.6334479);
   VHcc_boosted_PN_med_HMass__164->SetBinError(12,0.3791163);
   VHcc_boosted_PN_med_HMass__164->SetBinError(13,0.2536583);
   VHcc_boosted_PN_med_HMass__164->SetBinError(14,0.2883218);
   VHcc_boosted_PN_med_HMass__164->SetBinError(15,0.5010416);
   VHcc_boosted_PN_med_HMass__164->SetBinError(16,1.414214);
   VHcc_boosted_PN_med_HMass__164->SetMinimum(0.8);
   VHcc_boosted_PN_med_HMass__164->SetMaximum(1.2);
   VHcc_boosted_PN_med_HMass__164->SetEntries(16.63487);

   ci = TColor::GetColor("#ff0000");
   VHcc_boosted_PN_med_HMass__164->SetLineColor(ci);
   VHcc_boosted_PN_med_HMass__164->SetLineWidth(2);
   VHcc_boosted_PN_med_HMass__164->GetXaxis()->SetRange(1,31);
   VHcc_boosted_PN_med_HMass__164->GetXaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__164->GetXaxis()->SetLabelSize(0.1);
   VHcc_boosted_PN_med_HMass__164->GetXaxis()->SetTitleSize(0.13);
   VHcc_boosted_PN_med_HMass__164->GetXaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__164->GetXaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__164->GetYaxis()->SetTitle("#frac{Up/Down}{Nominal}");
   VHcc_boosted_PN_med_HMass__164->GetYaxis()->CenterTitle(true);
   VHcc_boosted_PN_med_HMass__164->GetYaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__164->GetYaxis()->SetLabelSize(0.09);
   VHcc_boosted_PN_med_HMass__164->GetYaxis()->SetTitleSize(0.12);
   VHcc_boosted_PN_med_HMass__164->GetYaxis()->SetTitleOffset(0.35);
   VHcc_boosted_PN_med_HMass__164->GetYaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__164->GetZaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__164->GetZaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__164->GetZaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__164->Draw("hist");
   
   TH1D *VHcc_boosted_PN_med_HMass__165 = new TH1D("VHcc_boosted_PN_med_HMass__165","",30,0,300);
   VHcc_boosted_PN_med_HMass__165->SetBinContent(8,1.00283);
   VHcc_boosted_PN_med_HMass__165->SetBinContent(9,1.000003);
   VHcc_boosted_PN_med_HMass__165->SetBinContent(10,1.000274);
   VHcc_boosted_PN_med_HMass__165->SetBinContent(11,1.002171);
   VHcc_boosted_PN_med_HMass__165->SetBinContent(12,1.000518);
   VHcc_boosted_PN_med_HMass__165->SetBinContent(13,1.000922);
   VHcc_boosted_PN_med_HMass__165->SetBinContent(14,1.005517);
   VHcc_boosted_PN_med_HMass__165->SetBinContent(15,1.000439);
   VHcc_boosted_PN_med_HMass__165->SetBinContent(16,1);
   VHcc_boosted_PN_med_HMass__165->SetBinError(8,1.004344);
   VHcc_boosted_PN_med_HMass__165->SetBinError(9,0.8309702);
   VHcc_boosted_PN_med_HMass__165->SetBinError(10,0.4728639);
   VHcc_boosted_PN_med_HMass__165->SetBinError(11,0.6362033);
   VHcc_boosted_PN_med_HMass__165->SetBinError(12,0.3795074);
   VHcc_boosted_PN_med_HMass__165->SetBinError(13,0.2541421);
   VHcc_boosted_PN_med_HMass__165->SetBinError(14,0.2912501);
   VHcc_boosted_PN_med_HMass__165->SetBinError(15,0.5014869);
   VHcc_boosted_PN_med_HMass__165->SetBinError(16,1.414214);
   VHcc_boosted_PN_med_HMass__165->SetEntries(16.67076);

   ci = TColor::GetColor("#0000ff");
   VHcc_boosted_PN_med_HMass__165->SetLineColor(ci);
   VHcc_boosted_PN_med_HMass__165->SetLineWidth(2);
   VHcc_boosted_PN_med_HMass__165->GetXaxis()->SetRange(1,300);
   VHcc_boosted_PN_med_HMass__165->GetXaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__165->GetXaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__165->GetXaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__165->GetYaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__165->GetYaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__165->GetZaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_HMass__165->GetZaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_HMass__165->GetZaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_HMass__165->Draw("same hist");
   TLine *line = new TLine(0,1,300,1);
   line->SetLineStyle(2);
   line->Draw();
   pad1_v2__65->Modified();
   c1->cd();
   c1->Modified();
   c1->SetSelected(c1);
}
