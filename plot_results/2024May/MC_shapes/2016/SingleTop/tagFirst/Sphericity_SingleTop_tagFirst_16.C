#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_SingleTop_tagFirst_16()
{
//=========Macro generated from canvas: Sphericity_SingleTop_tagFirst_16/Sphericity_SingleTop_tagFirst_16
//=========  (Fri May 24 12:42:11 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_SingleTop_tagFirst_16 = new TCanvas("Sphericity_SingleTop_tagFirst_16", "Sphericity_SingleTop_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_SingleTop_tagFirst_16->SetHighLightColor(2);
   Sphericity_SingleTop_tagFirst_16->Range(-0.2,-1080.053,1.133333,9720.475);
   Sphericity_SingleTop_tagFirst_16->SetFillColor(0);
   Sphericity_SingleTop_tagFirst_16->SetFillStyle(4000);
   Sphericity_SingleTop_tagFirst_16->SetBorderMode(0);
   Sphericity_SingleTop_tagFirst_16->SetBorderSize(2);
   Sphericity_SingleTop_tagFirst_16->SetLeftMargin(0.15);
   Sphericity_SingleTop_tagFirst_16->SetFrameFillStyle(1000);
   Sphericity_SingleTop_tagFirst_16->SetFrameBorderMode(0);
   Sphericity_SingleTop_tagFirst_16->SetFrameFillStyle(1000);
   Sphericity_SingleTop_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Sphericity__439 = new TH1D("VH_tagFirst_Sphericity__439","",25,0,1);
   VH_tagFirst_Sphericity__439->SetBinContent(1,8228.974);
   VH_tagFirst_Sphericity__439->SetBinContent(2,7054.409);
   VH_tagFirst_Sphericity__439->SetBinContent(3,4117.225);
   VH_tagFirst_Sphericity__439->SetBinContent(4,2363.621);
   VH_tagFirst_Sphericity__439->SetBinContent(5,1330.757);
   VH_tagFirst_Sphericity__439->SetBinContent(6,729.3282);
   VH_tagFirst_Sphericity__439->SetBinContent(7,370.5456);
   VH_tagFirst_Sphericity__439->SetBinContent(8,213.6665);
   VH_tagFirst_Sphericity__439->SetBinContent(9,142.568);
   VH_tagFirst_Sphericity__439->SetBinContent(10,94.96912);
   VH_tagFirst_Sphericity__439->SetBinContent(11,62.5151);
   VH_tagFirst_Sphericity__439->SetBinContent(12,45.11068);
   VH_tagFirst_Sphericity__439->SetBinContent(13,36.20584);
   VH_tagFirst_Sphericity__439->SetBinContent(14,26.67455);
   VH_tagFirst_Sphericity__439->SetBinContent(15,21.9311);
   VH_tagFirst_Sphericity__439->SetBinContent(16,14.56547);
   VH_tagFirst_Sphericity__439->SetBinContent(17,11.09219);
   VH_tagFirst_Sphericity__439->SetBinContent(18,6.693745);
   VH_tagFirst_Sphericity__439->SetBinContent(19,5.233093);
   VH_tagFirst_Sphericity__439->SetBinContent(20,1.43259);
   VH_tagFirst_Sphericity__439->SetBinContent(21,1.025842);
   VH_tagFirst_Sphericity__439->SetBinContent(22,0.06819442);
   VH_tagFirst_Sphericity__439->SetBinContent(23,0.2521655);
   VH_tagFirst_Sphericity__439->SetBinError(1,33.58353);
   VH_tagFirst_Sphericity__439->SetBinError(2,30.55535);
   VH_tagFirst_Sphericity__439->SetBinError(3,23.62517);
   VH_tagFirst_Sphericity__439->SetBinError(4,18.2582);
   VH_tagFirst_Sphericity__439->SetBinError(5,13.91609);
   VH_tagFirst_Sphericity__439->SetBinError(6,10.44664);
   VH_tagFirst_Sphericity__439->SetBinError(7,7.485995);
   VH_tagFirst_Sphericity__439->SetBinError(8,5.670369);
   VH_tagFirst_Sphericity__439->SetBinError(9,4.782817);
   VH_tagFirst_Sphericity__439->SetBinError(10,3.842901);
   VH_tagFirst_Sphericity__439->SetBinError(11,3.128067);
   VH_tagFirst_Sphericity__439->SetBinError(12,2.662976);
   VH_tagFirst_Sphericity__439->SetBinError(13,2.395746);
   VH_tagFirst_Sphericity__439->SetBinError(14,2.069173);
   VH_tagFirst_Sphericity__439->SetBinError(15,1.839367);
   VH_tagFirst_Sphericity__439->SetBinError(16,1.571694);
   VH_tagFirst_Sphericity__439->SetBinError(17,1.361502);
   VH_tagFirst_Sphericity__439->SetBinError(18,0.9257248);
   VH_tagFirst_Sphericity__439->SetBinError(19,0.9351714);
   VH_tagFirst_Sphericity__439->SetBinError(20,0.4772361);
   VH_tagFirst_Sphericity__439->SetBinError(21,0.4729172);
   VH_tagFirst_Sphericity__439->SetBinError(22,0.04833962);
   VH_tagFirst_Sphericity__439->SetBinError(23,0.2186029);
   VH_tagFirst_Sphericity__439->SetEntries(401408);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Sphericity__439->SetLineColor(ci);
   VH_tagFirst_Sphericity__439->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_Sphericity__439->GetXaxis()->SetRange(1,25);
   VH_tagFirst_Sphericity__439->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__439->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__439->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__439->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_Sphericity__439->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__439->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Sphericity__439->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Sphericity__439->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Sphericity__439->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__439->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__439->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__439->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__439->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_SingleTop_tagFirst_16->Modified();
   Sphericity_SingleTop_tagFirst_16->cd();
   Sphericity_SingleTop_tagFirst_16->SetSelected(Sphericity_SingleTop_tagFirst_16);
}
