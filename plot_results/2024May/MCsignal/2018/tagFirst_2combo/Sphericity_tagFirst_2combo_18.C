#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_tagFirst_2combo_18()
{
//=========Macro generated from canvas: Sphericity_tagFirst_2combo_18/Sphericity_tagFirst_2combo_18
//=========  (Thu May 23 13:53:22 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_tagFirst_2combo_18 = new TCanvas("Sphericity_tagFirst_2combo_18", "Sphericity_tagFirst_2combo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tagFirst_2combo_18->SetHighLightColor(2);
   Sphericity_tagFirst_2combo_18->Range(-0.2,-0.002160363,1.133333,0.01944327);
   Sphericity_tagFirst_2combo_18->SetFillColor(0);
   Sphericity_tagFirst_2combo_18->SetFillStyle(4000);
   Sphericity_tagFirst_2combo_18->SetBorderMode(0);
   Sphericity_tagFirst_2combo_18->SetBorderSize(2);
   Sphericity_tagFirst_2combo_18->SetLeftMargin(0.15);
   Sphericity_tagFirst_2combo_18->SetFrameFillStyle(1000);
   Sphericity_tagFirst_2combo_18->SetFrameBorderMode(0);
   Sphericity_tagFirst_2combo_18->SetFrameFillStyle(1000);
   Sphericity_tagFirst_2combo_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2combo_Sphericity__111 = new TH1D("VH_tagFirst_2combo_Sphericity__111","",25,0,1);
   VH_tagFirst_2combo_Sphericity__111->SetBinContent(1,0.01645991);
   VH_tagFirst_2combo_Sphericity__111->SetBinContent(2,0.01366344);
   VH_tagFirst_2combo_Sphericity__111->SetBinContent(3,0.01012431);
   VH_tagFirst_2combo_Sphericity__111->SetBinContent(4,0.006799562);
   VH_tagFirst_2combo_Sphericity__111->SetBinContent(8,0.002127519);
   VH_tagFirst_2combo_Sphericity__111->SetBinError(1,0.007113609);
   VH_tagFirst_2combo_Sphericity__111->SetBinError(2,0.005379513);
   VH_tagFirst_2combo_Sphericity__111->SetBinError(3,0.006118673);
   VH_tagFirst_2combo_Sphericity__111->SetBinError(4,0.003950207);
   VH_tagFirst_2combo_Sphericity__111->SetBinError(8,0.002127519);
   VH_tagFirst_2combo_Sphericity__111->SetEntries(20);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2combo_Sphericity__111->SetLineColor(ci);
   VH_tagFirst_2combo_Sphericity__111->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_2combo_Sphericity__111->GetXaxis()->SetRange(1,25);
   VH_tagFirst_2combo_Sphericity__111->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_Sphericity__111->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_Sphericity__111->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_Sphericity__111->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_2combo_Sphericity__111->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_Sphericity__111->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2combo_Sphericity__111->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2combo_Sphericity__111->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2combo_Sphericity__111->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_Sphericity__111->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_Sphericity__111->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_Sphericity__111->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_Sphericity__111->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tagFirst_2combo_18->Modified();
   Sphericity_tagFirst_2combo_18->cd();
   Sphericity_tagFirst_2combo_18->SetSelected(Sphericity_tagFirst_2combo_18);
}
