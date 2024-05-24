#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_tagFirst_2combo_18()
{
//=========Macro generated from canvas: Z_mass_tagFirst_2combo_18/Z_mass_tagFirst_2combo_18
//=========  (Thu May 23 13:53:22 2024) by ROOT version 6.28/10
   TCanvas *Z_mass_tagFirst_2combo_18 = new TCanvas("Z_mass_tagFirst_2combo_18", "Z_mass_tagFirst_2combo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_tagFirst_2combo_18->SetHighLightColor(2);
   Z_mass_tagFirst_2combo_18->Range(-60,-0.001568605,340,0.01411745);
   Z_mass_tagFirst_2combo_18->SetFillColor(0);
   Z_mass_tagFirst_2combo_18->SetFillStyle(4000);
   Z_mass_tagFirst_2combo_18->SetBorderMode(0);
   Z_mass_tagFirst_2combo_18->SetBorderSize(2);
   Z_mass_tagFirst_2combo_18->SetLeftMargin(0.15);
   Z_mass_tagFirst_2combo_18->SetFrameFillStyle(1000);
   Z_mass_tagFirst_2combo_18->SetFrameBorderMode(0);
   Z_mass_tagFirst_2combo_18->SetFrameFillStyle(1000);
   Z_mass_tagFirst_2combo_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2combo_Z_mass__97 = new TH1D("VH_tagFirst_2combo_Z_mass__97","",200,0,2000);
   VH_tagFirst_2combo_Z_mass__97->SetBinContent(7,0.002476757);
   VH_tagFirst_2combo_Z_mass__97->SetBinContent(9,0.004533991);
   VH_tagFirst_2combo_Z_mass__97->SetBinContent(10,0.002319012);
   VH_tagFirst_2combo_Z_mass__97->SetBinContent(11,0.01195128);
   VH_tagFirst_2combo_Z_mass__97->SetBinContent(13,0.001909916);
   VH_tagFirst_2combo_Z_mass__97->SetBinContent(14,0.00208343);
   VH_tagFirst_2combo_Z_mass__97->SetBinContent(15,0.005745236);
   VH_tagFirst_2combo_Z_mass__97->SetBinContent(22,0.002412888);
   VH_tagFirst_2combo_Z_mass__97->SetBinContent(55,0.002105444);
   VH_tagFirst_2combo_Z_mass__97->SetBinContent(66,0.004790387);
   VH_tagFirst_2combo_Z_mass__97->SetBinContent(150,0.004822818);
   VH_tagFirst_2combo_Z_mass__97->SetBinContent(169,0.001122139);
   VH_tagFirst_2combo_Z_mass__97->SetBinContent(201,0.002901436);
   VH_tagFirst_2combo_Z_mass__97->SetBinError(7,0.002476757);
   VH_tagFirst_2combo_Z_mass__97->SetBinError(9,0.003207462);
   VH_tagFirst_2combo_Z_mass__97->SetBinError(10,0.002319012);
   VH_tagFirst_2combo_Z_mass__97->SetBinError(11,0.005379782);
   VH_tagFirst_2combo_Z_mass__97->SetBinError(13,0.001909916);
   VH_tagFirst_2combo_Z_mass__97->SetBinError(14,0.00208343);
   VH_tagFirst_2combo_Z_mass__97->SetBinError(15,0.003498701);
   VH_tagFirst_2combo_Z_mass__97->SetBinError(22,0.002412888);
   VH_tagFirst_2combo_Z_mass__97->SetBinError(55,0.002105444);
   VH_tagFirst_2combo_Z_mass__97->SetBinError(66,0.004790387);
   VH_tagFirst_2combo_Z_mass__97->SetBinError(150,0.004822818);
   VH_tagFirst_2combo_Z_mass__97->SetBinError(169,0.001122139);
   VH_tagFirst_2combo_Z_mass__97->SetBinError(201,0.002901436);
   VH_tagFirst_2combo_Z_mass__97->SetEntries(20);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2combo_Z_mass__97->SetLineColor(ci);
   VH_tagFirst_2combo_Z_mass__97->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VH_tagFirst_2combo_Z_mass__97->GetXaxis()->SetRange(1,30);
   VH_tagFirst_2combo_Z_mass__97->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_Z_mass__97->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_Z_mass__97->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_Z_mass__97->GetYaxis()->SetTitle("Events/10.0 GeV");
   VH_tagFirst_2combo_Z_mass__97->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_Z_mass__97->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2combo_Z_mass__97->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2combo_Z_mass__97->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2combo_Z_mass__97->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_Z_mass__97->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_Z_mass__97->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_Z_mass__97->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_Z_mass__97->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_tagFirst_2combo_18->Modified();
   Z_mass_tagFirst_2combo_18->cd();
   Z_mass_tagFirst_2combo_18->SetSelected(Z_mass_tagFirst_2combo_18);
}
