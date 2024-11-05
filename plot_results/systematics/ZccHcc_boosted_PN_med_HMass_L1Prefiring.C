#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ZccHcc_boosted_PN_med_HMass_L1Prefiring()
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
   TPad *pad1_v1__4 = new TPad("pad1_v1", "pad1_v1",0,0.3,1,1);
   pad1_v1__4->Draw();
   pad1_v1__4->cd();
   pad1_v1__4->Range(-38.75,-2.897529,348.75,26.07776);
   pad1_v1__4->SetBorderSize(2);
   pad1_v1__4->SetFrameFillColor(0);
   
   TH1D *ZccHcc_boosted_PN_med_HMass__11 = new TH1D("ZccHcc_boosted_PN_med_HMass__11","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__11->SetBinContent(10,2.80211);
   ZccHcc_boosted_PN_med_HMass__11->SetBinContent(11,1.468997);
   ZccHcc_boosted_PN_med_HMass__11->SetBinContent(12,11.12462);
   ZccHcc_boosted_PN_med_HMass__11->SetBinContent(13,21.16408);
   ZccHcc_boosted_PN_med_HMass__11->SetBinContent(14,20.74317);
   ZccHcc_boosted_PN_med_HMass__11->SetBinContent(15,2.917014);
   ZccHcc_boosted_PN_med_HMass__11->SetBinContent(17,1.205237);
   ZccHcc_boosted_PN_med_HMass__11->SetBinError(10,1.981682);
   ZccHcc_boosted_PN_med_HMass__11->SetBinError(11,1.468997);
   ZccHcc_boosted_PN_med_HMass__11->SetBinError(12,3.960583);
   ZccHcc_boosted_PN_med_HMass__11->SetBinError(13,5.687424);
   ZccHcc_boosted_PN_med_HMass__11->SetBinError(14,5.311121);
   ZccHcc_boosted_PN_med_HMass__11->SetBinError(15,2.062644);
   ZccHcc_boosted_PN_med_HMass__11->SetBinError(17,1.205237);
   ZccHcc_boosted_PN_med_HMass__11->SetMaximum(23.18023);
   ZccHcc_boosted_PN_med_HMass__11->SetEntries(49);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   ZccHcc_boosted_PN_med_HMass__11->SetFillColor(ci);
   ZccHcc_boosted_PN_med_HMass__11->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__11->GetXaxis()->SetRange(1,31);
   ZccHcc_boosted_PN_med_HMass__11->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__11->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__11->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__11->GetYaxis()->SetTitle("Events/10.000000");
   ZccHcc_boosted_PN_med_HMass__11->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__11->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__11->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__11->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__11->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__11->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_HMass__12 = new TH1D("ZccHcc_boosted_PN_med_HMass__12","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__12->SetBinContent(10,2.80036);
   ZccHcc_boosted_PN_med_HMass__12->SetBinContent(11,1.464444);
   ZccHcc_boosted_PN_med_HMass__12->SetBinContent(12,11.10395);
   ZccHcc_boosted_PN_med_HMass__12->SetBinContent(13,21.14632);
   ZccHcc_boosted_PN_med_HMass__12->SetBinContent(14,20.69793);
   ZccHcc_boosted_PN_med_HMass__12->SetBinContent(15,2.917014);
   ZccHcc_boosted_PN_med_HMass__12->SetBinContent(17,1.199466);
   ZccHcc_boosted_PN_med_HMass__12->SetBinError(10,1.980466);
   ZccHcc_boosted_PN_med_HMass__12->SetBinError(11,1.464444);
   ZccHcc_boosted_PN_med_HMass__12->SetBinError(12,3.953889);
   ZccHcc_boosted_PN_med_HMass__12->SetBinError(13,5.683289);
   ZccHcc_boosted_PN_med_HMass__12->SetBinError(14,5.301543);
   ZccHcc_boosted_PN_med_HMass__12->SetBinError(15,2.062644);
   ZccHcc_boosted_PN_med_HMass__12->SetBinError(17,1.199466);
   ZccHcc_boosted_PN_med_HMass__12->SetEntries(49);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_HMass__12->SetLineColor(ci);
   ZccHcc_boosted_PN_med_HMass__12->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__12->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_HMass__12->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__12->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__12->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__12->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__12->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__12->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__12->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__12->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__12->Draw("same hist");
   
   TH1D *ZccHcc_boosted_PN_med_HMass__13 = new TH1D("ZccHcc_boosted_PN_med_HMass__13","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__13->SetBinContent(10,2.80232);
   ZccHcc_boosted_PN_med_HMass__13->SetBinContent(11,1.473549);
   ZccHcc_boosted_PN_med_HMass__13->SetBinContent(12,11.1411);
   ZccHcc_boosted_PN_med_HMass__13->SetBinContent(13,21.18023);
   ZccHcc_boosted_PN_med_HMass__13->SetBinContent(14,20.78504);
   ZccHcc_boosted_PN_med_HMass__13->SetBinContent(15,2.917014);
   ZccHcc_boosted_PN_med_HMass__13->SetBinContent(17,1.211009);
   ZccHcc_boosted_PN_med_HMass__13->SetBinError(10,1.981827);
   ZccHcc_boosted_PN_med_HMass__13->SetBinError(11,1.473549);
   ZccHcc_boosted_PN_med_HMass__13->SetBinError(12,3.965969);
   ZccHcc_boosted_PN_med_HMass__13->SetBinError(13,5.691161);
   ZccHcc_boosted_PN_med_HMass__13->SetBinError(14,5.320088);
   ZccHcc_boosted_PN_med_HMass__13->SetBinError(15,2.062644);
   ZccHcc_boosted_PN_med_HMass__13->SetBinError(17,1.211009);
   ZccHcc_boosted_PN_med_HMass__13->SetEntries(49);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_HMass__13->SetLineColor(ci);
   ZccHcc_boosted_PN_med_HMass__13->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__13->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_HMass__13->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__13->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__13->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__13->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__13->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__13->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__13->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__13->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__13->Draw("same hist");
   
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
   entry=leg->AddEntry("ZccHcc_boosted_PN_med_HMass","L1Prefiring Up","F");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ZccHcc_boosted_PN_med_HMass","L1Prefiring Down","F");
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
   pad1_v1__4->Modified();
   c1->cd();
  
// ------------>Primitives in pad: pad1_v2
   TPad *pad1_v2__5 = new TPad("pad1_v2", "pad1_v2",0,0.1,1,0.3);
   pad1_v2__5->Draw();
   pad1_v2__5->cd();
   pad1_v2__5->Range(-38.75,0.75,348.75,1.25);
   pad1_v2__5->SetBorderSize(2);
   pad1_v2__5->SetFrameFillColor(0);
   
   TH1D *ZccHcc_boosted_PN_med_HMass__14 = new TH1D("ZccHcc_boosted_PN_med_HMass__14","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__14->SetBinContent(10,0.9993754);
   ZccHcc_boosted_PN_med_HMass__14->SetBinContent(11,0.996901);
   ZccHcc_boosted_PN_med_HMass__14->SetBinContent(12,0.9981419);
   ZccHcc_boosted_PN_med_HMass__14->SetBinContent(13,0.9991608);
   ZccHcc_boosted_PN_med_HMass__14->SetBinContent(14,0.9978192);
   ZccHcc_boosted_PN_med_HMass__14->SetBinContent(15,1);
   ZccHcc_boosted_PN_med_HMass__14->SetBinContent(17,0.9952116);
   ZccHcc_boosted_PN_med_HMass__14->SetBinError(10,0.9995274);
   ZccHcc_boosted_PN_med_HMass__14->SetBinError(11,1.409831);
   ZccHcc_boosted_PN_med_HMass__14->SetBinError(12,0.5025947);
   ZccHcc_boosted_PN_med_HMass__14->SetBinError(13,0.379744);
   ZccHcc_boosted_PN_med_HMass__14->SetBinError(14,0.3613767);
   ZccHcc_boosted_PN_med_HMass__14->SetBinError(15,1.000002);
   ZccHcc_boosted_PN_med_HMass__14->SetBinError(17,1.407442);
   ZccHcc_boosted_PN_med_HMass__14->SetMinimum(0.8);
   ZccHcc_boosted_PN_med_HMass__14->SetMaximum(1.2);
   ZccHcc_boosted_PN_med_HMass__14->SetEntries(7.51546);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_HMass__14->SetLineColor(ci);
   ZccHcc_boosted_PN_med_HMass__14->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__14->GetXaxis()->SetRange(1,31);
   ZccHcc_boosted_PN_med_HMass__14->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__14->GetXaxis()->SetLabelSize(0.1);
   ZccHcc_boosted_PN_med_HMass__14->GetXaxis()->SetTitleSize(0.13);
   ZccHcc_boosted_PN_med_HMass__14->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__14->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__14->GetYaxis()->SetTitle("#frac{Up/Down}{Nominal}");
   ZccHcc_boosted_PN_med_HMass__14->GetYaxis()->CenterTitle(true);
   ZccHcc_boosted_PN_med_HMass__14->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__14->GetYaxis()->SetLabelSize(0.09);
   ZccHcc_boosted_PN_med_HMass__14->GetYaxis()->SetTitleSize(0.12);
   ZccHcc_boosted_PN_med_HMass__14->GetYaxis()->SetTitleOffset(0.35);
   ZccHcc_boosted_PN_med_HMass__14->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__14->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__14->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__14->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__14->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_HMass__15 = new TH1D("ZccHcc_boosted_PN_med_HMass__15","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__15->SetBinContent(10,1.000075);
   ZccHcc_boosted_PN_med_HMass__15->SetBinContent(11,1.003099);
   ZccHcc_boosted_PN_med_HMass__15->SetBinContent(12,1.001482);
   ZccHcc_boosted_PN_med_HMass__15->SetBinContent(13,1.000763);
   ZccHcc_boosted_PN_med_HMass__15->SetBinContent(14,1.002019);
   ZccHcc_boosted_PN_med_HMass__15->SetBinContent(15,1);
   ZccHcc_boosted_PN_med_HMass__15->SetBinContent(17,1.004788);
   ZccHcc_boosted_PN_med_HMass__15->SetBinError(10,1.00022);
   ZccHcc_boosted_PN_med_HMass__15->SetBinError(11,1.418596);
   ZccHcc_boosted_PN_med_HMass__15->SetBinError(12,0.5042034);
   ZccHcc_boosted_PN_med_HMass__15->SetBinError(13,0.3803114);
   ZccHcc_boosted_PN_med_HMass__15->SetBinError(14,0.3627691);
   ZccHcc_boosted_PN_med_HMass__15->SetBinError(15,1.000002);
   ZccHcc_boosted_PN_med_HMass__15->SetBinError(17,1.420985);
   ZccHcc_boosted_PN_med_HMass__15->SetEntries(7.492749);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_HMass__15->SetLineColor(ci);
   ZccHcc_boosted_PN_med_HMass__15->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__15->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_HMass__15->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__15->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__15->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__15->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__15->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__15->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__15->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__15->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__15->Draw("same hist");
   TLine *line = new TLine(0,1,300,1);
   line->SetLineStyle(2);
   line->Draw();
   pad1_v2__5->Modified();
   c1->cd();
   c1->Modified();
   c1->SetSelected(c1);
}
