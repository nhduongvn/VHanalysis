#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZHbb_DHZfirst_2b1c_16()
{
//=========Macro generated from canvas: Sphericity_ZHbb_DHZfirst_2b1c_16/Sphericity_ZHbb_DHZfirst_2b1c_16
//=========  (Fri May 24 12:43:07 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZHbb_DHZfirst_2b1c_16 = new TCanvas("Sphericity_ZHbb_DHZfirst_2b1c_16", "Sphericity_ZHbb_DHZfirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZHbb_DHZfirst_2b1c_16->SetHighLightColor(2);
   Sphericity_ZHbb_DHZfirst_2b1c_16->Range(-0.2,-3.47102,1.133333,31.23918);
   Sphericity_ZHbb_DHZfirst_2b1c_16->SetFillColor(0);
   Sphericity_ZHbb_DHZfirst_2b1c_16->SetFillStyle(4000);
   Sphericity_ZHbb_DHZfirst_2b1c_16->SetBorderMode(0);
   Sphericity_ZHbb_DHZfirst_2b1c_16->SetBorderSize(2);
   Sphericity_ZHbb_DHZfirst_2b1c_16->SetLeftMargin(0.15);
   Sphericity_ZHbb_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_ZHbb_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   Sphericity_ZHbb_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_ZHbb_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Sphericity__4024 = new TH1D("VH_DHZfirst_2b1c_Sphericity__4024","",25,0,1);
   VH_DHZfirst_2b1c_Sphericity__4024->SetBinContent(1,26.44587);
   VH_DHZfirst_2b1c_Sphericity__4024->SetBinContent(2,25.63022);
   VH_DHZfirst_2b1c_Sphericity__4024->SetBinContent(3,14.7444);
   VH_DHZfirst_2b1c_Sphericity__4024->SetBinContent(4,9.676173);
   VH_DHZfirst_2b1c_Sphericity__4024->SetBinContent(5,5.949198);
   VH_DHZfirst_2b1c_Sphericity__4024->SetBinContent(6,2.687619);
   VH_DHZfirst_2b1c_Sphericity__4024->SetBinContent(7,0.7205599);
   VH_DHZfirst_2b1c_Sphericity__4024->SetBinContent(8,0.1965756);
   VH_DHZfirst_2b1c_Sphericity__4024->SetBinContent(9,0.05778365);
   VH_DHZfirst_2b1c_Sphericity__4024->SetBinContent(10,0.02556244);
   VH_DHZfirst_2b1c_Sphericity__4024->SetBinContent(11,0.01272151);
   VH_DHZfirst_2b1c_Sphericity__4024->SetBinContent(12,0.009553806);
   VH_DHZfirst_2b1c_Sphericity__4024->SetBinContent(13,0.005336844);
   VH_DHZfirst_2b1c_Sphericity__4024->SetBinContent(14,0.002914834);
   VH_DHZfirst_2b1c_Sphericity__4024->SetBinContent(15,0.002295106);
   VH_DHZfirst_2b1c_Sphericity__4024->SetBinContent(16,0.002301171);
   VH_DHZfirst_2b1c_Sphericity__4024->SetBinContent(17,0.001472328);
   VH_DHZfirst_2b1c_Sphericity__4024->SetBinContent(18,0.0007018534);
   VH_DHZfirst_2b1c_Sphericity__4024->SetBinContent(19,0.0002161433);
   VH_DHZfirst_2b1c_Sphericity__4024->SetBinError(1,0.1510883);
   VH_DHZfirst_2b1c_Sphericity__4024->SetBinError(2,0.1479518);
   VH_DHZfirst_2b1c_Sphericity__4024->SetBinError(3,0.1126491);
   VH_DHZfirst_2b1c_Sphericity__4024->SetBinError(4,0.09194225);
   VH_DHZfirst_2b1c_Sphericity__4024->SetBinError(5,0.07345918);
   VH_DHZfirst_2b1c_Sphericity__4024->SetBinError(6,0.04940685);
   VH_DHZfirst_2b1c_Sphericity__4024->SetBinError(7,0.02482467);
   VH_DHZfirst_2b1c_Sphericity__4024->SetBinError(8,0.01228886);
   VH_DHZfirst_2b1c_Sphericity__4024->SetBinError(9,0.006593507);
   VH_DHZfirst_2b1c_Sphericity__4024->SetBinError(10,0.004212908);
   VH_DHZfirst_2b1c_Sphericity__4024->SetBinError(11,0.002566763);
   VH_DHZfirst_2b1c_Sphericity__4024->SetBinError(12,0.002485017);
   VH_DHZfirst_2b1c_Sphericity__4024->SetBinError(13,0.001884351);
   VH_DHZfirst_2b1c_Sphericity__4024->SetBinError(14,0.001508327);
   VH_DHZfirst_2b1c_Sphericity__4024->SetBinError(15,0.001649965);
   VH_DHZfirst_2b1c_Sphericity__4024->SetBinError(16,0.001329564);
   VH_DHZfirst_2b1c_Sphericity__4024->SetBinError(17,0.0009412108);
   VH_DHZfirst_2b1c_Sphericity__4024->SetBinError(18,0.0004109412);
   VH_DHZfirst_2b1c_Sphericity__4024->SetBinError(19,0.0002161433);
   VH_DHZfirst_2b1c_Sphericity__4024->SetEntries(142012);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Sphericity__4024->SetLineColor(ci);
   VH_DHZfirst_2b1c_Sphericity__4024->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_2b1c_Sphericity__4024->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_2b1c_Sphericity__4024->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4024->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4024->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4024->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_2b1c_Sphericity__4024->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4024->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Sphericity__4024->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Sphericity__4024->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Sphericity__4024->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4024->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4024->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4024->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4024->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZHbb_DHZfirst_2b1c_16->Modified();
   Sphericity_ZHbb_DHZfirst_2b1c_16->cd();
   Sphericity_ZHbb_DHZfirst_2b1c_16->SetSelected(Sphericity_ZHbb_DHZfirst_2b1c_16);
}
