void Sphericity_algo_18_logY()
{
//=========Macro generated from canvas: Sphericity_algo_18/Sphericity_algo_18
//=========  (Tue Aug 22 09:17:33 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_18 = new TCanvas("Sphericity_algo_18", "Sphericity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_18->SetHighLightColor(2);
   Sphericity_algo_18->Range(-0.2,-1.103657,1.133333,6.922613);
   Sphericity_algo_18->SetFillColor(0);
   Sphericity_algo_18->SetBorderMode(0);
   Sphericity_algo_18->SetBorderSize(2);
   Sphericity_algo_18->SetLogy();
   Sphericity_algo_18->SetLeftMargin(0.15);
   Sphericity_algo_18->SetFrameBorderMode(0);
   Sphericity_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity__427 = new TH1D("VbbHcc_algo_Sphericity__427","",25,0,1);
   VbbHcc_algo_Sphericity__427->SetBinContent(1,695724);
   VbbHcc_algo_Sphericity__427->SetBinContent(2,649224);
   VbbHcc_algo_Sphericity__427->SetBinContent(3,373078);
   VbbHcc_algo_Sphericity__427->SetBinContent(4,206237);
   VbbHcc_algo_Sphericity__427->SetBinContent(5,103627);
   VbbHcc_algo_Sphericity__427->SetBinContent(6,43603);
   VbbHcc_algo_Sphericity__427->SetBinContent(7,15133);
   VbbHcc_algo_Sphericity__427->SetBinContent(8,5430);
   VbbHcc_algo_Sphericity__427->SetBinContent(9,2374);
   VbbHcc_algo_Sphericity__427->SetBinContent(10,1286);
   VbbHcc_algo_Sphericity__427->SetBinContent(11,739);
   VbbHcc_algo_Sphericity__427->SetBinContent(12,484);
   VbbHcc_algo_Sphericity__427->SetBinContent(13,330);
   VbbHcc_algo_Sphericity__427->SetBinContent(14,221);
   VbbHcc_algo_Sphericity__427->SetBinContent(15,173);
   VbbHcc_algo_Sphericity__427->SetBinContent(16,135);
   VbbHcc_algo_Sphericity__427->SetBinContent(17,66);
   VbbHcc_algo_Sphericity__427->SetBinContent(18,56);
   VbbHcc_algo_Sphericity__427->SetBinContent(19,22);
   VbbHcc_algo_Sphericity__427->SetBinContent(20,12);
   VbbHcc_algo_Sphericity__427->SetBinContent(21,8);
   VbbHcc_algo_Sphericity__427->SetBinContent(22,1);
   VbbHcc_algo_Sphericity__427->SetEntries(2097963);
   VbbHcc_algo_Sphericity__427->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity__427->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity__427->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__427->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__427->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__427->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__427->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__427->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__427->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__427->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity__427->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__427->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__427->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__427->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__427->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__427->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_18->Modified();
   Sphericity_algo_18->cd();
   Sphericity_algo_18->SetSelected(Sphericity_algo_18);
}
