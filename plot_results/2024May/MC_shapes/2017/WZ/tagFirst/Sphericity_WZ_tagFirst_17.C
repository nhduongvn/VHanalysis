#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WZ_tagFirst_17()
{
//=========Macro generated from canvas: Sphericity_WZ_tagFirst_17/Sphericity_WZ_tagFirst_17
//=========  (Fri May 24 12:42:11 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WZ_tagFirst_17 = new TCanvas("Sphericity_WZ_tagFirst_17", "Sphericity_WZ_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WZ_tagFirst_17->SetHighLightColor(2);
   Sphericity_WZ_tagFirst_17->Range(-0.2,-6.313852,1.133333,56.82466);
   Sphericity_WZ_tagFirst_17->SetFillColor(0);
   Sphericity_WZ_tagFirst_17->SetFillStyle(4000);
   Sphericity_WZ_tagFirst_17->SetBorderMode(0);
   Sphericity_WZ_tagFirst_17->SetBorderSize(2);
   Sphericity_WZ_tagFirst_17->SetLeftMargin(0.15);
   Sphericity_WZ_tagFirst_17->SetFrameFillStyle(1000);
   Sphericity_WZ_tagFirst_17->SetFrameBorderMode(0);
   Sphericity_WZ_tagFirst_17->SetFrameFillStyle(1000);
   Sphericity_WZ_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Sphericity__446 = new TH1D("VH_tagFirst_Sphericity__446","",25,0,1);
   VH_tagFirst_Sphericity__446->SetBinContent(1,48.10553);
   VH_tagFirst_Sphericity__446->SetBinContent(2,40.73925);
   VH_tagFirst_Sphericity__446->SetBinContent(3,28.66229);
   VH_tagFirst_Sphericity__446->SetBinContent(4,15.07976);
   VH_tagFirst_Sphericity__446->SetBinContent(5,7.704388);
   VH_tagFirst_Sphericity__446->SetBinContent(6,6.462622);
   VH_tagFirst_Sphericity__446->SetBinContent(7,1.58978);
   VH_tagFirst_Sphericity__446->SetBinContent(8,0.3031837);
   VH_tagFirst_Sphericity__446->SetBinContent(9,0.8305164);
   VH_tagFirst_Sphericity__446->SetBinContent(10,0.8162751);
   VH_tagFirst_Sphericity__446->SetBinContent(11,1.075425);
   VH_tagFirst_Sphericity__446->SetBinContent(12,0.08690921);
   VH_tagFirst_Sphericity__446->SetBinContent(14,0.6807718);
   VH_tagFirst_Sphericity__446->SetBinContent(16,0.6789458);
   VH_tagFirst_Sphericity__446->SetBinContent(17,0.1216993);
   VH_tagFirst_Sphericity__446->SetBinError(1,4.182476);
   VH_tagFirst_Sphericity__446->SetBinError(2,3.389537);
   VH_tagFirst_Sphericity__446->SetBinError(3,3.221298);
   VH_tagFirst_Sphericity__446->SetBinError(4,2.248594);
   VH_tagFirst_Sphericity__446->SetBinError(5,1.523799);
   VH_tagFirst_Sphericity__446->SetBinError(6,1.36974);
   VH_tagFirst_Sphericity__446->SetBinError(7,0.6226413);
   VH_tagFirst_Sphericity__446->SetBinError(8,0.3031837);
   VH_tagFirst_Sphericity__446->SetBinError(9,0.5972635);
   VH_tagFirst_Sphericity__446->SetBinError(10,0.5749195);
   VH_tagFirst_Sphericity__446->SetBinError(11,0.6866048);
   VH_tagFirst_Sphericity__446->SetBinError(12,0.08690921);
   VH_tagFirst_Sphericity__446->SetBinError(14,0.6807718);
   VH_tagFirst_Sphericity__446->SetBinError(16,0.5593728);
   VH_tagFirst_Sphericity__446->SetBinError(17,0.1216993);
   VH_tagFirst_Sphericity__446->SetEntries(620);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Sphericity__446->SetLineColor(ci);
   VH_tagFirst_Sphericity__446->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_Sphericity__446->GetXaxis()->SetRange(1,25);
   VH_tagFirst_Sphericity__446->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__446->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__446->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__446->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_Sphericity__446->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__446->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Sphericity__446->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Sphericity__446->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Sphericity__446->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__446->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__446->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__446->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__446->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WZ_tagFirst_17->Modified();
   Sphericity_WZ_tagFirst_17->cd();
   Sphericity_WZ_tagFirst_17->SetSelected(Sphericity_WZ_tagFirst_17);
}
