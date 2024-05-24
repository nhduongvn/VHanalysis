#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZJets_tagOnly_2b1c_18()
{
//=========Macro generated from canvas: Aplanarity_ZJets_tagOnly_2b1c_18/Aplanarity_ZJets_tagOnly_2b1c_18
//=========  (Fri May 24 12:42:55 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZJets_tagOnly_2b1c_18 = new TCanvas("Aplanarity_ZJets_tagOnly_2b1c_18", "Aplanarity_ZJets_tagOnly_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZJets_tagOnly_2b1c_18->SetHighLightColor(2);
   Aplanarity_ZJets_tagOnly_2b1c_18->Range(-0.2,-7648.32,1.133333,68834.88);
   Aplanarity_ZJets_tagOnly_2b1c_18->SetFillColor(0);
   Aplanarity_ZJets_tagOnly_2b1c_18->SetFillStyle(4000);
   Aplanarity_ZJets_tagOnly_2b1c_18->SetBorderMode(0);
   Aplanarity_ZJets_tagOnly_2b1c_18->SetBorderSize(2);
   Aplanarity_ZJets_tagOnly_2b1c_18->SetLeftMargin(0.15);
   Aplanarity_ZJets_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_ZJets_tagOnly_2b1c_18->SetFrameBorderMode(0);
   Aplanarity_ZJets_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_ZJets_tagOnly_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Aplanarity__3345 = new TH1D("VH_tagOnly_2b1c_Aplanarity__3345","",50,0,1);
   VH_tagOnly_2b1c_Aplanarity__3345->SetBinContent(1,58272.91);
   VH_tagOnly_2b1c_Aplanarity__3345->SetBinContent(2,6415.753);
   VH_tagOnly_2b1c_Aplanarity__3345->SetBinContent(3,1501.83);
   VH_tagOnly_2b1c_Aplanarity__3345->SetBinContent(4,476.3923);
   VH_tagOnly_2b1c_Aplanarity__3345->SetBinContent(5,192.3817);
   VH_tagOnly_2b1c_Aplanarity__3345->SetBinContent(6,96.38346);
   VH_tagOnly_2b1c_Aplanarity__3345->SetBinContent(7,49.47436);
   VH_tagOnly_2b1c_Aplanarity__3345->SetBinContent(8,29.34986);
   VH_tagOnly_2b1c_Aplanarity__3345->SetBinContent(9,17.28923);
   VH_tagOnly_2b1c_Aplanarity__3345->SetBinContent(10,11.08163);
   VH_tagOnly_2b1c_Aplanarity__3345->SetBinContent(11,5.740352);
   VH_tagOnly_2b1c_Aplanarity__3345->SetBinContent(12,5.449483);
   VH_tagOnly_2b1c_Aplanarity__3345->SetBinContent(13,2.347707);
   VH_tagOnly_2b1c_Aplanarity__3345->SetBinContent(14,1.000327);
   VH_tagOnly_2b1c_Aplanarity__3345->SetBinContent(15,1.484449);
   VH_tagOnly_2b1c_Aplanarity__3345->SetBinContent(16,0.3164898);
   VH_tagOnly_2b1c_Aplanarity__3345->SetBinContent(17,1.143354);
   VH_tagOnly_2b1c_Aplanarity__3345->SetBinContent(18,1.523737);
   VH_tagOnly_2b1c_Aplanarity__3345->SetBinContent(19,0.2806584);
   VH_tagOnly_2b1c_Aplanarity__3345->SetBinError(1,244.6202);
   VH_tagOnly_2b1c_Aplanarity__3345->SetBinError(2,89.83295);
   VH_tagOnly_2b1c_Aplanarity__3345->SetBinError(3,40.04402);
   VH_tagOnly_2b1c_Aplanarity__3345->SetBinError(4,20.39459);
   VH_tagOnly_2b1c_Aplanarity__3345->SetBinError(5,13.29967);
   VH_tagOnly_2b1c_Aplanarity__3345->SetBinError(6,13.07218);
   VH_tagOnly_2b1c_Aplanarity__3345->SetBinError(7,13.80897);
   VH_tagOnly_2b1c_Aplanarity__3345->SetBinError(8,4.641289);
   VH_tagOnly_2b1c_Aplanarity__3345->SetBinError(9,2.967605);
   VH_tagOnly_2b1c_Aplanarity__3345->SetBinError(10,4.11981);
   VH_tagOnly_2b1c_Aplanarity__3345->SetBinError(11,1.527838);
   VH_tagOnly_2b1c_Aplanarity__3345->SetBinError(12,1.831303);
   VH_tagOnly_2b1c_Aplanarity__3345->SetBinError(13,0.700671);
   VH_tagOnly_2b1c_Aplanarity__3345->SetBinError(14,0.5036906);
   VH_tagOnly_2b1c_Aplanarity__3345->SetBinError(15,0.5501298);
   VH_tagOnly_2b1c_Aplanarity__3345->SetBinError(16,0.2367685);
   VH_tagOnly_2b1c_Aplanarity__3345->SetBinError(17,0.9677434);
   VH_tagOnly_2b1c_Aplanarity__3345->SetBinError(18,1.373786);
   VH_tagOnly_2b1c_Aplanarity__3345->SetBinError(19,0.1988437);
   VH_tagOnly_2b1c_Aplanarity__3345->SetEntries(242281);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Aplanarity__3345->SetLineColor(ci);
   VH_tagOnly_2b1c_Aplanarity__3345->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_2b1c_Aplanarity__3345->GetXaxis()->SetRange(1,50);
   VH_tagOnly_2b1c_Aplanarity__3345->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3345->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3345->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3345->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_2b1c_Aplanarity__3345->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3345->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Aplanarity__3345->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Aplanarity__3345->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Aplanarity__3345->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3345->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3345->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3345->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3345->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZJets_tagOnly_2b1c_18->Modified();
   Aplanarity_ZJets_tagOnly_2b1c_18->cd();
   Aplanarity_ZJets_tagOnly_2b1c_18->SetSelected(Aplanarity_ZJets_tagOnly_2b1c_18);
}
