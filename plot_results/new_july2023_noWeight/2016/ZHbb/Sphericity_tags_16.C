void Sphericity_tags_16()
{
//=========Macro generated from canvas: Sphericity_tags_16/Sphericity_tags_16
//=========  (Thu Aug  3 12:23:32 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_16 = new TCanvas("Sphericity_tags_16", "Sphericity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_16->SetHighLightColor(2);
   Sphericity_tags_16->Range(-0.2,-1.62316,1.133333,14.60844);
   Sphericity_tags_16->SetFillColor(0);
   Sphericity_tags_16->SetBorderMode(0);
   Sphericity_tags_16->SetBorderSize(2);
   Sphericity_tags_16->SetLeftMargin(0.15);
   Sphericity_tags_16->SetFrameBorderMode(0);
   Sphericity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_9 = new TH1D("VbbHcc_tags_Sphericity_stack_9","",25,0,1);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(1,12.36693);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(2,11.11801);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(3,6.199266);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(4,4.13834);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(5,2.750649);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(6,1.378073);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(7,0.4987441);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(8,0.2170842);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(9,0.1538825);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(10,0.1167858);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(11,0.06182779);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(12,0.04396642);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(13,0.03847062);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(14,0.02610506);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(15,0.02610506);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(16,0.01511346);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(17,0.01099161);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(18,0.01099161);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(19,0.002747902);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(1,0.1303517);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(2,0.1235945);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(3,0.09229023);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(4,0.07540474);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(5,0.06147566);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(6,0.04351326);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(7,0.02617728);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(8,0.01727029);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(9,0.01454053);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(10,0.0126672);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(11,0.009216742);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(12,0.007772239);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(13,0.007270264);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(14,0.005988913);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(15,0.005988913);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(16,0.004556879);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(17,0.00388612);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(18,0.00388612);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(19,0.00194306);
   VbbHcc_tags_Sphericity_stack_9->SetEntries(28512);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Sphericity_stack_9->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_9->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_16->Modified();
   Sphericity_tags_16->cd();
   Sphericity_tags_16->SetSelected(Sphericity_tags_16);
}
