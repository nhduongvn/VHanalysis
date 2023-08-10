void Sphericity_tags_16_logY()
{
//=========Macro generated from canvas: Sphericity_tags_16/Sphericity_tags_16
//=========  (Thu Aug 10 12:31:32 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_16 = new TCanvas("Sphericity_tags_16", "Sphericity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_16->SetHighLightColor(2);
   Sphericity_tags_16->Range(-0.2,-0.9403685,1.133333,5.453016);
   Sphericity_tags_16->SetFillColor(0);
   Sphericity_tags_16->SetBorderMode(0);
   Sphericity_tags_16->SetBorderSize(2);
   Sphericity_tags_16->SetLogy();
   Sphericity_tags_16->SetLeftMargin(0.15);
   Sphericity_tags_16->SetFrameBorderMode(0);
   Sphericity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity__157 = new TH1D("VbbHcc_tags_Sphericity__157","",25,0,1);
   VbbHcc_tags_Sphericity__157->SetBinContent(1,34366);
   VbbHcc_tags_Sphericity__157->SetBinContent(2,24832);
   VbbHcc_tags_Sphericity__157->SetBinContent(3,14397);
   VbbHcc_tags_Sphericity__157->SetBinContent(4,8611);
   VbbHcc_tags_Sphericity__157->SetBinContent(5,5205);
   VbbHcc_tags_Sphericity__157->SetBinContent(6,3149);
   VbbHcc_tags_Sphericity__157->SetBinContent(7,1831);
   VbbHcc_tags_Sphericity__157->SetBinContent(8,1162);
   VbbHcc_tags_Sphericity__157->SetBinContent(9,807);
   VbbHcc_tags_Sphericity__157->SetBinContent(10,574);
   VbbHcc_tags_Sphericity__157->SetBinContent(11,439);
   VbbHcc_tags_Sphericity__157->SetBinContent(12,297);
   VbbHcc_tags_Sphericity__157->SetBinContent(13,247);
   VbbHcc_tags_Sphericity__157->SetBinContent(14,176);
   VbbHcc_tags_Sphericity__157->SetBinContent(15,153);
   VbbHcc_tags_Sphericity__157->SetBinContent(16,111);
   VbbHcc_tags_Sphericity__157->SetBinContent(17,89);
   VbbHcc_tags_Sphericity__157->SetBinContent(18,63);
   VbbHcc_tags_Sphericity__157->SetBinContent(19,25);
   VbbHcc_tags_Sphericity__157->SetBinContent(20,8);
   VbbHcc_tags_Sphericity__157->SetBinContent(21,2);
   VbbHcc_tags_Sphericity__157->SetBinContent(22,1);
   VbbHcc_tags_Sphericity__157->SetEntries(96545);
   VbbHcc_tags_Sphericity__157->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity__157->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity__157->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__157->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity__157->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity__157->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__157->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__157->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity__157->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity__157->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity__157->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__157->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__157->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity__157->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity__157->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__157->Draw("HIST");
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
