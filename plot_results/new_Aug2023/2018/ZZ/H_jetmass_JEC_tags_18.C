void H_jetmass_JEC_tags_18()
{
//=========Macro generated from canvas: H_jetmass_JEC_tags_18/H_jetmass_JEC_tags_18
//=========  (Tue Aug 22 09:20:58 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_JEC_tags_18 = new TCanvas("H_jetmass_JEC_tags_18", "H_jetmass_JEC_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_tags_18->SetHighLightColor(2);
   H_jetmass_JEC_tags_18->Range(-60,-1.696698,340,15.27028);
   H_jetmass_JEC_tags_18->SetFillColor(0);
   H_jetmass_JEC_tags_18->SetBorderMode(0);
   H_jetmass_JEC_tags_18->SetBorderSize(2);
   H_jetmass_JEC_tags_18->SetLeftMargin(0.15);
   H_jetmass_JEC_tags_18->SetFrameBorderMode(0);
   H_jetmass_JEC_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_JEC_stack_8 = new TH1D("VbbHcc_tags_H_jetmass_JEC_stack_8","",150,0,300);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(3,0.5891495);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(4,7.357518);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(5,12.92722);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(6,12.8882);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(7,9.242618);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(8,7.044086);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(9,6.707174);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(10,3.252736);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(11,2.484633);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(12,1.434795);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(13,0.6617488);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(14,0.6293036);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(15,0.6429148);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(16,0.1757953);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(17,0.2114747);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(18,0.2743643);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(19,0.2663578);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(21,0.2243617);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(25,0.357876);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(27,0.27247);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(30,0.2561662);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(3,0.4176577);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(4,1.556872);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(5,2.07934);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(6,2.023354);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(7,1.636727);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(8,1.462194);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(9,1.439096);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(10,0.9512894);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(11,0.8840509);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(12,0.601001);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(13,0.4707504);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(14,0.4511654);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(15,0.4587359);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(16,0.1757953);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(17,0.2114747);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(18,0.2743643);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(19,0.2663578);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(21,0.2243617);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(25,0.357876);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(27,0.27247);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(30,0.2561662);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetEntries(230);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetFillColor(ci);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_8->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_JEC_tags_18->Modified();
   H_jetmass_JEC_tags_18->cd();
   H_jetmass_JEC_tags_18->SetSelected(H_jetmass_JEC_tags_18);
}
