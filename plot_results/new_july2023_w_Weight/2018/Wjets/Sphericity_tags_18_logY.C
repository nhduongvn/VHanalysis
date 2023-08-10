void Sphericity_tags_18_logY()
{
//=========Macro generated from canvas: Sphericity_tags_18/Sphericity_tags_18
//=========  (Thu Aug 10 12:20:17 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_18 = new TCanvas("Sphericity_tags_18", "Sphericity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_18->SetHighLightColor(2);
   Sphericity_tags_18->Range(-0.2,-1.691569,1.133333,2.871939);
   Sphericity_tags_18->SetFillColor(0);
   Sphericity_tags_18->SetBorderMode(0);
   Sphericity_tags_18->SetBorderSize(2);
   Sphericity_tags_18->SetLogy();
   Sphericity_tags_18->SetLeftMargin(0.15);
   Sphericity_tags_18->SetFrameBorderMode(0);
   Sphericity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_5 = new TH1D("VbbHcc_tags_Sphericity_stack_5","",25,0,1);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(1,137.4165);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(2,79.37191);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(3,62.63573);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(4,23.16299);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(5,19.3434);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(6,13.08175);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(7,8.391729);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(8,6.108771);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(9,1.785424);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(10,1.38325);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(11,1.219365);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(12,1.755351);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(13,1.196614);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(14,1.419123);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(15,0.3501833);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(16,0.5860539);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(17,0.4105638);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(19,0.116362);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(1,13.5945);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(2,7.109292);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(3,9.457155);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(4,3.161781);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(5,3.030878);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(6,4.172588);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(7,2.459776);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(8,1.198905);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(9,0.4807242);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(10,0.4984052);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(11,0.4788455);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(12,0.648548);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(13,0.4176073);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(14,0.6082778);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(15,0.1911128);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(16,0.322977);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(17,0.3034534);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(19,0.116362);
   VbbHcc_tags_Sphericity_stack_5->SetEntries(2375);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Sphericity_stack_5->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_5->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_18->Modified();
   Sphericity_tags_18->cd();
   Sphericity_tags_18->SetSelected(Sphericity_tags_18);
}
