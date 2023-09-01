#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_tags_16()
{
//=========Macro generated from canvas: Sphericity_tags_16/Sphericity_tags_16
//=========  (Fri Sep  1 13:23:33 2023) by ROOT version 6.28/04
   TCanvas *Sphericity_tags_16 = new TCanvas("Sphericity_tags_16", "Sphericity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_16->SetHighLightColor(2);
   Sphericity_tags_16->Range(-0.2,-4390.313,1.133333,39512.81);
   Sphericity_tags_16->SetFillColor(0);
   Sphericity_tags_16->SetBorderMode(0);
   Sphericity_tags_16->SetBorderSize(2);
   Sphericity_tags_16->SetLeftMargin(0.15);
   Sphericity_tags_16->SetFrameBorderMode(0);
   Sphericity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity__213 = new TH1D("VbbHcc_tags_Sphericity__213","",25,0,1);
   VbbHcc_tags_Sphericity__213->SetBinContent(1,33450);
   VbbHcc_tags_Sphericity__213->SetBinContent(2,24215);
   VbbHcc_tags_Sphericity__213->SetBinContent(3,14065);
   VbbHcc_tags_Sphericity__213->SetBinContent(4,8420);
   VbbHcc_tags_Sphericity__213->SetBinContent(5,5091);
   VbbHcc_tags_Sphericity__213->SetBinContent(6,3083);
   VbbHcc_tags_Sphericity__213->SetBinContent(7,1794);
   VbbHcc_tags_Sphericity__213->SetBinContent(8,1128);
   VbbHcc_tags_Sphericity__213->SetBinContent(9,790);
   VbbHcc_tags_Sphericity__213->SetBinContent(10,571);
   VbbHcc_tags_Sphericity__213->SetBinContent(11,422);
   VbbHcc_tags_Sphericity__213->SetBinContent(12,292);
   VbbHcc_tags_Sphericity__213->SetBinContent(13,239);
   VbbHcc_tags_Sphericity__213->SetBinContent(14,170);
   VbbHcc_tags_Sphericity__213->SetBinContent(15,154);
   VbbHcc_tags_Sphericity__213->SetBinContent(16,109);
   VbbHcc_tags_Sphericity__213->SetBinContent(17,88);
   VbbHcc_tags_Sphericity__213->SetBinContent(18,59);
   VbbHcc_tags_Sphericity__213->SetBinContent(19,23);
   VbbHcc_tags_Sphericity__213->SetBinContent(20,8);
   VbbHcc_tags_Sphericity__213->SetBinContent(21,2);
   VbbHcc_tags_Sphericity__213->SetBinContent(22,1);
   VbbHcc_tags_Sphericity__213->SetEntries(94174);
   VbbHcc_tags_Sphericity__213->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity__213->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity__213->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__213->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity__213->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__213->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__213->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__213->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__213->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity__213->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__213->Draw("HIST");
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
