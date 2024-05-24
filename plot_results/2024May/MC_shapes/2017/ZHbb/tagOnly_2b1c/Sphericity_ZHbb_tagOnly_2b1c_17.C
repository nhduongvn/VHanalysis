#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZHbb_tagOnly_2b1c_17()
{
//=========Macro generated from canvas: Sphericity_ZHbb_tagOnly_2b1c_17/Sphericity_ZHbb_tagOnly_2b1c_17
//=========  (Fri May 24 12:42:54 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZHbb_tagOnly_2b1c_17 = new TCanvas("Sphericity_ZHbb_tagOnly_2b1c_17", "Sphericity_ZHbb_tagOnly_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZHbb_tagOnly_2b1c_17->SetHighLightColor(2);
   Sphericity_ZHbb_tagOnly_2b1c_17->Range(-0.2,-11.47951,1.133333,103.3156);
   Sphericity_ZHbb_tagOnly_2b1c_17->SetFillColor(0);
   Sphericity_ZHbb_tagOnly_2b1c_17->SetFillStyle(4000);
   Sphericity_ZHbb_tagOnly_2b1c_17->SetBorderMode(0);
   Sphericity_ZHbb_tagOnly_2b1c_17->SetBorderSize(2);
   Sphericity_ZHbb_tagOnly_2b1c_17->SetLeftMargin(0.15);
   Sphericity_ZHbb_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_ZHbb_tagOnly_2b1c_17->SetFrameBorderMode(0);
   Sphericity_ZHbb_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_ZHbb_tagOnly_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Sphericity__3305 = new TH1D("VH_tagOnly_2b1c_Sphericity__3305","",25,0,1);
   VH_tagOnly_2b1c_Sphericity__3305->SetBinContent(1,87.46296);
   VH_tagOnly_2b1c_Sphericity__3305->SetBinContent(2,75.24815);
   VH_tagOnly_2b1c_Sphericity__3305->SetBinContent(3,43.05888);
   VH_tagOnly_2b1c_Sphericity__3305->SetBinContent(4,27.59832);
   VH_tagOnly_2b1c_Sphericity__3305->SetBinContent(5,17.42935);
   VH_tagOnly_2b1c_Sphericity__3305->SetBinContent(6,8.96986);
   VH_tagOnly_2b1c_Sphericity__3305->SetBinContent(7,3.941252);
   VH_tagOnly_2b1c_Sphericity__3305->SetBinContent(8,2.07775);
   VH_tagOnly_2b1c_Sphericity__3305->SetBinContent(9,1.250828);
   VH_tagOnly_2b1c_Sphericity__3305->SetBinContent(10,0.9247691);
   VH_tagOnly_2b1c_Sphericity__3305->SetBinContent(11,0.6073417);
   VH_tagOnly_2b1c_Sphericity__3305->SetBinContent(12,0.4799792);
   VH_tagOnly_2b1c_Sphericity__3305->SetBinContent(13,0.3669498);
   VH_tagOnly_2b1c_Sphericity__3305->SetBinContent(14,0.2755836);
   VH_tagOnly_2b1c_Sphericity__3305->SetBinContent(15,0.2043502);
   VH_tagOnly_2b1c_Sphericity__3305->SetBinContent(16,0.1424142);
   VH_tagOnly_2b1c_Sphericity__3305->SetBinContent(17,0.1122179);
   VH_tagOnly_2b1c_Sphericity__3305->SetBinContent(18,0.0774084);
   VH_tagOnly_2b1c_Sphericity__3305->SetBinContent(19,0.04068448);
   VH_tagOnly_2b1c_Sphericity__3305->SetBinContent(20,0.01043961);
   VH_tagOnly_2b1c_Sphericity__3305->SetBinContent(21,0.002650482);
   VH_tagOnly_2b1c_Sphericity__3305->SetBinContent(22,0.002280564);
   VH_tagOnly_2b1c_Sphericity__3305->SetBinContent(23,0.003853811);
   VH_tagOnly_2b1c_Sphericity__3305->SetBinError(1,0.3503398);
   VH_tagOnly_2b1c_Sphericity__3305->SetBinError(2,0.3225786);
   VH_tagOnly_2b1c_Sphericity__3305->SetBinError(3,0.2418497);
   VH_tagOnly_2b1c_Sphericity__3305->SetBinError(4,0.1962584);
   VH_tagOnly_2b1c_Sphericity__3305->SetBinError(5,0.1625319);
   VH_tagOnly_2b1c_Sphericity__3305->SetBinError(6,0.1154346);
   VH_tagOnly_2b1c_Sphericity__3305->SetBinError(7,0.07499099);
   VH_tagOnly_2b1c_Sphericity__3305->SetBinError(8,0.05471662);
   VH_tagOnly_2b1c_Sphericity__3305->SetBinError(9,0.04198107);
   VH_tagOnly_2b1c_Sphericity__3305->SetBinError(10,0.03808745);
   VH_tagOnly_2b1c_Sphericity__3305->SetBinError(11,0.0280372);
   VH_tagOnly_2b1c_Sphericity__3305->SetBinError(12,0.02440921);
   VH_tagOnly_2b1c_Sphericity__3305->SetBinError(13,0.02239798);
   VH_tagOnly_2b1c_Sphericity__3305->SetBinError(14,0.01945178);
   VH_tagOnly_2b1c_Sphericity__3305->SetBinError(15,0.01522203);
   VH_tagOnly_2b1c_Sphericity__3305->SetBinError(16,0.01107194);
   VH_tagOnly_2b1c_Sphericity__3305->SetBinError(17,0.01189228);
   VH_tagOnly_2b1c_Sphericity__3305->SetBinError(18,0.009787909);
   VH_tagOnly_2b1c_Sphericity__3305->SetBinError(19,0.006518699);
   VH_tagOnly_2b1c_Sphericity__3305->SetBinError(20,0.002877578);
   VH_tagOnly_2b1c_Sphericity__3305->SetBinError(21,0.001172225);
   VH_tagOnly_2b1c_Sphericity__3305->SetBinError(22,0.001945992);
   VH_tagOnly_2b1c_Sphericity__3305->SetBinError(23,0.00299327);
   VH_tagOnly_2b1c_Sphericity__3305->SetEntries(459536);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Sphericity__3305->SetLineColor(ci);
   VH_tagOnly_2b1c_Sphericity__3305->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_2b1c_Sphericity__3305->GetXaxis()->SetRange(1,25);
   VH_tagOnly_2b1c_Sphericity__3305->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3305->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3305->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3305->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_2b1c_Sphericity__3305->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3305->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Sphericity__3305->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Sphericity__3305->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Sphericity__3305->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3305->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3305->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3305->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3305->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZHbb_tagOnly_2b1c_17->Modified();
   Sphericity_ZHbb_tagOnly_2b1c_17->cd();
   Sphericity_ZHbb_tagOnly_2b1c_17->SetSelected(Sphericity_ZHbb_tagOnly_2b1c_17);
}
