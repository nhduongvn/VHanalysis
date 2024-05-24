#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_SingleTop_tagOnly_2b1c_17()
{
//=========Macro generated from canvas: Sphericity_SingleTop_tagOnly_2b1c_17/Sphericity_SingleTop_tagOnly_2b1c_17
//=========  (Fri May 24 12:42:55 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_SingleTop_tagOnly_2b1c_17 = new TCanvas("Sphericity_SingleTop_tagOnly_2b1c_17", "Sphericity_SingleTop_tagOnly_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_SingleTop_tagOnly_2b1c_17->SetHighLightColor(2);
   Sphericity_SingleTop_tagOnly_2b1c_17->Range(-0.2,-1706.959,1.133333,15362.63);
   Sphericity_SingleTop_tagOnly_2b1c_17->SetFillColor(0);
   Sphericity_SingleTop_tagOnly_2b1c_17->SetFillStyle(4000);
   Sphericity_SingleTop_tagOnly_2b1c_17->SetBorderMode(0);
   Sphericity_SingleTop_tagOnly_2b1c_17->SetBorderSize(2);
   Sphericity_SingleTop_tagOnly_2b1c_17->SetLeftMargin(0.15);
   Sphericity_SingleTop_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_SingleTop_tagOnly_2b1c_17->SetFrameBorderMode(0);
   Sphericity_SingleTop_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_SingleTop_tagOnly_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Sphericity__3320 = new TH1D("VH_tagOnly_2b1c_Sphericity__3320","",25,0,1);
   VH_tagOnly_2b1c_Sphericity__3320->SetBinContent(1,13005.4);
   VH_tagOnly_2b1c_Sphericity__3320->SetBinContent(2,11052.76);
   VH_tagOnly_2b1c_Sphericity__3320->SetBinContent(3,6398.907);
   VH_tagOnly_2b1c_Sphericity__3320->SetBinContent(4,3658.046);
   VH_tagOnly_2b1c_Sphericity__3320->SetBinContent(5,2021.964);
   VH_tagOnly_2b1c_Sphericity__3320->SetBinContent(6,1065.666);
   VH_tagOnly_2b1c_Sphericity__3320->SetBinContent(7,563.1859);
   VH_tagOnly_2b1c_Sphericity__3320->SetBinContent(8,320.9704);
   VH_tagOnly_2b1c_Sphericity__3320->SetBinContent(9,185.6628);
   VH_tagOnly_2b1c_Sphericity__3320->SetBinContent(10,122.0065);
   VH_tagOnly_2b1c_Sphericity__3320->SetBinContent(11,88.86016);
   VH_tagOnly_2b1c_Sphericity__3320->SetBinContent(12,68.44348);
   VH_tagOnly_2b1c_Sphericity__3320->SetBinContent(13,49.6459);
   VH_tagOnly_2b1c_Sphericity__3320->SetBinContent(14,38.21133);
   VH_tagOnly_2b1c_Sphericity__3320->SetBinContent(15,27.3069);
   VH_tagOnly_2b1c_Sphericity__3320->SetBinContent(16,20.05628);
   VH_tagOnly_2b1c_Sphericity__3320->SetBinContent(17,14.5274);
   VH_tagOnly_2b1c_Sphericity__3320->SetBinContent(18,10.39603);
   VH_tagOnly_2b1c_Sphericity__3320->SetBinContent(19,6.128746);
   VH_tagOnly_2b1c_Sphericity__3320->SetBinContent(20,1.253655);
   VH_tagOnly_2b1c_Sphericity__3320->SetBinContent(21,1.118545);
   VH_tagOnly_2b1c_Sphericity__3320->SetBinContent(22,0.2238827);
   VH_tagOnly_2b1c_Sphericity__3320->SetBinError(1,49.72349);
   VH_tagOnly_2b1c_Sphericity__3320->SetBinError(2,44.93276);
   VH_tagOnly_2b1c_Sphericity__3320->SetBinError(3,34.17033);
   VH_tagOnly_2b1c_Sphericity__3320->SetBinError(4,26.47872);
   VH_tagOnly_2b1c_Sphericity__3320->SetBinError(5,20.10057);
   VH_tagOnly_2b1c_Sphericity__3320->SetBinError(6,14.61662);
   VH_tagOnly_2b1c_Sphericity__3320->SetBinError(7,10.96704);
   VH_tagOnly_2b1c_Sphericity__3320->SetBinError(8,8.321533);
   VH_tagOnly_2b1c_Sphericity__3320->SetBinError(9,6.186336);
   VH_tagOnly_2b1c_Sphericity__3320->SetBinError(10,4.922746);
   VH_tagOnly_2b1c_Sphericity__3320->SetBinError(11,4.437109);
   VH_tagOnly_2b1c_Sphericity__3320->SetBinError(12,3.947711);
   VH_tagOnly_2b1c_Sphericity__3320->SetBinError(13,3.205145);
   VH_tagOnly_2b1c_Sphericity__3320->SetBinError(14,2.909961);
   VH_tagOnly_2b1c_Sphericity__3320->SetBinError(15,2.383519);
   VH_tagOnly_2b1c_Sphericity__3320->SetBinError(16,2.336885);
   VH_tagOnly_2b1c_Sphericity__3320->SetBinError(17,1.612159);
   VH_tagOnly_2b1c_Sphericity__3320->SetBinError(18,1.880431);
   VH_tagOnly_2b1c_Sphericity__3320->SetBinError(19,1.173981);
   VH_tagOnly_2b1c_Sphericity__3320->SetBinError(20,0.4082986);
   VH_tagOnly_2b1c_Sphericity__3320->SetBinError(21,0.5092734);
   VH_tagOnly_2b1c_Sphericity__3320->SetBinError(22,0.2238827);
   VH_tagOnly_2b1c_Sphericity__3320->SetEntries(531050);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Sphericity__3320->SetLineColor(ci);
   VH_tagOnly_2b1c_Sphericity__3320->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_2b1c_Sphericity__3320->GetXaxis()->SetRange(1,25);
   VH_tagOnly_2b1c_Sphericity__3320->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3320->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3320->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3320->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_2b1c_Sphericity__3320->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3320->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Sphericity__3320->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Sphericity__3320->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Sphericity__3320->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3320->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3320->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3320->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3320->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_SingleTop_tagOnly_2b1c_17->Modified();
   Sphericity_SingleTop_tagOnly_2b1c_17->cd();
   Sphericity_SingleTop_tagOnly_2b1c_17->SetSelected(Sphericity_SingleTop_tagOnly_2b1c_17);
}
