void Sphericity_tags_18_logY()
{
//=========Macro generated from canvas: Sphericity_tags_18/Sphericity_tags_18
//=========  (Tue Aug 22 09:16:28 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_18 = new TCanvas("Sphericity_tags_18", "Sphericity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_18->SetHighLightColor(2);
   Sphericity_tags_18->Range(-0.2,-1.952283,1.133333,3.96543);
   Sphericity_tags_18->SetFillColor(0);
   Sphericity_tags_18->SetBorderMode(0);
   Sphericity_tags_18->SetBorderSize(2);
   Sphericity_tags_18->SetLogy();
   Sphericity_tags_18->SetLeftMargin(0.15);
   Sphericity_tags_18->SetFrameBorderMode(0);
   Sphericity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_4 = new TH1D("VbbHcc_tags_Sphericity_stack_4","",25,0,1);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(1,1247.7);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(2,931.048);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(3,535.5255);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(4,322.0193);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(5,189.4293);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(6,99.50313);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(7,61.00016);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(8,30.03924);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(9,21.9608);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(10,13.76645);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(11,11.46464);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(12,9.688351);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(13,7.061329);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(14,6.381788);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(15,4.389752);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(16,2.572436);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(17,2.322474);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(18,0.5842372);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(19,0.8621515);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(20,0.3198679);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(21,0.08720034);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(1,32.27911);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(2,24.97128);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(3,17.6672);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(4,13.2389);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(5,10.78458);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(6,6.873953);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(7,6.088163);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(8,2.796253);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(9,2.563879);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(10,1.711171);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(11,1.84716);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(12,1.62546);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(13,1.193735);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(14,1.322634);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(15,0.9668903);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(16,0.6821422);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(17,0.7277006);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(18,0.2630024);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(19,0.5855637);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(20,0.1810532);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(21,0.08720034);
   VbbHcc_tags_Sphericity_stack_4->SetEntries(17726);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Sphericity_stack_4->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_4->Draw("HIST");
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
