#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WW_tagFirst_2b1c_17()
{
//=========Macro generated from canvas: Sphericity_WW_tagFirst_2b1c_17/Sphericity_WW_tagFirst_2b1c_17
//=========  (Fri May 24 12:42:43 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WW_tagFirst_2b1c_17 = new TCanvas("Sphericity_WW_tagFirst_2b1c_17", "Sphericity_WW_tagFirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WW_tagFirst_2b1c_17->SetHighLightColor(2);
   Sphericity_WW_tagFirst_2b1c_17->Range(-0.2,-5.202394,1.133333,46.82154);
   Sphericity_WW_tagFirst_2b1c_17->SetFillColor(0);
   Sphericity_WW_tagFirst_2b1c_17->SetFillStyle(4000);
   Sphericity_WW_tagFirst_2b1c_17->SetBorderMode(0);
   Sphericity_WW_tagFirst_2b1c_17->SetBorderSize(2);
   Sphericity_WW_tagFirst_2b1c_17->SetLeftMargin(0.15);
   Sphericity_WW_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_WW_tagFirst_2b1c_17->SetFrameBorderMode(0);
   Sphericity_WW_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_WW_tagFirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Sphericity__2603 = new TH1D("VH_tagFirst_2b1c_Sphericity__2603","",25,0,1);
   VH_tagFirst_2b1c_Sphericity__2603->SetBinContent(1,39.63728);
   VH_tagFirst_2b1c_Sphericity__2603->SetBinContent(2,29.17917);
   VH_tagFirst_2b1c_Sphericity__2603->SetBinContent(3,17.31296);
   VH_tagFirst_2b1c_Sphericity__2603->SetBinContent(4,8.072109);
   VH_tagFirst_2b1c_Sphericity__2603->SetBinContent(5,6.654883);
   VH_tagFirst_2b1c_Sphericity__2603->SetBinContent(6,3.958957);
   VH_tagFirst_2b1c_Sphericity__2603->SetBinContent(7,2.198623);
   VH_tagFirst_2b1c_Sphericity__2603->SetBinContent(8,0.7677119);
   VH_tagFirst_2b1c_Sphericity__2603->SetBinContent(9,0.5390389);
   VH_tagFirst_2b1c_Sphericity__2603->SetBinContent(12,0.3098635);
   VH_tagFirst_2b1c_Sphericity__2603->SetBinContent(13,0.2611829);
   VH_tagFirst_2b1c_Sphericity__2603->SetBinContent(15,0.1686304);
   VH_tagFirst_2b1c_Sphericity__2603->SetBinContent(16,0.2488032);
   VH_tagFirst_2b1c_Sphericity__2603->SetBinContent(17,0.2259585);
   VH_tagFirst_2b1c_Sphericity__2603->SetBinError(1,3.803419);
   VH_tagFirst_2b1c_Sphericity__2603->SetBinError(2,3.08717);
   VH_tagFirst_2b1c_Sphericity__2603->SetBinError(3,2.387001);
   VH_tagFirst_2b1c_Sphericity__2603->SetBinError(4,1.781541);
   VH_tagFirst_2b1c_Sphericity__2603->SetBinError(5,1.531336);
   VH_tagFirst_2b1c_Sphericity__2603->SetBinError(6,1.110014);
   VH_tagFirst_2b1c_Sphericity__2603->SetBinError(7,0.9723078);
   VH_tagFirst_2b1c_Sphericity__2603->SetBinError(8,0.4450113);
   VH_tagFirst_2b1c_Sphericity__2603->SetBinError(9,0.3843704);
   VH_tagFirst_2b1c_Sphericity__2603->SetBinError(12,0.3098635);
   VH_tagFirst_2b1c_Sphericity__2603->SetBinError(13,0.2611829);
   VH_tagFirst_2b1c_Sphericity__2603->SetBinError(15,0.1686304);
   VH_tagFirst_2b1c_Sphericity__2603->SetBinError(16,0.2488032);
   VH_tagFirst_2b1c_Sphericity__2603->SetBinError(17,0.2259585);
   VH_tagFirst_2b1c_Sphericity__2603->SetEntries(381);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Sphericity__2603->SetLineColor(ci);
   VH_tagFirst_2b1c_Sphericity__2603->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_2b1c_Sphericity__2603->GetXaxis()->SetRange(1,25);
   VH_tagFirst_2b1c_Sphericity__2603->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2603->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2603->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2603->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_2b1c_Sphericity__2603->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2603->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Sphericity__2603->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Sphericity__2603->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Sphericity__2603->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2603->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2603->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2603->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2603->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WW_tagFirst_2b1c_17->Modified();
   Sphericity_WW_tagFirst_2b1c_17->cd();
   Sphericity_WW_tagFirst_2b1c_17->SetSelected(Sphericity_WW_tagFirst_2b1c_17);
}
