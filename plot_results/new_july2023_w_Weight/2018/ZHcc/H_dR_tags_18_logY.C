void H_dR_tags_18_logY()
{
//=========Macro generated from canvas: H_dR_tags_18/H_dR_tags_18
//=========  (Thu Aug 10 12:20:04 2023) by ROOT version 6.14/09
   TCanvas *H_dR_tags_18 = new TCanvas("H_dR_tags_18", "H_dR_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_tags_18->SetHighLightColor(2);
   H_dR_tags_18->Range(-1.2,-3.048758,6.8,-1.108031);
   H_dR_tags_18->SetFillColor(0);
   H_dR_tags_18->SetBorderMode(0);
   H_dR_tags_18->SetBorderSize(2);
   H_dR_tags_18->SetLogy();
   H_dR_tags_18->SetLeftMargin(0.15);
   H_dR_tags_18->SetFrameBorderMode(0);
   H_dR_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dR_stack_11 = new TH1D("VbbHcc_tags_H_dR_stack_11","",30,0,6);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(3,0.01437819);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(4,0.009601941);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(5,0.005591907);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(6,0.02632373);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(7,0.01061837);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(8,0.007746397);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(9,0.008511906);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(10,0.01078935);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(11,0.01108148);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(12,0.005717142);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(13,0.003280315);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(14,0.002811088);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(15,0.005407963);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(17,0.008629064);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(19,0.009861468);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(21,0.002811088);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(22,0.004767341);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(23,0.003142173);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(24,0.01225067);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(25,0.005299443);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(26,0.005605851);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(29,0.005504087);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(30,0.002794763);
   VbbHcc_tags_H_dR_stack_11->SetBinError(3,0.006518732);
   VbbHcc_tags_H_dR_stack_11->SetBinError(4,0.005622295);
   VbbHcc_tags_H_dR_stack_11->SetBinError(5,0.004050118);
   VbbHcc_tags_H_dR_stack_11->SetBinError(6,0.009373647);
   VbbHcc_tags_H_dR_stack_11->SetBinError(7,0.006158565);
   VbbHcc_tags_H_dR_stack_11->SetBinError(8,0.004793915);
   VbbHcc_tags_H_dR_stack_11->SetBinError(9,0.004914777);
   VbbHcc_tags_H_dR_stack_11->SetBinError(10,0.005507721);
   VbbHcc_tags_H_dR_stack_11->SetBinError(11,0.005545266);
   VbbHcc_tags_H_dR_stack_11->SetBinError(12,0.004042812);
   VbbHcc_tags_H_dR_stack_11->SetBinError(13,0.003280315);
   VbbHcc_tags_H_dR_stack_11->SetBinError(14,0.002811088);
   VbbHcc_tags_H_dR_stack_11->SetBinError(15,0.003828256);
   VbbHcc_tags_H_dR_stack_11->SetBinError(17,0.004985704);
   VbbHcc_tags_H_dR_stack_11->SetBinError(19,0.005122831);
   VbbHcc_tags_H_dR_stack_11->SetBinError(21,0.002811088);
   VbbHcc_tags_H_dR_stack_11->SetBinError(22,0.003414545);
   VbbHcc_tags_H_dR_stack_11->SetBinError(23,0.002830518);
   VbbHcc_tags_H_dR_stack_11->SetBinError(24,0.006153108);
   VbbHcc_tags_H_dR_stack_11->SetBinError(25,0.003748703);
   VbbHcc_tags_H_dR_stack_11->SetBinError(26,0.003963952);
   VbbHcc_tags_H_dR_stack_11->SetBinError(29,0.003894058);
   VbbHcc_tags_H_dR_stack_11->SetBinError(30,0.002794763);
   VbbHcc_tags_H_dR_stack_11->SetEntries(64);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_stack_11->SetFillColor(ci);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_tags_18->Modified();
   H_dR_tags_18->cd();
   H_dR_tags_18->SetSelected(H_dR_tags_18);
}
