#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_QCD_DHZfirst_17_logY()
{
//=========Macro generated from canvas: Sphericity_QCD_DHZfirst_17/Sphericity_QCD_DHZfirst_17
//=========  (Thu May 23 20:48:51 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_QCD_DHZfirst_17 = new TCanvas("Sphericity_QCD_DHZfirst_17", "Sphericity_QCD_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_QCD_DHZfirst_17->SetHighLightColor(2);
   Sphericity_QCD_DHZfirst_17->Range(-0.2,-1.549907,1.133333,5.731143);
   Sphericity_QCD_DHZfirst_17->SetFillColor(0);
   Sphericity_QCD_DHZfirst_17->SetFillStyle(4000);
   Sphericity_QCD_DHZfirst_17->SetBorderMode(0);
   Sphericity_QCD_DHZfirst_17->SetBorderSize(2);
   Sphericity_QCD_DHZfirst_17->SetLogy();
   Sphericity_QCD_DHZfirst_17->SetLeftMargin(0.15);
   Sphericity_QCD_DHZfirst_17->SetFrameFillStyle(1000);
   Sphericity_QCD_DHZfirst_17->SetFrameBorderMode(0);
   Sphericity_QCD_DHZfirst_17->SetFrameFillStyle(1000);
   Sphericity_QCD_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Sphericity__1868 = new TH1D("VH_DHZfirst_Sphericity__1868","",25,0,1);
   VH_DHZfirst_Sphericity__1868->SetBinContent(1,53148.22);
   VH_DHZfirst_Sphericity__1868->SetBinContent(2,43827.23);
   VH_DHZfirst_Sphericity__1868->SetBinContent(3,22335.5);
   VH_DHZfirst_Sphericity__1868->SetBinContent(4,12440.88);
   VH_DHZfirst_Sphericity__1868->SetBinContent(5,7988.578);
   VH_DHZfirst_Sphericity__1868->SetBinContent(6,3370.601);
   VH_DHZfirst_Sphericity__1868->SetBinContent(7,911.4177);
   VH_DHZfirst_Sphericity__1868->SetBinContent(8,105.9633);
   VH_DHZfirst_Sphericity__1868->SetBinContent(9,3.084752);
   VH_DHZfirst_Sphericity__1868->SetBinContent(10,317.0601);
   VH_DHZfirst_Sphericity__1868->SetBinContent(12,21.71186);
   VH_DHZfirst_Sphericity__1868->SetBinContent(14,0.301459);
   VH_DHZfirst_Sphericity__1868->SetBinContent(15,5.272156);
   VH_DHZfirst_Sphericity__1868->SetBinError(1,2970.028);
   VH_DHZfirst_Sphericity__1868->SetBinError(2,2734.916);
   VH_DHZfirst_Sphericity__1868->SetBinError(3,2110.451);
   VH_DHZfirst_Sphericity__1868->SetBinError(4,1508.166);
   VH_DHZfirst_Sphericity__1868->SetBinError(5,1609.916);
   VH_DHZfirst_Sphericity__1868->SetBinError(6,855.0862);
   VH_DHZfirst_Sphericity__1868->SetBinError(7,366.8713);
   VH_DHZfirst_Sphericity__1868->SetBinError(8,48.51332);
   VH_DHZfirst_Sphericity__1868->SetBinError(9,2.00058);
   VH_DHZfirst_Sphericity__1868->SetBinError(10,317.0601);
   VH_DHZfirst_Sphericity__1868->SetBinError(12,21.71186);
   VH_DHZfirst_Sphericity__1868->SetBinError(14,0.301459);
   VH_DHZfirst_Sphericity__1868->SetBinError(15,3.751939);
   VH_DHZfirst_Sphericity__1868->SetEntries(9045);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity__1868->SetLineColor(ci);
   VH_DHZfirst_Sphericity__1868->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_Sphericity__1868->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_Sphericity__1868->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1868->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1868->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1868->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_Sphericity__1868->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1868->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Sphericity__1868->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Sphericity__1868->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Sphericity__1868->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1868->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1868->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1868->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1868->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_QCD_DHZfirst_17->Modified();
   Sphericity_QCD_DHZfirst_17->cd();
   Sphericity_QCD_DHZfirst_17->SetSelected(Sphericity_QCD_DHZfirst_17);
}
