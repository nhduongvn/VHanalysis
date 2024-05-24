#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZHbb_DHZfirst_2b1c_18_logY()
{
//=========Macro generated from canvas: Sphericity_ZHbb_DHZfirst_2b1c_18/Sphericity_ZHbb_DHZfirst_2b1c_18
//=========  (Thu May 23 20:49:24 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZHbb_DHZfirst_2b1c_18 = new TCanvas("Sphericity_ZHbb_DHZfirst_2b1c_18", "Sphericity_ZHbb_DHZfirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZHbb_DHZfirst_2b1c_18->SetHighLightColor(2);
   Sphericity_ZHbb_DHZfirst_2b1c_18->Range(-0.2,-3.876689,1.133333,2.556487);
   Sphericity_ZHbb_DHZfirst_2b1c_18->SetFillColor(0);
   Sphericity_ZHbb_DHZfirst_2b1c_18->SetFillStyle(4000);
   Sphericity_ZHbb_DHZfirst_2b1c_18->SetBorderMode(0);
   Sphericity_ZHbb_DHZfirst_2b1c_18->SetBorderSize(2);
   Sphericity_ZHbb_DHZfirst_2b1c_18->SetLogy();
   Sphericity_ZHbb_DHZfirst_2b1c_18->SetLeftMargin(0.15);
   Sphericity_ZHbb_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_ZHbb_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   Sphericity_ZHbb_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_ZHbb_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Sphericity__4026 = new TH1D("VH_DHZfirst_2b1c_Sphericity__4026","",25,0,1);
   VH_DHZfirst_2b1c_Sphericity__4026->SetBinContent(1,43.21361);
   VH_DHZfirst_2b1c_Sphericity__4026->SetBinContent(2,39.91133);
   VH_DHZfirst_2b1c_Sphericity__4026->SetBinContent(3,22.72352);
   VH_DHZfirst_2b1c_Sphericity__4026->SetBinContent(4,14.89009);
   VH_DHZfirst_2b1c_Sphericity__4026->SetBinContent(5,9.5499);
   VH_DHZfirst_2b1c_Sphericity__4026->SetBinContent(6,4.349385);
   VH_DHZfirst_2b1c_Sphericity__4026->SetBinContent(7,1.128632);
   VH_DHZfirst_2b1c_Sphericity__4026->SetBinContent(8,0.2942169);
   VH_DHZfirst_2b1c_Sphericity__4026->SetBinContent(9,0.1298543);
   VH_DHZfirst_2b1c_Sphericity__4026->SetBinContent(10,0.04877959);
   VH_DHZfirst_2b1c_Sphericity__4026->SetBinContent(11,0.02098582);
   VH_DHZfirst_2b1c_Sphericity__4026->SetBinContent(12,0.008788695);
   VH_DHZfirst_2b1c_Sphericity__4026->SetBinContent(13,0.007223509);
   VH_DHZfirst_2b1c_Sphericity__4026->SetBinContent(14,0.004635324);
   VH_DHZfirst_2b1c_Sphericity__4026->SetBinContent(16,0.001835209);
   VH_DHZfirst_2b1c_Sphericity__4026->SetBinContent(17,0.007409152);
   VH_DHZfirst_2b1c_Sphericity__4026->SetBinContent(18,0.001168581);
   VH_DHZfirst_2b1c_Sphericity__4026->SetBinContent(19,0.004023672);
   VH_DHZfirst_2b1c_Sphericity__4026->SetBinContent(20,0.009429355);
   VH_DHZfirst_2b1c_Sphericity__4026->SetBinError(1,0.4571324);
   VH_DHZfirst_2b1c_Sphericity__4026->SetBinError(2,0.4019473);
   VH_DHZfirst_2b1c_Sphericity__4026->SetBinError(3,0.3081118);
   VH_DHZfirst_2b1c_Sphericity__4026->SetBinError(4,0.2210357);
   VH_DHZfirst_2b1c_Sphericity__4026->SetBinError(5,0.1791584);
   VH_DHZfirst_2b1c_Sphericity__4026->SetBinError(6,0.1165451);
   VH_DHZfirst_2b1c_Sphericity__4026->SetBinError(7,0.06236924);
   VH_DHZfirst_2b1c_Sphericity__4026->SetBinError(8,0.02629255);
   VH_DHZfirst_2b1c_Sphericity__4026->SetBinError(9,0.02168752);
   VH_DHZfirst_2b1c_Sphericity__4026->SetBinError(10,0.01125401);
   VH_DHZfirst_2b1c_Sphericity__4026->SetBinError(11,0.004630755);
   VH_DHZfirst_2b1c_Sphericity__4026->SetBinError(12,0.002010731);
   VH_DHZfirst_2b1c_Sphericity__4026->SetBinError(13,0.002677869);
   VH_DHZfirst_2b1c_Sphericity__4026->SetBinError(14,0.002317075);
   VH_DHZfirst_2b1c_Sphericity__4026->SetBinError(16,0.0009568771);
   VH_DHZfirst_2b1c_Sphericity__4026->SetBinError(17,0.006356508);
   VH_DHZfirst_2b1c_Sphericity__4026->SetBinError(18,0.0006842145);
   VH_DHZfirst_2b1c_Sphericity__4026->SetBinError(19,0.003681427);
   VH_DHZfirst_2b1c_Sphericity__4026->SetBinError(20,0.009429355);
   VH_DHZfirst_2b1c_Sphericity__4026->SetEntries(113096);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Sphericity__4026->SetLineColor(ci);
   VH_DHZfirst_2b1c_Sphericity__4026->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_2b1c_Sphericity__4026->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_2b1c_Sphericity__4026->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4026->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4026->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4026->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_2b1c_Sphericity__4026->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4026->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Sphericity__4026->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Sphericity__4026->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Sphericity__4026->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4026->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4026->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4026->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4026->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZHbb_DHZfirst_2b1c_18->Modified();
   Sphericity_ZHbb_DHZfirst_2b1c_18->cd();
   Sphericity_ZHbb_DHZfirst_2b1c_18->SetSelected(Sphericity_ZHbb_DHZfirst_2b1c_18);
}
