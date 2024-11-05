#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ZccHcc_boosted_PN_med_HMass_JES()
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
   TPad *pad1_v1__0 = new TPad("pad1_v1", "pad1_v1",0,0.3,1,1);
   pad1_v1__0->Draw();
   pad1_v1__0->cd();
   pad1_v1__0->Range(-38.75,-3.00606,348.75,27.05454);
   pad1_v1__0->SetBorderSize(2);
   pad1_v1__0->SetFrameFillColor(0);
   
   TH1D *ZccHcc_boosted_PN_med_HMass__1 = new TH1D("ZccHcc_boosted_PN_med_HMass__1","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__1->SetBinContent(10,2.80211);
   ZccHcc_boosted_PN_med_HMass__1->SetBinContent(11,1.468997);
   ZccHcc_boosted_PN_med_HMass__1->SetBinContent(12,11.12462);
   ZccHcc_boosted_PN_med_HMass__1->SetBinContent(13,21.16408);
   ZccHcc_boosted_PN_med_HMass__1->SetBinContent(14,20.74317);
   ZccHcc_boosted_PN_med_HMass__1->SetBinContent(15,2.917014);
   ZccHcc_boosted_PN_med_HMass__1->SetBinContent(17,1.205237);
   ZccHcc_boosted_PN_med_HMass__1->SetBinError(10,1.981682);
   ZccHcc_boosted_PN_med_HMass__1->SetBinError(11,1.468997);
   ZccHcc_boosted_PN_med_HMass__1->SetBinError(12,3.960583);
   ZccHcc_boosted_PN_med_HMass__1->SetBinError(13,5.687424);
   ZccHcc_boosted_PN_med_HMass__1->SetBinError(14,5.311121);
   ZccHcc_boosted_PN_med_HMass__1->SetBinError(15,2.062644);
   ZccHcc_boosted_PN_med_HMass__1->SetBinError(17,1.205237);
   ZccHcc_boosted_PN_med_HMass__1->SetMaximum(24.04848);
   ZccHcc_boosted_PN_med_HMass__1->SetEntries(49);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   ZccHcc_boosted_PN_med_HMass__1->SetFillColor(ci);
   ZccHcc_boosted_PN_med_HMass__1->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__1->GetXaxis()->SetRange(1,31);
   ZccHcc_boosted_PN_med_HMass__1->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__1->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__1->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__1->GetYaxis()->SetTitle("Events/10.000000");
   ZccHcc_boosted_PN_med_HMass__1->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__1->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__1->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__1->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__1->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__1->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_HMass__2 = new TH1D("ZccHcc_boosted_PN_med_HMass__2","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__2->SetBinContent(10,2.80211);
   ZccHcc_boosted_PN_med_HMass__2->SetBinContent(11,1.468997);
   ZccHcc_boosted_PN_med_HMass__2->SetBinContent(12,10.98423);
   ZccHcc_boosted_PN_med_HMass__2->SetBinContent(13,21.16408);
   ZccHcc_boosted_PN_med_HMass__2->SetBinContent(14,22.04848);
   ZccHcc_boosted_PN_med_HMass__2->SetBinContent(15,2.917014);
   ZccHcc_boosted_PN_med_HMass__2->SetBinContent(17,1.08031);
   ZccHcc_boosted_PN_med_HMass__2->SetBinError(10,1.981682);
   ZccHcc_boosted_PN_med_HMass__2->SetBinError(11,1.468997);
   ZccHcc_boosted_PN_med_HMass__2->SetBinError(12,3.904602);
   ZccHcc_boosted_PN_med_HMass__2->SetBinError(13,5.687424);
   ZccHcc_boosted_PN_med_HMass__2->SetBinError(14,5.469172);
   ZccHcc_boosted_PN_med_HMass__2->SetBinError(15,2.062644);
   ZccHcc_boosted_PN_med_HMass__2->SetBinError(17,1.08031);
   ZccHcc_boosted_PN_med_HMass__2->SetEntries(50);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_HMass__2->SetLineColor(ci);
   ZccHcc_boosted_PN_med_HMass__2->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__2->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_HMass__2->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__2->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__2->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__2->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__2->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__2->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__2->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__2->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__2->Draw("same hist");
   
   TH1D *ZccHcc_boosted_PN_med_HMass__3 = new TH1D("ZccHcc_boosted_PN_med_HMass__3","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__3->SetBinContent(10,2.80211);
   ZccHcc_boosted_PN_med_HMass__3->SetBinContent(11,1.468997);
   ZccHcc_boosted_PN_med_HMass__3->SetBinContent(12,9.795003);
   ZccHcc_boosted_PN_med_HMass__3->SetBinContent(13,21.16408);
   ZccHcc_boosted_PN_med_HMass__3->SetBinContent(14,20.82849);
   ZccHcc_boosted_PN_med_HMass__3->SetBinContent(15,2.917014);
   ZccHcc_boosted_PN_med_HMass__3->SetBinContent(17,1.205237);
   ZccHcc_boosted_PN_med_HMass__3->SetBinError(10,1.981682);
   ZccHcc_boosted_PN_med_HMass__3->SetBinError(11,1.468997);
   ZccHcc_boosted_PN_med_HMass__3->SetBinError(12,3.73073);
   ZccHcc_boosted_PN_med_HMass__3->SetBinError(13,5.687424);
   ZccHcc_boosted_PN_med_HMass__3->SetBinError(14,5.323644);
   ZccHcc_boosted_PN_med_HMass__3->SetBinError(15,2.062644);
   ZccHcc_boosted_PN_med_HMass__3->SetBinError(17,1.205237);
   ZccHcc_boosted_PN_med_HMass__3->SetEntries(48);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_HMass__3->SetLineColor(ci);
   ZccHcc_boosted_PN_med_HMass__3->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__3->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_HMass__3->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__3->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__3->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__3->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__3->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__3->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__3->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__3->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__3->Draw("same hist");
   
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
   entry=leg->AddEntry("ZccHcc_boosted_PN_med_HMass","JES Up","F");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ZccHcc_boosted_PN_med_HMass","JES Down","F");
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
   pad1_v1__0->Modified();
   c1->cd();
  
// ------------>Primitives in pad: pad1_v2
   TPad *pad1_v2__1 = new TPad("pad1_v2", "pad1_v2",0,0.1,1,0.3);
   pad1_v2__1->Draw();
   pad1_v2__1->cd();
   pad1_v2__1->Range(-38.75,0.75,348.75,1.25);
   pad1_v2__1->SetBorderSize(2);
   pad1_v2__1->SetFrameFillColor(0);
   
   TH1D *ZccHcc_boosted_PN_med_HMass__4 = new TH1D("ZccHcc_boosted_PN_med_HMass__4","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__4->SetBinContent(10,1);
   ZccHcc_boosted_PN_med_HMass__4->SetBinContent(11,1);
   ZccHcc_boosted_PN_med_HMass__4->SetBinContent(12,0.9873806);
   ZccHcc_boosted_PN_med_HMass__4->SetBinContent(13,1);
   ZccHcc_boosted_PN_med_HMass__4->SetBinContent(14,1.062927);
   ZccHcc_boosted_PN_med_HMass__4->SetBinContent(15,1);
   ZccHcc_boosted_PN_med_HMass__4->SetBinContent(17,0.8963465);
   ZccHcc_boosted_PN_med_HMass__4->SetBinError(10,1.000147);
   ZccHcc_boosted_PN_med_HMass__4->SetBinError(11,1.414214);
   ZccHcc_boosted_PN_med_HMass__4->SetBinError(12,0.496753);
   ZccHcc_boosted_PN_med_HMass__4->SetBinError(13,0.3800416);
   ZccHcc_boosted_PN_med_HMass__4->SetBinError(14,0.3789263);
   ZccHcc_boosted_PN_med_HMass__4->SetBinError(15,1.000002);
   ZccHcc_boosted_PN_med_HMass__4->SetBinError(17,1.267625);
   ZccHcc_boosted_PN_med_HMass__4->SetMinimum(0.8);
   ZccHcc_boosted_PN_med_HMass__4->SetMaximum(1.2);
   ZccHcc_boosted_PN_med_HMass__4->SetEntries(7.856788);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_HMass__4->SetLineColor(ci);
   ZccHcc_boosted_PN_med_HMass__4->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__4->GetXaxis()->SetRange(1,31);
   ZccHcc_boosted_PN_med_HMass__4->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__4->GetXaxis()->SetLabelSize(0.1);
   ZccHcc_boosted_PN_med_HMass__4->GetXaxis()->SetTitleSize(0.13);
   ZccHcc_boosted_PN_med_HMass__4->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__4->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__4->GetYaxis()->SetTitle("#frac{Up/Down}{Nominal}");
   ZccHcc_boosted_PN_med_HMass__4->GetYaxis()->CenterTitle(true);
   ZccHcc_boosted_PN_med_HMass__4->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__4->GetYaxis()->SetLabelSize(0.09);
   ZccHcc_boosted_PN_med_HMass__4->GetYaxis()->SetTitleSize(0.12);
   ZccHcc_boosted_PN_med_HMass__4->GetYaxis()->SetTitleOffset(0.35);
   ZccHcc_boosted_PN_med_HMass__4->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__4->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__4->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__4->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__4->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_HMass__5 = new TH1D("ZccHcc_boosted_PN_med_HMass__5","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__5->SetBinContent(10,1);
   ZccHcc_boosted_PN_med_HMass__5->SetBinContent(11,1);
   ZccHcc_boosted_PN_med_HMass__5->SetBinContent(12,0.8804802);
   ZccHcc_boosted_PN_med_HMass__5->SetBinContent(13,1);
   ZccHcc_boosted_PN_med_HMass__5->SetBinContent(14,1.004113);
   ZccHcc_boosted_PN_med_HMass__5->SetBinContent(15,1);
   ZccHcc_boosted_PN_med_HMass__5->SetBinContent(17,1);
   ZccHcc_boosted_PN_med_HMass__5->SetBinError(10,1.000147);
   ZccHcc_boosted_PN_med_HMass__5->SetBinError(11,1.414214);
   ZccHcc_boosted_PN_med_HMass__5->SetBinError(12,0.4590506);
   ZccHcc_boosted_PN_med_HMass__5->SetBinError(13,0.3800416);
   ZccHcc_boosted_PN_med_HMass__5->SetBinError(14,0.3632697);
   ZccHcc_boosted_PN_med_HMass__5->SetBinError(15,1.000002);
   ZccHcc_boosted_PN_med_HMass__5->SetBinError(17,1.414214);
   ZccHcc_boosted_PN_med_HMass__5->SetEntries(7.306082);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_HMass__5->SetLineColor(ci);
   ZccHcc_boosted_PN_med_HMass__5->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__5->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_HMass__5->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__5->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__5->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__5->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__5->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__5->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__5->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__5->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__5->Draw("same hist");
   TLine *line = new TLine(0,1,300,1);
   line->SetLineStyle(2);
   line->Draw();
   pad1_v2__1->Modified();
   c1->cd();
   c1->Modified();
   c1->SetSelected(c1);
}
