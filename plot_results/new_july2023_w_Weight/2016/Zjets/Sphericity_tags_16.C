void Sphericity_tags_16()
{
//=========Macro generated from canvas: Sphericity_tags_16/Sphericity_tags_16
//=========  (Thu Aug 10 12:23:34 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_16 = new TCanvas("Sphericity_tags_16", "Sphericity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_16->SetHighLightColor(2);
   Sphericity_tags_16->Range(-0.2,-94.78467,1.133333,853.062);
   Sphericity_tags_16->SetFillColor(0);
   Sphericity_tags_16->SetBorderMode(0);
   Sphericity_tags_16->SetBorderSize(2);
   Sphericity_tags_16->SetLeftMargin(0.15);
   Sphericity_tags_16->SetFrameBorderMode(0);
   Sphericity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_4 = new TH1D("VbbHcc_tags_Sphericity_stack_4","",25,0,1);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(1,722.1689);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(2,594.3846);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(3,348.5106);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(4,225.2151);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(5,97.92515);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(6,58.47949);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(7,25.74803);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(8,15.91084);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(9,12.166);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(10,11.76567);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(11,5.324681);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(12,4.314857);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(13,2.068962);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(14,2.377255);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(15,2.564052);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(16,2.083792);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(17,2.078809);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(18,0.6586578);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(19,0.3410771);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(20,0.07121139);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(21,0.0727655);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(1,20.46114);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(2,20.39036);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(3,16.31824);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(4,14.05192);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(5,4.985832);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(6,5.191266);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(7,1.988989);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(8,1.414402);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(9,1.224186);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(10,2.825337);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(11,0.831078);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(12,0.8726321);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(13,0.3879583);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(14,0.5540987);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(15,0.5714803);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(16,0.4930372);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(17,0.4769472);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(18,0.2222803);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(19,0.1533376);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(20,0.07121139);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(21,0.0727655);
   VbbHcc_tags_Sphericity_stack_4->SetEntries(14977);

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
