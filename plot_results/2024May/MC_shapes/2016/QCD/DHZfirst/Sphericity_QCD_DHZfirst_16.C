#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_QCD_DHZfirst_16()
{
//=========Macro generated from canvas: Sphericity_QCD_DHZfirst_16/Sphericity_QCD_DHZfirst_16
//=========  (Fri May 24 12:42:32 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_QCD_DHZfirst_16 = new TCanvas("Sphericity_QCD_DHZfirst_16", "Sphericity_QCD_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_QCD_DHZfirst_16->SetHighLightColor(2);
   Sphericity_QCD_DHZfirst_16->Range(-0.2,-14280.48,1.133333,128524.3);
   Sphericity_QCD_DHZfirst_16->SetFillColor(0);
   Sphericity_QCD_DHZfirst_16->SetFillStyle(4000);
   Sphericity_QCD_DHZfirst_16->SetBorderMode(0);
   Sphericity_QCD_DHZfirst_16->SetBorderSize(2);
   Sphericity_QCD_DHZfirst_16->SetLeftMargin(0.15);
   Sphericity_QCD_DHZfirst_16->SetFrameFillStyle(1000);
   Sphericity_QCD_DHZfirst_16->SetFrameBorderMode(0);
   Sphericity_QCD_DHZfirst_16->SetFrameFillStyle(1000);
   Sphericity_QCD_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Sphericity__1867 = new TH1D("VH_DHZfirst_Sphericity__1867","",25,0,1);
   VH_DHZfirst_Sphericity__1867->SetBinContent(1,108803.6);
   VH_DHZfirst_Sphericity__1867->SetBinContent(2,96077.34);
   VH_DHZfirst_Sphericity__1867->SetBinContent(3,51727.75);
   VH_DHZfirst_Sphericity__1867->SetBinContent(4,30864.05);
   VH_DHZfirst_Sphericity__1867->SetBinContent(5,12667.99);
   VH_DHZfirst_Sphericity__1867->SetBinContent(6,5192.875);
   VH_DHZfirst_Sphericity__1867->SetBinContent(7,1443.086);
   VH_DHZfirst_Sphericity__1867->SetBinContent(8,240.3094);
   VH_DHZfirst_Sphericity__1867->SetBinContent(9,278.6359);
   VH_DHZfirst_Sphericity__1867->SetBinContent(10,332.8927);
   VH_DHZfirst_Sphericity__1867->SetBinContent(11,32.9959);
   VH_DHZfirst_Sphericity__1867->SetBinContent(12,6.298517);
   VH_DHZfirst_Sphericity__1867->SetBinContent(13,6.578973);
   VH_DHZfirst_Sphericity__1867->SetBinContent(14,18.39914);
   VH_DHZfirst_Sphericity__1867->SetBinContent(16,2.328363);
   VH_DHZfirst_Sphericity__1867->SetBinContent(17,1.002264);
   VH_DHZfirst_Sphericity__1867->SetBinContent(18,20.07859);
   VH_DHZfirst_Sphericity__1867->SetBinError(1,5597.399);
   VH_DHZfirst_Sphericity__1867->SetBinError(2,4995.016);
   VH_DHZfirst_Sphericity__1867->SetBinError(3,3329.003);
   VH_DHZfirst_Sphericity__1867->SetBinError(4,3257.868);
   VH_DHZfirst_Sphericity__1867->SetBinError(5,1308.236);
   VH_DHZfirst_Sphericity__1867->SetBinError(6,1250.691);
   VH_DHZfirst_Sphericity__1867->SetBinError(7,440.1078);
   VH_DHZfirst_Sphericity__1867->SetBinError(8,61.56557);
   VH_DHZfirst_Sphericity__1867->SetBinError(9,221.3929);
   VH_DHZfirst_Sphericity__1867->SetBinError(10,288.3116);
   VH_DHZfirst_Sphericity__1867->SetBinError(11,23.43461);
   VH_DHZfirst_Sphericity__1867->SetBinError(12,4.566537);
   VH_DHZfirst_Sphericity__1867->SetBinError(13,6.578973);
   VH_DHZfirst_Sphericity__1867->SetBinError(14,15.96637);
   VH_DHZfirst_Sphericity__1867->SetBinError(16,2.328363);
   VH_DHZfirst_Sphericity__1867->SetBinError(17,1.002264);
   VH_DHZfirst_Sphericity__1867->SetBinError(18,20.07859);
   VH_DHZfirst_Sphericity__1867->SetEntries(16195);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity__1867->SetLineColor(ci);
   VH_DHZfirst_Sphericity__1867->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_Sphericity__1867->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_Sphericity__1867->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1867->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1867->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1867->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_Sphericity__1867->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1867->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Sphericity__1867->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Sphericity__1867->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Sphericity__1867->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1867->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1867->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1867->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1867->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_QCD_DHZfirst_16->Modified();
   Sphericity_QCD_DHZfirst_16->cd();
   Sphericity_QCD_DHZfirst_16->SetSelected(Sphericity_QCD_DHZfirst_16);
}
