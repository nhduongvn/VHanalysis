#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_SingleTop_tagOnly_2b1c_16_logY()
{
//=========Macro generated from canvas: Sphericity_SingleTop_tagOnly_2b1c_16/Sphericity_SingleTop_tagOnly_2b1c_16
//=========  (Thu May 23 20:49:13 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_SingleTop_tagOnly_2b1c_16 = new TCanvas("Sphericity_SingleTop_tagOnly_2b1c_16", "Sphericity_SingleTop_tagOnly_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_SingleTop_tagOnly_2b1c_16->SetHighLightColor(2);
   Sphericity_SingleTop_tagOnly_2b1c_16->Range(-0.2,-1.811199,1.133333,5.344665);
   Sphericity_SingleTop_tagOnly_2b1c_16->SetFillColor(0);
   Sphericity_SingleTop_tagOnly_2b1c_16->SetFillStyle(4000);
   Sphericity_SingleTop_tagOnly_2b1c_16->SetBorderMode(0);
   Sphericity_SingleTop_tagOnly_2b1c_16->SetBorderSize(2);
   Sphericity_SingleTop_tagOnly_2b1c_16->SetLogy();
   Sphericity_SingleTop_tagOnly_2b1c_16->SetLeftMargin(0.15);
   Sphericity_SingleTop_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_SingleTop_tagOnly_2b1c_16->SetFrameBorderMode(0);
   Sphericity_SingleTop_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_SingleTop_tagOnly_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Sphericity__3319 = new TH1D("VH_tagOnly_2b1c_Sphericity__3319","",25,0,1);
   VH_tagOnly_2b1c_Sphericity__3319->SetBinContent(1,22466.22);
   VH_tagOnly_2b1c_Sphericity__3319->SetBinContent(2,20327.5);
   VH_tagOnly_2b1c_Sphericity__3319->SetBinContent(3,11682.29);
   VH_tagOnly_2b1c_Sphericity__3319->SetBinContent(4,6603.588);
   VH_tagOnly_2b1c_Sphericity__3319->SetBinContent(5,3574.831);
   VH_tagOnly_2b1c_Sphericity__3319->SetBinContent(6,1872.209);
   VH_tagOnly_2b1c_Sphericity__3319->SetBinContent(7,910.1668);
   VH_tagOnly_2b1c_Sphericity__3319->SetBinContent(8,494.829);
   VH_tagOnly_2b1c_Sphericity__3319->SetBinContent(9,312.1272);
   VH_tagOnly_2b1c_Sphericity__3319->SetBinContent(10,203.9683);
   VH_tagOnly_2b1c_Sphericity__3319->SetBinContent(11,142.1349);
   VH_tagOnly_2b1c_Sphericity__3319->SetBinContent(12,94.45778);
   VH_tagOnly_2b1c_Sphericity__3319->SetBinContent(13,75.13454);
   VH_tagOnly_2b1c_Sphericity__3319->SetBinContent(14,57.18823);
   VH_tagOnly_2b1c_Sphericity__3319->SetBinContent(15,43.36588);
   VH_tagOnly_2b1c_Sphericity__3319->SetBinContent(16,28.59709);
   VH_tagOnly_2b1c_Sphericity__3319->SetBinContent(17,20.31865);
   VH_tagOnly_2b1c_Sphericity__3319->SetBinContent(18,14.61053);
   VH_tagOnly_2b1c_Sphericity__3319->SetBinContent(19,10.34167);
   VH_tagOnly_2b1c_Sphericity__3319->SetBinContent(20,2.362609);
   VH_tagOnly_2b1c_Sphericity__3319->SetBinContent(21,2.12688);
   VH_tagOnly_2b1c_Sphericity__3319->SetBinContent(22,0.1604789);
   VH_tagOnly_2b1c_Sphericity__3319->SetBinContent(23,0.2521655);
   VH_tagOnly_2b1c_Sphericity__3319->SetBinError(1,52.4486);
   VH_tagOnly_2b1c_Sphericity__3319->SetBinError(2,48.91367);
   VH_tagOnly_2b1c_Sphericity__3319->SetBinError(3,37.5125);
   VH_tagOnly_2b1c_Sphericity__3319->SetBinError(4,28.86443);
   VH_tagOnly_2b1c_Sphericity__3319->SetBinError(5,21.66122);
   VH_tagOnly_2b1c_Sphericity__3319->SetBinError(6,16.02224);
   VH_tagOnly_2b1c_Sphericity__3319->SetBinError(7,11.18443);
   VH_tagOnly_2b1c_Sphericity__3319->SetBinError(8,8.262444);
   VH_tagOnly_2b1c_Sphericity__3319->SetBinError(9,6.705212);
   VH_tagOnly_2b1c_Sphericity__3319->SetBinError(10,5.406557);
   VH_tagOnly_2b1c_Sphericity__3319->SetBinError(11,4.569839);
   VH_tagOnly_2b1c_Sphericity__3319->SetBinError(12,3.649452);
   VH_tagOnly_2b1c_Sphericity__3319->SetBinError(13,3.260042);
   VH_tagOnly_2b1c_Sphericity__3319->SetBinError(14,2.942389);
   VH_tagOnly_2b1c_Sphericity__3319->SetBinError(15,2.484588);
   VH_tagOnly_2b1c_Sphericity__3319->SetBinError(16,1.974967);
   VH_tagOnly_2b1c_Sphericity__3319->SetBinError(17,1.673888);
   VH_tagOnly_2b1c_Sphericity__3319->SetBinError(18,1.381617);
   VH_tagOnly_2b1c_Sphericity__3319->SetBinError(19,1.245392);
   VH_tagOnly_2b1c_Sphericity__3319->SetBinError(20,0.5347025);
   VH_tagOnly_2b1c_Sphericity__3319->SetBinError(21,0.6520499);
   VH_tagOnly_2b1c_Sphericity__3319->SetBinError(22,0.07443078);
   VH_tagOnly_2b1c_Sphericity__3319->SetBinError(23,0.2186029);
   VH_tagOnly_2b1c_Sphericity__3319->SetEntries(1232100);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Sphericity__3319->SetLineColor(ci);
   VH_tagOnly_2b1c_Sphericity__3319->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_2b1c_Sphericity__3319->GetXaxis()->SetRange(1,25);
   VH_tagOnly_2b1c_Sphericity__3319->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3319->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3319->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3319->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_2b1c_Sphericity__3319->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3319->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Sphericity__3319->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Sphericity__3319->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Sphericity__3319->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3319->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3319->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3319->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3319->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_SingleTop_tagOnly_2b1c_16->Modified();
   Sphericity_SingleTop_tagOnly_2b1c_16->cd();
   Sphericity_SingleTop_tagOnly_2b1c_16->SetSelected(Sphericity_SingleTop_tagOnly_2b1c_16);
}
