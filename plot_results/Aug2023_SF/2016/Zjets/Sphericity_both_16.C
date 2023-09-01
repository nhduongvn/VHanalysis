#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_both_16()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Fri Sep  1 13:23:44 2023) by ROOT version 6.28/04
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(-0.2,-39.20362,1.133333,352.8326);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLeftMargin(0.15);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity__937 = new TH1D("VbbHcc_both_Sphericity__937","",25,0,1);
   VbbHcc_both_Sphericity__937->SetBinContent(1,286.4235);
   VbbHcc_both_Sphericity__937->SetBinContent(2,298.6942);
   VbbHcc_both_Sphericity__937->SetBinContent(3,225.5836);
   VbbHcc_both_Sphericity__937->SetBinContent(4,184.8345);
   VbbHcc_both_Sphericity__937->SetBinContent(5,140.2097);
   VbbHcc_both_Sphericity__937->SetBinContent(6,122.3654);
   VbbHcc_both_Sphericity__937->SetBinContent(7,80.12032);
   VbbHcc_both_Sphericity__937->SetBinContent(8,67.76198);
   VbbHcc_both_Sphericity__937->SetBinContent(9,65.76856);
   VbbHcc_both_Sphericity__937->SetBinContent(10,57.07173);
   VbbHcc_both_Sphericity__937->SetBinContent(11,55.67561);
   VbbHcc_both_Sphericity__937->SetBinContent(12,44.40445);
   VbbHcc_both_Sphericity__937->SetBinContent(13,37.23631);
   VbbHcc_both_Sphericity__937->SetBinContent(14,31.79111);
   VbbHcc_both_Sphericity__937->SetBinContent(15,20.49759);
   VbbHcc_both_Sphericity__937->SetBinContent(16,15.33659);
   VbbHcc_both_Sphericity__937->SetBinContent(17,14.46398);
   VbbHcc_both_Sphericity__937->SetBinContent(18,10.78849);
   VbbHcc_both_Sphericity__937->SetBinContent(19,8.132631);
   VbbHcc_both_Sphericity__937->SetBinContent(20,4.636951);
   VbbHcc_both_Sphericity__937->SetBinContent(21,1.419149);
   VbbHcc_both_Sphericity__937->SetBinContent(22,0.7885991);
   VbbHcc_both_Sphericity__937->SetBinError(1,11.08092);
   VbbHcc_both_Sphericity__937->SetBinError(2,11.6592);
   VbbHcc_both_Sphericity__937->SetBinError(3,11.53115);
   VbbHcc_both_Sphericity__937->SetBinError(4,10.11495);
   VbbHcc_both_Sphericity__937->SetBinError(5,8.163256);
   VbbHcc_both_Sphericity__937->SetBinError(6,8.400143);
   VbbHcc_both_Sphericity__937->SetBinError(7,4.01297);
   VbbHcc_both_Sphericity__937->SetBinError(8,4.22523);
   VbbHcc_both_Sphericity__937->SetBinError(9,5.19726);
   VbbHcc_both_Sphericity__937->SetBinError(10,5.052251);
   VbbHcc_both_Sphericity__937->SetBinError(11,5.6328);
   VbbHcc_both_Sphericity__937->SetBinError(12,4.441151);
   VbbHcc_both_Sphericity__937->SetBinError(13,4.951427);
   VbbHcc_both_Sphericity__937->SetBinError(14,3.401596);
   VbbHcc_both_Sphericity__937->SetBinError(15,2.444682);
   VbbHcc_both_Sphericity__937->SetBinError(16,2.164413);
   VbbHcc_both_Sphericity__937->SetBinError(17,2.346907);
   VbbHcc_both_Sphericity__937->SetBinError(18,2.255875);
   VbbHcc_both_Sphericity__937->SetBinError(19,2.648574);
   VbbHcc_both_Sphericity__937->SetBinError(20,2.373885);
   VbbHcc_both_Sphericity__937->SetBinError(21,0.5734366);
   VbbHcc_both_Sphericity__937->SetBinError(22,0.3635028);
   VbbHcc_both_Sphericity__937->SetEntries(15448);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Sphericity__937->SetFillColor(ci);
   VbbHcc_both_Sphericity__937->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity__937->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity__937->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__937->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity__937->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__937->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__937->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__937->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__937->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity__937->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__937->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_16->Modified();
   Sphericity_both_16->cd();
   Sphericity_both_16->SetSelected(Sphericity_both_16);
}
