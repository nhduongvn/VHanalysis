#ifdef __CLING__
#pragma cling optimize(0)
#endif
void VHcc_boosted_PN_med_ZMass_JETPUID()
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
   TPad *pad1_v1__98 = new TPad("pad1_v1", "pad1_v1",0,0.3,1,1);
   pad1_v1__98->Draw();
   pad1_v1__98->cd();
   pad1_v1__98->Range(-38.75,-12.36457,348.75,111.2811);
   pad1_v1__98->SetBorderSize(2);
   pad1_v1__98->SetFrameFillColor(0);
   
   TH1D *VHcc_boosted_PN_med_ZMass__246 = new TH1D("VHcc_boosted_PN_med_ZMass__246","",30,0,300);
   VHcc_boosted_PN_med_ZMass__246->SetBinContent(6,1.156422);
   VHcc_boosted_PN_med_ZMass__246->SetBinContent(7,3.799433);
   VHcc_boosted_PN_med_ZMass__246->SetBinContent(8,7.358517);
   VHcc_boosted_PN_med_ZMass__246->SetBinContent(9,28.42426);
   VHcc_boosted_PN_med_ZMass__246->SetBinContent(10,48.6356);
   VHcc_boosted_PN_med_ZMass__246->SetBinContent(11,13.34351);
   VHcc_boosted_PN_med_ZMass__246->SetBinContent(12,6.097826);
   VHcc_boosted_PN_med_ZMass__246->SetBinContent(13,3.784915);
   VHcc_boosted_PN_med_ZMass__246->SetBinContent(14,2.354718);
   VHcc_boosted_PN_med_ZMass__246->SetBinContent(15,4.371698);
   VHcc_boosted_PN_med_ZMass__246->SetBinContent(21,1.215209);
   VHcc_boosted_PN_med_ZMass__246->SetBinError(6,1.156422);
   VHcc_boosted_PN_med_ZMass__246->SetBinError(7,2.20205);
   VHcc_boosted_PN_med_ZMass__246->SetBinError(8,3.004759);
   VHcc_boosted_PN_med_ZMass__246->SetBinError(9,5.834944);
   VHcc_boosted_PN_med_ZMass__246->SetBinError(10,7.655151);
   VHcc_boosted_PN_med_ZMass__246->SetBinError(11,4.457586);
   VHcc_boosted_PN_med_ZMass__246->SetBinError(12,2.731055);
   VHcc_boosted_PN_med_ZMass__246->SetBinError(13,2.64028);
   VHcc_boosted_PN_med_ZMass__246->SetBinError(14,1.665337);
   VHcc_boosted_PN_med_ZMass__246->SetBinError(15,2.209203);
   VHcc_boosted_PN_med_ZMass__246->SetBinError(21,1.215209);
   VHcc_boosted_PN_med_ZMass__246->SetMaximum(98.91653);
   VHcc_boosted_PN_med_ZMass__246->SetEntries(105);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   VHcc_boosted_PN_med_ZMass__246->SetFillColor(ci);
   VHcc_boosted_PN_med_ZMass__246->SetLineWidth(2);
   VHcc_boosted_PN_med_ZMass__246->GetXaxis()->SetRange(1,31);
   VHcc_boosted_PN_med_ZMass__246->GetXaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_ZMass__246->GetXaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_ZMass__246->GetXaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_ZMass__246->GetYaxis()->SetTitle("Events/10.000000");
   VHcc_boosted_PN_med_ZMass__246->GetYaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_ZMass__246->GetYaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_ZMass__246->GetZaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_ZMass__246->GetZaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_ZMass__246->GetZaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_ZMass__246->Draw("hist");
   
   TH1D *VHcc_boosted_PN_med_ZMass__247 = new TH1D("VHcc_boosted_PN_med_ZMass__247","",30,0,300);
   VHcc_boosted_PN_med_ZMass__247->SetBinContent(6,1.156422);
   VHcc_boosted_PN_med_ZMass__247->SetBinContent(7,3.799433);
   VHcc_boosted_PN_med_ZMass__247->SetBinContent(8,7.358517);
   VHcc_boosted_PN_med_ZMass__247->SetBinContent(9,28.42426);
   VHcc_boosted_PN_med_ZMass__247->SetBinContent(10,48.6356);
   VHcc_boosted_PN_med_ZMass__247->SetBinContent(11,13.34351);
   VHcc_boosted_PN_med_ZMass__247->SetBinContent(12,6.097826);
   VHcc_boosted_PN_med_ZMass__247->SetBinContent(13,3.784915);
   VHcc_boosted_PN_med_ZMass__247->SetBinContent(14,2.354718);
   VHcc_boosted_PN_med_ZMass__247->SetBinContent(15,4.371698);
   VHcc_boosted_PN_med_ZMass__247->SetBinContent(21,1.215209);
   VHcc_boosted_PN_med_ZMass__247->SetBinError(6,1.156422);
   VHcc_boosted_PN_med_ZMass__247->SetBinError(7,2.20205);
   VHcc_boosted_PN_med_ZMass__247->SetBinError(8,3.004759);
   VHcc_boosted_PN_med_ZMass__247->SetBinError(9,5.834944);
   VHcc_boosted_PN_med_ZMass__247->SetBinError(10,7.655151);
   VHcc_boosted_PN_med_ZMass__247->SetBinError(11,4.457586);
   VHcc_boosted_PN_med_ZMass__247->SetBinError(12,2.731055);
   VHcc_boosted_PN_med_ZMass__247->SetBinError(13,2.64028);
   VHcc_boosted_PN_med_ZMass__247->SetBinError(14,1.665337);
   VHcc_boosted_PN_med_ZMass__247->SetBinError(15,2.209203);
   VHcc_boosted_PN_med_ZMass__247->SetBinError(21,1.215209);
   VHcc_boosted_PN_med_ZMass__247->SetEntries(105);

   ci = TColor::GetColor("#ff0000");
   VHcc_boosted_PN_med_ZMass__247->SetLineColor(ci);
   VHcc_boosted_PN_med_ZMass__247->SetLineWidth(2);
   VHcc_boosted_PN_med_ZMass__247->GetXaxis()->SetRange(1,300);
   VHcc_boosted_PN_med_ZMass__247->GetXaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_ZMass__247->GetXaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_ZMass__247->GetXaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_ZMass__247->GetYaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_ZMass__247->GetYaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_ZMass__247->GetZaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_ZMass__247->GetZaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_ZMass__247->GetZaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_ZMass__247->Draw("same hist");
   
   TH1D *VHcc_boosted_PN_med_ZMass__248 = new TH1D("VHcc_boosted_PN_med_ZMass__248","",3,0,300);
   VHcc_boosted_PN_med_ZMass__248->SetBinContent(1,96.91652);
   VHcc_boosted_PN_med_ZMass__248->SetBinContent(2,31.22213);
   VHcc_boosted_PN_med_ZMass__248->SetBinContent(3,1.215209);
   VHcc_boosted_PN_med_ZMass__248->SetBinError(1,10.83563);
   VHcc_boosted_PN_med_ZMass__248->SetBinError(2,6.598443);
   VHcc_boosted_PN_med_ZMass__248->SetBinError(3,1.215209);
   VHcc_boosted_PN_med_ZMass__248->SetEntries(112);

   ci = TColor::GetColor("#0000ff");
   VHcc_boosted_PN_med_ZMass__248->SetLineColor(ci);
   VHcc_boosted_PN_med_ZMass__248->SetLineWidth(2);
   VHcc_boosted_PN_med_ZMass__248->GetXaxis()->SetRange(1,30);
   VHcc_boosted_PN_med_ZMass__248->GetXaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_ZMass__248->GetXaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_ZMass__248->GetXaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_ZMass__248->GetYaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_ZMass__248->GetYaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_ZMass__248->GetZaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_ZMass__248->GetZaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_ZMass__248->GetZaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_ZMass__248->Draw("same hist");
   
   TLegend *leg = new TLegend(0.53,0.7,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VHcc_boosted_PN_med_ZMass","Nominal","F");

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
   entry=leg->AddEntry("VHcc_boosted_PN_med_ZMass","JETPUID Up","F");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VHcc_boosted_PN_med_ZMass","JETPUID Down","F");
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
   pad1_v1__98->Modified();
   c1->cd();
  
// ------------>Primitives in pad: pad1_v2
   TPad *pad1_v2__99 = new TPad("pad1_v2", "pad1_v2",0,0.1,1,0.3);
   pad1_v2__99->Draw();
   pad1_v2__99->cd();
   pad1_v2__99->Range(-38.75,0.75,348.75,1.25);
   pad1_v2__99->SetBorderSize(2);
   pad1_v2__99->SetFrameFillColor(0);
   
   TH1D *VHcc_boosted_PN_med_ZMass__249 = new TH1D("VHcc_boosted_PN_med_ZMass__249","",30,0,300);
   VHcc_boosted_PN_med_ZMass__249->SetBinContent(6,1);
   VHcc_boosted_PN_med_ZMass__249->SetBinContent(7,1);
   VHcc_boosted_PN_med_ZMass__249->SetBinContent(8,1);
   VHcc_boosted_PN_med_ZMass__249->SetBinContent(9,1);
   VHcc_boosted_PN_med_ZMass__249->SetBinContent(10,1);
   VHcc_boosted_PN_med_ZMass__249->SetBinContent(11,1);
   VHcc_boosted_PN_med_ZMass__249->SetBinContent(12,1);
   VHcc_boosted_PN_med_ZMass__249->SetBinContent(13,1);
   VHcc_boosted_PN_med_ZMass__249->SetBinContent(14,1);
   VHcc_boosted_PN_med_ZMass__249->SetBinContent(15,1);
   VHcc_boosted_PN_med_ZMass__249->SetBinContent(21,1);
   VHcc_boosted_PN_med_ZMass__249->SetBinError(6,1.414214);
   VHcc_boosted_PN_med_ZMass__249->SetBinError(7,0.8196405);
   VHcc_boosted_PN_med_ZMass__249->SetBinError(8,0.5774766);
   VHcc_boosted_PN_med_ZMass__249->SetBinError(9,0.2903104);
   VHcc_boosted_PN_med_ZMass__249->SetBinError(10,0.2225946);
   VHcc_boosted_PN_med_ZMass__249->SetBinError(11,0.4724379);
   VHcc_boosted_PN_med_ZMass__249->SetBinError(12,0.6333888);
   VHcc_boosted_PN_med_ZMass__249->SetBinError(13,0.9865267);
   VHcc_boosted_PN_med_ZMass__249->SetBinError(14,1.00018);
   VHcc_boosted_PN_med_ZMass__249->SetBinError(15,0.7146619);
   VHcc_boosted_PN_med_ZMass__249->SetBinError(21,1.414214);
   VHcc_boosted_PN_med_ZMass__249->SetMinimum(0.8);
   VHcc_boosted_PN_med_ZMass__249->SetMaximum(1.2);
   VHcc_boosted_PN_med_ZMass__249->SetEntries(14.67052);

   ci = TColor::GetColor("#ff0000");
   VHcc_boosted_PN_med_ZMass__249->SetLineColor(ci);
   VHcc_boosted_PN_med_ZMass__249->SetLineWidth(2);
   VHcc_boosted_PN_med_ZMass__249->GetXaxis()->SetRange(1,31);
   VHcc_boosted_PN_med_ZMass__249->GetXaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_ZMass__249->GetXaxis()->SetLabelSize(0.1);
   VHcc_boosted_PN_med_ZMass__249->GetXaxis()->SetTitleSize(0.13);
   VHcc_boosted_PN_med_ZMass__249->GetXaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_ZMass__249->GetXaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_ZMass__249->GetYaxis()->SetTitle("#frac{Up/Down}{Nominal}");
   VHcc_boosted_PN_med_ZMass__249->GetYaxis()->CenterTitle(true);
   VHcc_boosted_PN_med_ZMass__249->GetYaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_ZMass__249->GetYaxis()->SetLabelSize(0.09);
   VHcc_boosted_PN_med_ZMass__249->GetYaxis()->SetTitleSize(0.12);
   VHcc_boosted_PN_med_ZMass__249->GetYaxis()->SetTitleOffset(0.35);
   VHcc_boosted_PN_med_ZMass__249->GetYaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_ZMass__249->GetZaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_ZMass__249->GetZaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_ZMass__249->GetZaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_ZMass__249->Draw("hist");
   
   TH1D *VHcc_boosted_PN_med_ZMass__250 = new TH1D("VHcc_boosted_PN_med_ZMass__250","",3,0,300);
   VHcc_boosted_PN_med_ZMass__250->SetBinContent(1,96.91652);
   VHcc_boosted_PN_med_ZMass__250->SetBinContent(2,31.22213);
   VHcc_boosted_PN_med_ZMass__250->SetBinContent(3,1.215209);
   VHcc_boosted_PN_med_ZMass__250->SetBinError(1,10.83563);
   VHcc_boosted_PN_med_ZMass__250->SetBinError(2,6.598443);
   VHcc_boosted_PN_med_ZMass__250->SetBinError(3,1.215209);
   VHcc_boosted_PN_med_ZMass__250->SetEntries(112);

   ci = TColor::GetColor("#0000ff");
   VHcc_boosted_PN_med_ZMass__250->SetLineColor(ci);
   VHcc_boosted_PN_med_ZMass__250->SetLineWidth(2);
   VHcc_boosted_PN_med_ZMass__250->GetXaxis()->SetRange(1,30);
   VHcc_boosted_PN_med_ZMass__250->GetXaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_ZMass__250->GetXaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_ZMass__250->GetXaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_ZMass__250->GetYaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_ZMass__250->GetYaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_ZMass__250->GetZaxis()->SetLabelFont(42);
   VHcc_boosted_PN_med_ZMass__250->GetZaxis()->SetTitleOffset(1);
   VHcc_boosted_PN_med_ZMass__250->GetZaxis()->SetTitleFont(42);
   VHcc_boosted_PN_med_ZMass__250->Draw("same hist");
   TLine *line = new TLine(0,1,300,1);
   line->SetLineStyle(2);
   line->Draw();
   pad1_v2__99->Modified();
   c1->cd();
   c1->Modified();
   c1->SetSelected(c1);
}
