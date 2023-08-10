void Aplanarity_algo_18()
{
//=========Macro generated from canvas: Aplanarity_algo_18/Aplanarity_algo_18
//=========  (Thu Aug 10 12:24:20 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_18 = new TCanvas("Aplanarity_algo_18", "Aplanarity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_18->SetHighLightColor(2);
   Aplanarity_algo_18->Range(-0.2,-238647.3,1.133333,2147826);
   Aplanarity_algo_18->SetFillColor(0);
   Aplanarity_algo_18->SetBorderMode(0);
   Aplanarity_algo_18->SetBorderSize(2);
   Aplanarity_algo_18->SetLeftMargin(0.15);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity__438 = new TH1D("VbbHcc_algo_Aplanarity__438","",50,0,1);
   VbbHcc_algo_Aplanarity__438->SetBinContent(0,1);
   VbbHcc_algo_Aplanarity__438->SetBinContent(1,1818265);
   VbbHcc_algo_Aplanarity__438->SetBinContent(2,249887);
   VbbHcc_algo_Aplanarity__438->SetBinContent(3,53934);
   VbbHcc_algo_Aplanarity__438->SetBinContent(4,13248);
   VbbHcc_algo_Aplanarity__438->SetBinContent(5,3476);
   VbbHcc_algo_Aplanarity__438->SetBinContent(6,1061);
   VbbHcc_algo_Aplanarity__438->SetBinContent(7,412);
   VbbHcc_algo_Aplanarity__438->SetBinContent(8,182);
   VbbHcc_algo_Aplanarity__438->SetBinContent(9,90);
   VbbHcc_algo_Aplanarity__438->SetBinContent(10,51);
   VbbHcc_algo_Aplanarity__438->SetBinContent(11,28);
   VbbHcc_algo_Aplanarity__438->SetBinContent(12,17);
   VbbHcc_algo_Aplanarity__438->SetBinContent(13,16);
   VbbHcc_algo_Aplanarity__438->SetBinContent(14,10);
   VbbHcc_algo_Aplanarity__438->SetBinContent(15,7);
   VbbHcc_algo_Aplanarity__438->SetBinContent(16,1);
   VbbHcc_algo_Aplanarity__438->SetEntries(2140686);
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
