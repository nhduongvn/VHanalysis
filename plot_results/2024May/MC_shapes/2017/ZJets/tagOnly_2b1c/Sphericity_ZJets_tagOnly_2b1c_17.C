#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZJets_tagOnly_2b1c_17()
{
//=========Macro generated from canvas: Sphericity_ZJets_tagOnly_2b1c_17/Sphericity_ZJets_tagOnly_2b1c_17
//=========  (Fri May 24 12:42:55 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZJets_tagOnly_2b1c_17 = new TCanvas("Sphericity_ZJets_tagOnly_2b1c_17", "Sphericity_ZJets_tagOnly_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZJets_tagOnly_2b1c_17->SetHighLightColor(2);
   Sphericity_ZJets_tagOnly_2b1c_17->Range(-0.2,-1513.716,1.133333,13623.44);
   Sphericity_ZJets_tagOnly_2b1c_17->SetFillColor(0);
   Sphericity_ZJets_tagOnly_2b1c_17->SetFillStyle(4000);
   Sphericity_ZJets_tagOnly_2b1c_17->SetBorderMode(0);
   Sphericity_ZJets_tagOnly_2b1c_17->SetBorderSize(2);
   Sphericity_ZJets_tagOnly_2b1c_17->SetLeftMargin(0.15);
   Sphericity_ZJets_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_ZJets_tagOnly_2b1c_17->SetFrameBorderMode(0);
   Sphericity_ZJets_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_ZJets_tagOnly_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Sphericity__3314 = new TH1D("VH_tagOnly_2b1c_Sphericity__3314","",25,0,1);
   VH_tagOnly_2b1c_Sphericity__3314->SetBinContent(1,11533.07);
   VH_tagOnly_2b1c_Sphericity__3314->SetBinContent(2,9064.531);
   VH_tagOnly_2b1c_Sphericity__3314->SetBinContent(3,5312.306);
   VH_tagOnly_2b1c_Sphericity__3314->SetBinContent(4,3099.359);
   VH_tagOnly_2b1c_Sphericity__3314->SetBinContent(5,1702.784);
   VH_tagOnly_2b1c_Sphericity__3314->SetBinContent(6,879.9567);
   VH_tagOnly_2b1c_Sphericity__3314->SetBinContent(7,441.4893);
   VH_tagOnly_2b1c_Sphericity__3314->SetBinContent(8,244.8458);
   VH_tagOnly_2b1c_Sphericity__3314->SetBinContent(9,152.9371);
   VH_tagOnly_2b1c_Sphericity__3314->SetBinContent(10,103.1036);
   VH_tagOnly_2b1c_Sphericity__3314->SetBinContent(11,69.45216);
   VH_tagOnly_2b1c_Sphericity__3314->SetBinContent(12,52.85301);
   VH_tagOnly_2b1c_Sphericity__3314->SetBinContent(13,46.73969);
   VH_tagOnly_2b1c_Sphericity__3314->SetBinContent(14,30.93447);
   VH_tagOnly_2b1c_Sphericity__3314->SetBinContent(15,27.5175);
   VH_tagOnly_2b1c_Sphericity__3314->SetBinContent(16,16.84134);
   VH_tagOnly_2b1c_Sphericity__3314->SetBinContent(17,19.56536);
   VH_tagOnly_2b1c_Sphericity__3314->SetBinContent(18,8.882946);
   VH_tagOnly_2b1c_Sphericity__3314->SetBinContent(19,4.324952);
   VH_tagOnly_2b1c_Sphericity__3314->SetBinContent(20,1.62813);
   VH_tagOnly_2b1c_Sphericity__3314->SetBinContent(21,0.2313587);
   VH_tagOnly_2b1c_Sphericity__3314->SetBinContent(22,0.06200808);
   VH_tagOnly_2b1c_Sphericity__3314->SetBinError(1,75.75134);
   VH_tagOnly_2b1c_Sphericity__3314->SetBinError(2,78.44712);
   VH_tagOnly_2b1c_Sphericity__3314->SetBinError(3,55.37298);
   VH_tagOnly_2b1c_Sphericity__3314->SetBinError(4,42.52406);
   VH_tagOnly_2b1c_Sphericity__3314->SetBinError(5,28.01567);
   VH_tagOnly_2b1c_Sphericity__3314->SetBinError(6,19.75199);
   VH_tagOnly_2b1c_Sphericity__3314->SetBinError(7,14.87603);
   VH_tagOnly_2b1c_Sphericity__3314->SetBinError(8,7.778759);
   VH_tagOnly_2b1c_Sphericity__3314->SetBinError(9,6.190581);
   VH_tagOnly_2b1c_Sphericity__3314->SetBinError(10,4.806034);
   VH_tagOnly_2b1c_Sphericity__3314->SetBinError(11,3.589033);
   VH_tagOnly_2b1c_Sphericity__3314->SetBinError(12,2.92258);
   VH_tagOnly_2b1c_Sphericity__3314->SetBinError(13,3.187352);
   VH_tagOnly_2b1c_Sphericity__3314->SetBinError(14,2.322906);
   VH_tagOnly_2b1c_Sphericity__3314->SetBinError(15,2.317733);
   VH_tagOnly_2b1c_Sphericity__3314->SetBinError(16,1.54909);
   VH_tagOnly_2b1c_Sphericity__3314->SetBinError(17,5.090882);
   VH_tagOnly_2b1c_Sphericity__3314->SetBinError(18,1.220594);
   VH_tagOnly_2b1c_Sphericity__3314->SetBinError(19,0.9618988);
   VH_tagOnly_2b1c_Sphericity__3314->SetBinError(20,0.4816633);
   VH_tagOnly_2b1c_Sphericity__3314->SetBinError(21,0.1174206);
   VH_tagOnly_2b1c_Sphericity__3314->SetBinError(22,0.06200808);
   VH_tagOnly_2b1c_Sphericity__3314->SetEntries(237121);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Sphericity__3314->SetLineColor(ci);
   VH_tagOnly_2b1c_Sphericity__3314->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_2b1c_Sphericity__3314->GetXaxis()->SetRange(1,25);
   VH_tagOnly_2b1c_Sphericity__3314->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3314->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3314->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3314->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_2b1c_Sphericity__3314->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3314->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Sphericity__3314->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Sphericity__3314->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Sphericity__3314->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3314->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3314->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3314->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3314->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZJets_tagOnly_2b1c_17->Modified();
   Sphericity_ZJets_tagOnly_2b1c_17->cd();
   Sphericity_ZJets_tagOnly_2b1c_17->SetSelected(Sphericity_ZJets_tagOnly_2b1c_17);
}
