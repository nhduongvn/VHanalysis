#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_QCD_DHZfirst_2b1c_17_logY()
{
//=========Macro generated from canvas: Sphericity_QCD_DHZfirst_2b1c_17/Sphericity_QCD_DHZfirst_2b1c_17
//=========  (Thu May 23 20:49:25 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_QCD_DHZfirst_2b1c_17 = new TCanvas("Sphericity_QCD_DHZfirst_2b1c_17", "Sphericity_QCD_DHZfirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_QCD_DHZfirst_2b1c_17->SetHighLightColor(2);
   Sphericity_QCD_DHZfirst_2b1c_17->Range(-0.2,-0.8086723,1.133333,6.523795);
   Sphericity_QCD_DHZfirst_2b1c_17->SetFillColor(0);
   Sphericity_QCD_DHZfirst_2b1c_17->SetFillStyle(4000);
   Sphericity_QCD_DHZfirst_2b1c_17->SetBorderMode(0);
   Sphericity_QCD_DHZfirst_2b1c_17->SetBorderSize(2);
   Sphericity_QCD_DHZfirst_2b1c_17->SetLogy();
   Sphericity_QCD_DHZfirst_2b1c_17->SetLeftMargin(0.15);
   Sphericity_QCD_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_QCD_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   Sphericity_QCD_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_QCD_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Sphericity__4028 = new TH1D("VH_DHZfirst_2b1c_Sphericity__4028","",25,0,1);
   VH_DHZfirst_2b1c_Sphericity__4028->SetBinContent(1,325836.5);
   VH_DHZfirst_2b1c_Sphericity__4028->SetBinContent(2,246518.3);
   VH_DHZfirst_2b1c_Sphericity__4028->SetBinContent(3,134829);
   VH_DHZfirst_2b1c_Sphericity__4028->SetBinContent(4,72950.43);
   VH_DHZfirst_2b1c_Sphericity__4028->SetBinContent(5,43135.45);
   VH_DHZfirst_2b1c_Sphericity__4028->SetBinContent(6,39233.57);
   VH_DHZfirst_2b1c_Sphericity__4028->SetBinContent(7,4182.567);
   VH_DHZfirst_2b1c_Sphericity__4028->SetBinContent(8,670.0569);
   VH_DHZfirst_2b1c_Sphericity__4028->SetBinContent(9,462.4616);
   VH_DHZfirst_2b1c_Sphericity__4028->SetBinContent(10,479.8393);
   VH_DHZfirst_2b1c_Sphericity__4028->SetBinContent(11,36.35027);
   VH_DHZfirst_2b1c_Sphericity__4028->SetBinContent(12,26.22943);
   VH_DHZfirst_2b1c_Sphericity__4028->SetBinContent(13,22.41632);
   VH_DHZfirst_2b1c_Sphericity__4028->SetBinContent(14,1.681142);
   VH_DHZfirst_2b1c_Sphericity__4028->SetBinContent(15,32.89947);
   VH_DHZfirst_2b1c_Sphericity__4028->SetBinContent(16,9.874295);
   VH_DHZfirst_2b1c_Sphericity__4028->SetBinContent(17,21.85246);
   VH_DHZfirst_2b1c_Sphericity__4028->SetBinContent(18,1.925744);
   VH_DHZfirst_2b1c_Sphericity__4028->SetBinContent(20,3.903567);
   VH_DHZfirst_2b1c_Sphericity__4028->SetBinError(1,31168.41);
   VH_DHZfirst_2b1c_Sphericity__4028->SetBinError(2,6950.646);
   VH_DHZfirst_2b1c_Sphericity__4028->SetBinError(3,5143.307);
   VH_DHZfirst_2b1c_Sphericity__4028->SetBinError(4,4858.37);
   VH_DHZfirst_2b1c_Sphericity__4028->SetBinError(5,3274.449);
   VH_DHZfirst_2b1c_Sphericity__4028->SetBinError(6,22311.34);
   VH_DHZfirst_2b1c_Sphericity__4028->SetBinError(7,788.4806);
   VH_DHZfirst_2b1c_Sphericity__4028->SetBinError(8,163.3929);
   VH_DHZfirst_2b1c_Sphericity__4028->SetBinError(9,224.2834);
   VH_DHZfirst_2b1c_Sphericity__4028->SetBinError(10,322.322);
   VH_DHZfirst_2b1c_Sphericity__4028->SetBinError(11,18.39143);
   VH_DHZfirst_2b1c_Sphericity__4028->SetBinError(12,21.94003);
   VH_DHZfirst_2b1c_Sphericity__4028->SetBinError(13,19.35504);
   VH_DHZfirst_2b1c_Sphericity__4028->SetBinError(14,1.412234);
   VH_DHZfirst_2b1c_Sphericity__4028->SetBinError(15,27.88092);
   VH_DHZfirst_2b1c_Sphericity__4028->SetBinError(16,7.298792);
   VH_DHZfirst_2b1c_Sphericity__4028->SetBinError(17,15.45388);
   VH_DHZfirst_2b1c_Sphericity__4028->SetBinError(18,1.925744);
   VH_DHZfirst_2b1c_Sphericity__4028->SetBinError(20,3.903567);
   VH_DHZfirst_2b1c_Sphericity__4028->SetEntries(46934);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Sphericity__4028->SetLineColor(ci);
   VH_DHZfirst_2b1c_Sphericity__4028->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_2b1c_Sphericity__4028->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_2b1c_Sphericity__4028->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4028->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4028->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4028->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_2b1c_Sphericity__4028->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4028->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Sphericity__4028->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Sphericity__4028->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Sphericity__4028->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4028->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4028->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4028->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4028->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_QCD_DHZfirst_2b1c_17->Modified();
   Sphericity_QCD_DHZfirst_2b1c_17->cd();
   Sphericity_QCD_DHZfirst_2b1c_17->SetSelected(Sphericity_QCD_DHZfirst_2b1c_17);
}
