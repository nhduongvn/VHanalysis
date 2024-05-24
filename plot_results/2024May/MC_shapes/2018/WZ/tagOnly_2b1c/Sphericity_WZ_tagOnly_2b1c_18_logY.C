#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WZ_tagOnly_2b1c_18_logY()
{
//=========Macro generated from canvas: Sphericity_WZ_tagOnly_2b1c_18/Sphericity_WZ_tagOnly_2b1c_18
//=========  (Thu May 23 20:49:13 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WZ_tagOnly_2b1c_18 = new TCanvas("Sphericity_WZ_tagOnly_2b1c_18", "Sphericity_WZ_tagOnly_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WZ_tagOnly_2b1c_18->SetHighLightColor(2);
   Sphericity_WZ_tagOnly_2b1c_18->Range(-0.2,-1.536896,1.133333,3.179823);
   Sphericity_WZ_tagOnly_2b1c_18->SetFillColor(0);
   Sphericity_WZ_tagOnly_2b1c_18->SetFillStyle(4000);
   Sphericity_WZ_tagOnly_2b1c_18->SetBorderMode(0);
   Sphericity_WZ_tagOnly_2b1c_18->SetBorderSize(2);
   Sphericity_WZ_tagOnly_2b1c_18->SetLogy();
   Sphericity_WZ_tagOnly_2b1c_18->SetLeftMargin(0.15);
   Sphericity_WZ_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_WZ_tagOnly_2b1c_18->SetFrameBorderMode(0);
   Sphericity_WZ_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_WZ_tagOnly_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Sphericity__3327 = new TH1D("VH_tagOnly_2b1c_Sphericity__3327","",25,0,1);
   VH_tagOnly_2b1c_Sphericity__3327->SetBinContent(1,269.5269);
   VH_tagOnly_2b1c_Sphericity__3327->SetBinContent(2,219.4763);
   VH_tagOnly_2b1c_Sphericity__3327->SetBinContent(3,113.8717);
   VH_tagOnly_2b1c_Sphericity__3327->SetBinContent(4,82.37958);
   VH_tagOnly_2b1c_Sphericity__3327->SetBinContent(5,54.33305);
   VH_tagOnly_2b1c_Sphericity__3327->SetBinContent(6,27.93881);
   VH_tagOnly_2b1c_Sphericity__3327->SetBinContent(7,11.43795);
   VH_tagOnly_2b1c_Sphericity__3327->SetBinContent(8,5.821077);
   VH_tagOnly_2b1c_Sphericity__3327->SetBinContent(9,4.962471);
   VH_tagOnly_2b1c_Sphericity__3327->SetBinContent(10,4.340581);
   VH_tagOnly_2b1c_Sphericity__3327->SetBinContent(11,3.192853);
   VH_tagOnly_2b1c_Sphericity__3327->SetBinContent(12,2.202816);
   VH_tagOnly_2b1c_Sphericity__3327->SetBinContent(14,1.761327);
   VH_tagOnly_2b1c_Sphericity__3327->SetBinContent(15,1.284457);
   VH_tagOnly_2b1c_Sphericity__3327->SetBinContent(17,0.5198154);
   VH_tagOnly_2b1c_Sphericity__3327->SetBinContent(18,0.1721101);
   VH_tagOnly_2b1c_Sphericity__3327->SetBinContent(19,0.3847792);
   VH_tagOnly_2b1c_Sphericity__3327->SetBinError(1,14.36641);
   VH_tagOnly_2b1c_Sphericity__3327->SetBinError(2,12.30092);
   VH_tagOnly_2b1c_Sphericity__3327->SetBinError(3,9.042712);
   VH_tagOnly_2b1c_Sphericity__3327->SetBinError(4,7.498771);
   VH_tagOnly_2b1c_Sphericity__3327->SetBinError(5,7.738278);
   VH_tagOnly_2b1c_Sphericity__3327->SetBinError(6,4.817166);
   VH_tagOnly_2b1c_Sphericity__3327->SetBinError(7,2.643585);
   VH_tagOnly_2b1c_Sphericity__3327->SetBinError(8,1.97183);
   VH_tagOnly_2b1c_Sphericity__3327->SetBinError(9,1.874291);
   VH_tagOnly_2b1c_Sphericity__3327->SetBinError(10,1.928743);
   VH_tagOnly_2b1c_Sphericity__3327->SetBinError(11,1.585225);
   VH_tagOnly_2b1c_Sphericity__3327->SetBinError(12,1.165448);
   VH_tagOnly_2b1c_Sphericity__3327->SetBinError(14,1.111537);
   VH_tagOnly_2b1c_Sphericity__3327->SetBinError(15,0.9117773);
   VH_tagOnly_2b1c_Sphericity__3327->SetBinError(17,0.5198154);
   VH_tagOnly_2b1c_Sphericity__3327->SetBinError(18,0.1721101);
   VH_tagOnly_2b1c_Sphericity__3327->SetBinError(19,0.3847792);
   VH_tagOnly_2b1c_Sphericity__3327->SetEntries(1432);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Sphericity__3327->SetLineColor(ci);
   VH_tagOnly_2b1c_Sphericity__3327->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_2b1c_Sphericity__3327->GetXaxis()->SetRange(1,25);
   VH_tagOnly_2b1c_Sphericity__3327->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3327->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3327->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3327->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_2b1c_Sphericity__3327->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3327->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Sphericity__3327->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Sphericity__3327->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Sphericity__3327->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3327->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3327->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3327->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3327->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WZ_tagOnly_2b1c_18->Modified();
   Sphericity_WZ_tagOnly_2b1c_18->cd();
   Sphericity_WZ_tagOnly_2b1c_18->SetSelected(Sphericity_WZ_tagOnly_2b1c_18);
}
