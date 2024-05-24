#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_SingleTop_tagOnly_17()
{
//=========Macro generated from canvas: Sphericity_SingleTop_tagOnly_17/Sphericity_SingleTop_tagOnly_17
//=========  (Fri May 24 12:42:21 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_SingleTop_tagOnly_17 = new TCanvas("Sphericity_SingleTop_tagOnly_17", "Sphericity_SingleTop_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_SingleTop_tagOnly_17->SetHighLightColor(2);
   Sphericity_SingleTop_tagOnly_17->Range(-0.2,-727.0315,1.133333,6543.283);
   Sphericity_SingleTop_tagOnly_17->SetFillColor(0);
   Sphericity_SingleTop_tagOnly_17->SetFillStyle(4000);
   Sphericity_SingleTop_tagOnly_17->SetBorderMode(0);
   Sphericity_SingleTop_tagOnly_17->SetBorderSize(2);
   Sphericity_SingleTop_tagOnly_17->SetLeftMargin(0.15);
   Sphericity_SingleTop_tagOnly_17->SetFrameFillStyle(1000);
   Sphericity_SingleTop_tagOnly_17->SetFrameBorderMode(0);
   Sphericity_SingleTop_tagOnly_17->SetFrameFillStyle(1000);
   Sphericity_SingleTop_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Sphericity__1160 = new TH1D("VH_tagOnly_Sphericity__1160","",25,0,1);
   VH_tagOnly_Sphericity__1160->SetBinContent(1,5539.287);
   VH_tagOnly_Sphericity__1160->SetBinContent(2,4485.668);
   VH_tagOnly_Sphericity__1160->SetBinContent(3,2613.768);
   VH_tagOnly_Sphericity__1160->SetBinContent(4,1510.273);
   VH_tagOnly_Sphericity__1160->SetBinContent(5,865.8027);
   VH_tagOnly_Sphericity__1160->SetBinContent(6,471.0552);
   VH_tagOnly_Sphericity__1160->SetBinContent(7,270.9268);
   VH_tagOnly_Sphericity__1160->SetBinContent(8,154.1399);
   VH_tagOnly_Sphericity__1160->SetBinContent(9,94.20315);
   VH_tagOnly_Sphericity__1160->SetBinContent(10,67.01326);
   VH_tagOnly_Sphericity__1160->SetBinContent(11,47.04682);
   VH_tagOnly_Sphericity__1160->SetBinContent(12,36.16833);
   VH_tagOnly_Sphericity__1160->SetBinContent(13,23.70812);
   VH_tagOnly_Sphericity__1160->SetBinContent(14,19.43075);
   VH_tagOnly_Sphericity__1160->SetBinContent(15,14.56631);
   VH_tagOnly_Sphericity__1160->SetBinContent(16,10.65744);
   VH_tagOnly_Sphericity__1160->SetBinContent(17,7.49993);
   VH_tagOnly_Sphericity__1160->SetBinContent(18,6.463067);
   VH_tagOnly_Sphericity__1160->SetBinContent(19,3.254117);
   VH_tagOnly_Sphericity__1160->SetBinContent(20,0.7735647);
   VH_tagOnly_Sphericity__1160->SetBinContent(21,0.9921312);
   VH_tagOnly_Sphericity__1160->SetBinContent(22,0.2238827);
   VH_tagOnly_Sphericity__1160->SetBinError(1,34.50231);
   VH_tagOnly_Sphericity__1160->SetBinError(2,30.4);
   VH_tagOnly_Sphericity__1160->SetBinError(3,23.27512);
   VH_tagOnly_Sphericity__1160->SetBinError(4,18.05739);
   VH_tagOnly_Sphericity__1160->SetBinError(5,13.73294);
   VH_tagOnly_Sphericity__1160->SetBinError(6,10.26575);
   VH_tagOnly_Sphericity__1160->SetBinError(7,8.235951);
   VH_tagOnly_Sphericity__1160->SetBinError(8,6.045212);
   VH_tagOnly_Sphericity__1160->SetBinError(9,4.681523);
   VH_tagOnly_Sphericity__1160->SetBinError(10,3.798748);
   VH_tagOnly_Sphericity__1160->SetBinError(11,3.320256);
   VH_tagOnly_Sphericity__1160->SetBinError(12,3.086208);
   VH_tagOnly_Sphericity__1160->SetBinError(13,2.124065);
   VH_tagOnly_Sphericity__1160->SetBinError(14,2.14214);
   VH_tagOnly_Sphericity__1160->SetBinError(15,1.852623);
   VH_tagOnly_Sphericity__1160->SetBinError(16,1.956787);
   VH_tagOnly_Sphericity__1160->SetBinError(17,1.05592);
   VH_tagOnly_Sphericity__1160->SetBinError(18,1.750437);
   VH_tagOnly_Sphericity__1160->SetBinError(19,0.814712);
   VH_tagOnly_Sphericity__1160->SetBinError(20,0.3289691);
   VH_tagOnly_Sphericity__1160->SetBinError(21,0.5050933);
   VH_tagOnly_Sphericity__1160->SetBinError(22,0.2238827);
   VH_tagOnly_Sphericity__1160->SetEntries(200793);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Sphericity__1160->SetLineColor(ci);
   VH_tagOnly_Sphericity__1160->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_Sphericity__1160->GetXaxis()->SetRange(1,25);
   VH_tagOnly_Sphericity__1160->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1160->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1160->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1160->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_Sphericity__1160->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1160->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Sphericity__1160->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Sphericity__1160->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Sphericity__1160->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1160->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1160->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1160->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1160->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_SingleTop_tagOnly_17->Modified();
   Sphericity_SingleTop_tagOnly_17->cd();
   Sphericity_SingleTop_tagOnly_17->SetSelected(Sphericity_SingleTop_tagOnly_17);
}
