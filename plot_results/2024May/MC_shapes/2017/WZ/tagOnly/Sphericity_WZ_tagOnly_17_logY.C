#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WZ_tagOnly_17_logY()
{
//=========Macro generated from canvas: Sphericity_WZ_tagOnly_17/Sphericity_WZ_tagOnly_17
//=========  (Thu May 23 20:48:41 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WZ_tagOnly_17 = new TCanvas("Sphericity_WZ_tagOnly_17", "Sphericity_WZ_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WZ_tagOnly_17->SetHighLightColor(2);
   Sphericity_WZ_tagOnly_17->Range(-0.2,-1.773744,1.133333,2.344053);
   Sphericity_WZ_tagOnly_17->SetFillColor(0);
   Sphericity_WZ_tagOnly_17->SetFillStyle(4000);
   Sphericity_WZ_tagOnly_17->SetBorderMode(0);
   Sphericity_WZ_tagOnly_17->SetBorderSize(2);
   Sphericity_WZ_tagOnly_17->SetLogy();
   Sphericity_WZ_tagOnly_17->SetLeftMargin(0.15);
   Sphericity_WZ_tagOnly_17->SetFrameFillStyle(1000);
   Sphericity_WZ_tagOnly_17->SetFrameBorderMode(0);
   Sphericity_WZ_tagOnly_17->SetFrameFillStyle(1000);
   Sphericity_WZ_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Sphericity__1166 = new TH1D("VH_tagOnly_Sphericity__1166","",25,0,1);
   VH_tagOnly_Sphericity__1166->SetBinContent(1,45.15695);
   VH_tagOnly_Sphericity__1166->SetBinContent(2,39.11606);
   VH_tagOnly_Sphericity__1166->SetBinContent(3,26.70702);
   VH_tagOnly_Sphericity__1166->SetBinContent(4,14.94089);
   VH_tagOnly_Sphericity__1166->SetBinContent(5,7.704388);
   VH_tagOnly_Sphericity__1166->SetBinContent(6,6.462622);
   VH_tagOnly_Sphericity__1166->SetBinContent(7,1.58978);
   VH_tagOnly_Sphericity__1166->SetBinContent(8,0.3031837);
   VH_tagOnly_Sphericity__1166->SetBinContent(9,0.8305164);
   VH_tagOnly_Sphericity__1166->SetBinContent(10,0.8162751);
   VH_tagOnly_Sphericity__1166->SetBinContent(11,1.075425);
   VH_tagOnly_Sphericity__1166->SetBinContent(12,0.08690921);
   VH_tagOnly_Sphericity__1166->SetBinContent(14,0.6807718);
   VH_tagOnly_Sphericity__1166->SetBinContent(16,0.6789458);
   VH_tagOnly_Sphericity__1166->SetBinContent(17,0.1216993);
   VH_tagOnly_Sphericity__1166->SetBinError(1,4.031427);
   VH_tagOnly_Sphericity__1166->SetBinError(2,3.290282);
   VH_tagOnly_Sphericity__1166->SetBinError(3,2.961662);
   VH_tagOnly_Sphericity__1166->SetBinError(4,2.244302);
   VH_tagOnly_Sphericity__1166->SetBinError(5,1.523799);
   VH_tagOnly_Sphericity__1166->SetBinError(6,1.36974);
   VH_tagOnly_Sphericity__1166->SetBinError(7,0.6226413);
   VH_tagOnly_Sphericity__1166->SetBinError(8,0.3031837);
   VH_tagOnly_Sphericity__1166->SetBinError(9,0.5972635);
   VH_tagOnly_Sphericity__1166->SetBinError(10,0.5749195);
   VH_tagOnly_Sphericity__1166->SetBinError(11,0.6866048);
   VH_tagOnly_Sphericity__1166->SetBinError(12,0.08690921);
   VH_tagOnly_Sphericity__1166->SetBinError(14,0.6807718);
   VH_tagOnly_Sphericity__1166->SetBinError(16,0.5593728);
   VH_tagOnly_Sphericity__1166->SetBinError(17,0.1216993);
   VH_tagOnly_Sphericity__1166->SetEntries(598);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Sphericity__1166->SetLineColor(ci);
   VH_tagOnly_Sphericity__1166->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_Sphericity__1166->GetXaxis()->SetRange(1,25);
   VH_tagOnly_Sphericity__1166->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1166->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1166->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1166->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_Sphericity__1166->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1166->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Sphericity__1166->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Sphericity__1166->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Sphericity__1166->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1166->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1166->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1166->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1166->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WZ_tagOnly_17->Modified();
   Sphericity_WZ_tagOnly_17->cd();
   Sphericity_WZ_tagOnly_17->SetSelected(Sphericity_WZ_tagOnly_17);
}
