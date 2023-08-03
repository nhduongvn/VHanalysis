void puSF__16_logY()
{
//=========Macro generated from canvas: puSF__16/puSF__16
//=========  (Thu Aug  3 13:22:15 2023) by ROOT version 6.14/09
   TCanvas *puSF__16 = new TCanvas("puSF__16", "puSF__16",0,0,600,600);
   gStyle->SetOptStat(0);
   puSF__16->SetHighLightColor(2);
   puSF__16->Range(-2.8,-2.748352,2.533333,1.724871);
   puSF__16->SetFillColor(0);
   puSF__16->SetBorderMode(0);
   puSF__16->SetBorderSize(2);
   puSF__16->SetLogy();
   puSF__16->SetLeftMargin(0.15);
   puSF__16->SetFrameBorderMode(0);
   puSF__16->SetFrameBorderMode(0);
   
   TH1D *puSF__14 = new TH1D("puSF__14","",200,-2,2);
   puSF__14->GetXaxis()->SetTitle("PU Scale Factor");
   puSF__14->GetXaxis()->SetRange(1,200);
   puSF__14->GetXaxis()->SetLabelFont(42);
   puSF__14->GetXaxis()->SetLabelSize(0.035);
   puSF__14->GetXaxis()->SetTitleSize(0.035);
   puSF__14->GetXaxis()->SetTitleFont(42);
   puSF__14->GetYaxis()->SetLabelFont(42);
   puSF__14->GetYaxis()->SetLabelSize(0.035);
   puSF__14->GetYaxis()->SetTitleSize(0.035);
   puSF__14->GetYaxis()->SetTitleOffset(0);
   puSF__14->GetYaxis()->SetTitleFont(42);
   puSF__14->GetZaxis()->SetLabelFont(42);
   puSF__14->GetZaxis()->SetLabelSize(0.035);
   puSF__14->GetZaxis()->SetTitleSize(0.035);
   puSF__14->GetZaxis()->SetTitleFont(42);
   puSF__14->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   puSF__16->Modified();
   puSF__16->cd();
   puSF__16->SetSelected(puSF__16);
}
