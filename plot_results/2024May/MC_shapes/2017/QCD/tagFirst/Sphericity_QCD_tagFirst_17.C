#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_QCD_tagFirst_17()
{
//=========Macro generated from canvas: Sphericity_QCD_tagFirst_17/Sphericity_QCD_tagFirst_17
//=========  (Fri May 24 12:42:11 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_QCD_tagFirst_17 = new TCanvas("Sphericity_QCD_tagFirst_17", "Sphericity_QCD_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_QCD_tagFirst_17->SetHighLightColor(2);
   Sphericity_QCD_tagFirst_17->Range(-0.2,-62971.77,1.133333,566745.9);
   Sphericity_QCD_tagFirst_17->SetFillColor(0);
   Sphericity_QCD_tagFirst_17->SetFillStyle(4000);
   Sphericity_QCD_tagFirst_17->SetBorderMode(0);
   Sphericity_QCD_tagFirst_17->SetBorderSize(2);
   Sphericity_QCD_tagFirst_17->SetLeftMargin(0.15);
   Sphericity_QCD_tagFirst_17->SetFrameFillStyle(1000);
   Sphericity_QCD_tagFirst_17->SetFrameBorderMode(0);
   Sphericity_QCD_tagFirst_17->SetFrameFillStyle(1000);
   Sphericity_QCD_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Sphericity__428 = new TH1D("VH_tagFirst_Sphericity__428","",25,0,1);
   VH_tagFirst_Sphericity__428->SetBinContent(1,479784.9);
   VH_tagFirst_Sphericity__428->SetBinContent(2,419582.3);
   VH_tagFirst_Sphericity__428->SetBinContent(3,203222.1);
   VH_tagFirst_Sphericity__428->SetBinContent(4,116818.2);
   VH_tagFirst_Sphericity__428->SetBinContent(5,62280.3);
   VH_tagFirst_Sphericity__428->SetBinContent(6,32306.19);
   VH_tagFirst_Sphericity__428->SetBinContent(7,18045.31);
   VH_tagFirst_Sphericity__428->SetBinContent(8,9485.723);
   VH_tagFirst_Sphericity__428->SetBinContent(9,5247.992);
   VH_tagFirst_Sphericity__428->SetBinContent(10,3983.875);
   VH_tagFirst_Sphericity__428->SetBinContent(11,2444.333);
   VH_tagFirst_Sphericity__428->SetBinContent(12,1918.797);
   VH_tagFirst_Sphericity__428->SetBinContent(13,1673.516);
   VH_tagFirst_Sphericity__428->SetBinContent(14,2433.676);
   VH_tagFirst_Sphericity__428->SetBinContent(15,1618.094);
   VH_tagFirst_Sphericity__428->SetBinContent(16,770.9564);
   VH_tagFirst_Sphericity__428->SetBinContent(17,828.0502);
   VH_tagFirst_Sphericity__428->SetBinContent(18,314.5192);
   VH_tagFirst_Sphericity__428->SetBinContent(19,190.2999);
   VH_tagFirst_Sphericity__428->SetBinContent(20,71.85434);
   VH_tagFirst_Sphericity__428->SetBinContent(21,1.366381);
   VH_tagFirst_Sphericity__428->SetBinContent(22,12.63923);
   VH_tagFirst_Sphericity__428->SetBinError(1,31500.12);
   VH_tagFirst_Sphericity__428->SetBinError(2,33193.01);
   VH_tagFirst_Sphericity__428->SetBinError(3,6604.955);
   VH_tagFirst_Sphericity__428->SetBinError(4,4556.357);
   VH_tagFirst_Sphericity__428->SetBinError(5,3704.604);
   VH_tagFirst_Sphericity__428->SetBinError(6,2165.666);
   VH_tagFirst_Sphericity__428->SetBinError(7,3180.156);
   VH_tagFirst_Sphericity__428->SetBinError(8,1197.008);
   VH_tagFirst_Sphericity__428->SetBinError(9,591.1721);
   VH_tagFirst_Sphericity__428->SetBinError(10,486.8043);
   VH_tagFirst_Sphericity__428->SetBinError(11,288.6922);
   VH_tagFirst_Sphericity__428->SetBinError(12,238.0812);
   VH_tagFirst_Sphericity__428->SetBinError(13,298.5375);
   VH_tagFirst_Sphericity__428->SetBinError(14,1013.843);
   VH_tagFirst_Sphericity__428->SetBinError(15,659.6113);
   VH_tagFirst_Sphericity__428->SetBinError(16,125.1779);
   VH_tagFirst_Sphericity__428->SetBinError(17,282.0745);
   VH_tagFirst_Sphericity__428->SetBinError(18,78.3902);
   VH_tagFirst_Sphericity__428->SetBinError(19,48.51903);
   VH_tagFirst_Sphericity__428->SetBinError(20,34.35558);
   VH_tagFirst_Sphericity__428->SetBinError(21,0.7023153);
   VH_tagFirst_Sphericity__428->SetBinError(22,7.666848);
   VH_tagFirst_Sphericity__428->SetEntries(109648);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Sphericity__428->SetLineColor(ci);
   VH_tagFirst_Sphericity__428->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_Sphericity__428->GetXaxis()->SetRange(1,25);
   VH_tagFirst_Sphericity__428->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__428->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__428->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__428->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_Sphericity__428->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__428->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Sphericity__428->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Sphericity__428->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Sphericity__428->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__428->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__428->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__428->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__428->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_QCD_tagFirst_17->Modified();
   Sphericity_QCD_tagFirst_17->cd();
   Sphericity_QCD_tagFirst_17->SetSelected(Sphericity_QCD_tagFirst_17);
}
