#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZHbb_DHZfirst_2b1c_17()
{
//=========Macro generated from canvas: Sphericity_ZHbb_DHZfirst_2b1c_17/Sphericity_ZHbb_DHZfirst_2b1c_17
//=========  (Fri May 24 12:43:07 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZHbb_DHZfirst_2b1c_17 = new TCanvas("Sphericity_ZHbb_DHZfirst_2b1c_17", "Sphericity_ZHbb_DHZfirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZHbb_DHZfirst_2b1c_17->SetHighLightColor(2);
   Sphericity_ZHbb_DHZfirst_2b1c_17->Range(-0.2,-2.936217,1.133333,26.42595);
   Sphericity_ZHbb_DHZfirst_2b1c_17->SetFillColor(0);
   Sphericity_ZHbb_DHZfirst_2b1c_17->SetFillStyle(4000);
   Sphericity_ZHbb_DHZfirst_2b1c_17->SetBorderMode(0);
   Sphericity_ZHbb_DHZfirst_2b1c_17->SetBorderSize(2);
   Sphericity_ZHbb_DHZfirst_2b1c_17->SetLeftMargin(0.15);
   Sphericity_ZHbb_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_ZHbb_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   Sphericity_ZHbb_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_ZHbb_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Sphericity__4025 = new TH1D("VH_DHZfirst_2b1c_Sphericity__4025","",25,0,1);
   VH_DHZfirst_2b1c_Sphericity__4025->SetBinContent(1,22.37118);
   VH_DHZfirst_2b1c_Sphericity__4025->SetBinContent(2,20.74709);
   VH_DHZfirst_2b1c_Sphericity__4025->SetBinContent(3,11.87182);
   VH_DHZfirst_2b1c_Sphericity__4025->SetBinContent(4,7.781811);
   VH_DHZfirst_2b1c_Sphericity__4025->SetBinContent(5,4.891825);
   VH_DHZfirst_2b1c_Sphericity__4025->SetBinContent(6,2.319467);
   VH_DHZfirst_2b1c_Sphericity__4025->SetBinContent(7,0.6085647);
   VH_DHZfirst_2b1c_Sphericity__4025->SetBinContent(8,0.1779982);
   VH_DHZfirst_2b1c_Sphericity__4025->SetBinContent(9,0.06922214);
   VH_DHZfirst_2b1c_Sphericity__4025->SetBinContent(10,0.02129537);
   VH_DHZfirst_2b1c_Sphericity__4025->SetBinContent(11,0.01192297);
   VH_DHZfirst_2b1c_Sphericity__4025->SetBinContent(12,0.008136156);
   VH_DHZfirst_2b1c_Sphericity__4025->SetBinContent(13,0.006744861);
   VH_DHZfirst_2b1c_Sphericity__4025->SetBinContent(14,0.003229127);
   VH_DHZfirst_2b1c_Sphericity__4025->SetBinContent(15,0.002112133);
   VH_DHZfirst_2b1c_Sphericity__4025->SetBinContent(16,0.001129525);
   VH_DHZfirst_2b1c_Sphericity__4025->SetBinContent(17,0.0006788665);
   VH_DHZfirst_2b1c_Sphericity__4025->SetBinContent(18,0.0007192324);
   VH_DHZfirst_2b1c_Sphericity__4025->SetBinContent(19,0.0002214953);
   VH_DHZfirst_2b1c_Sphericity__4025->SetBinError(1,0.1811605);
   VH_DHZfirst_2b1c_Sphericity__4025->SetBinError(2,0.1715718);
   VH_DHZfirst_2b1c_Sphericity__4025->SetBinError(3,0.1301033);
   VH_DHZfirst_2b1c_Sphericity__4025->SetBinError(4,0.1053503);
   VH_DHZfirst_2b1c_Sphericity__4025->SetBinError(5,0.08759291);
   VH_DHZfirst_2b1c_Sphericity__4025->SetBinError(6,0.06313615);
   VH_DHZfirst_2b1c_Sphericity__4025->SetBinError(7,0.03051214);
   VH_DHZfirst_2b1c_Sphericity__4025->SetBinError(8,0.01634917);
   VH_DHZfirst_2b1c_Sphericity__4025->SetBinError(9,0.009979918);
   VH_DHZfirst_2b1c_Sphericity__4025->SetBinError(10,0.003986576);
   VH_DHZfirst_2b1c_Sphericity__4025->SetBinError(11,0.002908044);
   VH_DHZfirst_2b1c_Sphericity__4025->SetBinError(12,0.002314841);
   VH_DHZfirst_2b1c_Sphericity__4025->SetBinError(13,0.003269548);
   VH_DHZfirst_2b1c_Sphericity__4025->SetBinError(14,0.001766877);
   VH_DHZfirst_2b1c_Sphericity__4025->SetBinError(15,0.001493523);
   VH_DHZfirst_2b1c_Sphericity__4025->SetBinError(16,0.0005889337);
   VH_DHZfirst_2b1c_Sphericity__4025->SetBinError(17,0.0004914545);
   VH_DHZfirst_2b1c_Sphericity__4025->SetBinError(18,0.0004211168);
   VH_DHZfirst_2b1c_Sphericity__4025->SetBinError(19,0.0002214953);
   VH_DHZfirst_2b1c_Sphericity__4025->SetEntries(114553);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Sphericity__4025->SetLineColor(ci);
   VH_DHZfirst_2b1c_Sphericity__4025->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_2b1c_Sphericity__4025->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_2b1c_Sphericity__4025->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4025->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4025->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4025->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_2b1c_Sphericity__4025->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4025->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Sphericity__4025->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Sphericity__4025->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Sphericity__4025->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4025->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4025->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4025->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4025->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZHbb_DHZfirst_2b1c_17->Modified();
   Sphericity_ZHbb_DHZfirst_2b1c_17->cd();
   Sphericity_ZHbb_DHZfirst_2b1c_17->SetSelected(Sphericity_ZHbb_DHZfirst_2b1c_17);
}
