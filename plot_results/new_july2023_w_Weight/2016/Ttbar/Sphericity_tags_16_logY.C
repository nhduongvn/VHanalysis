void Sphericity_tags_16_logY()
{
//=========Macro generated from canvas: Sphericity_tags_16/Sphericity_tags_16
//=========  (Thu Aug 10 10:41:09 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_16 = new TCanvas("Sphericity_tags_16", "Sphericity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_16->SetHighLightColor(2);
   Sphericity_tags_16->Range(-0.2,-2.094069,1.133333,4.621044);
   Sphericity_tags_16->SetFillColor(0);
   Sphericity_tags_16->SetBorderMode(0);
   Sphericity_tags_16->SetBorderSize(2);
   Sphericity_tags_16->SetLogy();
   Sphericity_tags_16->SetLeftMargin(0.15);
   Sphericity_tags_16->SetFrameBorderMode(0);
   Sphericity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_3 = new TH1D("VbbHcc_tags_Sphericity_stack_3","",25,0,1);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(1,4698.77);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(2,3988.475);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(3,2290.81);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(4,1317.309);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(5,771.228);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(6,445.9446);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(7,264.4417);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(8,164.1415);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(9,107.5524);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(10,75.52008);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(11,54.35926);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(12,36.00753);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(13,26.48478);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(14,20.42475);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(15,15.22733);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(16,12.29904);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(17,8.795346);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(18,5.710207);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(19,2.714583);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(20,1.300111);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(21,0.5130947);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(22,0.07559134);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(1,18.06589);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(2,16.68413);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(3,12.6506);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(4,9.584722);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(5,7.343189);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(6,5.57882);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(7,4.26132);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(8,3.363839);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(9,2.712097);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(10,2.28401);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(11,1.948067);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(12,1.575692);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(13,1.343724);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(14,1.18762);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(15,1.022127);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(16,0.9094009);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(17,0.7774022);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(18,0.6304303);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(19,0.4259498);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(20,0.2921422);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(21,0.1960131);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(22,0.07559134);
   VbbHcc_tags_Sphericity_stack_3->SetEntries(221451);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Sphericity_stack_3->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_3->Draw("HIST");
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
