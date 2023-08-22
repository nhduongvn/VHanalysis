void Z_dR_Bj0_tags_17_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_tags_17/Z_dR_Bj0_tags_17
//=========  (Tue Aug 22 09:16:22 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_tags_17 = new TCanvas("Z_dR_Bj0_tags_17", "Z_dR_Bj0_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_tags_17->SetHighLightColor(2);
   Z_dR_Bj0_tags_17->Range(-1.2,-1.148765,6.8,1.363663);
   Z_dR_Bj0_tags_17->SetFillColor(0);
   Z_dR_Bj0_tags_17->SetBorderMode(0);
   Z_dR_Bj0_tags_17->SetBorderSize(2);
   Z_dR_Bj0_tags_17->SetLogy();
   Z_dR_Bj0_tags_17->SetLeftMargin(0.15);
   Z_dR_Bj0_tags_17->SetFrameBorderMode(0);
   Z_dR_Bj0_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_8 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(1,2.27903);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(2,6.837091);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(3,6.33064);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(4,5.570963);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(5,3.038707);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(6,3.038707);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(7,1.519354);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(8,3.291933);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(9,2.785482);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(10,2.532256);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(11,1.772579);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(12,1.772579);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(13,0.2532256);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(14,1.266128);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(15,0.5064512);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(16,0.7596768);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(17,0.5064512);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(19,0.5064512);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(23,0.2532256);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(25,0.2532256);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(1,0.7596768);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(2,1.315799);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(3,1.266128);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(4,1.187733);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(5,0.8771992);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(6,0.8771992);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(7,0.6202735);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(8,0.9130179);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(9,0.8398543);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(10,0.8007697);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(11,0.669972);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(12,0.669972);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(13,0.2532256);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(14,0.5662297);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(15,0.3581151);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(16,0.4385996);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(17,0.3581151);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(19,0.3581151);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(23,0.2532256);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(25,0.2532256);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetEntries(178);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetFillColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_tags_17->Modified();
   Z_dR_Bj0_tags_17->cd();
   Z_dR_Bj0_tags_17->SetSelected(Z_dR_Bj0_tags_17);
}
