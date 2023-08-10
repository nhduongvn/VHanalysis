void Aplanarity_algo_18_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_18/Aplanarity_algo_18
//=========  (Thu Aug 10 12:32:18 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_18 = new TCanvas("Aplanarity_algo_18", "Aplanarity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_18->SetHighLightColor(2);
   Aplanarity_algo_18->Range(-0.2,-1.155893,1.133333,7.392737);
   Aplanarity_algo_18->SetFillColor(0);
   Aplanarity_algo_18->SetBorderMode(0);
   Aplanarity_algo_18->SetBorderSize(2);
   Aplanarity_algo_18->SetLogy();
   Aplanarity_algo_18->SetLeftMargin(0.15);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity__438 = new TH1D("VbbHcc_algo_Aplanarity__438","",50,0,1);
   VbbHcc_algo_Aplanarity__438->SetBinContent(0,1);
   VbbHcc_algo_Aplanarity__438->SetBinContent(1,1821064);
   VbbHcc_algo_Aplanarity__438->SetBinContent(2,250153);
   VbbHcc_algo_Aplanarity__438->SetBinContent(3,54060);
   VbbHcc_algo_Aplanarity__438->SetBinContent(4,13279);
   VbbHcc_algo_Aplanarity__438->SetBinContent(5,3470);
   VbbHcc_algo_Aplanarity__438->SetBinContent(6,1066);
   VbbHcc_algo_Aplanarity__438->SetBinContent(7,408);
   VbbHcc_algo_Aplanarity__438->SetBinContent(8,179);
   VbbHcc_algo_Aplanarity__438->SetBinContent(9,90);
   VbbHcc_algo_Aplanarity__438->SetBinContent(10,49);
   VbbHcc_algo_Aplanarity__438->SetBinContent(11,29);
   VbbHcc_algo_Aplanarity__438->SetBinContent(12,18);
   VbbHcc_algo_Aplanarity__438->SetBinContent(13,16);
   VbbHcc_algo_Aplanarity__438->SetBinContent(14,10);
   VbbHcc_algo_Aplanarity__438->SetBinContent(15,7);
   VbbHcc_algo_Aplanarity__438->SetBinContent(16,1);
   VbbHcc_algo_Aplanarity__438->SetEntries(2143900);
   VbbHcc_algo_Aplanarity__438->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity__438->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity__438->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__438->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity__438->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity__438->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__438->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__438->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity__438->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity__438->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity__438->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__438->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__438->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity__438->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity__438->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__438->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_18->Modified();
   Aplanarity_algo_18->cd();
   Aplanarity_algo_18->SetSelected(Aplanarity_algo_18);
}
