void Z_dR_tags_17()
{
//=========Macro generated from canvas: Z_dR_tags_17/Z_dR_tags_17
//=========  (Tue Aug 22 09:20:16 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_tags_17 = new TCanvas("Z_dR_tags_17", "Z_dR_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_tags_17->SetHighLightColor(2);
   Z_dR_tags_17->Range(-1.2,-0.003913791,6.8,0.03522412);
   Z_dR_tags_17->SetFillColor(0);
   Z_dR_tags_17->SetBorderMode(0);
   Z_dR_tags_17->SetBorderSize(2);
   Z_dR_tags_17->SetLeftMargin(0.15);
   Z_dR_tags_17->SetFrameBorderMode(0);
   Z_dR_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dR_stack_11 = new TH1D("VbbHcc_tags_Z_dR_stack_11","",30,0,6);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(3,0.01753901);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(4,0.01261355);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(5,0.02981936);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(6,0.01299391);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(7,0.006284637);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(8,0.008541436);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(10,0.003973526);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(11,0.001917841);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(12,0.01256188);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(13,0.002627027);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(14,0.001310475);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(15,0.003574018);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(16,0.002484214);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(17,0.001621248);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(18,0.001610586);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(19,0.001470723);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(20,0.0003846095);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(23,0.001689974);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(25,0.001860547);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(26,0.00344075);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(27,0.001174952);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(28,0.001937955);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(31,0.001291342);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(3,0.005333833);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(4,0.00454047);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(5,0.006966069);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(6,0.004370528);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(7,0.002944362);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(8,0.003865841);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(10,0.002306276);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(11,0.001917841);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(12,0.004497373);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(13,0.001893882);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(14,0.001310475);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(15,0.00257689);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(16,0.001777704);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(17,0.001621248);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(18,0.001610586);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(19,0.001470723);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(20,0.0003846095);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(23,0.001689974);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(25,0.001860547);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(26,0.002438184);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(27,0.001174952);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(28,0.001937955);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(31,0.001291342);
   VbbHcc_tags_Z_dR_stack_11->SetEntries(87);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_stack_11->SetFillColor(ci);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_tags_17->Modified();
   Z_dR_tags_17->cd();
   Z_dR_tags_17->SetSelected(Z_dR_tags_17);
}
