void Aplanarity_both_18()
{
//=========Macro generated from canvas: Aplanarity_both_18/Aplanarity_both_18
//=========  (Tue Aug 22 09:23:18 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_18 = new TCanvas("Aplanarity_both_18", "Aplanarity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_18->SetHighLightColor(2);
   Aplanarity_both_18->Range(-0.2,-28.06156,1.133333,252.5541);
   Aplanarity_both_18->SetFillColor(0);
   Aplanarity_both_18->SetBorderMode(0);
   Aplanarity_both_18->SetBorderSize(2);
   Aplanarity_both_18->SetLeftMargin(0.15);
   Aplanarity_both_18->SetFrameBorderMode(0);
   Aplanarity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_5 = new TH1D("VbbHcc_both_Aplanarity_stack_5","",50,0,1);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(1,213.8024);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(2,70.51054);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(3,27.13798);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(4,16.58786);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(5,9.535265);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(6,2.508427);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(7,3.940671);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(8,1.68294);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(9,0.474643);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(10,1.095567);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(11,0.4687398);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(12,2.096559);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(13,0.204541);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(14,0.3803888);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(15,0.372236);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(1,14.59101);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(2,8.407591);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(3,5.138766);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(4,2.832318);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(5,3.545322);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(6,0.6799315);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(7,2.27496);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(8,0.6087876);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(9,0.2516532);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(10,0.5345436);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(11,0.3217151);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(12,2.095509);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(13,0.1736176);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(14,0.2201744);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(15,0.263211);
   VbbHcc_both_Aplanarity_stack_5->SetEntries(2210);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Aplanarity_stack_5->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_5->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_18->Modified();
   Aplanarity_both_18->cd();
   Aplanarity_both_18->SetSelected(Aplanarity_both_18);
}
