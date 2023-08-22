void Sphericity_tags_18()
{
//=========Macro generated from canvas: Sphericity_tags_18/Sphericity_tags_18
//=========  (Tue Aug 22 09:20:43 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_18 = new TCanvas("Sphericity_tags_18", "Sphericity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_18->SetHighLightColor(2);
   Sphericity_tags_18->Range(-0.2,-14100.06,1.133333,126900.5);
   Sphericity_tags_18->SetFillColor(0);
   Sphericity_tags_18->SetBorderMode(0);
   Sphericity_tags_18->SetBorderSize(2);
   Sphericity_tags_18->SetLeftMargin(0.15);
   Sphericity_tags_18->SetFrameBorderMode(0);
   Sphericity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity__163 = new TH1D("VbbHcc_tags_Sphericity__163","",25,0,1);
   VbbHcc_tags_Sphericity__163->SetBinContent(1,107429);
   VbbHcc_tags_Sphericity__163->SetBinContent(2,84298);
   VbbHcc_tags_Sphericity__163->SetBinContent(3,48340);
   VbbHcc_tags_Sphericity__163->SetBinContent(4,28079);
   VbbHcc_tags_Sphericity__163->SetBinContent(5,16210);
   VbbHcc_tags_Sphericity__163->SetBinContent(6,8872);
   VbbHcc_tags_Sphericity__163->SetBinContent(7,4692);
   VbbHcc_tags_Sphericity__163->SetBinContent(8,2833);
   VbbHcc_tags_Sphericity__163->SetBinContent(9,1873);
   VbbHcc_tags_Sphericity__163->SetBinContent(10,1378);
   VbbHcc_tags_Sphericity__163->SetBinContent(11,946);
   VbbHcc_tags_Sphericity__163->SetBinContent(12,682);
   VbbHcc_tags_Sphericity__163->SetBinContent(13,557);
   VbbHcc_tags_Sphericity__163->SetBinContent(14,408);
   VbbHcc_tags_Sphericity__163->SetBinContent(15,324);
   VbbHcc_tags_Sphericity__163->SetBinContent(16,236);
   VbbHcc_tags_Sphericity__163->SetBinContent(17,180);
   VbbHcc_tags_Sphericity__163->SetBinContent(18,130);
   VbbHcc_tags_Sphericity__163->SetBinContent(19,66);
   VbbHcc_tags_Sphericity__163->SetBinContent(20,24);
   VbbHcc_tags_Sphericity__163->SetBinContent(21,11);
   VbbHcc_tags_Sphericity__163->SetBinContent(22,5);
   VbbHcc_tags_Sphericity__163->SetBinContent(23,1);
   VbbHcc_tags_Sphericity__163->SetEntries(307574);
   VbbHcc_tags_Sphericity__163->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity__163->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity__163->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__163->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity__163->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity__163->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__163->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__163->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity__163->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity__163->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity__163->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__163->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__163->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity__163->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity__163->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__163->Draw("HIST");
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
