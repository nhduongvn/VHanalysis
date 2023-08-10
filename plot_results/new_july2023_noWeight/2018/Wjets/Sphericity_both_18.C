void Sphericity_both_18()
{
//=========Macro generated from canvas: Sphericity_both_18/Sphericity_both_18
//=========  (Thu Aug 10 12:29:33 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_18 = new TCanvas("Sphericity_both_18", "Sphericity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_18->SetHighLightColor(2);
   Sphericity_both_18->Range(-0.2,-8.582256,1.133333,77.2403);
   Sphericity_both_18->SetFillColor(0);
   Sphericity_both_18->SetBorderMode(0);
   Sphericity_both_18->SetBorderSize(2);
   Sphericity_both_18->SetLeftMargin(0.15);
   Sphericity_both_18->SetFrameBorderMode(0);
   Sphericity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_5 = new TH1D("VbbHcc_both_Sphericity_stack_5","",25,0,1);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(1,54.26217);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(2,65.38861);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(3,53.59343);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(4,27.01311);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(5,25.58604);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(6,26.77257);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(7,18.93861);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(8,16.23054);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(9,9.487493);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(10,6.80431);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(11,10.17669);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(12,7.581223);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(13,3.962175);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(14,3.171911);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(15,5.649627);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(16,2.480223);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(17,4.355181);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(18,3.870917);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(19,0.4132988);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(20,0.386066);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(21,0.01224321);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(22,0.1265664);
   VbbHcc_both_Sphericity_stack_5->SetBinError(1,5.129255);
   VbbHcc_both_Sphericity_stack_5->SetBinError(2,12.34185);
   VbbHcc_both_Sphericity_stack_5->SetBinError(3,7.042565);
   VbbHcc_both_Sphericity_stack_5->SetBinError(4,3.33171);
   VbbHcc_both_Sphericity_stack_5->SetBinError(5,4.515032);
   VbbHcc_both_Sphericity_stack_5->SetBinError(6,4.594698);
   VbbHcc_both_Sphericity_stack_5->SetBinError(7,3.918934);
   VbbHcc_both_Sphericity_stack_5->SetBinError(8,2.651887);
   VbbHcc_both_Sphericity_stack_5->SetBinError(9,2.398531);
   VbbHcc_both_Sphericity_stack_5->SetBinError(10,1.035208);
   VbbHcc_both_Sphericity_stack_5->SetBinError(11,2.477052);
   VbbHcc_both_Sphericity_stack_5->SetBinError(12,2.305991);
   VbbHcc_both_Sphericity_stack_5->SetBinError(13,0.819129);
   VbbHcc_both_Sphericity_stack_5->SetBinError(14,0.7654374);
   VbbHcc_both_Sphericity_stack_5->SetBinError(15,2.21798);
   VbbHcc_both_Sphericity_stack_5->SetBinError(16,0.5678039);
   VbbHcc_both_Sphericity_stack_5->SetBinError(17,2.161897);
   VbbHcc_both_Sphericity_stack_5->SetBinError(18,2.164654);
   VbbHcc_both_Sphericity_stack_5->SetBinError(19,0.2892428);
   VbbHcc_both_Sphericity_stack_5->SetBinError(20,0.2887198);
   VbbHcc_both_Sphericity_stack_5->SetBinError(21,0.01224321);
   VbbHcc_both_Sphericity_stack_5->SetBinError(22,0.1265664);
   VbbHcc_both_Sphericity_stack_5->SetEntries(2575);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Sphericity_stack_5->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_5->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_18->Modified();
   Sphericity_both_18->cd();
   Sphericity_both_18->SetSelected(Sphericity_both_18);
}
