void Aplanarity_both_18()
{
//=========Macro generated from canvas: Aplanarity_both_18/Aplanarity_both_18
//=========  (Thu Aug 10 12:29:34 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_18 = new TCanvas("Aplanarity_both_18", "Aplanarity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_18->SetHighLightColor(2);
   Aplanarity_both_18->Range(-0.2,-26276.91,1.133333,236492.2);
   Aplanarity_both_18->SetFillColor(0);
   Aplanarity_both_18->SetBorderMode(0);
   Aplanarity_both_18->SetBorderSize(2);
   Aplanarity_both_18->SetLeftMargin(0.15);
   Aplanarity_both_18->SetFrameBorderMode(0);
   Aplanarity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity__702 = new TH1D("VbbHcc_both_Aplanarity__702","",50,0,1);
   VbbHcc_both_Aplanarity__702->SetBinContent(1,200205);
   VbbHcc_both_Aplanarity__702->SetBinContent(2,57809);
   VbbHcc_both_Aplanarity__702->SetBinContent(3,26971);
   VbbHcc_both_Aplanarity__702->SetBinContent(4,15099);
   VbbHcc_both_Aplanarity__702->SetBinContent(5,9129);
   VbbHcc_both_Aplanarity__702->SetBinContent(6,5696);
   VbbHcc_both_Aplanarity__702->SetBinContent(7,3780);
   VbbHcc_both_Aplanarity__702->SetBinContent(8,2474);
   VbbHcc_both_Aplanarity__702->SetBinContent(9,1697);
   VbbHcc_both_Aplanarity__702->SetBinContent(10,1174);
   VbbHcc_both_Aplanarity__702->SetBinContent(11,808);
   VbbHcc_both_Aplanarity__702->SetBinContent(12,562);
   VbbHcc_both_Aplanarity__702->SetBinContent(13,361);
   VbbHcc_both_Aplanarity__702->SetBinContent(14,209);
   VbbHcc_both_Aplanarity__702->SetBinContent(15,159);
   VbbHcc_both_Aplanarity__702->SetBinContent(16,102);
   VbbHcc_both_Aplanarity__702->SetBinContent(17,62);
   VbbHcc_both_Aplanarity__702->SetBinContent(18,33);
   VbbHcc_both_Aplanarity__702->SetBinContent(19,19);
   VbbHcc_both_Aplanarity__702->SetBinContent(20,14);
   VbbHcc_both_Aplanarity__702->SetBinContent(21,3);
   VbbHcc_both_Aplanarity__702->SetBinContent(22,1);
   VbbHcc_both_Aplanarity__702->SetBinContent(24,1);
   VbbHcc_both_Aplanarity__702->SetEntries(326368);
   VbbHcc_both_Aplanarity__702->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity__702->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity__702->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__702->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity__702->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity__702->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__702->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__702->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity__702->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity__702->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity__702->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__702->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__702->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity__702->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity__702->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__702->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_18->Modified();
   Aplanarity_both_18->cd();
   Aplanarity_both_18->SetSelected(Aplanarity_both_18);
}
